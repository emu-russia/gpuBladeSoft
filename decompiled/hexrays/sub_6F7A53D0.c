signed int __cdecl sub_6F7A53D0(int a1, const char *a2, int a3)
{
  int v3; // ebp@1
  int v4; // edi@1
  signed int result; // eax@5
  size_t v6; // eax@7
  size_t v7; // esi@7
  int v8; // ecx@8
  int v9; // esi@9
  int v10; // edx@9
  int v11; // ebx@9
  __int16 v12; // di@11
  unsigned __int16 v13; // ax@11
  int v14; // edx@14
  unsigned int v15; // ecx@14
  unsigned int v16; // ebx@14
  unsigned int v17; // eax@16
  unsigned int v18; // ecx@16
  unsigned int v19; // ebx@20
  signed int v20; // eax@23
  int v21; // edx@23
  int j; // edx@26
  int v23; // edi@27
  size_t v24; // ebp@28
  unsigned __int32 v25; // eax@28
  int v26; // eax@30
  unsigned __int16 v27; // di@31
  void *v28; // eax@38
  int v29; // ecx@41
  unsigned int v30; // ecx@43
  unsigned int v31; // edx@44
  unsigned int v32; // ecx@44
  int v33; // ebx@48
  __int16 v34; // ax@49
  int v35; // [sp+1Ch] [bp-30h]@2
  int v36; // [sp+1Ch] [bp-30h]@21
  unsigned __int32 v37; // [sp+1Ch] [bp-30h]@28
  unsigned int v38; // [sp+20h] [bp-2Ch]@7
  unsigned __int32 v39; // [sp+20h] [bp-2Ch]@41
  unsigned int i; // [sp+20h] [bp-2Ch]@48
  __int16 v41; // [sp+24h] [bp-28h]@9
  unsigned int v42; // [sp+24h] [bp-28h]@48
  int v43; // [sp+28h] [bp-24h]@30
  int v44; // [sp+2Ch] [bp-20h]@30

  v3 = a1;
  v4 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)a3 = 0;
  if ( !*(_BYTE *)(a1 + 780) )
  {
    v14 = *(_DWORD *)(a1 + 104);
    *(_DWORD *)(a1 + 760) = 0;
    v15 = 0;
    v16 = (a1 + 764) & 0xFFFFFFFC;
    *(_DWORD *)(a1 + 780) = 0;
    do
    {
      *(_DWORD *)(v16 + v15) = 0;
      v15 += 4;
    }
    while ( v15 < ((a1 + 760 - v16 + 24) & 0xFFFFFFFC) );
    v17 = *(_DWORD *)(a1 + 156);
    v18 = v17 + 16 * *(_WORD *)(a1 + 152);
    if ( v17 < v18 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)v17 == 1111770656 )
        {
          v19 = *(_DWORD *)(v17 + 12);
          if ( v19 )
            break;
        }
        v17 += 16;
        if ( v18 <= v17 )
          return 8;
      }
      v36 = v14;
      if ( !sub_6F771FF0(v14, *(_DWORD *)(v17 + 8)) && v19 > 7 )
      {
        v20 = sub_6F772240(v36, v19, (int *)(a1 + 760));
        v21 = v36;
        if ( !v20 )
        {
          v29 = *(_DWORD *)(a1 + 760);
          *(_DWORD *)(a1 + 764) = v19 + v29;
          v39 = _byteswap_ulong(*(_DWORD *)(v29 + 4));
          v35 = v29;
          if ( _byteswap_ushort(*(_WORD *)v29) == 1 && v39 > 7 )
          {
            v30 = _byteswap_ushort(*(_WORD *)(v29 + 2));
            if ( v30 <= (v39 - 8) >> 2 && v39 + 1 <= v19 )
            {
              *(_DWORD *)(a1 + 776) = v30;
              v42 = v39 + v35;
              *(_DWORD *)(a1 + 768) = v39 + v35;
              *(_DWORD *)(a1 + 772) = v19 - v39;
              v33 = v35 + 8;
              for ( i = v35 + 8 + 4 * v30; v30; i += 10 * (unsigned __int16)((v34 << 8) | *(_BYTE *)(v33 - 1)) )
              {
                v34 = *(_BYTE *)(v33 + 2);
                v33 += 4;
                --v30;
              }
              if ( v42 >= i )
              {
                *(_BYTE *)(a1 + 780) = 1;
                goto LABEL_3;
              }
            }
          }
          sub_6F772340(v21, (_DWORD *)(a1 + 760));
          *(_DWORD *)(a1 + 760) = 0;
          v31 = 0;
          *(_DWORD *)(a1 + 780) = 0;
          v32 = (a1 + 764) & 0xFFFFFFFC;
          do
          {
            *(_DWORD *)(v32 + v31) = 0;
            v31 += 4;
          }
          while ( v31 < ((a1 + 760 - v32 + 24) & 0xFFFFFFFC) );
        }
      }
    }
    return 8;
  }
  v35 = *(_DWORD *)(a1 + 760);
LABEL_3:
  if ( !v4 || !a2 )
    return 6;
  v6 = strlen(a2);
  v7 = v6;
  v38 = v6;
  result = 6;
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 776);
    if ( v8 )
    {
      v9 = v35 + 4 * v8 + 8;
      v10 = v35 + 12;
      v41 = *(_WORD *)(v4 + 14);
      v11 = _byteswap_ushort(*(_WORD *)(v35 + 10));
      if ( _byteswap_ushort(*(_WORD *)(v35 + 8)) != v41 )
      {
        do
        {
          --v8;
          v9 += 10 * v11;
          if ( !v8 )
            return 6;
          v12 = *(_BYTE *)v10;
          v13 = *(_BYTE *)(v10 + 1);
          v10 += 4;
          v11 = (unsigned __int16)(*(_BYTE *)(v10 - 1) | (unsigned __int16)(*(_BYTE *)(v10 - 2) << 8));
        }
        while ( (v13 | (unsigned __int16)(v12 << 8)) != v41 );
        v3 = a1;
      }
      for ( j = v3; v11; --v11 )
      {
        v23 = *(_BYTE *)(v9 + 5) | (*(_BYTE *)(v9 + 4) << 8);
        if ( _byteswap_ushort(*(_WORD *)(v9 + 4)) & 0x10 )
        {
          v24 = *(_DWORD *)(j + 772);
          v25 = _byteswap_ulong(*(_DWORD *)v9);
          v37 = _byteswap_ulong(*(_DWORD *)(v9 + 6));
          if ( v25 < v24 && v38 < v24 - v25 )
          {
            v43 = j;
            v44 = *(_DWORD *)(j + 768);
            v26 = strncmp(a2, (const char *)(v44 + v25), v24 - v25);
            j = v43;
            if ( !v26 )
            {
              v27 = v23 & 0xF;
              if ( v27 == 2 )
              {
                *(_DWORD *)a3 = 2;
                *(_DWORD *)(a3 + 4) = v37;
                return 0;
              }
              if ( v27 < 2u )
              {
                if ( v37 < v24 )
                {
                  v28 = memchr((const void *)(v37 + v44), 0, v24);
                  j = v43;
                  if ( v28 )
                  {
                    *(_DWORD *)a3 = 1;
                    *(_DWORD *)(a3 + 4) = v37 + v44;
                    return 0;
                  }
                }
              }
              else if ( v27 == 3 )
              {
                *(_DWORD *)a3 = 3;
                *(_DWORD *)(a3 + 4) = v37;
                return 0;
              }
            }
          }
        }
        v9 += 10;
      }
      return 6;
    }
  }
  return result;
}
