void __thiscall sub_6F909B10(const void **this, size_t a2, int a3, int a4)
{
  const void **v4; // ebp@1
  int v5; // esi@1
  unsigned int v6; // edi@1
  unsigned int v7; // ebx@1
  size_t v8; // esi@1
  _DWORD *v9; // eax@4
  size_t v10; // edx@4
  _DWORD *v11; // ecx@4
  void *v12; // edi@4
  const void *v13; // eax@5
  _DWORD *v14; // ST18_4@6
  char *v15; // eax@7
  char *v16; // ecx@12
  char *v17; // edx@16
  char *v18; // edi@16
  char *v19; // [sp+18h] [bp-34h]@12

  v4 = this;
  v5 = *((_DWORD *)*this - 3);
  v6 = *((_DWORD *)*this - 2);
  v7 = v5 + a4 - a3;
  v8 = v5 - (a3 + a2);
  if ( v7 > v6 )
  {
LABEL_4:
    v9 = sub_6F908830(v7, v6);
    v10 = a3 + a2;
    v11 = v9;
    v12 = v9 + 3;
    if ( a2 )
    {
      v13 = *v4;
      v12 = v11 + 3;
      if ( a2 == 1 )
      {
        *((_BYTE *)v11 + 12) = *(_BYTE *)v13;
        v15 = (char *)*v4;
        if ( !v8 )
          goto LABEL_8;
        goto LABEL_12;
      }
      v14 = v11;
      memcpy(v12, v13, a2);
      v10 = a3 + a2;
      v11 = v14;
    }
    v15 = (char *)*v4;
    if ( !v8 )
    {
LABEL_8:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15 - 1, 0xFFFFFFFF) <= 0 )
        j_free_1(v15 - 12);
      *v4 = v12;
      goto LABEL_11;
    }
LABEL_12:
    v19 = &v15[v10];
    v16 = (char *)v11 + a2 + a4 + 12;
    if ( v8 == 1 )
    {
      *v16 = *v19;
      v15 = (char *)*v4;
    }
    else
    {
      memcpy(v16, v19, v8);
      v15 = (char *)*v4;
    }
    goto LABEL_8;
  }
  if ( *((_DWORD *)*this - 1) > 0 )
  {
    v6 = *((_DWORD *)*this - 2);
    goto LABEL_4;
  }
  v12 = (void *)*this;
  if ( v8 && a4 != a3 )
  {
    v17 = (char *)v12 + a3 + a2;
    v18 = (char *)v12 + a2 + a4;
    if ( v8 == 1 )
    {
      *v18 = *v17;
      v12 = (void *)*this;
    }
    else
    {
      memmove(v18, v17, v8);
      v12 = (void *)*v4;
    }
  }
LABEL_11:
  *((_DWORD *)v12 - 1) = 0;
  *((_DWORD *)v12 - 3) = v7;
  *((_BYTE *)v12 + v7) = 0;
}
