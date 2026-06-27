int __cdecl sub_6F82B1B0(int a1, int a2)
{
  int v2; // ebx@1
  int v3; // esi@1
  int v4; // edx@1
  int v5; // ecx@1
  int v6; // esi@1
  int v7; // eax@2
  int v8; // edx@2
  int v9; // esi@2
  int v10; // ebx@2
  int v11; // edi@3
  int v12; // eax@3
  int v13; // edx@3
  unsigned int v14; // eax@3
  int v15; // ebx@5
  int v16; // edi@5
  int v17; // eax@5
  int v18; // edx@5
  unsigned int v19; // eax@5
  int v20; // edx@8
  int v21; // ecx@8
  int result; // eax@8
  unsigned int v23; // [sp+24h] [bp-88h]@2
  int v24; // [sp+28h] [bp-84h]@2
  int v25; // [sp+2Ch] [bp-80h]@2
  int v26; // [sp+30h] [bp-7Ch]@2
  int v27; // [sp+34h] [bp-78h]@1
  int v28; // [sp+38h] [bp-74h]@2
  int v29; // [sp+3Ch] [bp-70h]@2
  signed int v30; // [sp+40h] [bp-6Ch]@2
  int v31; // [sp+44h] [bp-68h]@1
  int v32; // [sp+48h] [bp-64h]@1
  int v33; // [sp+4Ch] [bp-60h]@1
  int v34; // [sp+50h] [bp-5Ch]@1
  int v35; // [sp+54h] [bp-58h]@1
  int v36; // [sp+58h] [bp-54h]@1
  int v37; // [sp+5Ch] [bp-50h]@1
  int v38; // [sp+6Ch] [bp-40h]@1
  int v39; // [sp+70h] [bp-3Ch]@1
  int v40; // [sp+74h] [bp-38h]@1
  int v41; // [sp+78h] [bp-34h]@1
  int v42; // [sp+80h] [bp-2Ch]@1
  int v43; // [sp+84h] [bp-28h]@1
  int v44; // [sp+88h] [bp-24h]@1
  int v45; // [sp+8Ch] [bp-20h]@1

  v42 = 0;
  v41 = 0;
  v32 = 0;
  v2 = *(_DWORD *)(a1 + 496);
  v36 = *(_DWORD *)(a1 + 492);
  v3 = *(_DWORD *)(a1 + 232) + 48 * a2;
  v34 = *(_DWORD *)(a1 + 208);
  v4 = *(_DWORD *)(a1 + 276);
  v27 = *(_DWORD *)(a1 + 496);
  v5 = *(_DWORD *)(a1 + 51572) + 96 * a2;
  v40 = -v2;
  v39 = -v2;
  v38 = -v2;
  v35 = v3;
  v6 = *(_DWORD *)(a1 + 4 * v4 + 480);
  v45 = v2;
  v44 = v2;
  v33 = v5;
  v43 = v2;
  v37 = v6;
  v31 = v5 + 51;
  do
  {
    v30 = 4;
    v7 = *(_BYTE *)(v31 + 1) / 2;
    v8 = *(_BYTE *)v31 / 2;
    v9 = *(_DWORD *)(v34 + 4 * *(_DWORD *)(v35 + 4 * v32));
    v23 = *(_DWORD *)(v33 + 4 * v32 + 80);
    v10 = 0;
    v26 = 2 * v7;
    v28 = v9 + v37;
    v24 = v8 + v7 * v27;
    v25 = 2 * v8;
    v29 = v36 + v9;
    do
    {
      v11 = dword_6FB97C80[v10];
      v12 = dword_6FB97E60[v11];
      v13 = (dword_6FB97E20[v11] ^ (dword_6FB97E20[v11] + v26)) >> 31;
      v14 = sub_6F827B20(
              a1,
              v29,
              v28 + (*(&v38 + v11) & v13) + v24 + (((v12 ^ (v12 + v25)) >> 31) & v12),
              v28 + v24 + (v12 & ~((v12 ^ (v12 + v25)) >> 31)) + (*(&v38 + v11) & ~v13),
              v27,
              v23);
      if ( v14 < v23 )
      {
        v30 = v11;
        v23 = v14;
      }
      v15 = v10 + 1;
      v16 = dword_6FB97C80[v15];
      v17 = dword_6FB97E60[v16];
      v18 = (dword_6FB97E20[v16] ^ (dword_6FB97E20[v16] + v26)) >> 31;
      v19 = sub_6F827B20(
              a1,
              v29,
              v28 + (*(&v38 + v16) & v18) + v24 + (((v17 ^ (v17 + v25)) >> 31) & v17),
              v28 + v24 + (v17 & ~((v17 ^ (v17 + v25)) >> 31)) + (*(&v38 + v16) & ~v18),
              v27,
              v23);
      if ( v19 < v23 )
      {
        v30 = v16;
        v23 = v19;
      }
      v10 = v15 + 1;
    }
    while ( v10 != 8 );
    v20 = dword_6FB97E60[v30] + v25;
    v21 = dword_6FB97E20[v30] + v26;
    *(_DWORD *)(v33 + 4 * v32 + 80) = v23;
    result = v32 + 1;
    v32 = result;
    *(_BYTE *)(v31 + 8) = v20;
    *(_BYTE *)(v31 + 9) = v21;
    v31 += 2;
  }
  while ( result != 4 );
  return result;
}
