int __thiscall sub_6F8BC570(void *this, _WORD *a2, unsigned int a3, unsigned int a4)
{
  int v4; // ebp@1
  int v5; // esi@1
  int result; // eax@2
  _WORD *v7; // edx@3
  unsigned int v8; // eax@4
  int v9; // eax@12
  __int16 v10; // si@14
  unsigned int v11; // eax@15
  int v12; // [sp+4h] [bp-14h]@6

  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)(*(_DWORD *)this - 12);
  if ( a4 )
  {
    result = -1;
    if ( v5 > a3 )
    {
      v7 = (_WORD *)(v4 + 2 * a3);
      if ( a4 <= v5 - a3 )
      {
        v8 = v5 - a3 + 1 - a4;
        if ( v7 && v8 )
        {
          v12 = v4 + 2 * v5;
LABEL_7:
          while ( *a2 != *v7 )
          {
            ++v7;
            if ( !--v8 )
              goto LABEL_9;
          }
          if ( a2 != v7 )
          {
            v9 = 0;
            while ( v9 != a4 - 1 )
            {
              v10 = v7[v9++ + 1];
              if ( v10 != a2[v9] )
              {
                ++v7;
                v11 = (v12 - (signed int)v7) >> 1;
                if ( a4 <= v11 )
                {
                  v8 = 1 - a4 + v11;
                  if ( v7 )
                  {
                    if ( v8 )
                      goto LABEL_7;
                  }
                }
                goto LABEL_9;
              }
            }
          }
          result = ((signed int)v7 - v4) >> 1;
        }
        else
        {
LABEL_9:
          result = -1;
        }
      }
    }
  }
  else
  {
    result = -1;
    if ( v5 >= a3 )
      result = a3;
  }
  return result;
}
