signed int __cdecl sub_6F7BF630(int a1, int *a2, unsigned int a3)
{
  int v3; // edx@1
  int v4; // esi@2
  signed int result; // eax@2
  __int16 v6; // di@5
  unsigned int v7; // ecx@5
  unsigned int v8; // edx@6
  unsigned int v9; // ecx@6
  signed int v10; // ebp@6
  int v11; // edx@8
  int v12; // eax@8
  unsigned int v13; // edi@9
  signed int v14; // ebp@11
  int v15; // ecx@11
  signed int v16; // edx@11
  char *v17; // eax@12
  char *v18; // edx@12
  char *v19; // edi@14
  int v20; // eax@14
  int v21; // ecx@14
  char *v22; // ebp@14
  int v23; // edx@15
  char *v24; // eax@16
  char v25; // cl@17
  int v26; // ecx@20
  int v27; // edx@21
  int v28; // ecx@21
  int v29; // ebx@21
  int v30; // eax@21
  int v31; // eax@25
  int v32; // [sp+2Ch] [bp-30h]@8
  int v33; // [sp+2Ch] [bp-30h]@16
  int v34; // [sp+3Ch] [bp-20h]@1

  v34 = 0;
  v3 = *a2;
  if ( !*a2 )
    return 35;
  v4 = *(_DWORD *)(v3 + 132);
  result = 6;
  if ( v4 && *(_DWORD *)(v3 + 16) > a3 )
  {
    if ( a3 )
    {
      v6 = *(_WORD *)(v4 + 4);
      v7 = a3 - 1;
      if ( v6 != 768 )
      {
LABEL_6:
        v8 = 4 * v7 + 118;
        v9 = *(_DWORD *)(v4 + 8);
        v10 = 2;
LABEL_7:
        if ( v9 - 2 - v10 <= v8
          || ((v11 = *(_DWORD *)(v4 + 160) + v8,
               v32 = *(_DWORD *)(v4 + 160),
               v12 = (unsigned __int16)(*(_BYTE *)v11 | (unsigned __int16)(*(_BYTE *)(v11 + 1) << 8)),
               *(_DWORD *)(a1 + 80) = v12,
               v6 == 768) ? (v13 = *(_DWORD *)(v11 + 2)) : (v13 = (unsigned __int16)(*(_BYTE *)(v11 + 2) | (unsigned __int16)(*(_BYTE *)(v11 + 3) << 8))),
              v13 >= v9
           || (v14 = (unsigned int)(v12 + 7) >> 3,
               v15 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 100),
               v16 = *(_WORD *)(v4 + 96),
               *(_BYTE *)(a1 + 94) = 1,
               *(_DWORD *)(a1 + 84) = v14,
               *(_DWORD *)(a1 + 76) = v16,
               v13 + v16 * v14 > *(_DWORD *)(v4 + 8))) )
        {
          result = 3;
        }
        else
        {
          v17 = sub_6F773B30(v15, v16, 0, v14, 0, &v34);
          v18 = v17;
          *(_DWORD *)(a1 + 88) = v17;
          result = v34;
          if ( !v34 )
          {
            if ( v14 )
            {
              v19 = (char *)(v32 + v13);
              v20 = *(_DWORD *)(a1 + 76);
              v21 = (int)&v18[v14];
              v22 = v18;
              do
              {
                v23 = (int)&v19[v20];
                if ( v19 < &v19[v20] )
                {
                  v24 = v22;
                  v33 = v21;
                  do
                  {
                    v25 = *v19++;
                    *v24 = v25;
                    v24 += *(_DWORD *)(a1 + 84);
                  }
                  while ( (char *)v23 != v19 );
                  v21 = v33;
                  v20 = *(_DWORD *)(a1 + 76);
                  v19 = (char *)v23;
                }
                ++v22;
              }
              while ( (char *)v21 != v22 );
              v26 = v20;
            }
            else
            {
              v26 = *(_DWORD *)(a1 + 76);
            }
            v27 = *(_DWORD *)(a1 + 80);
            v28 = v26 << 6;
            v29 = a1 + 24;
            *(_DWORD *)(*(_DWORD *)(a1 + 156) + 4) = 1;
            v30 = *(_WORD *)(v4 + 80);
            v27 <<= 6;
            *(_DWORD *)(v29 + 76) = 0;
            *(_DWORD *)(v29 + 48) = 1651078259;
            *(_DWORD *)v29 = v27;
            *(_DWORD *)(v29 + 4) = v28;
            *(_DWORD *)(v29 + 16) = v27;
            *(_DWORD *)(v29 + 8) = 0;
            *(_DWORD *)(v29 + 80) = v30;
            *(_DWORD *)(v29 + 12) = v30 << 6;
            sub_6F76C600(a1 + 24, v28);
            result = v34;
          }
        }
        return result;
      }
    }
    else
    {
      v6 = *(_WORD *)(v4 + 4);
      v7 = *(_BYTE *)(v4 + 106);
      if ( v6 != 768 )
        goto LABEL_6;
    }
    v31 = 3 * v7;
    v10 = 4;
    v9 = *(_DWORD *)(v4 + 8);
    v8 = 2 * v31 + 148;
    goto LABEL_7;
  }
  return result;
}
