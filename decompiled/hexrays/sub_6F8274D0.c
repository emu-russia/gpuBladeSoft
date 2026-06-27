int __cdecl sub_6F8274D0(int a1, int a2, int a3)
{
  signed int v3; // ebp@1
  int result; // eax@1
  int v5; // edi@1
  int v6; // esi@1
  int v7; // ebx@2
  int v8; // edx@2
  __int64 v9; // rcx@2
  int v10; // edx@2
  int v11; // edx@2
  int v12; // edx@2
  __int64 v13; // rcx@2
  int v14; // edx@2

  v3 = 8;
  result = 0;
  v5 = a1;
  v6 = a2;
  do
  {
    v7 = (*(_BYTE *)(v5 + 1) - *(_BYTE *)(v6 + 1)) >> 31;
    v8 = (v7 ^ (*(_BYTE *)(v5 + 1) - *(_BYTE *)(v6 + 1))) - v7;
    v9 = *(_BYTE *)v5 - *(_BYTE *)v6;
    HIDWORD(v9) = v8 + (HIDWORD(v9) ^ v9) - HIDWORD(v9);
    v10 = (*(_BYTE *)(v5 + 2) - *(_BYTE *)(v6 + 2)) >> 31;
    LODWORD(v9) = (*(_BYTE *)(v5 + 3) - *(_BYTE *)(v6 + 3)) >> 31;
    LODWORD(v9) = HIDWORD(v9)
                + (v10 ^ (*(_BYTE *)(v5 + 2) - *(_BYTE *)(v6 + 2)))
                - v10
                + (v9 ^ (*(_BYTE *)(v5 + 3) - *(_BYTE *)(v6 + 3)))
                - v9;
    HIDWORD(v9) = (*(_BYTE *)(v5 + 4) - *(_BYTE *)(v6 + 4)) >> 31;
    v11 = (*(_BYTE *)(v5 + 5) - *(_BYTE *)(v6 + 5)) >> 31;
    v12 = v9
        + (HIDWORD(v9) ^ (*(_BYTE *)(v5 + 4) - *(_BYTE *)(v6 + 4)))
        - HIDWORD(v9)
        + (v11 ^ (*(_BYTE *)(v5 + 5) - *(_BYTE *)(v6 + 5)))
        - v11;
    v13 = *(_BYTE *)(v5 + 6) - *(_BYTE *)(v6 + 6);
    LODWORD(v13) = v12 + (HIDWORD(v13) ^ v13) - HIDWORD(v13);
    HIDWORD(v13) = (*(_BYTE *)(v5 + 7) - *(_BYTE *)(v6 + 7)) >> 31;
    v14 = (HIDWORD(v13) ^ (*(_BYTE *)(v5 + 7) - *(_BYTE *)(v6 + 7))) - HIDWORD(v13);
    v5 += a3;
    v6 += a3;
    result += v14 + v13;
    --v3;
  }
  while ( v3 );
  return result;
}
