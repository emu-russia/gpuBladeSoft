int __cdecl sub_6F810490(int a1, _DWORD *a2)
{
  unsigned int v2; // edi@1
  signed int v3; // ebp@3
  int v4; // ebx@3
  signed __int64 v5; // rax@3
  int v6; // ecx@3
  int v7; // eax@4
  int v8; // eax@4
  int result; // eax@4
  unsigned int v10; // eax@8
  unsigned int v11; // edx@8
  unsigned int v12; // ecx@8
  unsigned int v13; // ebx@8
  unsigned int v14; // edx@8
  unsigned int v15; // eax@8
  unsigned int v16; // ecx@8
  int v17; // edx@8
  signed int v18; // ebp@8
  signed int v19; // edi@8
  signed int v20; // ecx@8
  unsigned int v21; // ecx@8
  signed int v22; // ebp@8
  signed int v23; // ecx@8
  signed int v24; // ebx@8
  int v25; // eax@10
  int v26; // ebp@10
  unsigned int v27; // ecx@10
  unsigned int v28; // ebp@10
  unsigned int v29; // ebx@10

  v2 = *(_DWORD *)(a1 + 175164);
  if ( !v2 )
  {
    if ( *(_DWORD *)(a1 + 175112) )
    {
      v3 = *(_DWORD *)(a1 + 175184);
      v4 = (unsigned __int8)(*(_BYTE *)(a1 + 175191) >> 7);
      v5 = 0x7FFFFFFFFFFFi64;
      v6 = (unsigned __int8)(*(_BYTE *)(a1 + 175191) >> 7);
      if ( v3 <= 385875967 )
      {
        v5 = sub_6F809680(__PAIR__((__PAIR__((unsigned int)(2 * v3), 0) + 3458764513820540928i64) >> 32, 0));
        if ( SHIDWORD(v5) > 0x7FFF )
          v5 = 0x7FFFFFFFFFFFi64;
        v3 = *(_DWORD *)(a1 + 175184);
        v2 = *(_DWORD *)(a1 + 175164);
        v6 = (unsigned __int8)(*(_BYTE *)(a1 + 175191) >> 7);
      }
      *(_QWORD *)(a1 + 8 * v4 + 175232) += v5;
      ++*(_DWORD *)(a1 + 4 * v4 + 175208);
      v7 = *(_DWORD *)(a1 + 175188) & 0x7FFFFFFF;
      *(_DWORD *)(a1 + 175216) += v7;
      v8 = (v6 << 31) | v7;
      *(_BYTE *)(a1 + v2 + 175116) = v8;
      *(_BYTE *)(a1 + v2 + 175117) = (unsigned __int64)v8 >> 8;
      *(_BYTE *)(a1 + v2 + 175118) = (unsigned __int64)v8 >> 16;
      *(_BYTE *)(a1 + v2 + 175119) = (unsigned __int64)v8 >> 24;
      *(_BYTE *)(a1 + v2 + 175120) = v3;
      *(_BYTE *)(a1 + v2 + 175121) = (unsigned __int64)v3 >> 8;
      *(_BYTE *)(a1 + v2 + 175123) = (unsigned __int64)v3 >> 24;
      result = v2 + 8;
      *(_BYTE *)(a1 + v2 + 175122) = (unsigned __int64)v3 >> 16;
      *(_DWORD *)(a1 + 175164) = v2 + 8;
    }
    else
    {
      LOWORD(v2) = 4;
      *(_BYTE *)(a1 + 795) = sub_6F80DD90(a1, 0, 0);
      v25 = *(_DWORD *)(a1 + 175164);
      *(_BYTE *)(a1 + 794) = 1;
      *(_DWORD *)(a1 + 175112) = 1;
      *(_DWORD *)(a1 + 175216) = 0;
      *(_DWORD *)(a1 + 175212) = 0;
      v26 = a1 + v25 + 175124;
      *(_DWORD *)(a1 + 175208) = 0;
      *(_DWORD *)(a1 + 175240) = 0;
      *(_DWORD *)(a1 + 175244) = 0;
      *(_DWORD *)(a1 + 175232) = 0;
      *(_DWORD *)(a1 + 175236) = 0;
      *(_BYTE *)(a1 + v25 + 175116) = 79;
      *(_BYTE *)(a1 + v25 + 175117) = 84;
      v27 = (a1 + v25 + 175128) & 0xFFFFFFFC;
      *(_BYTE *)(a1 + v25 + 175118) = 50;
      *(_BYTE *)(a1 + v25 + 175119) = 80;
      *(_BYTE *)(a1 + v25 + 175120) = 1;
      *(_BYTE *)(a1 + v25 + 175121) = 0;
      *(_BYTE *)(a1 + v25 + 175122) = 0;
      *(_BYTE *)(a1 + v25 + 175123) = 0;
      *(_DWORD *)(a1 + 175164) = v25 + 8;
      *(_DWORD *)v26 = 0;
      *(_DWORD *)(v26 + 26) = 0;
      *(_DWORD *)v27 = 0;
      v28 = (v26 - v27 + 30) & 0xFFFFFFFC;
      v29 = ((v28 - 1) >> 2) & 7;
      if ( v2 < v28 )
      {
        if ( !v29 )
          goto LABEL_32;
        if ( v29 != 1 )
        {
          if ( v29 != 2 )
          {
            if ( v29 != 3 )
            {
              if ( v29 != 4 )
              {
                if ( v29 != 5 )
                {
                  if ( v29 != 6 )
                  {
                    *(_DWORD *)(v27 + 4) = 0;
                    v2 = 8;
                  }
                  *(_DWORD *)(v27 + v2) = 0;
                  v2 += 4;
                }
                *(_DWORD *)(v27 + v2) = 0;
                v2 += 4;
              }
              *(_DWORD *)(v27 + v2) = 0;
              v2 += 4;
            }
            *(_DWORD *)(v27 + v2) = 0;
            v2 += 4;
          }
          *(_DWORD *)(v27 + v2) = 0;
          v2 += 4;
        }
        *(_DWORD *)(v27 + v2) = 0;
        v2 += 4;
        if ( v2 < v28 )
        {
LABEL_32:
          do
          {
            *(_DWORD *)(v27 + v2) = 0;
            *(_DWORD *)(v27 + v2 + 4) = 0;
            *(_DWORD *)(v27 + v2 + 8) = 0;
            *(_DWORD *)(v27 + v2 + 12) = 0;
            *(_DWORD *)(v27 + v2 + 16) = 0;
            *(_DWORD *)(v27 + v2 + 20) = 0;
            *(_DWORD *)(v27 + v2 + 24) = 0;
            *(_DWORD *)(v27 + v2 + 28) = 0;
            v2 += 32;
          }
          while ( v2 < v28 );
        }
      }
      result = v25 + 38;
      *(_DWORD *)(a1 + 175164) = result;
    }
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 51588) == 0x7FFFFFFF && v2 != 38 )
  {
    v10 = *(_DWORD *)(a1 + 175208);
    v11 = *(_DWORD *)(a1 + 175212);
    *(_BYTE *)(a1 + 175116) = 79;
    *(_BYTE *)(a1 + 175117) = 84;
    *(_BYTE *)(a1 + 175118) = 50;
    *(_BYTE *)(a1 + 175119) = 80;
    *(_BYTE *)(a1 + 175124) = v10;
    *(_BYTE *)(a1 + 175128) = v11;
    *(_BYTE *)(a1 + 175120) = 1;
    *(_BYTE *)(a1 + 175121) = 0;
    *(_BYTE *)(a1 + 175125) = (unsigned __int64)v10 >> 8;
    *(_BYTE *)(a1 + 175122) = 0;
    *(_BYTE *)(a1 + 175126) = (unsigned __int64)v10 >> 16;
    *(_BYTE *)(a1 + 175123) = 0;
    *(_BYTE *)(a1 + 175127) = (unsigned __int64)v10 >> 24;
    v12 = v11;
    *(_BYTE *)(a1 + 175129) = (unsigned __int64)v11 >> 8;
    v13 = v11;
    v14 = *(_DWORD *)(a1 + 175216);
    *(_BYTE *)(a1 + 175131) = (unsigned __int64)v12 >> 24;
    *(_BYTE *)(a1 + 175130) = (unsigned __int64)v13 >> 16;
    *(_BYTE *)(a1 + 175132) = v14;
    *(_BYTE *)(a1 + 175135) = (unsigned __int64)v14 >> 24;
    *(_BYTE *)(a1 + 175137) = *(_DWORD *)(a1 + 174948);
    *(_BYTE *)(a1 + 175133) = (unsigned __int64)v14 >> 8;
    v15 = v14;
    v16 = *(_DWORD *)(a1 + 175232);
    v17 = *(_DWORD *)(a1 + 174944);
    v18 = *(_DWORD *)(a1 + 175236);
    *(_BYTE *)(a1 + 175138) = v16;
    *(_BYTE *)(a1 + 175134) = (unsigned __int64)v15 >> 16;
    *(_BYTE *)(a1 + 175136) = v17;
    LOWORD(v15) = v18;
    v19 = v18;
    *(_BYTE *)(a1 + 175139) = BYTE1(v16);
    LOBYTE(v13) = __PAIR__((unsigned int)v18, v16) >> 16;
    *(_BYTE *)(a1 + 175141) = __PAIR__((unsigned int)v18, v16) >> 24;
    v20 = v18;
    v18 >>= 31;
    *(_BYTE *)(a1 + 175140) = v13;
    *(_BYTE *)(a1 + 175142) = v15;
    *(_BYTE *)(a1 + 175145) = __PAIR__((unsigned int)v18, v20) >> 24;
    v21 = *(_DWORD *)(a1 + 175240);
    *(_BYTE *)(a1 + 175143) = BYTE1(v15);
    *(_DWORD *)(a1 + 175164) = 38;
    LOBYTE(v15) = __PAIR__((unsigned int)v18, v19) >> 16;
    v22 = *(_DWORD *)(a1 + 175244);
    *(_BYTE *)(a1 + 175146) = v21;
    *(_BYTE *)(a1 + 175144) = v15;
    LOBYTE(v17) = v22;
    *(_BYTE *)(a1 + 175147) = BYTE1(v21);
    *(_BYTE *)(a1 + 175148) = __PAIR__((unsigned int)v22, v21) >> 16;
    *(_BYTE *)(a1 + 175149) = __PAIR__((unsigned int)v22, v21) >> 24;
    BYTE1(v15) = BYTE1(v22);
    v23 = v22;
    v24 = v22;
    v22 >>= 31;
    *(_BYTE *)(a1 + 175151) = BYTE1(v15);
    *(_BYTE *)(a1 + 175150) = v17;
    result = 38;
    *(_BYTE *)(a1 + 175152) = __PAIR__((unsigned int)v22, v24) >> 16;
    *(_BYTE *)(a1 + 175153) = __PAIR__((unsigned int)v22, v23) >> 24;
LABEL_5:
    *a2 = a1 + 175116;
    return result;
  }
  result = 0;
  *a2 = 0;
  return result;
}
