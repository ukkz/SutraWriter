/*
 * [特殊コード]
 *   0xF0: 終了（末尾）
 *   0xF1: 改行
 *   0xF2: 半角スペース
 *   0xF3: 半角スペース+改行
 * IMEは自動変換（ライブ変換）設定を推奨しますが、
 * うまく変換できない際には0xF1~0xF3を適宜スキマに入れてください。
 */

const byte HeartSutra[] = {
  // ぶっせつまかはんにゃはらみったしんぎょう
  0xA4, 0x83, 0x2B, 0x20, 0x65, 0x53, 0x29, 0x38, 0xA2, 0x25, 0x63, 0x8C, 0xF1,
  // かんじざいぼさつ
  0x60, 0x31, 0x4E, 0x37, 0x81, 0xF1,
  // ぎょうじんはんにゃはらみたじ
  0x8C, 0x67, 0x65, 0x53, 0x29, 0x38, 0xA2, 0x25, 0x31, 0xF1,
  // しょうけんごうんかいくう
  0x8E, 0x61, 0x2F, 0x56, 0x40, 0x41, 0xF1,
  // どいっさいくやく
  0x34, 0x80, 0x43, 0x21, 0x8A, 0xF1,
  // しゃりし
  0x4B, 0x39, 0x24, 0xF1,
  // しきふいくう
  0x82, 0x2A, 0x01, 0x41, 0xF1,
  // くうふいしき
  0x41, 0x2A, 0x01, 0x82, 0xF1,
  // しきそくぜくう
  0x82, 0x84, 0x30, 0x41, 0xF1,
  // くうそくぜしき
  0x41, 0x84, 0x30, 0x82, 0xF1,
  // じゅそうぎょうしきやくぶにょぜ
  0x32, 0x44, 0x8C, 0x82, 0x8A, 0x36, 0x54, 0x30, 0xF1,
  // しゃりし
  0x4B, 0x39, 0x24, 0xF1,
  // ぜしょほうくうそう
  0x30, 0x4D, 0x49, 0x21, 0x44, 0xF1,
  // ふしょうふめつ
  0x2A, 0x8E, 0x2A, 0x89, 0xF1,
  // ふくふじょう
  0x2A, 0x21, 0x2A, 0x50, 0xF1,
  // ふぞうふげん
  0x2A, 0x4F, 0x2A, 0x66, 0xF1,
  // ぜこくうちゅう
  0x30, 0x23, 0x41, 0x90, 0xF1,
  // むしき
  0x2D, 0x82, 0xF1,
  // むじゅそうぎょうしき
  0x2D, 0x32, 0x44, 0x8C, 0x82, 0xF1,
  // むげんにびぜっしんに
  0x2D, 0x66, 0x27, 0x35, 0xA3, 0x63, 0x27, 0xF1,
  // むしきしょうこうみそくほう
  0x2D, 0x82, 0x8E, 0x42, 0x2C, 0x84, 0x49, 0xF1,
  // むげんかい
  0x2D, 0x66, 0x40, 0xF1,
  // ないしむいしきかい
  0x47, 0x24, 0x2D, 0x01, 0x82, 0x40, 0xF1,
  // むむみょう
  0x2D, 0x2D, 0x92, 0xF1,
  // やくむむみょうじん
  0x8A, 0x2D, 0x2D, 0x92, 0x67, 0xF1,
  // ないしむろうし
  0x47, 0x24, 0x2D, 0x55, 0x24, 0xF1,
  // やくむろうしじん
  0x8A, 0x2D, 0x55, 0x24, 0x67, 0xF1,
  // むくしゅうめつどう
  0x2D, 0x21, 0x8D, 0x89, 0x52, 0xF1,
  // むちやくむとく
  0x2D, 0x26, 0x8A, 0x2D, 0x86, 0xF1,
  // いむしょとっこ
  0x01, 0x2D, 0x4D, 0xA1, 0x23, 0xF1,
  // ぼたいさった
  0x37, 0x51, 0xA0, 0x25, 0xF1,
  // えはんにゃはらみったこ
  0x03, 0x65, 0x53, 0x29, 0x38, 0xA2, 0x25, 0x23, 0xF1,
  // しんむけげ
  0x63, 0x2D, 0x22, 0x2E, 0xF1,
  // むけげこ
  0x2D, 0x22, 0x2E, 0x23, 0xF1,
  // むうくふ
  0x2D, 0x02, 0x21, 0x2A, 0xF1,
  // おんりいっさいてんどうむそう
  0x57, 0x39, 0x80, 0x43, 0x64, 0x52, 0x2D, 0x44, 0xF1,
  // くぎょうねはん
  0x21, 0x8C, 0x28, 0x65, 0xF1,
  // さんぜしょぶつ
  0x62, 0x30, 0x4D, 0x91, 0xF1,
  // えはんにゃはらみたこ
  0x03, 0x65, 0x53, 0x29, 0x38, 0xA2, 0x25, 0x23, 0xF1,
  // とくあのくたらさんみゃくさんぼだい
  0x86, 0x00, 0x87, 0x25, 0x38, 0x62, 0xA5, 0x62, 0x37, 0x51, 0xF1,
  // こちはんにゃはらみった
  0x23, 0x26, 0x65, 0x53, 0x29, 0x38, 0xA2, 0x25, 0xF1,
  // ぜだいじんしゅ
  0x30, 0x51, 0x67, 0x4C, 0xF1,
  // ぜだいみょうしゅ
  0x30, 0x51, 0x92, 0x4C, 0xF1,
  // ぜむじょうしゅ
  0x30, 0x2D, 0x50, 0x4C, 0xF1,
  // ぜむとうどうしゅ
  0x30, 0x2D, 0x46, 0x52, 0x4C, 0xF1,
  // のうじょいっさいく
  0x48, 0x33, 0x80, 0x43, 0x21, 0xF1,
  // しんじつふこ
  0x63, 0x8F, 0x2A, 0x23, 0xF1,
  // こせつはんにゃはらみったしゅ
  0x23, 0x83, 0x65, 0x53, 0x29, 0x38, 0xA2, 0x25, 0x4C, 0xF1,
  // そくせつしゅわつ
  0x84, 0x83, 0x4C, 0x8B, 0xF1,
  // ぎゃていぎゃてい
  0x4A, 0x45, 0x4A, 0x45, 0xF1,
  // はらぎゃてい
  0x29, 0x38, 0x4A, 0x45, 0xF1,
  // はらそうぎゃてい
  0x88, 0x44, 0x4A, 0x45, 0xF1,
  // ぼじそわか
  0x37, 0x31, 0x85, 0x20, 0xF1,
  // はんにゃしんぎょう
  0x65, 0x53, 0x63, 0x8C, 0xF1,
  // 終了コード
  0xF0
};
