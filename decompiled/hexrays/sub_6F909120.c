_DWORD *__thiscall sub_6F909120(_DWORD *this, unsigned int a2, const void *a3, size_t a4)
{
  _DWORD *v4; // ebx@1
  unsigned int v5; // edx@1
  unsigned int v6; // eax@1
  _DWORD *result; // eax@4
  char *v8; // eax@8
  char *v9; // ebp@8
  size_t v10; // edi@16
  char *v11; // esi@19
  char *v12; // ebp@19
  char *v13; // [sp+1Ch] [bp-20h]@8

  v4 = this;
  v5 = *this;
  v6 = *(_DWORD *)(*this - 12);
  if ( a2 > v6 )
    sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::insert");
  if ( a4 > 1073741820 - v6 )
    sub_6F95B240("basic_string::insert");
  if ( v5 > (unsigned int)a3 || (unsigned int)a3 > v5 + v6 || *(_DWORD *)(v5 - 4) > 0 )
    return sub_6F9085E0(this, a2, 0, a3, a4);
  v13 = (char *)a3 - *this;
  sub_6F909B10((const void **)this, a2, 0, a4);
  v8 = &v13[*v4];
  v9 = (char *)(a2 + *v4);
  if ( &v8[a4] > v9 )
  {
    if ( v8 < v9 )
    {
      v10 = a2 - (_DWORD)v13;
      if ( a2 - (_DWORD)v13 == 1 )
      {
        *v9 = *v8;
      }
      else if ( (char *)a2 != v13 )
      {
        memcpy(v9, v8, v10);
      }
      v11 = &v9[a4];
      v12 = &v9[v10];
      if ( a4 - v10 != 1 )
      {
        if ( a4 != v10 )
          memcpy(v12, v11, a4 - v10);
        return v4;
      }
      *v12 = *v11;
      result = v4;
    }
    else
    {
      if ( a4 != 1 )
      {
        if ( a4 )
        {
          memcpy(v9, &v8[a4], a4);
          return v4;
        }
        return v4;
      }
      *v9 = v8[a4];
      result = v4;
    }
  }
  else
  {
    if ( a4 != 1 )
    {
      if ( a4 )
      {
        memcpy(v9, v8, a4);
        return v4;
      }
      return v4;
    }
    *v9 = *v8;
    result = v4;
  }
  return result;
}
