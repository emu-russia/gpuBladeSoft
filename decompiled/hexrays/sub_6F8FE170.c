const void **__thiscall sub_6F8FE170(_DWORD *this, unsigned int a2, const void *a3, unsigned int a4)
{
  const void **v4; // ebx@1
  unsigned int v5; // ecx@1
  unsigned int v6; // edi@1
  const void **result; // eax@4
  char *v8; // eax@8
  char *v9; // edi@8
  char *v10; // ecx@8
  signed int v11; // edx@16
  size_t v12; // ecx@16
  signed int v13; // edx@16
  signed int v14; // ST1C_4@18
  size_t v15; // ST18_4@18
  char *v16; // ebp@19
  char *v17; // ecx@19
  char *v18; // [sp+18h] [bp-24h]@8

  v4 = (const void **)this;
  v5 = *this;
  v6 = *(_DWORD *)(v5 - 12);
  if ( a2 > v6 )
    sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::insert");
  if ( a4 > 536870910 - v6 )
    sub_6F95B240("basic_string::insert");
  if ( v5 > (unsigned int)a3 || (unsigned int)a3 > v5 + 2 * v6 || *(_DWORD *)(v5 - 4) > 0 )
    return (const void **)sub_6F8FD590(v4, a2, 0, a3, a4);
  v18 = (char *)((_BYTE *)a3 - (_BYTE *)*v4);
  sub_6F8FEC30(v4, a2, 0, a4);
  v8 = &v18[(_DWORD)*v4];
  v9 = (char *)*v4 + 2 * a2;
  v10 = &v8[2 * a4];
  if ( v10 > v9 )
  {
    if ( v8 < v9 )
    {
      v11 = 2 * a2 - (_DWORD)v18;
      v12 = v11;
      v13 = v11 >> 1;
      if ( v13 == 1 )
      {
        *(_WORD *)v9 = *(_WORD *)v8;
      }
      else if ( v13 )
      {
        v14 = v13;
        v15 = v12;
        memcpy(v9, v8, v12);
        v13 = v14;
        v12 = v15;
      }
      v16 = &v9[2 * a4];
      v17 = &v9[v12];
      if ( a4 - v13 != 1 )
      {
        if ( a4 != v13 )
          memcpy(v17, v16, 2 * (a4 - v13));
        return v4;
      }
      *(_WORD *)v17 = *(_WORD *)v16;
      result = v4;
    }
    else
    {
      if ( a4 != 1 )
      {
        if ( a4 )
        {
          memcpy(v9, &v8[2 * a4], 2 * a4);
          return v4;
        }
        return v4;
      }
      *(_WORD *)v9 = *(_WORD *)v10;
      result = v4;
    }
  }
  else
  {
    if ( a4 != 1 )
    {
      if ( a4 )
      {
        memcpy(v9, v8, 2 * a4);
        return v4;
      }
      return v4;
    }
    *(_WORD *)v9 = *(_WORD *)v8;
    result = v4;
  }
  return result;
}
