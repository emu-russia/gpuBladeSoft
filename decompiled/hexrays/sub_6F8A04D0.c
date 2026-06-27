void *__cdecl sub_6F8A04D0(const char *a1, void *a2, signed int *a3, _DWORD *a4)
{
  void *v4; // edi@5
  signed int v5; // ebp@6
  size_t v6; // eax@8
  void *v7; // ST00_4@9
  void *v9; // [sp+10h] [bp-2Ch]@4
  int v10; // [sp+14h] [bp-28h]@4
  int v11; // [sp+18h] [bp-24h]@4
  int v12; // [sp+1Ch] [bp-20h]@4

  if ( !a1 || a2 && !a3 )
  {
    if ( a4 )
      *a4 = -3;
    return 0;
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( !sub_6F89FF40(a1, (int *)sub_6F897490, (int)&v9) )
  {
    free(v9);
    if ( !a4 )
      return 0;
    goto LABEL_25;
  }
  v4 = v9;
  if ( v12 )
  {
    v5 = 1;
    if ( v9 )
      goto LABEL_7;
    if ( !a4 )
      return 0;
    goto LABEL_16;
  }
  v5 = v11;
  if ( v9 )
  {
LABEL_7:
    if ( a2 )
    {
      v6 = strlen((const char *)v9);
      if ( v6 < *a3 )
      {
        memcpy(a2, v4, v6 + 1);
        v7 = v4;
        v4 = a2;
        free(v7);
        goto LABEL_10;
      }
      free(a2);
    }
    else if ( !a3 )
    {
LABEL_10:
      if ( a4 )
        *a4 = 0;
      return v4;
    }
    *a3 = v5;
    goto LABEL_10;
  }
  if ( a4 )
  {
    if ( v11 == 1 )
    {
LABEL_16:
      *a4 = -1;
      return 0;
    }
LABEL_25:
    *a4 = -2;
    return 0;
  }
  return 0;
}
