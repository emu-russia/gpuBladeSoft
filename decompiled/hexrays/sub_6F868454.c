int __cdecl sub_6F868454(int a1, int a2, int a3, int a4)
{
  int v4; // eax@1
  int v5; // eax@1
  int result; // eax@1
  char *v7; // ebx@5
  int v8; // edx@5
  int v9; // ecx@5
  int v10; // eax@6
  signed int v11; // edi@8
  signed int v12; // eax@8
  __int16 *v13; // esi@8
  unsigned __int16 v14; // ax@8
  int v15; // edx@10
  int v16; // esi@10
  int v17; // edi@10
  int v18; // [sp+14h] [bp-80h]@1
  int v19; // [sp+18h] [bp-7Ch]@1
  int v20; // [sp+1Ch] [bp-78h]@2
  int v21; // [sp+20h] [bp-74h]@4
  int v22; // [sp+24h] [bp-70h]@1
  int v23; // [sp+28h] [bp-6Ch]@1
  int v24; // [sp+2Ch] [bp-68h]@1
  int v25; // [sp+30h] [bp-64h]@1
  signed int v26; // [sp+34h] [bp-60h]@4
  int v27; // [sp+40h] [bp-54h]@5
  signed int v28; // [sp+44h] [bp-50h]@4
  int v29; // [sp+48h] [bp-4Ch]@5
  int v30; // [sp+4Ch] [bp-48h]@5
  int v31; // [sp+50h] [bp-44h]@5
  int v32; // [sp+54h] [bp-40h]@5
  int v33; // [sp+58h] [bp-3Ch]@5
  int v34; // [sp+5Ch] [bp-38h]@5
  int v35; // [sp+60h] [bp-34h]@1
  int v36; // [sp+64h] [bp-30h]@1
  _BYTE *v37; // [sp+68h] [bp-2Ch]@3
  int v38; // [sp+6Ch] [bp-28h]@5
  int v39; // [sp+70h] [bp-24h]@5
  int v40; // [sp+74h] [bp-20h]@5
  int v41; // [sp+78h] [bp-1Ch]@3
  int v42; // [sp+7Ch] [bp-18h]@6
  signed int v43; // [sp+7Ch] [bp-18h]@8
  int v44; // [sp+80h] [bp-14h]@6
  signed int v45; // [sp+80h] [bp-14h]@8
  int v46; // [sp+84h] [bp-10h]@6
  signed int v47; // [sp+84h] [bp-10h]@8

  v4 = *(_DWORD *)(a1 + 440);
  v18 = v4;
  v25 = *(_DWORD *)(v4 + 24);
  v19 = *(_DWORD *)(a1 + 92);
  v36 = *(_DWORD *)(a1 + 292);
  v35 = *(_DWORD *)(v4 + 40);
  v5 = *(_DWORD *)(a1 + 116);
  v24 = *(_DWORD *)v5;
  v23 = *(_DWORD *)(v5 + 4);
  result = *(_DWORD *)(v5 + 8);
  v22 = result;
  if ( a4 > 0 )
  {
    v20 = 0;
    do
    {
      v41 = *(_DWORD *)(a2 + 4 * v20);
      v37 = *(_BYTE **)(a3 + 4 * v20);
      if ( *(_BYTE *)(v18 + 36) )
      {
        v41 = 3 * v19 - 3 + *(_DWORD *)(a2 + 4 * v20);
        v37 = (_BYTE *)(v19 - 1 + *(_DWORD *)(a3 + 4 * v20));
        v21 = *(_DWORD *)(v18 + 32) + 2 * (3 * v19 + 3);
        *(_BYTE *)(v18 + 36) = 0;
        v28 = -3;
        v26 = -1;
        if ( v19 )
          goto LABEL_5;
      }
      else
      {
        v21 = *(_DWORD *)(v18 + 32);
        *(_BYTE *)(v18 + 36) = 1;
        v28 = 3;
        v26 = 1;
        if ( v19 )
        {
LABEL_5:
          v27 = 2 * v28;
          v38 = v19;
          v7 = (char *)v21;
          LOWORD(v31) = 0;
          LOWORD(v32) = 0;
          LOWORD(v33) = 0;
          v29 = 0;
          v30 = 0;
          v40 = 0;
          v8 = 0;
          v9 = 0;
          v39 = -2 * v28;
          v34 = 0;
          while ( 1 )
          {
            v7 += v27;
            v11 = *(_BYTE *)(v36 + *(_DWORD *)(v35 + 4 * ((v9 + *(_WORD *)v7 + 8) >> 4)) + *(_BYTE *)v41);
            v47 = *(_BYTE *)(v36
                           + *(_DWORD *)(v35 + 4 * ((v8 + *(_WORD *)(&v7[2 * v28 + 2] + v39) + 8) >> 4))
                           + *(_BYTE *)(v41 + 1));
            v12 = *(_BYTE *)(v36
                           + *(_DWORD *)(v35 + 4 * ((v34 + *(_WORD *)(&v7[2 * v28 + 4] + v39) + 8) >> 4))
                           + *(_BYTE *)(v41 + 2));
            v45 = v12;
            v12 >>= 3;
            v43 = v12;
            v13 = (__int16 *)(*(_DWORD *)(v25 + 4 * (v11 >> 3)) + 2 * (v12 + 32 * (v47 >> 2)));
            v14 = *v13;
            if ( !*v13 )
            {
              sub_6F867E14(a1, v11 >> 3, v47 >> 2, v43);
              v14 = *v13;
            }
            v10 = v14 - 1;
            *v37 = v10;
            v42 = v11 - *(_BYTE *)(v24 + v10);
            v46 = v47 - *(_BYTE *)(v23 + v10);
            v44 = v45 - *(_BYTE *)(v22 + v10);
            *(_WORD *)&v7[v39] = 3 * v42 + v33;
            v33 = v40 + 5 * v42;
            *(_WORD *)&v7[v39 + 2] = 3 * v46 + v32;
            v32 = v30 + 5 * v46;
            *(_WORD *)&v7[v39 + 4] = 3 * v44 + v31;
            v31 = 5 * v44 + v29;
            if ( !--v38 )
              break;
            v9 = 7 * v42;
            v8 = 7 * v46;
            v34 = 7 * v44;
            v41 += v28;
            v37 += v26;
            v40 = v42;
            v30 = v46;
            v29 = v44;
          }
          v21 += v19 * v27;
          v15 = v40 + 5 * v42;
          v16 = v30 + 5 * v46;
          v17 = 5 * v44 + v29;
          goto LABEL_11;
        }
      }
      LOWORD(v17) = 0;
      LOWORD(v16) = 0;
      LOWORD(v15) = 0;
LABEL_11:
      result = v21;
      *(_WORD *)v21 = v15;
      *(_WORD *)(v21 + 2) = v16;
      *(_WORD *)(v21 + 4) = v17;
      ++v20;
    }
    while ( a4 > v20 );
  }
  return result;
}
