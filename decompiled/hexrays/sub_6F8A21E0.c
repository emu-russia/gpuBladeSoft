void *__cdecl sub_6F8A21E0(const CHAR *a1)
{
  DWORD v1; // eax@3
  unsigned int v2; // ebx@5
  void *v3; // eax@5
  void *v4; // ebp@5
  char *v5; // edx@6
  int v6; // eax@6
  char *v7; // ebx@9
  char v9; // cl@16
  int v10; // [sp+18h] [bp-124h]@7
  char v11[288]; // [sp+1Ch] [bp-120h]@5

  *errno() = 0;
  if ( !a1 )
  {
    v4 = 0;
    *errno() = 14;
    return v4;
  }
  if ( !*a1 )
    goto LABEL_15;
  v1 = GetFileAttributesA(a1);
  if ( v1 == -1 )
  {
    v4 = 0;
    *errno() = 2;
    return v4;
  }
  if ( v1 & 0x10 )
  {
    fullpath(v11, a1, 0x104u);
    v2 = strlen(v11);
    v3 = malloc(v2 + 563);
    v4 = v3;
    if ( v3 )
    {
      v5 = (char *)v3 + 556;
      v6 = v2 + 1;
      if ( v2 + 1 < 4 )
      {
        if ( v2 != -1 )
        {
          *v5 = v11[0];
          if ( v6 & 2 )
            *(_WORD *)&v5[v6 - 2] = *(_WORD *)&v11[v6 - 2];
        }
      }
      else
      {
        *(_DWORD *)&v5[v6 - 4] = *(int *)((char *)&v10 + v6);
        qmemcpy(v5, v11, 4 * (v2 >> 2));
      }
      if ( *((_BYTE *)v4 + 556) )
      {
        v9 = *((_BYTE *)v4 + v2 + 555);
        v7 = &v5[v2];
        if ( v9 != 92 && v9 != 47 )
        {
          *(_WORD *)v7 = 92;
          v7 = &v5[v6];
        }
      }
      else
      {
        v7 = &v5[v2];
      }
      *(_WORD *)v7 = 42;
      *((_DWORD *)v4 + 137) = -1;
      *((_DWORD *)v4 + 138) = 0;
      *((_DWORD *)v4 + 70) = 0;
      *((_DWORD *)v4 + 71) = 0;
      memset((char *)v4 + 288, 0, 0x104u);
    }
    else
    {
      *errno() = 12;
    }
    return v4;
  }
LABEL_15:
  *errno() = 20;
  return 0;
}
