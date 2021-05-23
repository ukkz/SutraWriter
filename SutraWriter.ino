#include <EEPROM.h>
#include "HeartSutra.h"
#define MODE      1   // (0: Read&Check, 1: Write, 2: Flash)

void setup() {
  Serial.begin(9600);
  while (!Serial) {}
  Serial.println("Sutra Writer");
  if (MODE == 0) {
    Serial.println("Mode: Read & Check");
  } else if (MODE == 1) {
    Serial.println("Mode: Write");
  } else if (MODE == 2) {
    Serial.println("Mode: Flash");
  } else {
    Serial.println("Mode: Unknown");
    return;
  }
  Serial.println("----------------------------------------------------");
  
  int memoryLimit = EEPROM.length();
  int sutraLimit = sizeof(HeartSutra);
  int updated = 0;
  int padded = 0;
  char code[5];
  
  // 列番号
  Serial.print("  | ");
  for (byte i=0; i<16; i++) {
    sprintf(code, "%02x ", i);
    Serial.print(code);
  }
  Serial.println("");
  Serial.println("--|-------------------------------------------------");
  
  // アドレス0から順番に確認・書き込みしていく
  for (int addr=0; addr<memoryLimit; addr++) {
    // 行番号
    if (addr % 16 == 0) {
      sprintf(code, "%02x| ", (addr / 16));
      Serial.print(code);
    }
    
    // データ本体
    byte oldData = EEPROM.read(addr);
    byte newData = (addr < sutraLimit) ? HeartSutra[addr] : 0xFF;

    if (MODE == 0) {
      // 確認モード
      sprintf(code, "%02x ", oldData);
    } else if (MODE == 1) {
      // 書き込みモード
      // 比較する
      if (oldData != newData) {
        // 異なっていれば新しいデータを書き込んだ上で再読み込みし表示
        EEPROM.write(addr, newData);
        delay(5);
        byte writtenData = EEPROM.read(addr);
        sprintf(code, "%02x ", writtenData);
        // 書き込んだデータ数をカウント
        if (addr < sutraLimit) updated++; else padded++;
      } else {
        // 同じなら書き込まないで元々あったデータを表示
        sprintf(code, "%02x ", oldData);
      }
    } else {
      // 消去モード
      EEPROM.write(addr, 0xFF);
      delay(5);
      byte writtenData = EEPROM.read(addr);
      sprintf(code, "%02x ", writtenData);
    }
    // 処理したデータを表示
    Serial.print(code);

    
    // 16ごとに改行
    if (addr % 16 == 15) Serial.println("");
  }
  
  // 書き換え結果
  Serial.println("");
  Serial.print("Updated: "); Serial.print(updated); Serial.println(" bytes.");
  Serial.print("Padding added: "); Serial.print(padded); Serial.println(" bytes.");
}

void loop() {}
