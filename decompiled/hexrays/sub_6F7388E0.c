int __usercall sub_6F7388E0@<eax>(unsigned int a1@<ebp>)
{
  __int16 v1; // dx@1
  int v2; // edi@1
  int v3; // esi@1
  int v4; // ebx@1
  int v6; // [sp+1Ch] [bp-30h]@1
  int v7; // [sp+20h] [bp-2Ch]@1
  unsigned int v8; // [sp+24h] [bp-28h]@0
  unsigned int v9; // [sp+28h] [bp-24h]@0
  int v10; // [sp+2Ch] [bp-20h]@1

  v1 = (signed __int16)(32 * word_70041E82) >> 5;
  v6 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v2 = v1;
  v3 = (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
  v4 = (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
  v7 = (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v10 = (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
  if ( dword_6FBB955C == 1 )
  {
    v9 = 16711680;
    a1 = 65280;
    v8 = 255;
  }
  else if ( dword_6FBB955C == 2 )
  {
    v9 = 0xFFFFFF;
    a1 = 0xFFFFFF;
    v8 = 0xFFFFFF;
  }
  else if ( !dword_6FBB955C )
  {
    v8 = dword_70041E70;
    a1 = dword_70041E74;
    v9 = dword_70041E78;
  }
  sub_6F7370D0(v6, v1, v7, (signed __int16)((signed __int16)(32 * word_70041E86) >> 5), v8, a1);
  sub_6F7370D0(v7, v3, v10, v4, a1, v9);
  return sub_6F7370D0(v10, v4, v6, v2, v9, v8);
}
