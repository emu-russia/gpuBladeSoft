int __fastcall sub_6F745700(unsigned int a1)
{
  __int16 v1; // di@1
  __int16 v2; // si@1
  __int16 v3; // bx@1
  int v5; // [sp+8h] [bp-34h]@1
  int v6; // [sp+Ch] [bp-30h]@1
  int v7; // [sp+10h] [bp-2Ch]@1
  unsigned int v8; // [sp+14h] [bp-28h]@0
  unsigned int v9; // [sp+18h] [bp-24h]@0
  unsigned int v10; // [sp+1Ch] [bp-20h]@0

  v5 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v7 = (signed __int16)((signed __int16)(32 * word_70041E8C) >> 5);
  v6 = (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v1 = (signed __int16)(32 * word_70041E86) >> 5;
  v2 = (signed __int16)(32 * word_70041E8A) >> 5;
  v3 = (signed __int16)(32 * word_70041E8E) >> 5;
  if ( dword_6FBB9560 == 1 )
  {
    v10 = 0xFFFFFF;
    a1 = 255;
    v9 = 16711680;
    v8 = 65280;
  }
  else if ( dword_6FBB9560 == 2 )
  {
    v10 = 0xFFFFFF;
    a1 = 0xFFFFFF;
    v9 = 0xFFFFFF;
    v8 = 0xFFFFFF;
  }
  else if ( !dword_6FBB9560 )
  {
    a1 = dword_70041E70;
    v8 = dword_70041E74;
    v9 = dword_70041E78;
    v10 = dword_70041E7C;
  }
  sub_6F684560(
    (signed __int16)((signed __int16)(32 * word_70041E80) >> 5),
    (signed __int16)(32 * word_70041E82) >> 5,
    a1);
  sub_6F684560(v5, v1, v8);
  sub_6F684560(v6, v2, v9);
  return sub_6F684560(v7, v3, v10);
}
