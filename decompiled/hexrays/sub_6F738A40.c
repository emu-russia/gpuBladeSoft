int __usercall sub_6F738A40@<eax>(unsigned int a1@<edi>)
{
  __int16 v1; // dx@1
  int v2; // ebp@1
  int v3; // esi@1
  int v4; // ebx@1
  int v6; // [sp+1Ch] [bp-30h]@1
  int v7; // [sp+20h] [bp-2Ch]@1
  int v8; // [sp+24h] [bp-28h]@1
  unsigned int v9; // [sp+28h] [bp-24h]@0
  unsigned int v10; // [sp+2Ch] [bp-20h]@0

  v1 = (signed __int16)(32 * word_70041E82) >> 5;
  v6 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v2 = v1;
  v3 = (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  v4 = (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
  v7 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v8 = (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  if ( dword_6FBB955C == 1 )
  {
    v10 = 16711680;
    a1 = 255;
    v9 = 65280;
  }
  else if ( dword_6FBB955C == 2 )
  {
    v10 = 0xFFFFFF;
    a1 = 0xFFFFFF;
    v9 = 0xFFFFFF;
  }
  else if ( !dword_6FBB955C )
  {
    a1 = dword_70041E70;
    v10 = dword_70041E70;
    v9 = dword_70041E70;
  }
  sub_6F7370D0(v6, v1, v7, (signed __int16)((signed __int16)(32 * word_70041E86) >> 5), a1, v9);
  sub_6F7370D0(v7, v3, v8, v4, v9, v10);
  return sub_6F7370D0(v8, v4, v6, v2, v10, a1);
}
