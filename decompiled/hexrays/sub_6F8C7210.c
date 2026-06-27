char *__thiscall sub_6F8C7210(int this, const void *a2, unsigned int a3, size_t a4)
{
  int v4; // ebp@1
  char *result; // eax@2
  const void *v6; // edx@3
  int v7; // edi@3
  size_t v8; // ebp@3
  size_t v9; // ecx@4
  int v10; // ebp@5
  void *v11; // edi@6
  size_t v12; // ecx@8
  int v13; // [sp+18h] [bp-24h]@3
  int v14; // [sp+1Ch] [bp-20h]@3

  v4 = *(_DWORD *)(this + 4);
  if ( a4 )
  {
    result = (char *)-1;
    if ( v4 > a3 )
    {
      v14 = *(_DWORD *)this;
      v6 = (const void *)(*(_DWORD *)this + a3);
      v7 = v4 + *(_DWORD *)this;
      v8 = v4 - a3;
      v13 = v7;
      if ( a4 <= v8 )
      {
        v9 = 1 - a4 + v8;
        if ( v9 )
        {
          v10 = *(_BYTE *)a2;
          while ( 1 )
          {
            v11 = memchr(v6, v10, v9);
            if ( !v11 )
              return (char *)-1;
            if ( !memcmp(v11, a2, a4) )
              break;
            v6 = (char *)v11 + 1;
            v12 = v13 - ((_DWORD)v11 + 1);
            if ( a4 <= v12 )
            {
              v9 = 1 - a4 + v12;
              if ( v9 )
                continue;
            }
            return (char *)-1;
          }
          result = (char *)v11 - v14;
        }
      }
    }
  }
  else
  {
    result = (char *)-1;
    if ( v4 >= a3 )
      result = (char *)a3;
  }
  return result;
}
