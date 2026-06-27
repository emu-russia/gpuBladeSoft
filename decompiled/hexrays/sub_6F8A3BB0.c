int __cdecl sub_6F8A3BB0(int a1)
{
  signed int v1; // edi@3
  int v2; // edx@3
  int v3; // ebp@3
  __int64 v4; // rax@7
  int v5; // ecx@15
  int v6; // esi@19
  unsigned int v7; // esi@20
  int v8; // eax@21
  __int64 v9; // rax@23
  _BYTE *v10; // eax@24
  int v11; // ecx@24
  int v12; // edx@25
  signed int v14; // [sp+1Ch] [bp-30h]@1
  __int64 v15; // [sp+20h] [bp-2Ch]@20
  int v16; // [sp+28h] [bp-24h]@4
  unsigned int v17; // [sp+2Ch] [bp-20h]@5

  *errno() = 0;
  v14 = fileno((FILE *)a1);
  if ( *(_DWORD *)(a1 + 4) < 0 )
    *(_DWORD *)(a1 + 4) = 0;
  v1 = lseeki64(v14, 0, 0, 1);
  v3 = v2;
  if ( v2 < 0 )
  {
    v1 = -1;
    goto LABEL_11;
  }
  v16 = *(_DWORD *)(a1 + 12);
  if ( !(v16 & 0x108) )
  {
    LODWORD(v4) = v1 - *(_DWORD *)(a1 + 4);
    return v4;
  }
  v17 = *(_DWORD *)(a1 + 8);
  if ( !(v16 & 3) )
  {
    if ( !(v16 & 0x80) )
    {
      v1 = -1;
      *errno() = 22;
      goto LABEL_11;
    }
    goto LABEL_7;
  }
  HIDWORD(v4) = *(_DWORD *)a1 - v17;
  if ( *(_BYTE *)(*((_DWORD *)&_pioinfo + (v14 >> 5)) + 40 * (v14 & 0x1F) + 4) >= 0 )
  {
LABEL_8:
    if ( v1 | v3 )
      goto LABEL_9;
LABEL_17:
    LODWORD(v4) = HIDWORD(v4);
    return v4;
  }
  if ( *(_DWORD *)a1 <= v17 )
  {
LABEL_7:
    HIDWORD(v4) = *(_DWORD *)a1 - v17;
    goto LABEL_8;
  }
  LODWORD(v4) = *(_DWORD *)(a1 + 8);
  do
  {
    v5 = *(_BYTE *)v4 == 10;
    LODWORD(v4) = v4 + 1;
    HIDWORD(v4) += v5;
  }
  while ( *(_DWORD *)a1 != (_DWORD)v4 );
  if ( !(v1 | v3) )
    goto LABEL_17;
LABEL_9:
  if ( v16 & 1 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( !v6 )
      goto LABEL_11;
    v7 = *(_DWORD *)a1 - v17 + v6;
    v15 = HIDWORD(v4);
    if ( *(_BYTE *)(*((_DWORD *)&_pioinfo + (v14 >> 5)) + 40 * (v14 & 0x1F) + 4) >= 0 )
      goto LABEL_38;
    LODWORD(v9) = lseeki64(v14, 0, 0, 2);
    if ( v9 != __PAIR__(v3, v1) )
    {
      lseeki64(v14, v1, v3, 0);
      if ( v7 > 0x200 || (v8 = 512, (*(_DWORD *)(a1 + 12) & 0x408) != 8) )
        v8 = *(_DWORD *)(a1 + 24);
      if ( *(_BYTE *)(*((_DWORD *)&_pioinfo + (v14 >> 5)) + 40 * (v14 & 0x1F) + 4) & 4 )
        ++v8;
      goto LABEL_22;
    }
    v10 = *(_BYTE **)(a1 + 8);
    v11 = (int)&v10[v7];
    if ( v10 < &v10[v7] )
    {
      do
      {
        v12 = *v10++ == 10;
        v7 += v12;
      }
      while ( (_BYTE *)v11 != v10 );
    }
    v8 = v7 + 1;
    if ( !(*(_BYTE *)(a1 + 13) & 0x20) )
LABEL_38:
      v8 = v7;
LABEL_22:
    return v15 + __PAIR__(v3, v1) - v8;
  }
  v1 += HIDWORD(v4);
LABEL_11:
  LODWORD(v4) = v1;
  return v4;
}
