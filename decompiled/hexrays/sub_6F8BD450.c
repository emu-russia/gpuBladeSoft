char *__thiscall sub_6F8BD450(void *this, const void *a2, unsigned int a3, size_t a4)
{
  int v4; // edi@1
  int v5; // ecx@1
  char *result; // eax@2
  int v7; // ebp@3
  size_t v8; // ecx@3
  const void *v9; // edx@3
  size_t v10; // ecx@4
  int v11; // ebp@5
  void *v12; // edi@6
  size_t v13; // ecx@8
  int v14; // [sp+18h] [bp-24h]@3
  int v15; // [sp+1Ch] [bp-20h]@5

  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)(*(_DWORD *)this - 12);
  if ( a4 )
  {
    result = (char *)-1;
    if ( v5 > a3 )
    {
      v7 = v4 + v5;
      v8 = v5 - a3;
      v9 = (const void *)(v4 + a3);
      v14 = v7;
      if ( a4 <= v8 )
      {
        v10 = 1 - a4 + v8;
        if ( v10 )
        {
          v15 = v4;
          v11 = *(_BYTE *)a2;
          while ( 1 )
          {
            v12 = memchr(v9, v11, v10);
            if ( !v12 )
              return (char *)-1;
            if ( !memcmp(v12, a2, a4) )
              break;
            v9 = (char *)v12 + 1;
            v13 = v14 - ((_DWORD)v12 + 1);
            if ( a4 <= v13 )
            {
              v10 = 1 - a4 + v13;
              if ( v10 )
                continue;
            }
            return (char *)-1;
          }
          result = (char *)v12 - v15;
        }
      }
    }
  }
  else
  {
    result = (char *)-1;
    if ( v5 >= a3 )
      result = (char *)a3;
  }
  return result;
}
