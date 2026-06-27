int __cdecl sub_6F82AE90(int a1, int a2, int a3)
{
  int v3; // esi@1
  int v4; // eax@1
  int v5; // ecx@1
  int v6; // edi@1
  int v7; // ebp@1
  int v8; // ebp@2
  int v9; // eax@2
  int v10; // esi@2
  int v11; // ebx@2
  int v12; // eax@2
  int v13; // edx@2
  int v14; // ST44_4@2
  int v15; // edx@2
  int v16; // edx@2
  int v17; // eax@2
  int v18; // edx@5
  int v19; // ecx@5
  int result; // eax@5
  int v21; // [sp+28h] [bp+28h]@1
  unsigned int v22; // [sp+2Ch] [bp+2Ch]@1
  int v23; // [sp+30h] [bp+30h]@1
  int v24; // [sp+34h] [bp+34h]@1
  int v25; // [sp+38h] [bp+38h]@1
  int v26; // [sp+3Ch] [bp+3Ch]@1
  int v27; // [sp+40h] [bp+40h]@1
  int v28; // [sp+44h] [bp+44h]@2
  int v29; // [sp+48h] [bp+48h]@1
  int v30; // [sp+4Ch] [bp+4Ch]@1
  signed int v31; // [sp+50h] [bp+50h]@1
  int v32; // [sp+54h] [bp+54h]@1
  int v33; // [sp+5Ch] [bp+5Ch]@1
  int v34; // [sp+6Ch] [bp+6Ch]@1
  int v35; // [sp+70h] [bp+70h]@1
  int v36; // [sp+74h] [bp+74h]@1
  int v37; // [sp+78h] [bp+78h]@1
  int v38; // [sp+80h] [bp+80h]@1
  int v39; // [sp+84h] [bp+84h]@1
  int v40; // [sp+88h] [bp+88h]@1
  int v41; // [sp+8Ch] [bp+8Ch]@1

  v3 = *(_DWORD *)(a1 + 51572) + 96 * a2 + 2 * a3;
  v32 = *(_DWORD *)(a1 + 51572) + 96 * a2;
  v33 = v32 + 2 * a3;
  v4 = *(_BYTE *)(v3 + 35) / 2;
  v5 = *(_BYTE *)(v3 + 36) / 2;
  v22 = *(_DWORD *)(v32 + 72);
  v24 = *(_DWORD *)(a1 + 492);
  v21 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * a3 + 272) + 480);
  v25 = *(_DWORD *)(a1 + 208);
  v26 = *(_DWORD *)(a1 + 496);
  v6 = 48 * a2 + *(_DWORD *)(a1 + 232);
  v36 = -v26;
  v35 = -v26;
  v27 = v4 + v5 * v26;
  v34 = -v26;
  v29 = 2 * v4;
  v23 = 0;
  v7 = 0;
  v38 = 0;
  v37 = 0;
  v41 = v26;
  v40 = v26;
  v39 = v26;
  v30 = 2 * v5;
  v31 = 4;
  do
  {
    v8 = dword_6FB97C80[v7];
    v9 = dword_6FB97E60[v8];
    v10 = (v9 & ~((v9 ^ (v9 + v29)) >> 31))
        + v27
        + (*(&v34 + v8) & ~(((dword_6FB97E20[v8] + v30) ^ dword_6FB97E20[v8]) >> 31));
    v11 = v27
        + (((v9 ^ (v9 + v29)) >> 31) & v9)
        + (*(&v34 + v8) & (((dword_6FB97E20[v8] + v30) ^ dword_6FB97E20[v8]) >> 31));
    v12 = sub_6F827B20(
            a1,
            v24 + *(_DWORD *)(v25 + 4 * *(_DWORD *)v6),
            v21 + *(_DWORD *)(v25 + 4 * *(_DWORD *)v6) + v11,
            v21 + *(_DWORD *)(v25 + 4 * *(_DWORD *)v6) + v10,
            v26,
            v22);
    v13 = *(_DWORD *)(v25 + 4 * *(_DWORD *)(v6 + 4));
    v14 = sub_6F827B20(a1, v24 + v13, v21 + v13 + v11, v21 + v13 + v10, v26, v22 - v12) + v12;
    v15 = *(_DWORD *)(v25 + 4 * *(_DWORD *)(v6 + 8));
    v28 = sub_6F827B20(a1, v24 + v15, v21 + v15 + v11, v21 + v15 + v10, v26, v22 - v14) + v14;
    v16 = *(_DWORD *)(v25 + 4 * *(_DWORD *)(v6 + 12));
    v17 = sub_6F827B20(a1, v24 + v16, v21 + v16 + v11, v21 + v16 + v10, v26, v22 - v28);
    if ( v22 > v17 + v28 )
    {
      v31 = v8;
      v22 = v17 + v28;
    }
    v7 = ++v23;
  }
  while ( v23 != 8 );
  v18 = dword_6FB97E60[v31] + v29;
  v19 = dword_6FB97E20[v31] + v30;
  result = v32;
  *(_DWORD *)(v32 + 72) = v22;
  *(_BYTE *)(v33 + 35) = v18;
  *(_BYTE *)(v32 + 2 * a3 + 36) = v19;
  return result;
}
