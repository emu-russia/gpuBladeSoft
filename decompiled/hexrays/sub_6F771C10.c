signed int __cdecl sub_6F771C10(int *a1, int a2, int a3, int a4, int a5, char a6, _DWORD *a7, size_t *a8)
{
  signed int v8; // edx@1
  unsigned __int16 v10; // ax@3
  int v11; // esi@4
  unsigned __int32 v12; // eax@5
  unsigned __int32 v13; // edi@5
  unsigned __int16 v14; // ax@6
  unsigned __int16 v15; // ax@7
  char *v16; // eax@12
  char *v17; // edi@12
  size_t v18; // eax@13
  unsigned __int32 v19; // esi@16
  char *v20; // eax@23
  signed int i; // edx@24
  int v22; // [sp+20h] [bp-3Ch]@4
  signed int v23; // [sp+20h] [bp-3Ch]@14
  unsigned __int16 v24; // [sp+24h] [bp-38h]@6
  char *v25; // [sp+24h] [bp-38h]@12
  int v26; // [sp+28h] [bp-34h]@1
  int v27; // [sp+3Ch] [bp-20h]@1

  v26 = *a1;
  v8 = sub_6F771FF0(a2, a3);
  v27 = v8;
  if ( !v8 )
  {
    v10 = sub_6F772620(a2, &v27);
    v8 = v27;
    if ( !v27 )
    {
      v11 = 0;
      v22 = v10;
      while ( 1 )
      {
        v12 = sub_6F7727E0(a2, &v27);
        v8 = v27;
        v13 = v12;
        if ( v27 )
          break;
        v14 = sub_6F772620(a2, &v27);
        v8 = v27;
        v24 = v14;
        if ( v27 )
          break;
        v15 = sub_6F772620(a2, &v27);
        v8 = v27;
        if ( v27 )
          break;
        if ( v13 == a5 )
        {
          *a8 = v24 + 1;
          v8 = sub_6F771FF0(a2, a3 + v15);
          v27 = v8;
          if ( !v8 )
          {
            v16 = sub_6F773B30(v26, 8, 0, *a8, 0, &v27);
            v8 = v27;
            v17 = v16;
            v25 = v16;
            if ( !v27 )
            {
              v18 = *a8;
              if ( (signed int)*a8 <= 0 )
              {
LABEL_21:
                if ( a6 )
                {
                  qsort(v25, v18, 8u, (int (__cdecl *)(const void *, const void *))sub_6F770EB0);
                  v18 = *a8;
                }
                v20 = sub_6F773B30(v26, 4, 0, v18, 0, &v27);
                if ( !v27 )
                {
                  for ( i = 0; (signed int)*a8 > i; ++i )
                    *(_DWORD *)&v20[4 * i] = *(_DWORD *)&v25[8 * i + 4] + a4;
                  v27 = 0;
                  *a7 = v20;
                }
              }
              else
              {
                v23 = 0;
                while ( 1 )
                {
                  *(_WORD *)v17 = sub_6F772620(a2, &v27);
                  if ( v27 )
                    break;
                  v27 = sub_6F772040(a2, 2);
                  if ( v27 )
                    break;
                  v19 = sub_6F7727E0(a2, &v27);
                  if ( v27 )
                    break;
                  v27 = sub_6F772040(a2, 4);
                  if ( v27 )
                    break;
                  ++v23;
                  *((_DWORD *)v17 + 1) = v19 & 0xFFFFFF;
                  v17 += 8;
                  v18 = *a8;
                  if ( (signed int)*a8 <= v23 )
                    goto LABEL_21;
                }
              }
              sub_6F773D90(v26, (int)v25);
              v8 = v27;
            }
          }
          return v8;
        }
        if ( v22 < ++v11 )
          return 1;
      }
    }
  }
  return v8;
}
