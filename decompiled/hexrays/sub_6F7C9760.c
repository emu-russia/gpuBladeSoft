unsigned int __cdecl sub_6F7C9760(signed int a1, signed int a2)
{
  signed int v2; // eax@1
  signed int v3; // esi@1
  unsigned int v4; // edx@1
  unsigned int v5; // ebx@1
  unsigned int result; // eax@4
  unsigned __int64 v7; // kr00_8@11
  unsigned int v8; // eax@12
  char v9; // cl@12
  unsigned int v10; // eax@12
  unsigned int v11; // edi@12
  unsigned int v12; // edx@12
  int v13; // ebp@12
  int v14; // ecx@12
  unsigned int v15; // edx@12
  int v16; // ecx@12
  unsigned int v17; // edi@17
  int v18; // edx@17
  unsigned int v19; // ecx@22
  int v20; // edx@22
  unsigned int v21; // edi@27
  int v22; // edx@27
  unsigned int v23; // ecx@32
  int v24; // edx@32
  unsigned int v25; // edi@37
  int v26; // edx@37
  unsigned int v27; // ecx@42
  int v28; // edx@42
  unsigned int v29; // edi@47
  int v30; // ecx@47
  unsigned int v31; // edx@52
  int v32; // ebp@52
  int v33; // ecx@52
  unsigned int v34; // edi@57
  int v35; // edx@57
  unsigned int v36; // ecx@62
  int v37; // edx@62
  unsigned int v38; // edi@67
  int v39; // edx@67
  unsigned int v40; // ecx@72
  int v41; // edx@72
  unsigned int v42; // edi@77
  int v43; // edx@77
  unsigned int v44; // ecx@82
  int v45; // edx@82
  unsigned int v46; // [sp+0h] [bp-18h]@12
  int v47; // [sp+4h] [bp-14h]@12
  int v48; // [sp+4h] [bp-14h]@52

  v2 = -1;
  v3 = 1;
  v4 = a1;
  v5 = a2;
  if ( a1 < 0 )
  {
    v4 = -a1;
    v2 = 1;
    v3 = -1;
  }
  if ( a2 < 0 )
  {
    v5 = -a2;
    v3 = v2;
  }
  else
  {
    result = 0x7FFFFFFF;
    if ( !a2 )
      goto LABEL_5;
  }
  if ( 0xFFFF - (v5 >> 17) < v4 )
  {
    v7 = __PAIR__(v4 >> 16, v5 >> 1) + (v4 << 16);
    result = 0x7FFFFFFF;
    if ( HIDWORD(v7) < v5 )
    {
      _BitScanReverse(&result, HIDWORD(v7));
      v8 = result ^ 0x1F;
      v46 = v8;
      v9 = v8;
      v10 = (HIDWORD(v7) << v8) | ((unsigned int)v7 >> (32 - v8));
      v11 = v10;
      v12 = (_DWORD)v7 << v9;
      v47 = (_DWORD)v7 << v9;
      v13 = 2 * ((_DWORD)v7 << v9);
      v14 = v10 / v5;
      result = 2 * (v10 / v5);
      v15 = 2 * (v11 - v5 * v14) | (v12 >> 31);
      v16 = v15 - v5;
      if ( v5 > v15 )
        v16 = v15;
      if ( v5 <= v15 )
        result |= 1u;
      if ( v46 != 31 )
      {
        result *= 2;
        v17 = __PAIR__(v16, v13) >> 31;
        v18 = v17 - v5;
        if ( v5 > v17 )
          v18 = __PAIR__(v16, v13) >> 31;
        if ( v5 <= v17 )
          result |= 1u;
        if ( v46 != 30 )
        {
          result *= 2;
          v19 = 2 * v18 | ((unsigned int)(4 * v47) >> 31);
          v20 = v19 - v5;
          if ( v19 < v5 )
            v20 = v19;
          if ( v19 >= v5 )
            result |= 1u;
          if ( v46 != 29 )
          {
            result *= 2;
            v21 = 2 * v20 | ((unsigned int)(8 * v47) >> 31);
            v22 = v21 - v5;
            if ( v5 > v21 )
              v22 = v21;
            if ( v5 <= v21 )
              result |= 1u;
            if ( v46 != 28 )
            {
              result *= 2;
              v23 = 2 * v22 | ((unsigned int)(16 * v47) >> 31);
              v24 = v23 - v5;
              if ( v5 > v23 )
                v24 = v23;
              if ( v5 <= v23 )
                result |= 1u;
              if ( v46 != 27 )
              {
                result *= 2;
                v25 = 2 * v24 | ((unsigned int)(32 * v47) >> 31);
                v26 = v25 - v5;
                if ( v5 > v25 )
                  v26 = v25;
                if ( v5 <= v25 )
                  result |= 1u;
                if ( v46 != 26 )
                {
                  result *= 2;
                  v27 = 2 * v26 | ((unsigned int)(v47 << 6) >> 31);
                  v28 = v27 - v5;
                  if ( v5 > v27 )
                    v28 = v27;
                  if ( v5 <= v27 )
                    result |= 1u;
                  if ( v46 != 25 )
                  {
                    v29 = 2 * v28 | ((unsigned int)(v47 << 7) >> 31);
                    result *= 2;
                    v30 = v29 - v5;
                    if ( v5 > v29 )
                      v30 = 2 * v28 | ((unsigned int)(v47 << 7) >> 31);
                    if ( v5 <= v29 )
                      result |= 1u;
                    if ( v46 != 24 )
                    {
                      result *= 2;
                      v31 = __PAIR__(v30, v47 << 8) >> 31;
                      v48 = v47 << 8;
                      v32 = 2 * v48;
                      v33 = v31 - v5;
                      if ( v5 > v31 )
                        v33 = v31;
                      if ( v5 <= v31 )
                        result |= 1u;
                      if ( v46 != 23 )
                      {
                        result *= 2;
                        v34 = __PAIR__(v33, v32) >> 31;
                        v35 = v34 - v5;
                        if ( v5 > v34 )
                          v35 = __PAIR__(v33, v32) >> 31;
                        if ( v5 <= v34 )
                          result |= 1u;
                        if ( v46 != 22 )
                        {
                          result *= 2;
                          v36 = 2 * v35 | ((unsigned int)(4 * v48) >> 31);
                          v37 = v36 - v5;
                          if ( v5 > v36 )
                            v37 = v36;
                          if ( v5 <= v36 )
                            result |= 1u;
                          if ( v46 != 21 )
                          {
                            result *= 2;
                            v38 = 2 * v37 | ((unsigned int)(8 * v48) >> 31);
                            v39 = v38 - v5;
                            if ( v5 > v38 )
                              v39 = v38;
                            if ( v5 <= v38 )
                              result |= 1u;
                            if ( v46 != 20 )
                            {
                              result *= 2;
                              v40 = 2 * v39 | ((unsigned int)(16 * v48) >> 31);
                              v41 = v40 - v5;
                              if ( v5 > v40 )
                                v41 = v40;
                              if ( v5 <= v40 )
                                result |= 1u;
                              if ( v46 != 19 )
                              {
                                result *= 2;
                                v42 = 2 * v41 | ((unsigned int)(32 * v48) >> 31);
                                v43 = v42 - v5;
                                if ( v5 > v42 )
                                  v43 = v42;
                                if ( v5 <= v42 )
                                  result |= 1u;
                                if ( v46 != 18 )
                                {
                                  result *= 2;
                                  v44 = 2 * v43 | ((unsigned int)(v48 << 6) >> 31);
                                  v45 = v44 - v5;
                                  if ( v5 > v44 )
                                    v45 = v44;
                                  if ( v5 <= v44 )
                                    result |= 1u;
                                  if ( v46 != 17 )
                                  {
                                    result *= 2;
                                    if ( (2 * v45 | ((unsigned int)(v48 << 7) >> 31)) >= v5 )
                                      result |= 1u;
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
  else
  {
    result = ((v4 << 16) + (v5 >> 1)) / v5;
  }
LABEL_5:
  if ( v3 == -1 )
    result = -result;
  return result;
}
