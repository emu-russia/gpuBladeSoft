void **__thiscall sub_6F8FDE60(void **this, char *a2, unsigned int a3)
{
  char *v3; // eax@1
  int v4; // esi@1
  int v6; // eax@6
  bool v7; // zf@6
  bool v8; // sf@6
  char *v9; // eax@6
  size_t v10; // edi@8
  unsigned int v11; // esi@8
  void **v12; // ST1C_4@12
  void **v13; // ST1C_4@16

  v3 = (char *)*this;
  v4 = *((_DWORD *)*this - 3);
  if ( a3 > 0x1FFFFFFE )
    sub_6F95B240("basic_string::assign");
  if ( v3 > a2 || a2 > &v3[2 * v4] )
    return (void **)sub_6F8FD590(this, 0, v4, a2, a3);
  v6 = *((_DWORD *)v3 - 1);
  v7 = v6 == 0;
  v8 = v6 < 0;
  v9 = (char *)*this;
  if ( !v8 && !v7 )
  {
    v4 = *((_DWORD *)v9 - 3);
    return (void **)sub_6F8FD590(this, 0, v4, a2, a3);
  }
  v10 = 2 * a3;
  v11 = (a2 - v9) >> 1;
  if ( a3 <= v11 )
  {
    if ( a3 != 1 )
    {
      if ( a3 )
      {
        v13 = this;
        memcpy(v9, a2, v10);
        this = v13;
        v9 = (char *)*v13;
      }
      goto LABEL_13;
    }
LABEL_17:
    *(_WORD *)v9 = *(_WORD *)a2;
    goto LABEL_13;
  }
  if ( v11 )
  {
    if ( a3 != 1 )
    {
      if ( a3 )
      {
        v12 = this;
        memmove(v9, a2, v10);
        this = v12;
        v9 = (char *)*v12;
      }
      goto LABEL_13;
    }
    goto LABEL_17;
  }
LABEL_13:
  *((_DWORD *)v9 - 1) = 0;
  *((_DWORD *)v9 - 3) = a3;
  *(_WORD *)&v9[2 * a3] = 0;
  return this;
}
