int __cdecl sub_6F8B9E50(char *a1, int a2, int a3, char **a4)
{
  int v4; // esi@1
  char **v5; // eax@1
  char *v6; // edi@1
  char *v7; // ebx@1
  char v8; // dl@3
  char v9; // cl@6
  int v10; // ecx@9
  char *v11; // eax@9
  char v12; // dl@9
  int v13; // ebp@10
  int v15; // ebp@16
  char *v16; // ST08_4@16
  int v17; // eax@16

  v4 = a3;
  v5 = a4;
  v6 = &a1[a2 - 1];
  v7 = a1;
  while ( 1 )
  {
    v8 = *(_BYTE *)v4;
    if ( !*(_BYTE *)v4 )
      break;
    while ( 1 )
    {
      if ( v7 >= v6 )
        goto LABEL_18;
      if ( v8 != 37 )
        goto LABEL_2;
      v9 = *(_BYTE *)(v4 + 1);
      if ( v9 != 115 )
        break;
      v10 = (int)(v5 + 1);
      v11 = *v5;
      v12 = *v11;
      if ( *v11 )
      {
        v13 = (int)&v11[v6 - v7];
        while ( 1 )
        {
          ++v11;
          *(++v7 - 1) = v12;
          v12 = *v11;
          if ( !*v11 )
            break;
          if ( (char *)v13 == v11 )
            goto LABEL_18;
        }
      }
      v4 += 2;
      v8 = *(_BYTE *)v4;
      v5 = (char **)v10;
      if ( !*(_BYTE *)v4 )
        goto LABEL_14;
    }
    if ( v9 != 122 )
    {
      v4 += v9 == 37;
      goto LABEL_2;
    }
    if ( *(_BYTE *)(v4 + 2) == 117 )
    {
      v15 = (int)(v5 + 1);
      v16 = *v5;
      v17 = sub_6F8B9DC0(v7, v6 - v7);
      if ( v17 <= 0 )
LABEL_18:
        sub_6F8BACA0(a1, (int)v7);
      v7 += v17;
      v4 += 3;
      v5 = (char **)v15;
    }
    else
    {
LABEL_2:
      *v7 = v8;
      ++v4;
      ++v7;
    }
  }
LABEL_14:
  *v7 = 0;
  return v7 - a1;
}
