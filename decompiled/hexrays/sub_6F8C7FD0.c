int __thiscall sub_6F8C7FD0(int this, _WORD *a2, unsigned int a3, unsigned int a4)
{
  int v4; // esi@1
  int result; // eax@2
  _WORD *v6; // edx@3
  unsigned int v7; // eax@4
  int v8; // eax@12
  __int16 v9; // si@14
  unsigned int v10; // eax@15
  int v11; // [sp+4h] [bp-18h]@6
  int v12; // [sp+8h] [bp-14h]@3

  v4 = *(_DWORD *)(this + 4);
  if ( a4 )
  {
    result = -1;
    if ( v4 > a3 )
    {
      v12 = *(_DWORD *)this;
      v6 = (_WORD *)(*(_DWORD *)this + 2 * a3);
      if ( a4 <= v4 - a3 )
      {
        v7 = v4 - a3 + 1 - a4;
        if ( v6 && v7 )
        {
          v11 = v12 + 2 * v4;
LABEL_7:
          while ( *a2 != *v6 )
          {
            ++v6;
            if ( !--v7 )
              goto LABEL_9;
          }
          if ( a2 != v6 )
          {
            v8 = 0;
            while ( v8 != a4 - 1 )
            {
              v9 = v6[v8++ + 1];
              if ( v9 != a2[v8] )
              {
                ++v6;
                v10 = (v11 - (signed int)v6) >> 1;
                if ( a4 <= v10 )
                {
                  v7 = 1 - a4 + v10;
                  if ( v6 )
                  {
                    if ( v7 )
                      goto LABEL_7;
                  }
                }
                goto LABEL_9;
              }
            }
          }
          result = ((signed int)v6 - v12) >> 1;
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
    if ( v4 >= a3 )
      result = a3;
  }
  return result;
}
