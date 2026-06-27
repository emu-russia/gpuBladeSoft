int __cdecl sub_6F8273C0(int a1, int a2, int a3)
{
  int v3; // edx@1
  int result; // eax@1
  __int16 v5; // bx@2
  int v6; // eax@2
  __int16 v7; // bx@2

  v3 = a1;
  result = a2;
  do
  {
    v3 += 32;
    *(_WORD *)(v3 - 32) = *(_BYTE *)result - 128;
    *(_WORD *)(v3 - 30) = *(_BYTE *)(result + 1) - 128;
    *(_WORD *)(v3 - 28) = *(_BYTE *)(result + 2) - 128;
    *(_WORD *)(v3 - 26) = *(_BYTE *)(result + 3) - 128;
    *(_WORD *)(v3 - 24) = *(_BYTE *)(result + 4) - 128;
    *(_WORD *)(v3 - 22) = *(_BYTE *)(result + 5) - 128;
    *(_WORD *)(v3 - 20) = *(_BYTE *)(result + 6) - 128;
    v5 = *(_BYTE *)(result + 7);
    v6 = a3 + result;
    *(_WORD *)(v3 - 18) = v5 - 128;
    *(_WORD *)(v3 - 16) = *(_BYTE *)v6 - 128;
    *(_WORD *)(v3 - 14) = *(_BYTE *)(v6 + 1) - 128;
    *(_WORD *)(v3 - 12) = *(_BYTE *)(v6 + 2) - 128;
    *(_WORD *)(v3 - 10) = *(_BYTE *)(v6 + 3) - 128;
    *(_WORD *)(v3 - 8) = *(_BYTE *)(v6 + 4) - 128;
    *(_WORD *)(v3 - 6) = *(_BYTE *)(v6 + 5) - 128;
    *(_WORD *)(v3 - 4) = *(_BYTE *)(v6 + 6) - 128;
    v7 = *(_BYTE *)(v6 + 7);
    result = a3 + v6;
    *(_WORD *)(v3 - 2) = v7 - 128;
  }
  while ( v3 != a1 + 128 );
  return result;
}
