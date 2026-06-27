int sub_6F6989C0()
{
  int *v0; // edx@1
  int v1; // eax@2
  int v2; // ecx@2
  unsigned int v3; // ebx@2
  unsigned int v4; // eax@3
  int v5; // ecx@3
  int v6; // ebx@5
  unsigned int v7; // ebx@7
  int *v8; // eax@9
  int *v10; // [sp+18h] [bp-8h]@1
  unsigned int v11; // [sp+1Ch] [bp-4h]@10
  unsigned int v12; // [sp+20h] [bp+0h]@1

  v0 = &dword_6FBB6554;
  v10 = (int *)&v12;
  do
  {
    v1 = *v0;
    ++v0;
    v2 = ~v1 & (v1 - 16843009);
    v3 = v2 & 0x80808080;
  }
  while ( !(v2 & 0x80808080) );
  v4 = v3 >> 16;
  v5 = v2 & 0x8080;
  if ( v5 )
    LOBYTE(v4) = v3;
  v6 = (int)v0 + 2;
  if ( v5 )
    v6 = (int)v0;
  v7 = v6 - ((_DWORD)&dword_6FBB6554 + __CFADD__((_BYTE)v4, (_BYTE)v4) + 3);
  if ( v7 > 0xF )
  {
    v8 = (int *)sub_6F961B60(v7 + 1);
    v12 = v7;
    v10 = v8;
LABEL_16:
    if ( v7 >= 4 )
    {
      *v8 = dword_6FBB6554;
      *(int *)((char *)v8 + v7 - 4) = *(_DWORD *)((char *)&unk_6FBB6550 + v7);
      qmemcpy(
        (void *)((unsigned int)(v8 + 1) & 0xFFFFFFFC),
        (const void *)((char *)&dword_6FBB6554 - ((char *)v8 - ((unsigned int)(v8 + 1) & 0xFFFFFFFC))),
        4 * (((unsigned int)v8 + v7 - ((unsigned int)(v8 + 1) & 0xFFFFFFFC)) >> 2));
    }
    else if ( v7 )
    {
      *(_BYTE *)v8 = dword_6FBB6554;
      if ( v7 & 2 )
        *(_WORD *)((char *)v8 + v7 - 2) = *(_WORD *)((char *)&unk_6FBB6552 + v7);
    }
    v8 = v10;
    goto LABEL_10;
  }
  if ( v7 == 1 )
  {
    v8 = (int *)&v12;
    LOBYTE(v12) = dword_6FBB6554;
    goto LABEL_10;
  }
  v8 = (int *)&v12;
  if ( v7 )
    goto LABEL_16;
LABEL_10:
  v11 = v7;
  *((_BYTE *)v8 + v7) = 0;
  sub_6F6980C0(&v10);
  if ( (unsigned int *)v10 != &v12 )
    j_free_1(v10);
  return 0;
}
