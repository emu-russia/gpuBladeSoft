signed int __cdecl sub_6F76F580(int a1)
{
  signed int result; // eax@1
  int v2; // eax@2
  int v3; // edx@2
  unsigned int v4; // ebx@4
  unsigned int v5; // ebp@6
  int v6; // esi@7
  int v7; // edx@10
  int v8; // ebx@12
  int v9; // esi@13
  int v10; // ecx@14
  int v11; // eax@14
  bool v12; // zf@14
  int v13; // edi@15
  int v14; // eax@15
  int v15; // ST24_4@16
  int **v16; // edx@24
  int v17; // [sp+18h] [bp-44h]@7
  const char *v18; // [sp+1Ch] [bp-40h]@6
  char *v19; // [sp+28h] [bp-34h]@4
  int v20; // [sp+2Ch] [bp-30h]@4
  const char *v21; // [sp+38h] [bp-24h]@4
  int v22; // [sp+3Ch] [bp-20h]@4
  char v23; // [sp+40h] [bp-1Ch]@20

  result = 33;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 188);
    v3 = v2 - 1;
    *(_DWORD *)(a1 + 188) = v2 - 1;
    result = 0;
    if ( v3 <= 0 )
    {
      v21 = "type42";
      v22 = 0;
      v20 = *(_DWORD *)a1;
      v4 = *(_DWORD *)(a1 + 16);
      v19 = (char *)&v21;
      do
      {
        if ( v4 )
        {
          v5 = 0;
          v18 = *(const char **)v19;
          do
          {
            v6 = **(_DWORD **)(a1 + 4 * v5 + 20);
            v17 = *(_DWORD *)(a1 + 4 * v5 + 20);
            if ( (!v18 || !strcmp(*(const char **)(v6 + 8), v18)) && *(_BYTE *)v6 & 1 )
            {
LABEL_10:
              v7 = *(_DWORD *)(v17 + 16);
              while ( v7 )
              {
                v8 = *(_DWORD *)(v7 + 8);
                if ( !v8 )
                {
                  while ( 1 )
                    ;
                }
                v9 = *(_DWORD *)(v8 + 96);
                if ( v9 )
                {
                  v10 = *(_DWORD *)(v8 + 128);
                  v11 = *(_DWORD *)(v10 + 56) - 1;
                  v12 = *(_DWORD *)(v10 + 56) == 1;
                  *(_DWORD *)(v10 + 56) = v11;
                  if ( v11 < 0 || v12 )
                  {
                    v13 = *(_DWORD *)(v9 + 8);
                    v14 = sub_6F773F40((int *)(v9 + 16), v8);
                    if ( v14 )
                    {
                      v15 = v14;
                      sub_6F773FF0(v9 + 16, v14);
                      sub_6F773D90(v13, v15);
                      sub_6F768C90(v13, v8, v9);
                    }
                    goto LABEL_10;
                  }
                }
              }
              v4 = *(_DWORD *)(a1 + 16);
            }
            ++v5;
          }
          while ( v5 < v4 );
        }
        v19 += 4;
      }
      while ( v19 != &v23 );
      while ( v4 )
      {
        v16 = *(int ***)(a1 + 4 * v4 + 16);
        if ( !v16 )
        {
          while ( 1 )
            ;
        }
        sub_6F768A20(a1, v16);
        v4 = *(_DWORD *)(a1 + 16);
      }
      sub_6F773D90(v20, a1);
      result = 0;
    }
  }
  return result;
}
