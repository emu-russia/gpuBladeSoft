int sub_6F7385A0()
{
  int v0; // esi@1
  int v1; // ebx@1
  int v2; // edi@1
  int v3; // ebp@1
  unsigned int v5; // [sp+10h] [bp-2Ch]@0
  unsigned int v6; // [sp+14h] [bp-28h]@0
  unsigned int v7; // [sp+18h] [bp-24h]@0
  unsigned int v8; // [sp+1Ch] [bp-20h]@0

  v0 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v1 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v2 = v0 + dword_70041E68;
  v3 = v1 + dword_70041E6C;
  if ( dword_6FBB955C == 1 )
  {
    v8 = 0xFFFFFF;
    v7 = 16711680;
    v6 = 65280;
    v5 = 255;
  }
  else if ( dword_6FBB955C == 2 )
  {
    v8 = 0xFFFFFF;
    v7 = 0xFFFFFF;
    v6 = 0xFFFFFF;
    v5 = 0xFFFFFF;
  }
  else if ( !dword_6FBB955C )
  {
    v5 = dword_70041E70;
    v8 = dword_70041E70;
    v7 = dword_70041E70;
    v6 = dword_70041E70;
  }
  sub_6F7370D0(
    (signed __int16)((signed __int16)(32 * word_70041E80) >> 5),
    (signed __int16)((signed __int16)(32 * word_70041E82) >> 5),
    (signed __int16)((signed __int16)(32 * word_70041E80) >> 5),
    v1 + dword_70041E6C,
    v5,
    v6);
  sub_6F7370D0(v0, v3, v2, v3, v6, v7);
  sub_6F7370D0(v2, v3, v2, v1, v7, v8);
  return sub_6F7370D0(v2, v1, v0, v1, v8, v5);
}
