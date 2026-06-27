signed int __cdecl sub_6F7A6680(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi@1
  int v4; // edx@2
  signed int result; // eax@3
  int v6; // esi@5
  int v7; // ebp@6
  int v8; // ecx@6
  int v9; // ebx@6
  int v10; // eax@6
  __int16 v11; // dx@6
  int v12; // eax@8
  int v13; // ebx@8
  int v14; // eax@8
  int v15; // edx@11
  int v16; // eax@11
  size_t v17; // edx@12
  unsigned __int32 v18; // edi@12
  int v19; // ecx@13
  _BYTE *v20; // edi@14
  const char *v21; // esi@16
  bool v22; // cf@16
  bool v23; // zf@16
  unsigned __int16 v24; // ax@20
  unsigned int v25; // ecx@24
  int v26; // esi@24
  unsigned int v27; // edx@24
  unsigned int v28; // eax@26
  unsigned int v29; // edx@26
  unsigned int v30; // ebx@30
  unsigned __int32 v31; // ebp@42
  unsigned int v32; // ecx@44
  unsigned int v33; // edx@45
  unsigned int v34; // ecx@45
  int v35; // ebx@49
  unsigned int v36; // ecx@49
  unsigned int v37; // ebp@50
  __int16 v38; // ax@51
  int v39; // [sp+14h] [bp-38h]@10
  int v40; // [sp+14h] [bp-38h]@24
  unsigned __int32 v41; // [sp+18h] [bp-34h]@12
  unsigned int v42; // [sp+18h] [bp-34h]@44
  int v43; // [sp+1Ch] [bp-30h]@14
  unsigned int v44; // [sp+1Ch] [bp-30h]@49
  int v45; // [sp+28h] [bp-24h]@22
  int v46; // [sp+2Ch] [bp-20h]@41

  v3 = *(_DWORD *)(a1 + 88);
  if ( !*(_BYTE *)(a1 + 780) )
  {
    v25 = 0;
    v40 = *(_DWORD *)(a1 + 104);
    v26 = a1 + 760;
    *(_DWORD *)v26 = 0;
    *(_DWORD *)(v26 + 20) = 0;
    v27 = (a1 + 764) & 0xFFFFFFFC;
    do
    {
      *(_DWORD *)(v27 + v25) = 0;
      v25 += 4;
    }
    while ( v25 < ((a1 + 760 - v27 + 24) & 0xFFFFFFFC) );
    v28 = *(_DWORD *)(a1 + 156);
    v29 = v28 + 16 * *(_WORD *)(a1 + 152);
    if ( v28 < v29 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)v28 == 1111770656 )
        {
          v30 = *(_DWORD *)(v28 + 12);
          if ( v30 )
            break;
        }
        v28 += 16;
        if ( v29 <= v28 )
          return 8;
      }
      if ( !sub_6F771FF0(v40, *(_DWORD *)(v28 + 8)) && v30 > 7 && !sub_6F772240(v40, v30, (int *)v26) )
      {
        v4 = *(_DWORD *)(a1 + 760);
        *(_DWORD *)(a1 + 764) = v4 + v30;
        v31 = _byteswap_ulong(*(_DWORD *)(v4 + 4));
        if ( _byteswap_ushort(*(_WORD *)v4) == 1 && v31 > 7 )
        {
          v32 = _byteswap_ushort(*(_WORD *)(v4 + 2));
          v42 = v32;
          if ( v32 <= (v31 - 8) >> 2 && v31 + 1 <= v30 )
          {
            *(_DWORD *)(a1 + 776) = v32;
            v44 = v4 + v31;
            *(_DWORD *)(a1 + 768) = v4 + v31;
            *(_DWORD *)(a1 + 772) = v30 - v31;
            v35 = v4 + 8;
            v36 = v4 + 8 + 4 * v32;
            if ( v42 )
            {
              v37 = v42;
              do
              {
                v38 = *(_BYTE *)(v35 + 2);
                v35 += 4;
                --v37;
                v36 += 10 * (unsigned __int16)((v38 << 8) | *(_BYTE *)(v35 - 1));
              }
              while ( v37 );
            }
            if ( v36 <= v44 )
            {
              *(_BYTE *)(a1 + 780) = 1;
              goto LABEL_3;
            }
          }
        }
        sub_6F772340(v40, (_DWORD *)v26);
        v33 = 0;
        v34 = (a1 + 764) & 0xFFFFFFFC;
        *(_DWORD *)(a1 + 760) = 0;
        *(_DWORD *)(a1 + 780) = 0;
        do
        {
          *(_DWORD *)(v34 + v33) = 0;
          v33 += 4;
        }
        while ( v33 < ((v26 - v34 + 24) & 0xFFFFFFFC) );
      }
    }
    return 8;
  }
  v4 = *(_DWORD *)(a1 + 760);
LABEL_3:
  result = 6;
  if ( v3 )
  {
    v6 = *(_DWORD *)(a1 + 776);
    if ( v6 )
    {
      v7 = v4 + 4 * v6 + 8;
      v8 = v4 + 12;
      v9 = _byteswap_ushort(*(_WORD *)(v4 + 10));
      v10 = *(_BYTE *)(v4 + 9) | (*(_BYTE *)(v4 + 8) << 8);
      v11 = *(_WORD *)(v3 + 14);
      if ( (_WORD)v10 != v11 )
      {
        do
        {
          --v6;
          v7 += 10 * v9;
          if ( !v6 )
            goto LABEL_23;
          v12 = *(_BYTE *)v8;
          v13 = *(_BYTE *)(v8 + 1);
          v8 += 4;
          v14 = v13 | (v12 << 8);
          v9 = (unsigned __int16)(*(_BYTE *)(v8 - 1) | (unsigned __int16)(*(_BYTE *)(v8 - 2) << 8));
        }
        while ( (_WORD)v14 != v11 );
      }
      if ( v9 )
      {
        v39 = v9;
        do
        {
          v15 = *(_BYTE *)(v7 + 5);
          v16 = v15 | (*(_BYTE *)(v7 + 4) << 8);
          if ( v15 & 0x10 )
          {
            v41 = _byteswap_ulong(*(_DWORD *)(v7 + 6));
            v17 = *(_DWORD *)(a1 + 772);
            v18 = _byteswap_ulong(*(_DWORD *)v7);
            if ( v18 < v17 )
            {
              v19 = v17 - v18;
              if ( v17 - v18 > 0x10 )
              {
                v20 = (_BYTE *)(*(_DWORD *)(a1 + 768) + v18);
                v43 = *(_DWORD *)(a1 + 768);
                if ( v19 > 17 )
                  v19 = 17;
                v21 = "CHARSET_REGISTRY";
                v22 = 0;
                v23 = 1;
                do
                {
                  if ( !v19 )
                    break;
                  v22 = (const unsigned __int8)*v21 < *v20;
                  v23 = *v21++ == *v20++;
                  --v19;
                }
                while ( v23 );
                if ( (!v22 && !v23) == v22 )
                {
                  v24 = v16 & 0xF;
                  if ( v24 <= 1u )
                  {
                    if ( v41 < v17 && memchr((const void *)(v41 + v43), 0, v17) )
                    {
                      result = sub_6F7A53D0(a1, "CHARSET_ENCODING", (int)&v45);
                      if ( result )
                        return result;
                      if ( v45 == 1 )
                      {
                        *a2 = v46;
                        *a3 = v41 + v43;
                        return result;
                      }
                      break;
                    }
                  }
                  else if ( v24 <= 3u )
                  {
                    result = sub_6F7A53D0(a1, "CHARSET_ENCODING", (int)&v45);
                    if ( result )
                      return result;
                    break;
                  }
                }
              }
            }
          }
          v7 += 10;
          --v39;
        }
        while ( v39 );
      }
LABEL_23:
      result = 6;
    }
  }
  return result;
}
