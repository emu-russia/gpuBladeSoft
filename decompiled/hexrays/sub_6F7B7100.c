int __usercall sub_6F7B7100@<eax>(int a1@<eax>, signed int a2@<edx>, unsigned int a3@<ecx>)
{
  int v3; // esi@1
  void *v4; // ebx@1
  int v5; // ebp@1
  int result; // eax@5
  char *v7; // eax@10
  char *v8; // edi@10
  unsigned int v9; // edx@11
  int v10; // esi@12
  int v11; // eax@12
  unsigned int v12; // esi@30
  char *v13; // eax@33
  char *v14; // ebp@33
  int v15; // ecx@40
  int v16; // eax@50
  unsigned int v17; // [sp+28h] [bp-34h]@7
  int v18; // [sp+28h] [bp-34h]@12
  unsigned int v19; // [sp+28h] [bp-34h]@33
  signed int v20; // [sp+28h] [bp-34h]@53
  unsigned int v21; // [sp+2Ch] [bp-30h]@7
  unsigned int v22; // [sp+2Ch] [bp-30h]@53
  int v23; // [sp+3Ch] [bp-20h]@1

  v3 = a1;
  v4 = *(void **)(a1 + 528);
  v5 = *(_DWORD *)(a1 + 100);
  v23 = 0;
  if ( !v4 )
  {
    v22 = a3;
    v20 = a2;
    v4 = sub_6F773A50(v5, 420, &v23);
    result = v23;
    if ( v23 )
      return result;
    *((_DWORD *)v4 + 104) = 0;
    a3 = v22;
    *(_DWORD *)(v3 + 528) = v4;
    a2 = v20;
  }
  if ( a2 )
  {
    if ( *(_DWORD *)v4 )
    {
      if ( a2 != *(_DWORD *)v4 )
        return 3;
    }
    else
    {
      v17 = a2;
      v21 = a3;
      *((_DWORD *)v4 + 37) = sub_6F773B30(v5, 32, 0, a2, 0, &v23);
      result = v23;
      if ( v23 )
        return result;
      *((_DWORD *)v4 + 54) = sub_6F773B30(v5, 196, 0, v17, 0, &v23);
      result = v23;
      if ( v23 )
        return result;
      *((_DWORD *)v4 + 72) = sub_6F773B30(v5, 16, 0, v17, 0, &v23);
      result = v23;
      if ( v23 )
        return result;
      v7 = sub_6F773B30(v5, 4, 0, 2 * v17, 0, &v23);
      v8 = v7;
      *((_DWORD *)v4 + 34) = v7;
      result = v23;
      if ( v23 )
        return result;
      v9 = v17;
      a3 = v21;
      *((_DWORD *)v4 + 35) = &v8[4 * v17];
      *((_DWORD *)v4 + 36) = v3 + 132;
      *((_DWORD *)v4 + 71) = v3 + 460;
      *((_DWORD *)v4 + 53) = v3 + 168;
      if ( v17 > 1 )
      {
        v10 = *((_DWORD *)v4 + 37);
        v18 = *((_DWORD *)v4 + 72);
        v11 = *((_DWORD *)v4 + 54);
        *((_DWORD *)v4 + 38) = v10 + 32;
        *((_DWORD *)v4 + 55) = v11 + 196;
        *((_DWORD *)v4 + 73) = v18 + 16;
        if ( v9 != 2 )
        {
          *((_DWORD *)v4 + 39) = v10 + 64;
          *((_DWORD *)v4 + 56) = v11 + 392;
          *((_DWORD *)v4 + 74) = v18 + 32;
          if ( v9 != 3 )
          {
            *((_DWORD *)v4 + 40) = v10 + 96;
            *((_DWORD *)v4 + 57) = v11 + 588;
            *((_DWORD *)v4 + 75) = v18 + 48;
            if ( v9 != 4 )
            {
              *((_DWORD *)v4 + 41) = v10 + 128;
              *((_DWORD *)v4 + 58) = v11 + 784;
              *((_DWORD *)v4 + 76) = v18 + 64;
              if ( v9 != 5 )
              {
                *((_DWORD *)v4 + 42) = v10 + 160;
                *((_DWORD *)v4 + 59) = v11 + 980;
                *((_DWORD *)v4 + 77) = v18 + 80;
                if ( v9 != 6 )
                {
                  *((_DWORD *)v4 + 43) = v10 + 192;
                  *((_DWORD *)v4 + 60) = v11 + 1176;
                  *((_DWORD *)v4 + 78) = v18 + 96;
                  if ( v9 != 7 )
                  {
                    *((_DWORD *)v4 + 44) = v10 + 224;
                    *((_DWORD *)v4 + 61) = v11 + 1372;
                    *((_DWORD *)v4 + 79) = v18 + 112;
                    if ( v9 != 8 )
                    {
                      *((_DWORD *)v4 + 45) = v10 + 256;
                      *((_DWORD *)v4 + 62) = v11 + 1568;
                      *((_DWORD *)v4 + 80) = v18 + 128;
                      if ( v9 != 9 )
                      {
                        *((_DWORD *)v4 + 46) = v10 + 288;
                        *((_DWORD *)v4 + 63) = v11 + 1764;
                        *((_DWORD *)v4 + 81) = v18 + 144;
                        if ( v9 != 10 )
                        {
                          *((_DWORD *)v4 + 47) = v10 + 320;
                          *((_DWORD *)v4 + 64) = v11 + 1960;
                          *((_DWORD *)v4 + 82) = v18 + 160;
                          if ( v9 != 11 )
                          {
                            *((_DWORD *)v4 + 48) = v10 + 352;
                            *((_DWORD *)v4 + 65) = v11 + 2156;
                            *((_DWORD *)v4 + 83) = v18 + 176;
                            if ( v9 != 12 )
                            {
                              *((_DWORD *)v4 + 49) = v10 + 384;
                              *((_DWORD *)v4 + 66) = v11 + 2352;
                              *((_DWORD *)v4 + 84) = v18 + 192;
                              if ( v9 != 13 )
                              {
                                *((_DWORD *)v4 + 50) = v10 + 416;
                                *((_DWORD *)v4 + 67) = v11 + 2548;
                                *((_DWORD *)v4 + 85) = v18 + 208;
                                if ( v9 != 14 )
                                {
                                  *((_DWORD *)v4 + 51) = v10 + 448;
                                  *((_DWORD *)v4 + 68) = v11 + 2744;
                                  *((_DWORD *)v4 + 86) = v18 + 224;
                                  if ( v9 != 15 )
                                  {
                                    *((_DWORD *)v4 + 52) = v10 + 480;
                                    *((_DWORD *)v4 + 69) = v11 + 2940;
                                    *((_DWORD *)v4 + 87) = v18 + 240;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(_DWORD *)v4 = v9;
    }
  }
  if ( a3 )
  {
    v16 = *((_DWORD *)v4 + 1);
    if ( a3 != v16 && v16 )
      return 3;
    *((_DWORD *)v4 + 1) = a3;
  }
  else
  {
    a3 = *((_DWORD *)v4 + 1);
  }
  v12 = *(_DWORD *)v4;
  result = 0;
  if ( *(_DWORD *)v4 )
  {
    if ( a3 )
    {
      if ( !*((_DWORD *)v4 + 6) )
      {
        v19 = a3;
        v13 = sub_6F773B30(v5, 4, 0, a3 * v12, 0, &v23);
        v14 = v13;
        *((_DWORD *)v4 + 6) = v13;
        result = v23;
        if ( !v23 && v12 > 1 )
        {
          *((_DWORD *)v4 + 7) = &v14[4 * v19];
          if ( v12 != 2 )
          {
            *((_DWORD *)v4 + 8) = &v14[8 * v19];
            if ( v12 != 3 )
            {
              *((_DWORD *)v4 + 9) = &v14[12 * v19];
              if ( v12 != 4 )
              {
                *((_DWORD *)v4 + 10) = &v14[16 * v19];
                if ( v12 != 5 )
                {
                  *((_DWORD *)v4 + 11) = &v14[20 * v19];
                  if ( v12 != 6 )
                  {
                    v15 = *((_DWORD *)v4 + 6);
                    *((_DWORD *)v4 + 12) = 24 * v19 + v15;
                    if ( v12 != 7 )
                    {
                      *((_DWORD *)v4 + 13) = 28 * v19 + v15;
                      if ( v12 != 8 )
                      {
                        *((_DWORD *)v4 + 14) = 32 * v19 + v15;
                        if ( v12 != 9 )
                        {
                          *((_DWORD *)v4 + 15) = 36 * v19 + v15;
                          if ( v12 != 10 )
                          {
                            *((_DWORD *)v4 + 16) = 40 * v19 + v15;
                            if ( v12 != 11 )
                            {
                              *((_DWORD *)v4 + 17) = 44 * v19 + v15;
                              if ( v12 != 12 )
                              {
                                *((_DWORD *)v4 + 18) = 48 * v19 + v15;
                                if ( v12 != 13 )
                                {
                                  *((_DWORD *)v4 + 19) = 52 * v19 + v15;
                                  if ( v12 != 14 )
                                  {
                                    *((_DWORD *)v4 + 20) = 56 * v19 + v15;
                                    if ( v12 != 15 )
                                      *((_DWORD *)v4 + 21) = v15 + 60 * v19;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
