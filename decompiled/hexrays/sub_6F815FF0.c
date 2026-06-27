int __cdecl sub_6F815FF0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx@1
  int v7; // esi@1
  int v8; // edi@1
  int v9; // ebp@1
  int v10; // esi@1
  int v11; // ebx@1
  int result; // eax@1
  int v13; // edi@6
  signed int v14; // ebp@6
  int v15; // edx@7
  int v16; // ebx@7
  int v17; // eax@7
  signed int v18; // ebp@22
  int v19; // edi@22
  int v20; // edx@23
  int v21; // ebx@23
  int v22; // eax@23
  int v23; // [sp+0h] [bp-60h]@1
  int v24; // [sp+4h] [bp-5Ch]@1
  int v25; // [sp+8h] [bp-58h]@4
  _BYTE *v26; // [sp+Ch] [bp-54h]@4
  int v27; // [sp+10h] [bp-50h]@3
  int v28; // [sp+14h] [bp-4Ch]@4
  int v29; // [sp+18h] [bp-48h]@5
  int v30; // [sp+1Ch] [bp-44h]@1
  int v31; // [sp+24h] [bp-3Ch]@1
  int v32; // [sp+28h] [bp-38h]@1
  int v33; // [sp+2Ch] [bp-34h]@1
  int v34; // [sp+30h] [bp-30h]@1
  _BYTE *v35; // [sp+34h] [bp-2Ch]@2
  int v36; // [sp+38h] [bp-28h]@1
  int v37; // [sp+3Ch] [bp-24h]@1
  int v38; // [sp+40h] [bp-20h]@2
  int v39; // [sp+44h] [bp-1Ch]@1
  int v40; // [sp+48h] [bp-18h]@2

  v6 = a1 + 32 * a4;
  v23 = a2 + 508;
  v7 = *(_DWORD *)(v6 + 116);
  v8 = *(_DWORD *)(v6 + 108);
  v9 = v7;
  v31 = *(_DWORD *)(v6 + 116);
  v39 = v8;
  v34 = *(_DWORD *)(v6 + 120) + v7;
  v10 = *(_DWORD *)(a1 + 4 * a4 + 496);
  v30 = v9 + a5 * v8;
  v24 = *(_DWORD *)(a1 + 4 * a4 + 496);
  v36 = *(_DWORD *)(a1 + 204);
  v11 = v9 + a5 * v8;
  v37 = v30 + v8 * (a6 - a5);
  v32 = *(_DWORD *)(a1 + 208);
  result = *(_DWORD *)(a1 + 4 * a3 + 480);
  v33 = *(_DWORD *)(a1 + 4 * a3 + 480);
  if ( v11 < v37 )
  {
    v38 = 4 * v8;
    v35 = (_BYTE *)(*(_DWORD *)(a1 + 204) + 4 * v11);
    v40 = 1 - v8;
    do
    {
      v27 = v30 + v39;
      if ( v30 + v39 > v30 )
      {
        v28 = v30 + v39;
        v26 = v35;
        v25 = v30 + v39 + v40;
        if ( *v35 & 1 )
        {
LABEL_5:
          v29 = *(_DWORD *)(v32 + 4 * v25 - 4) + v33;
          if ( v30 < v25 - 1 )
          {
            v13 = *(_DWORD *)(v32 + 4 * v25 - 4) + v33 - 2;
            v14 = 8;
            do
            {
              v15 = *(_BYTE *)(v13 + 1);
              v16 = *(_DWORD *)(v23
                              + 4 * ((*(_BYTE *)v13 - *(_BYTE *)(v13 + 3) + 3 * (*(_BYTE *)(v13 + 2) - v15) + 4) >> 3));
              v17 = *(_BYTE *)(v13 + 2) - v16;
              *(_BYTE *)(v13 + 1) = (~(v16 + v15) >> 31) & (-(v16 + v15 > 255) | (*(_BYTE *)(v13 + 1) + v16));
              LOBYTE(v15) = v17 > 255;
              result = ~v17 >> 31;
              *(_BYTE *)(v13 + 2) = result & ((*(_BYTE *)(v13 + 2) - v16) | -(char)v15);
              v13 += v24;
              --v14;
            }
            while ( v14 );
          }
          if ( v31 < v30 )
            result = sub_6F8159E0(v29, v24, v23);
          if ( v27 <= v25 )
          {
            if ( v34 <= v28 )
              goto LABEL_16;
            result = v36;
            if ( *(_BYTE *)(v36 + 4 * v28) & 1 )
              goto LABEL_16;
          }
          else
          {
            if ( !(v26[4] & 1) )
            {
              v18 = 8;
              v19 = v29 + 6;
              do
              {
                v20 = *(_BYTE *)(v19 + 1);
                v21 = *(_DWORD *)(v23
                                + 4 * ((*(_BYTE *)v19 - *(_BYTE *)(v19 + 3) + 3 * (*(_BYTE *)(v19 + 2) - v20) + 4) >> 3));
                v22 = *(_BYTE *)(v19 + 2) - v21;
                *(_BYTE *)(v19 + 1) = (~(v21 + v20) >> 31) & (-(v21 + v20 > 255) | (*(_BYTE *)(v19 + 1) + v21));
                LOBYTE(v20) = v22 > 255;
                result = ~v22 >> 31;
                *(_BYTE *)(v19 + 2) = result & ((*(_BYTE *)(v19 + 2) - v21) | -(char)v20);
                v19 += v24;
                --v18;
              }
              while ( v18 );
            }
            if ( v34 <= v28 || *(_BYTE *)(v36 + 4 * v28) & 1 )
              goto LABEL_14;
          }
          sub_6F8159E0(8 * v10 + v29, v24, v23);
          result = v25;
          if ( v27 <= v25 )
            goto LABEL_16;
          goto LABEL_14;
        }
        while ( 1 )
        {
          result = v25;
          if ( v27 <= v25 )
            break;
LABEL_14:
          v26 += 4;
          ++v25;
          ++v28;
          if ( *v26 & 1 )
            goto LABEL_5;
        }
      }
LABEL_16:
      v35 += v38;
      v30 += v39;
    }
    while ( v37 > v27 );
  }
  return result;
}
