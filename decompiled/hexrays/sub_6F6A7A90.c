signed int __usercall sub_6F6A7A90@<eax>(int a1@<eax>)
{
  char *v1; // edi@1
  size_t v2; // ebx@1
  char *v3; // eax@1
  int *v4; // eax@5
  signed int v5; // edi@6
  int *v7; // [sp+28h] [bp-24h]@1
  size_t v8; // [sp+2Ch] [bp-20h]@6
  size_t v9; // [sp+30h] [bp-1Ch]@1

  v1 = *(char **)a1;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(char **)a1;
  v7 = (int *)&v9;
  if ( &v3[v2] && !v1 )
    sub_6F95AFD0("basic_string::_M_construct null not valid");
  if ( v2 > 0xF )
  {
    if ( (v2 & 0x80000000) != 0 )
      sub_6F95B240("basic_string::_M_create");
    v4 = (int *)sub_6F961B60(v2 + 1);
    v9 = v2;
    v7 = v4;
LABEL_13:
    memcpy(v4, v1, v2);
    v4 = v7;
    goto LABEL_6;
  }
  if ( v2 == 1 )
  {
    v4 = (int *)&v9;
    LOBYTE(v9) = *v1;
    goto LABEL_6;
  }
  v4 = (int *)&v9;
  if ( v2 )
    goto LABEL_13;
LABEL_6:
  v8 = v2;
  *((_BYTE *)v4 + v2) = 0;
  v5 = sub_6F69ACF0(
         ((unsigned __int16)word_6FBB979C >> 7) & 3,
         16 * ((unsigned __int16)word_6FD41404 & ((unsigned int)dword_6FD40988 >> 4)),
         dword_6FD40984 & ((signed int)(unsigned __int16)word_6FD41404 >> 6),
         dword_6FBBDBAC,
         dword_6FBBDBB0 + dword_6FBBDBC4,
         0x100u,
         0x100u,
         (const char **)&v7);
  if ( (size_t *)v7 != &v9 )
    j_free_1(v7);
  return v5;
}
