int __fastcall sub_6F745600(unsigned int a1)
{
  int v1; // esi@1
  __int16 v2; // bx@1
  int v3; // edi@1
  __int16 v4; // bp@1
  unsigned int v6; // [sp+4h] [bp-28h]@0
  unsigned int v7; // [sp+8h] [bp-24h]@0
  unsigned int v8; // [sp+Ch] [bp-20h]@0

  v1 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v2 = (signed __int16)(32 * word_70041E82) >> 5;
  v3 = v1 + dword_70041E68;
  v4 = v2 + dword_70041E6C;
  if ( dword_6FBB9560 == 1 )
  {
    v8 = 0xFFFFFF;
    a1 = 255;
    v7 = 16711680;
    v6 = 65280;
  }
  else if ( dword_6FBB9560 == 2 )
  {
    v8 = 0xFFFFFF;
    a1 = 0xFFFFFF;
    v7 = 0xFFFFFF;
    v6 = 0xFFFFFF;
  }
  else if ( !dword_6FBB9560 )
  {
    a1 = dword_70041E70;
    v8 = dword_70041E70;
    v7 = dword_70041E70;
    v6 = dword_70041E70;
  }
  sub_6F684560(
    (signed __int16)((signed __int16)(32 * word_70041E80) >> 5),
    (signed __int16)(32 * word_70041E82) >> 5,
    a1);
  sub_6F684560(v1, v4, v6);
  sub_6F684560(v3, v4, v7);
  return sub_6F684560(v3, v2, v8);
}
