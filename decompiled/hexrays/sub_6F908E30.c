void **__thiscall sub_6F908E30(void **this, char *a2, size_t a3)
{
  char *v3; // eax@1
  int v4; // esi@1
  int v6; // eax@6
  bool v7; // zf@6
  bool v8; // sf@6
  char *v9; // eax@6
  void **v10; // ST1C_4@11
  void **v11; // ST1C_4@15

  v3 = (char *)*this;
  v4 = *((_DWORD *)*this - 3);
  if ( a3 > 0x3FFFFFFC )
    sub_6F95B240("basic_string::assign");
  if ( v3 > a2 || a2 > &v3[v4] )
    return (void **)sub_6F9085E0(this, 0, v4, a2, a3);
  v6 = *((_DWORD *)v3 - 1);
  v7 = v6 == 0;
  v8 = v6 < 0;
  v9 = (char *)*this;
  if ( !v8 && !v7 )
  {
    v4 = *((_DWORD *)v9 - 3);
    return (void **)sub_6F9085E0(this, 0, v4, a2, a3);
  }
  if ( a3 <= a2 - v9 )
  {
    if ( a3 != 1 )
    {
      if ( a3 )
      {
        v11 = this;
        memcpy(v9, a2, a3);
        this = v11;
        v9 = (char *)*v11;
      }
      goto LABEL_12;
    }
    goto LABEL_16;
  }
  if ( a2 != v9 )
  {
    if ( a3 != 1 )
    {
      v10 = this;
      memmove(v9, a2, a3);
      this = v10;
      v9 = (char *)*v10;
      goto LABEL_12;
    }
LABEL_16:
    *v9 = *a2;
    v9 = (char *)*this;
  }
LABEL_12:
  *((_DWORD *)v9 - 1) = 0;
  *((_DWORD *)v9 - 3) = a3;
  v9[a3] = 0;
  return this;
}
