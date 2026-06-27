signed int __cdecl sub_6F79EC60(int a1, _BYTE *a2, unsigned int a3, signed int a4, unsigned int a5)
{
  signed int result; // eax@1
  _BYTE *v6; // edi@1
  int v7; // esi@2
  int v8; // ebx@2
  int v9; // eax@9
  int v10; // ebp@11
  int v11; // eax@11
  int v12; // edx@16
  signed int v13; // edx@18
  int v14; // edx@18
  unsigned int v15; // ecx@20
  _BYTE *v16; // edx@20
  _BYTE *v17; // esi@20
  int v18; // eax@21
  signed int v19; // ebx@21
  int v20; // ecx@26
  signed int v21; // ebx@27
  signed int v22; // ebx@31
  int v23; // [sp+0h] [bp-48h]@7
  _BYTE *v24; // [sp+0h] [bp-48h]@18
  _BYTE *v25; // [sp+4h] [bp-44h]@8
  int v26; // [sp+8h] [bp-40h]@4
  int v27; // [sp+Ch] [bp-3Ch]@20
  int v28; // [sp+18h] [bp-30h]@8
  int v29; // [sp+1Ch] [bp-2Ch]@11
  int v30; // [sp+20h] [bp-28h]@8
  int v31; // [sp+24h] [bp-24h]@7
  int v32; // [sp+28h] [bp-20h]@11
  int v33; // [sp+2Ch] [bp-1Ch]@11
  int v34; // [sp+30h] [bp-18h]@11
  int v35; // [sp+34h] [bp-14h]@11

  result = 3;
  v6 = a2;
  if ( a4 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    v8 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(v8 + 4) < (unsigned int)*(_WORD *)(v7 + 2) + a4 || a5 >> 31 )
    {
      result = 3;
    }
    else
    {
      v26 = *(_WORD *)v7;
      if ( *(_DWORD *)v8 >= a5 + v26 )
      {
        v23 = *(_WORD *)(v7 + 2);
        v31 = v23 * *(_BYTE *)(a1 + 18);
        if ( a3 >= (unsigned int)&a2[(v31 * v26 + 7) >> 3] )
        {
          v28 = a4 & 7;
          v30 = *(_DWORD *)(v8 + 8);
          v25 = (_BYTE *)(*(_DWORD *)(v8 + 12) + (a4 >> 3) + a5 * v30);
          if ( *(_WORD *)v7 )
          {
            v9 = 8 - v28;
            if ( 8 - v28 > v31 )
              v9 = v23 * *(_BYTE *)(a1 + 18);
            v10 = 0;
            v32 = v9;
            v34 = ~(255 << v9);
            v35 = v31 - v9;
            v33 = 8 - v9;
            v29 = *(_WORD *)v7;
            v11 = 0;
            do
            {
              if ( a4 & 7 )
              {
                if ( v26 == v29 )
                {
                  v11 = *v6;
                  v10 = a4 & 7;
                  ++v6;
                }
                else if ( v32 <= v10 )
                {
                  LOWORD(v11) = (unsigned __int16)v11 >> 8;
                  v10 -= v32;
                }
                else
                {
                  if ( a3 > (unsigned int)v6 )
                  {
                    v12 = *v6++;
                    v11 |= v12;
                  }
                  v10 += v33;
                }
                v24 = v25 + 1;
                v13 = (unsigned __int16)v11;
                v11 <<= 8;
                *v25 |= (unsigned __int8)(v13 >> v10) & (unsigned __int8)((_BYTE)v34 << (v33 - v28));
                v14 = v35;
              }
              else
              {
                v14 = v31;
                v24 = v25;
              }
              if ( v14 <= 7 )
              {
                v17 = v6;
              }
              else
              {
                v15 = v14 - 8;
                v16 = v24;
                v27 = (v15 >> 3) + 1;
                v17 = &v6[v27];
                do
                {
                  ++v6;
                  ++v16;
                  v18 = *(v6 - 1) | v11;
                  v19 = (unsigned __int16)v18;
                  v11 = v18 << 8;
                  *(v16 - 1) |= v19 >> v10;
                }
                while ( v6 != v17 );
                v24 += v27;
                v14 = v15 + -8 * (v15 >> 3);
              }
              v6 = v17;
              if ( v14 > 0 )
              {
                if ( v10 >= v14 )
                {
                  v22 = (signed int)(unsigned __int16)v11 >> v10;
                  v10 -= v14;
                  *v24 |= (unsigned __int8)(0xFF00u >> v14) & (unsigned __int8)v22;
                }
                else
                {
                  if ( a3 > (unsigned int)v17 )
                  {
                    v20 = *v17++;
                    v11 |= v20;
                  }
                  v21 = (signed int)(unsigned __int16)v11 >> v10;
                  v11 <<= 8;
                  *v24 |= (unsigned __int8)(0xFF00u >> v14) & (unsigned __int8)v21;
                  v10 += 8 - v14;
                  v6 = v17;
                }
              }
              v25 += v30;
              --v29;
            }
            while ( v29 );
          }
          result = 0;
        }
      }
    }
  }
  return result;
}
