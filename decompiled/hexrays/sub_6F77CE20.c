void __cdecl sub_6F77CE20(int a1)
{
  int v1; // eax@2
  int v2; // ebp@4
  int v3; // eax@5
  int v4; // esi@6
  unsigned int v5; // edx@8
  unsigned int v6; // eax@8
  int v7; // eax@10
  int v8; // esi@11
  unsigned int v9; // edx@13
  unsigned int v10; // eax@13
  int v11; // eax@15
  int v12; // esi@16
  unsigned int v13; // edx@18
  unsigned int v14; // eax@18
  int v15; // eax@20
  int v16; // esi@21
  unsigned int v17; // edx@23
  unsigned int v18; // eax@23
  unsigned int v19; // edi@26
  int v20; // ebx@27
  int v21; // eax@28
  int v22; // edx@29
  int v23; // ST14_4@30
  unsigned int v24; // edx@31
  unsigned int v25; // eax@31
  int v26; // eax@36
  int v27; // ebx@36
  int v28; // eax@36
  int v29; // eax@36
  int v30; // ebx@37
  unsigned int v31; // ecx@39
  unsigned int v32; // edx@39
  int v33; // eax@41
  int v34; // eax@43
  int v35; // eax@43
  int v36; // eax@43
  int v37; // eax@43
  int v38; // eax@43
  void (__cdecl *v39)(_DWORD); // eax@43
  int v40; // [sp+18h] [bp-24h]@5
  int v41; // [sp+1Ch] [bp-20h]@2

  if ( a1 )
  {
    v41 = *(_DWORD *)(a1 + 100);
    v1 = *(_DWORD *)(a1 + 532);
    if ( v1 )
      (*(void (__cdecl **)(int))(v1 + 12))(a1);
    v2 = *(_DWORD *)(a1 + 656);
    if ( v2 )
    {
      v40 = *(_DWORD *)(v2 + 4);
      v3 = *(_DWORD *)(v2 + 84);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 28);
        if ( *(_DWORD *)(v2 + 112) )
          sub_6F772340(*(_DWORD *)(v2 + 84), (_DWORD *)(v2 + 112));
        sub_6F773D90(v4, *(_DWORD *)(v2 + 108));
        *(_DWORD *)(v2 + 84) = 0;
        *(_DWORD *)(v2 + 112) = 0;
        v5 = 0;
        v6 = (v2 + 88) & 0xFFFFFFFC;
        do
        {
          *(_DWORD *)(v6 + v5) = 0;
          v5 += 4;
        }
        while ( v5 < ((v2 + 84 - v6 + 32) & 0xFFFFFFFC) );
      }
      v7 = *(_DWORD *)(v2 + 1208);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 28);
        if ( *(_DWORD *)(v2 + 1236) )
          sub_6F772340(*(_DWORD *)(v2 + 1208), (_DWORD *)(v2 + 1236));
        sub_6F773D90(v8, *(_DWORD *)(v2 + 1232));
        *(_DWORD *)(v2 + 1208) = 0;
        *(_DWORD *)(v2 + 1236) = 0;
        v9 = 0;
        v10 = (v2 + 1212) & 0xFFFFFFFC;
        do
        {
          *(_DWORD *)(v10 + v9) = 0;
          v9 += 4;
        }
        while ( v9 < ((v2 + 1208 - v10 + 32) & 0xFFFFFFFC) );
      }
      v11 = *(_DWORD *)(v2 + 20);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 28);
        if ( *(_DWORD *)(v2 + 48) )
          sub_6F772340(*(_DWORD *)(v2 + 20), (_DWORD *)(v2 + 48));
        sub_6F773D90(v12, *(_DWORD *)(v2 + 44));
        *(_DWORD *)(v2 + 20) = 0;
        *(_DWORD *)(v2 + 48) = 0;
        v13 = 0;
        v14 = (v2 + 24) & 0xFFFFFFFC;
        do
        {
          *(_DWORD *)(v14 + v13) = 0;
          v13 += 4;
        }
        while ( v13 < ((v2 + 20 - v14 + 32) & 0xFFFFFFFC) );
      }
      v15 = *(_DWORD *)(v2 + 1176);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 28);
        if ( *(_DWORD *)(v2 + 1204) )
          sub_6F772340(*(_DWORD *)(v2 + 1176), (_DWORD *)(v2 + 1204));
        sub_6F773D90(v16, *(_DWORD *)(v2 + 1200));
        *(_DWORD *)(v2 + 1176) = 0;
        *(_DWORD *)(v2 + 1204) = 0;
        v17 = 0;
        v18 = (v2 + 1180) & 0xFFFFFFFC;
        do
        {
          *(_DWORD *)(v18 + v17) = 0;
          v17 += 4;
        }
        while ( v17 < ((v2 + 1176 - v18 + 32) & 0xFFFFFFFC) );
      }
      if ( *(_DWORD *)(v2 + 1896) )
      {
        v19 = 0;
        do
        {
          v20 = *(_DWORD *)(v2 + 4 * v19 + 1900);
          if ( v20 )
          {
            v21 = *(_DWORD *)(v20 + 536);
            if ( v21 )
            {
              v22 = *(_DWORD *)(v21 + 28);
              if ( *(_DWORD *)(v20 + 564) )
              {
                v23 = *(_DWORD *)(v21 + 28);
                sub_6F772340(*(_DWORD *)(v20 + 536), (_DWORD *)(v20 + 564));
                v22 = v23;
              }
              sub_6F773D90(v22, *(_DWORD *)(v20 + 560));
              *(_DWORD *)(v20 + 536) = 0;
              *(_DWORD *)(v20 + 564) = 0;
              v24 = 0;
              v25 = (v20 + 540) & 0xFFFFFFFC;
              do
              {
                *(_DWORD *)(v25 + v24) = 0;
                v24 += 4;
              }
              while ( v24 < ((v20 + 536 - v25 + 32) & 0xFFFFFFFC) );
            }
            sub_6F773D90(v40, *(_DWORD *)(v20 + 568));
            *(_DWORD *)(v20 + 568) = 0;
          }
          ++v19;
        }
        while ( v19 < *(_DWORD *)(v2 + 1896) );
        sub_6F773D90(v40, *(_DWORD *)(v2 + 1900));
        *(_DWORD *)(v2 + 1900) = 0;
      }
      v26 = *(_DWORD *)v2;
      *(_DWORD *)(v2 + 116) = 0;
      *(_DWORD *)(v2 + 120) = 0;
      *(_DWORD *)(v2 + 124) = 0;
      v27 = *(_DWORD *)(v26 + 28);
      sub_6F773D90(v27, *(_DWORD *)(v2 + 1164));
      v28 = *(_DWORD *)(v2 + 1160);
      *(_DWORD *)(v2 + 1164) = 0;
      *(_DWORD *)(v2 + 1168) = 0;
      sub_6F773D90(v27, v28);
      v29 = *(_DWORD *)(v2 + 1860);
      *(_DWORD *)(v2 + 1160) = 0;
      *(_DWORD *)(v2 + 1152) = 0;
      *(_DWORD *)(v2 + 1156) = 0;
      if ( v29 )
      {
        v30 = *(_DWORD *)(v29 + 28);
        if ( *(_DWORD *)(v2 + 1888) )
          sub_6F772340(v29, (_DWORD *)(v2 + 1888));
        sub_6F773D90(v30, *(_DWORD *)(v2 + 1884));
        *(_DWORD *)(v2 + 1860) = 0;
        *(_DWORD *)(v2 + 1888) = 0;
        v31 = 0;
        v32 = (v2 + 1864) & 0xFFFFFFFC;
        do
        {
          *(_DWORD *)(v32 + v31) = 0;
          v31 += 4;
        }
        while ( v31 < ((v2 + 1860 - v32 + 32) & 0xFFFFFFFC) );
      }
      sub_6F773D90(v40, *(_DWORD *)(v2 + 1892));
      v33 = *(_DWORD *)(v2 + 2932);
      *(_DWORD *)(v2 + 1892) = 0;
      if ( v33 )
        sub_6F772340(*(_DWORD *)v2, (_DWORD *)(v2 + 2932));
      v34 = *(_DWORD *)(v2 + 2960);
      *(_DWORD *)(v2 + 2936) = 0;
      *(_BYTE *)(v2 + 2924) = 0;
      *(_DWORD *)(v2 + 2928) = 0;
      sub_6F773D90(v40, v34);
      v35 = *(_DWORD *)(v2 + 1304);
      *(_DWORD *)(v2 + 2960) = 0;
      sub_6F773D90(v40, v35);
      v36 = *(_DWORD *)(v2 + 1308);
      *(_DWORD *)(v2 + 1304) = 0;
      sub_6F773D90(v40, v36);
      v37 = *(_DWORD *)(v2 + 1316);
      *(_DWORD *)(v2 + 1308) = 0;
      sub_6F773D90(v40, v37);
      v38 = *(_DWORD *)(v2 + 1320);
      *(_DWORD *)(v2 + 1316) = 0;
      sub_6F773D90(v40, v38);
      v39 = *(void (__cdecl **)(_DWORD))(v2 + 2976);
      *(_DWORD *)(v2 + 1320) = 0;
      if ( v39 )
      {
        v39(*(_DWORD *)(v2 + 2972));
        sub_6F773D90(v40, *(_DWORD *)(v2 + 2972));
        *(_DWORD *)(v2 + 2972) = 0;
      }
      sub_6F773D90(v41, *(_DWORD *)(a1 + 656));
      *(_DWORD *)(a1 + 656) = 0;
    }
  }
}
