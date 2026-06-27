char *__cdecl sub_6F815010(int a1, int a2, int a3)
{
  int v3; // esi@1
  char *result; // eax@1
  char *v5; // edx@2
  signed int v6; // ecx@3
  int v7; // edx@3
  int v8; // ebx@3
  int v9; // edx@18
  int v10; // edx@18
  int v11; // edx@18
  int v12; // edx@18
  int v13; // edx@18
  int v14; // edx@18
  int v15; // edx@18

  v3 = a2 * a3;
  result = (char *)malloc(4 * a1 + a1 * a2 * a3);
  if ( result )
  {
    v5 = &result[4 * a1];
    if ( a1 )
    {
      v6 = 1;
      *(_DWORD *)result = v5;
      v7 = (int)&v5[v3];
      v8 = ((_BYTE)a1 - 1) & 7;
      if ( 1 != a1 )
      {
        if ( !(((_BYTE)a1 - 1) & 7) )
          goto LABEL_23;
        if ( v8 != 1 )
        {
          if ( v8 != 2 )
          {
            if ( v8 != 3 )
            {
              if ( v8 != 4 )
              {
                if ( v8 != 5 )
                {
                  if ( v8 != 6 )
                  {
                    *((_DWORD *)result + 1) = v7;
                    v6 = 2;
                    v7 += v3;
                  }
                  *(_DWORD *)&result[4 * v6] = v7;
                  v7 += v3;
                  ++v6;
                }
                *(_DWORD *)&result[4 * v6] = v7;
                v7 += v3;
                ++v6;
              }
              *(_DWORD *)&result[4 * v6] = v7;
              v7 += v3;
              ++v6;
            }
            *(_DWORD *)&result[4 * v6] = v7;
            v7 += v3;
            ++v6;
          }
          *(_DWORD *)&result[4 * v6] = v7;
          v7 += v3;
          ++v6;
        }
        *(_DWORD *)&result[4 * v6++] = v7;
        v7 += v3;
        if ( v6 != a1 )
        {
LABEL_23:
          do
          {
            *(_DWORD *)&result[4 * v6] = v7;
            v9 = v3 + v7;
            *(_DWORD *)&result[4 * v6 + 4] = v9;
            v10 = v3 + v9;
            *(_DWORD *)&result[4 * v6 + 8] = v10;
            v11 = v3 + v10;
            *(_DWORD *)&result[4 * v6 + 12] = v11;
            v12 = v3 + v11;
            *(_DWORD *)&result[4 * v6 + 16] = v12;
            v13 = v3 + v12;
            *(_DWORD *)&result[4 * v6 + 20] = v13;
            v14 = v3 + v13;
            *(_DWORD *)&result[4 * v6 + 24] = v14;
            v15 = v3 + v14;
            *(_DWORD *)&result[4 * v6 + 28] = v15;
            v6 += 8;
            v7 = v3 + v15;
          }
          while ( v6 != a1 );
        }
      }
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
