int __cdecl sub_6F814AD0(int a1, int a2, int a3)
{
  int v3; // ecx@0
  int result; // eax@1
  int v5; // edx@1
  int v6; // ebp@2
  int v7; // ecx@2
  int v8; // edi@2
  int v9; // ecx@2
  int v10; // ebp@2
  int v11; // ecx@2
  int v12; // edi@2
  int v13; // ecx@2
  int v14; // ebp@2
  int v15; // ecx@2
  int v16; // edi@2
  int v17; // ecx@2
  int v18; // ebp@2
  int v19; // ecx@2
  int v20; // edi@2
  int v21; // ecx@2
  int v22; // ebp@2
  int v23; // ecx@2
  int v24; // edi@2
  int v25; // ecx@2
  int v26; // ebp@2
  int v27; // ecx@2
  int v28; // edi@2
  int v29; // ecx@2
  int v30; // ebp@2
  int v31; // ecx@2
  int v32; // edi@2
  int v33; // ecx@2
  int v34; // ebp@2
  int v35; // ecx@2
  int v36; // edi@2

  result = a3;
  v5 = a1;
  do
  {
    v6 = *(_WORD *)result;
    LOBYTE(v3) = (signed __int16)v6 > 127;
    v7 = -v3;
    v8 = v7 | (v6 - 128);
    LOBYTE(v7) = (signed __int16)v6 >= -128;
    v9 = v8 & -v7;
    *(_BYTE *)v5 = v9;
    v10 = *(_WORD *)(result + 2);
    LOBYTE(v9) = (signed __int16)v10 > 127;
    v11 = -v9;
    v12 = v11 | (v10 - 128);
    LOBYTE(v11) = (signed __int16)v10 >= -128;
    v13 = v12 & -v11;
    *(_BYTE *)(v5 + 1) = v13;
    v14 = *(_WORD *)(result + 4);
    LOBYTE(v13) = (signed __int16)v14 > 127;
    v15 = -v13;
    v16 = v15 | (v14 - 128);
    LOBYTE(v15) = (signed __int16)v14 >= -128;
    v17 = v16 & -v15;
    *(_BYTE *)(v5 + 2) = v17;
    v18 = *(_WORD *)(result + 6);
    LOBYTE(v17) = (signed __int16)v18 > 127;
    v19 = -v17;
    v20 = v19 | (v18 - 128);
    LOBYTE(v19) = (signed __int16)v18 >= -128;
    v21 = v20 & -v19;
    *(_BYTE *)(v5 + 3) = v21;
    v22 = *(_WORD *)(result + 8);
    LOBYTE(v21) = (signed __int16)v22 > 127;
    v23 = -v21;
    v24 = v23 | (v22 - 128);
    LOBYTE(v23) = (signed __int16)v22 >= -128;
    v25 = v24 & -v23;
    *(_BYTE *)(v5 + 4) = v25;
    v26 = *(_WORD *)(result + 10);
    LOBYTE(v25) = (signed __int16)v26 > 127;
    v27 = -v25;
    v28 = v27 | (v26 - 128);
    LOBYTE(v27) = (signed __int16)v26 >= -128;
    v29 = v28 & -v27;
    *(_BYTE *)(v5 + 5) = v29;
    v30 = *(_WORD *)(result + 12);
    LOBYTE(v29) = (signed __int16)v30 > 127;
    v31 = -v29;
    v32 = v31 | (v30 - 128);
    LOBYTE(v31) = (signed __int16)v30 >= -128;
    v33 = v32 & -v31;
    *(_BYTE *)(v5 + 6) = v33;
    v34 = *(_WORD *)(result + 14);
    LOBYTE(v33) = (signed __int16)v34 > 127;
    v35 = -v33;
    v36 = v35 | (v34 - 128);
    LOBYTE(v35) = (signed __int16)v34 >= -128;
    result += 16;
    v3 = v36 & -v35;
    *(_BYTE *)(v5 + 7) = v3;
    v5 += a2;
  }
  while ( result != a3 + 128 );
  return result;
}
