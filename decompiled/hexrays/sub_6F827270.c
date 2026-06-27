int __cdecl sub_6F827270(int a1, int a2, int a3, int a4)
{
  int v4; // edx@1
  int result; // eax@1
  int v6; // ecx@1
  __int16 v7; // bp@2
  int v8; // eax@2
  __int16 v9; // bx@2
  int v10; // edx@2
  __int16 v11; // bx@2
  __int16 v12; // bp@2
  signed int v13; // [sp+0h] [bp-14h]@1

  v4 = a2;
  result = a3;
  v6 = a1;
  v13 = 8;
  do
  {
    v6 += 32;
    *(_WORD *)(v6 - 32) = *(_BYTE *)v4 - *(_BYTE *)result;
    *(_WORD *)(v6 - 30) = *(_BYTE *)(v4 + 1) - *(_BYTE *)(result + 1);
    *(_WORD *)(v6 - 28) = *(_BYTE *)(v4 + 2) - *(_BYTE *)(result + 2);
    *(_WORD *)(v6 - 26) = *(_BYTE *)(v4 + 3) - *(_BYTE *)(result + 3);
    *(_WORD *)(v6 - 24) = *(_BYTE *)(v4 + 4) - *(_BYTE *)(result + 4);
    *(_WORD *)(v6 - 22) = *(_BYTE *)(v4 + 5) - *(_BYTE *)(result + 5);
    *(_WORD *)(v6 - 20) = *(_BYTE *)(v4 + 6) - *(_BYTE *)(result + 6);
    v7 = *(_BYTE *)(result + 7);
    v8 = a4 + result;
    v9 = *(_BYTE *)(v4 + 7);
    v10 = a4 + v4;
    *(_WORD *)(v6 - 18) = v9 - v7;
    *(_WORD *)(v6 - 16) = *(_BYTE *)v10 - *(_BYTE *)v8;
    *(_WORD *)(v6 - 14) = *(_BYTE *)(v10 + 1) - *(_BYTE *)(v8 + 1);
    *(_WORD *)(v6 - 12) = *(_BYTE *)(v10 + 2) - *(_BYTE *)(v8 + 2);
    *(_WORD *)(v6 - 10) = *(_BYTE *)(v10 + 3) - *(_BYTE *)(v8 + 3);
    *(_WORD *)(v6 - 8) = *(_BYTE *)(v10 + 4) - *(_BYTE *)(v8 + 4);
    *(_WORD *)(v6 - 6) = *(_BYTE *)(v10 + 5) - *(_BYTE *)(v8 + 5);
    *(_WORD *)(v6 - 4) = *(_BYTE *)(v10 + 6) - *(_BYTE *)(v8 + 6);
    v11 = *(_BYTE *)(v10 + 7);
    v4 = a4 + v10;
    v12 = *(_BYTE *)(v8 + 7);
    result = a4 + v8;
    *(_WORD *)(v6 - 2) = v11 - v12;
    v13 -= 2;
  }
  while ( v13 );
  return result;
}
