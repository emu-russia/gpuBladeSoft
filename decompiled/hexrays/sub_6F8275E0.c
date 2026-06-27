unsigned int __cdecl sub_6F8275E0(int a1, int a2, int a3, unsigned int a4)
{
  signed int v4; // ebp@1
  unsigned int result; // eax@1
  int v6; // edi@1
  int v7; // esi@1
  int v8; // ebx@2
  int v9; // edx@2
  __int64 v10; // rcx@2
  int v11; // edx@2
  int v12; // edx@2
  int v13; // edx@2
  __int64 v14; // rcx@2

  v4 = 8;
  result = 0;
  v6 = a1;
  v7 = a2;
  do
  {
    v8 = (*(_BYTE *)(v6 + 1) - *(_BYTE *)(v7 + 1)) >> 31;
    v9 = (v8 ^ (*(_BYTE *)(v6 + 1) - *(_BYTE *)(v7 + 1))) - v8;
    v10 = *(_BYTE *)v6 - *(_BYTE *)v7;
    HIDWORD(v10) = v9 + (HIDWORD(v10) ^ v10) - HIDWORD(v10);
    v11 = (*(_BYTE *)(v6 + 2) - *(_BYTE *)(v7 + 2)) >> 31;
    LODWORD(v10) = (*(_BYTE *)(v6 + 3) - *(_BYTE *)(v7 + 3)) >> 31;
    LODWORD(v10) = HIDWORD(v10)
                 + (v11 ^ (*(_BYTE *)(v6 + 2) - *(_BYTE *)(v7 + 2)))
                 - v11
                 + (v10 ^ (*(_BYTE *)(v6 + 3) - *(_BYTE *)(v7 + 3)))
                 - v10;
    HIDWORD(v10) = (*(_BYTE *)(v6 + 4) - *(_BYTE *)(v7 + 4)) >> 31;
    v12 = (*(_BYTE *)(v6 + 5) - *(_BYTE *)(v7 + 5)) >> 31;
    v13 = v10
        + (HIDWORD(v10) ^ (*(_BYTE *)(v6 + 4) - *(_BYTE *)(v7 + 4)))
        - HIDWORD(v10)
        + (v12 ^ (*(_BYTE *)(v6 + 5) - *(_BYTE *)(v7 + 5)))
        - v12;
    v14 = *(_BYTE *)(v6 + 6) - *(_BYTE *)(v7 + 6);
    LODWORD(v14) = v13 + (HIDWORD(v14) ^ v14) - HIDWORD(v14);
    HIDWORD(v14) = (*(_BYTE *)(v6 + 7) - *(_BYTE *)(v7 + 7)) >> 31;
    result += v14 + (HIDWORD(v14) ^ (*(_BYTE *)(v6 + 7) - *(_BYTE *)(v7 + 7))) - HIDWORD(v14);
    if ( a4 < result )
      break;
    v6 += a3;
    v7 += a3;
    --v4;
  }
  while ( v4 );
  return result;
}
