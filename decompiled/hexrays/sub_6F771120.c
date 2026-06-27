signed int __cdecl sub_6F771120(int *a1, int a2, const char *a3, char **a4, _DWORD *a5)
{
  const char *v5; // esi@1
  int v6; // ebp@1
  size_t v7; // eax@1
  char *v8; // eax@1
  char *v9; // ebx@2
  char *v10; // eax@2
  char *v11; // ST1C_4@3
  int v12; // ST18_4@3
  size_t v13; // edx@4
  signed int result; // eax@4
  signed int v15; // ST18_4@6
  signed int v16; // ST18_4@10
  int v17; // [sp+2Ch] [bp-40h]@4
  int v18; // [sp+30h] [bp-3Ch]@1
  char *v19; // [sp+3Ch] [bp-30h]@4

  v5 = a3;
  v18 = 0;
  v6 = *a1;
  v7 = strlen(a3);
  v8 = (char *)sub_6F773A50(v6, v7 + 14, &v18);
  if ( v18 )
  {
    result = 64;
  }
  else
  {
    v9 = v8;
    v10 = strrchr(a3, 47);
    if ( v10 )
    {
      v11 = v10;
      v12 = v10 - a3;
      strncpy(v9, a3, v10 - a3 + 1);
      v5 = v11 + 1;
      v9[v12 + 1] = 0;
    }
    else
    {
      *v9 = 0;
    }
    v13 = (size_t)&v9[strlen(v9)];
    *(_DWORD *)v13 = 1886404910;
    *(_DWORD *)(v13 + 4) = 1866753388;
    *(_DWORD *)(v13 + 8) = 1701601909;
    *(_BYTE *)(v13 + 12) = 47;
    strcpy((char *)(v13 + 13), v5);
    v18 = 4;
    v19 = v9;
    result = sub_6F769170(a1, (int)&v18, &v17);
    if ( !result )
    {
      if ( v17 )
      {
        v15 = sub_6F771010(v17, 333319, a5);
        sub_6F769260(v17, 0);
        result = v15;
        if ( !v15 )
        {
          *a4 = v9;
          return result;
        }
      }
      else
      {
        sub_6F769260(0, 0);
        result = 81;
      }
    }
    v16 = result;
    sub_6F773D90(v6, (int)v9);
    result = v16;
  }
  return result;
}
