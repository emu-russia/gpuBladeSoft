int __fastcall sub_6F745870(unsigned int a1)
{
  __int16 v1; // di@1
  int v2; // esi@1
  __int16 v3; // bx@1
  int v5; // [sp+4h] [bp-28h]@1
  unsigned int v6; // [sp+8h] [bp-24h]@0
  unsigned int v7; // [sp+Ch] [bp-20h]@0

  v5 = (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  v1 = (signed __int16)(32 * word_70041E86) >> 5;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v3 = (signed __int16)(32 * word_70041E8A) >> 5;
  if ( dword_6FBB9560 == 1 )
  {
    v7 = 16711680;
    a1 = 255;
    v6 = 65280;
  }
  else if ( dword_6FBB9560 == 2 )
  {
    v7 = 0xFFFFFF;
    a1 = 0xFFFFFF;
    v6 = 0xFFFFFF;
  }
  else if ( !dword_6FBB9560 )
  {
    a1 = dword_70041E70;
    v6 = dword_70041E74;
    v7 = dword_70041E78;
  }
  sub_6F684560(
    (signed __int16)((signed __int16)(32 * word_70041E80) >> 5),
    (signed __int16)(32 * word_70041E82) >> 5,
    a1);
  sub_6F684560(v2, v1, v6);
  return sub_6F684560(v5, v3, v7);
}
