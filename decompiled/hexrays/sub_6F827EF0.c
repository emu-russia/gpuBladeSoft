int __cdecl sub_6F827EF0(int a1, int a2, int a3, int a4)
{
  signed int v4; // esi@1
  int v5; // ecx@1
  int v6; // edx@1
  int result; // eax@1
  int v8; // ebp@2
  int v9; // ebx@2

  v4 = 8;
  v5 = a1;
  v6 = a2;
  result = a3;
  do
  {
    *(_BYTE *)v5 = (*(_BYTE *)v6 + *(_BYTE *)result) >> 1;
    *(_BYTE *)(v5 + 1) = (*(_BYTE *)(v6 + 1) + *(_BYTE *)(result + 1)) >> 1;
    *(_BYTE *)(v5 + 2) = (*(_BYTE *)(v6 + 2) + *(_BYTE *)(result + 2)) >> 1;
    *(_BYTE *)(v5 + 3) = (*(_BYTE *)(v6 + 3) + *(_BYTE *)(result + 3)) >> 1;
    *(_BYTE *)(v5 + 4) = (*(_BYTE *)(v6 + 4) + *(_BYTE *)(result + 4)) >> 1;
    *(_BYTE *)(v5 + 5) = (*(_BYTE *)(v6 + 5) + *(_BYTE *)(result + 5)) >> 1;
    *(_BYTE *)(v5 + 6) = (*(_BYTE *)(v6 + 6) + *(_BYTE *)(result + 6)) >> 1;
    v8 = *(_BYTE *)(v6 + 7);
    v6 += a4;
    v9 = *(_BYTE *)(result + 7);
    result += a4;
    *(_BYTE *)(v5 + 7) = (v8 + v9) >> 1;
    v5 += a4;
    --v4;
  }
  while ( v4 );
  return result;
}
