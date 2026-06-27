unsigned int __cdecl sub_6F827700(int a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5; // esi@1
  int v6; // ebx@1
  int v7; // ecx@1
  int v8; // edi@2
  int v9; // ebp@2
  int v10; // ebp@2
  int v11; // edi@2
  __int64 v12; // rax@2
  int v13; // ebp@2
  int v14; // edi@2
  int v15; // edi@2
  int v16; // ebp@2
  int v17; // edi@2
  int v18; // ebp@2
  unsigned int v20; // [sp+0h] [bp-18h]@1
  signed int v21; // [sp+4h] [bp-14h]@1

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v21 = 8;
  v20 = 0;
  do
  {
    v8 = (*(_BYTE *)(v5 + 1) - ((*(_BYTE *)(v6 + 1) + *(_BYTE *)(v7 + 1)) >> 1)) >> 31;
    v9 = (*(_BYTE *)v5 - ((*(_BYTE *)v6 + *(_BYTE *)v7) >> 1)) >> 31;
    v10 = (v8 ^ (*(_BYTE *)(v5 + 1) - ((*(_BYTE *)(v6 + 1) + *(_BYTE *)(v7 + 1)) >> 1)))
        - v8
        + (v9 ^ (*(_BYTE *)v5 - ((*(_BYTE *)v6 + *(_BYTE *)v7) >> 1)))
        - v9;
    v11 = (*(_BYTE *)(v5 + 2) - ((*(_BYTE *)(v6 + 2) + *(_BYTE *)(v7 + 2)) >> 1)) >> 31;
    v12 = *(_BYTE *)(v5 + 3) - ((*(_BYTE *)(v6 + 3) + *(_BYTE *)(v7 + 3)) >> 1);
    HIDWORD(v12) = v10
                 + (v11 ^ (*(_BYTE *)(v5 + 2) - ((*(_BYTE *)(v6 + 2) + *(_BYTE *)(v7 + 2)) >> 1)))
                 - v11
                 + (HIDWORD(v12) ^ v12)
                 - HIDWORD(v12);
    v13 = (*(_BYTE *)(v5 + 4) - ((*(_BYTE *)(v6 + 4) + *(_BYTE *)(v7 + 4)) >> 1)) >> 31;
    v14 = (*(_BYTE *)(v5 + 5) - ((*(_BYTE *)(v6 + 5) + *(_BYTE *)(v7 + 5)) >> 1)) >> 31;
    v15 = HIDWORD(v12)
        + (v13 ^ (*(_BYTE *)(v5 + 4) - ((*(_BYTE *)(v6 + 4) + *(_BYTE *)(v7 + 4)) >> 1)))
        - v13
        + (v14 ^ (*(_BYTE *)(v5 + 5) - ((*(_BYTE *)(v6 + 5) + *(_BYTE *)(v7 + 5)) >> 1)))
        - v14;
    v16 = (*(_BYTE *)(v5 + 6) - ((*(_BYTE *)(v6 + 6) + *(_BYTE *)(v7 + 6)) >> 1)) >> 31;
    HIDWORD(v12) = v15 + (v16 ^ (*(_BYTE *)(v5 + 6) - ((*(_BYTE *)(v6 + 6) + *(_BYTE *)(v7 + 6)) >> 1))) - v16;
    v17 = (*(_BYTE *)(v6 + 7) + *(_BYTE *)(v7 + 7)) >> 1;
    v18 = (*(_BYTE *)(v5 + 7) - v17) >> 31;
    v20 += HIDWORD(v12) + (v18 ^ (*(_BYTE *)(v5 + 7) - v17)) - v18;
    if ( a5 < v20 )
      break;
    v5 += a4;
    v6 += a4;
    v7 += a4;
    --v21;
  }
  while ( v21 );
  return v20;
}
