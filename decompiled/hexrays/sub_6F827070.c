int __cdecl sub_6F827070(int a1, int a2)
{
  int v2; // edx@1
  __int16 v3; // di@2
  int v4; // esi@2
  int v5; // edi@2
  int v6; // edi@3
  __int16 *v7; // esi@3
  int v8; // eax@4
  int v9; // edi@5
  signed int v10; // esi@6
  int v11; // eax@6
  int v12; // esi@6
  int v13; // eax@6
  int v14; // esi@6
  int v15; // edx@6
  int v16; // eax@6
  int v17; // ecx@6
  int v18; // esi@6
  int result; // eax@6
  unsigned __int16 v20; // [sp+0h] [bp-8Ch]@2
  __int16 v21; // [sp+2h] [bp-8Ah]@3
  char v22; // [sp+4h] [bp-88h]@3
  char v23; // [sp+6h] [bp-86h]@3
  char v24; // [sp+8h] [bp-84h]@3
  char v25; // [sp+Ah] [bp-82h]@3
  char v26; // [sp+Ch] [bp-80h]@3
  char v27; // [sp+Eh] [bp-7Eh]@3
  __int16 v28; // [sp+10h] [bp-7Ch]@3
  char v29; // [sp+80h] [bp-Ch]@4

  v2 = 0;
  do
  {
    v3 = *(_WORD *)(a2 + 2 * (v2 + 1));
    *(&v20 + v2) = 4 * *(_WORD *)(a2 + 2 * v2);
    *(&v20 + v2 + 1) = 4 * v3;
    *(&v20 + v2 + 2) = 4 * *(_WORD *)(a2 + 2 * (v2 + 2));
    *(&v20 + v2 + 3) = 4 * *(_WORD *)(a2 + 2 * (v2 + 3));
    *(&v20 + v2 + 4) = 4 * *(_WORD *)(a2 + 2 * (v2 + 4));
    *(&v20 + v2 + 5) = 4 * *(_WORD *)(a2 + 2 * (v2 + 5));
    v4 = v2 + 6;
    v5 = v2 + 7;
    v2 += 8;
    *(&v20 + v4) = 4 * *(_WORD *)(a2 + 2 * v4);
    *(&v20 + v5) = 4 * *(_WORD *)(a2 + 2 * v5);
  }
  while ( v2 != 64 );
  v6 = a1;
  v7 = (__int16 *)&v20;
  ++v21;
  --v28;
  v20 = v20 - (v20 < 1u) + 2;
  sub_6F826E40(a1, (int)&v20);
  sub_6F826E40(a1 + 16, (int)&v21);
  sub_6F826E40(a1 + 32, (int)&v22);
  sub_6F826E40(a1 + 48, (int)&v23);
  sub_6F826E40(a1 + 64, (int)&v24);
  sub_6F826E40(a1 + 80, (int)&v25);
  sub_6F826E40(a1 + 96, (int)&v26);
  sub_6F826E40(a1 + 112, (int)&v27);
  do
  {
    v8 = (int)v7;
    v7 += 8;
    sub_6F826E40(v8, v6);
    v6 += 2;
  }
  while ( v7 < (__int16 *)&v29 );
  v9 = 0;
  do
  {
    v10 = (signed __int16)*(&v20 + v9 + 1) + 2;
    *(_WORD *)(a1 + 2 * v9) = ((signed __int16)*(&v20 + v9) + 2) >> 2;
    v11 = (signed __int16)*(&v20 + v9 + 2);
    *(_WORD *)(a1 + 2 * (v9 + 1)) = v10 >> 2;
    v12 = (signed __int16)*(&v20 + v9 + 3);
    *(_WORD *)(a1 + 2 * (v9 + 2)) = (v11 + 2) >> 2;
    v13 = (signed __int16)*(&v20 + v9 + 4);
    *(_WORD *)(a1 + 2 * (v9 + 3)) = (v12 + 2) >> 2;
    v14 = (signed __int16)*(&v20 + v9 + 5);
    *(_WORD *)(a1 + 2 * (v9 + 4)) = (v13 + 2) >> 2;
    v15 = v9 + 6;
    v16 = (signed __int16)*(&v20 + v9 + 6);
    *(_WORD *)(a1 + 2 * (v9 + 5)) = (v14 + 2) >> 2;
    v17 = v9 + 7;
    v9 += 8;
    v18 = (signed __int16)*(&v20 + v17);
    result = (v16 + 2) >> 2;
    *(_WORD *)(a1 + 2 * v15) = result;
    *(_WORD *)(a1 + 2 * v17) = (v18 + 2) >> 2;
  }
  while ( v9 != 64 );
  return result;
}
