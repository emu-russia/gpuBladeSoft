int __cdecl sub_6F827D70(int a1, int a2)
{
  int v2; // ebp@1
  __int16 *v3; // esi@1
  __int16 v4; // ax@2
  __int16 v5; // dx@2
  __int16 v6; // bx@2
  __int16 v7; // di@2
  __int16 v8; // ST18_2@2
  __int16 v9; // dx@2
  __int16 v10; // cx@2
  __int16 v11; // ax@2
  __int16 v12; // bx@2
  __int16 v13; // dx@2
  __int16 v14; // ST1C_2@2
  __int16 v15; // ST08_2@2
  __int16 v16; // ax@2
  __int16 v17; // cx@2
  __int16 v18; // ST0C_2@2
  __int16 v19; // bx@2
  unsigned int v20; // eax@3
  __int64 v21; // rdi@3
  __int16 v23; // [sp+20h] [bp-90h]@1
  __int16 v24; // [sp+22h] [bp-8Eh]@3
  __int16 v25; // [sp+24h] [bp-8Ch]@3
  __int16 v26; // [sp+26h] [bp-8Ah]@3
  __int16 v27; // [sp+28h] [bp-88h]@3
  __int16 v28; // [sp+2Ah] [bp-86h]@3
  __int16 v29; // [sp+2Ch] [bp-84h]@3
  __int16 v30; // [sp+2Eh] [bp-82h]@3
  char v31; // [sp+30h] [bp-80h]@2

  v2 = a1;
  v3 = &v23;
  do
  {
    v4 = *(_BYTE *)(v2 + 4);
    v5 = *(_BYTE *)v2;
    ++v3;
    v6 = *(_BYTE *)(v2 + 1);
    v7 = v5 + v4;
    v8 = v5 - v4;
    v9 = *(_BYTE *)(v2 + 5);
    v10 = v6 + v9;
    v11 = v6 - v9;
    v12 = *(_BYTE *)(v2 + 2);
    v13 = *(_BYTE *)(v2 + 6);
    v14 = v11;
    v15 = v10;
    v16 = *(_BYTE *)(v2 + 7);
    v17 = v12 + v13;
    v18 = v12 - v13;
    v19 = *(_BYTE *)(v2 + 3);
    v2 += a2;
    v3[7] = v17 + v7 - (v15 + v19 + v16);
    *(v3 - 1) = v15 + v19 + v16 + v17 + v7;
    v3[23] = v7 - v17 - (v15 - (v19 + v16));
    v3[15] = v15 - (v19 + v16) + v7 - v17;
    v3[39] = v8 + v18 - (v14 + v19 - v16);
    v3[31] = v14 + v19 - v16 + v8 + v18;
    v3[55] = v8 - v18 - (v14 - (v19 - v16));
    v3[47] = v14 - (v19 - v16) + v8 - v18;
  }
  while ( (char *)v3 != &v31 );
  v20 = sub_6F827840((int)&v23, 0xFFFFFFFF);
  v21 = v29 + v28 + v27 + v26 + v25 + v24 + (signed int)v23 + v30;
  return v20 - ((HIDWORD(v21) ^ v21) - HIDWORD(v21));
}
