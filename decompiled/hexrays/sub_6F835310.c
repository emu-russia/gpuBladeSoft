signed int __cdecl sub_6F835310(int a1, int a2)
{
  signed int result; // eax@3
  signed int v3; // ebx@43
  int v4; // ebx@43
  int v5; // [sp+18h] [bp-20h]@27
  int v6; // [sp+1Ch] [bp-1Ch]@25
  int v7; // [sp+20h] [bp-18h]@40
  int v8; // [sp+24h] [bp-14h]@33
  int v9; // [sp+28h] [bp-10h]@43
  int v10; // [sp+2Ch] [bp-Ch]@29

  if ( *(_DWORD *)a2 >= 0 && *(_DWORD *)a2 <= 100000 )
  {
    if ( *(_DWORD *)(a2 + 4) >= 0 && *(_DWORD *)(a2 + 4) <= 100000 - *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)(a2 + 8) >= 0 && *(_DWORD *)(a2 + 8) <= 100000 )
      {
        if ( *(_DWORD *)(a2 + 12) >= 0 && *(_DWORD *)(a2 + 12) <= 100000 - *(_DWORD *)(a2 + 8) )
        {
          if ( *(_DWORD *)(a2 + 16) >= 0 && *(_DWORD *)(a2 + 16) <= 100000 )
          {
            if ( *(_DWORD *)(a2 + 20) >= 0 && *(_DWORD *)(a2 + 20) <= 100000 - *(_DWORD *)(a2 + 16) )
            {
              if ( *(_DWORD *)(a2 + 24) >= 0 && *(_DWORD *)(a2 + 24) <= 100000 )
              {
                if ( *(_DWORD *)(a2 + 28) >= 0 && *(_DWORD *)(a2 + 28) <= 100000 - *(_DWORD *)(a2 + 24) )
                {
                  if ( sub_6F8380D8(
                         &v6,
                         *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 16),
                         *(_DWORD *)(a2 + 4) - *(_DWORD *)(a2 + 20),
                         7) )
                  {
                    if ( sub_6F8380D8(
                           &v5,
                           *(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 20),
                           *(_DWORD *)a2 - *(_DWORD *)(a2 + 16),
                           7) )
                    {
                      v10 = v6 - v5;
                      if ( sub_6F8380D8(
                             &v6,
                             *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 16),
                             *(_DWORD *)(a2 + 28) - *(_DWORD *)(a2 + 20),
                             7) )
                      {
                        if ( sub_6F8380D8(
                               &v5,
                               *(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 20),
                               *(_DWORD *)(a2 + 24) - *(_DWORD *)(a2 + 16),
                               7) )
                        {
                          if ( sub_6F8380D8(&v8, *(_DWORD *)(a2 + 28), v10, v6 - v5) && *(_DWORD *)(a2 + 28) < v8 )
                          {
                            if ( sub_6F8380D8(
                                   &v6,
                                   *(_DWORD *)(a2 + 4) - *(_DWORD *)(a2 + 20),
                                   *(_DWORD *)(a2 + 24) - *(_DWORD *)(a2 + 16),
                                   7) )
                            {
                              if ( sub_6F8380D8(
                                     &v5,
                                     *(_DWORD *)a2 - *(_DWORD *)(a2 + 16),
                                     *(_DWORD *)(a2 + 28) - *(_DWORD *)(a2 + 20),
                                     7) )
                              {
                                if ( sub_6F8380D8(&v7, *(_DWORD *)(a2 + 28), v10, v6 - v5) && *(_DWORD *)(a2 + 28) < v7 )
                                {
                                  v3 = sub_6F8381D3(*(_DWORD *)(a2 + 28));
                                  v4 = v3 - sub_6F8381D3(v8);
                                  v9 = v4 - sub_6F8381D3(v7);
                                  if ( v9 > 0 )
                                  {
                                    if ( sub_6F8380D8((_DWORD *)a1, *(_DWORD *)a2, 100000, v8) )
                                    {
                                      if ( sub_6F8380D8((_DWORD *)(a1 + 4), *(_DWORD *)(a2 + 4), 100000, v8) )
                                      {
                                        if ( sub_6F8380D8(
                                               (_DWORD *)(a1 + 8),
                                               100000 - *(_DWORD *)a2 - *(_DWORD *)(a2 + 4),
                                               100000,
                                               v8) )
                                        {
                                          if ( sub_6F8380D8((_DWORD *)(a1 + 12), *(_DWORD *)(a2 + 8), 100000, v7) )
                                          {
                                            if ( sub_6F8380D8((_DWORD *)(a1 + 16), *(_DWORD *)(a2 + 12), 100000, v7) )
                                            {
                                              if ( sub_6F8380D8(
                                                     (_DWORD *)(a1 + 20),
                                                     100000 - *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12),
                                                     100000,
                                                     v7) )
                                              {
                                                if ( sub_6F8380D8((_DWORD *)(a1 + 24), *(_DWORD *)(a2 + 16), v9, 100000) )
                                                {
                                                  if ( sub_6F8380D8(
                                                         (_DWORD *)(a1 + 28),
                                                         *(_DWORD *)(a2 + 20),
                                                         v9,
                                                         100000) )
                                                  {
                                                    result = sub_6F8380D8(
                                                               (_DWORD *)(a1 + 32),
                                                               100000 - *(_DWORD *)(a2 + 16) - *(_DWORD *)(a2 + 20),
                                                               v9,
                                                               100000) == 0;
                                                  }
                                                  else
                                                  {
                                                    result = 1;
                                                  }
                                                }
                                                else
                                                {
                                                  result = 1;
                                                }
                                              }
                                              else
                                              {
                                                result = 1;
                                              }
                                            }
                                            else
                                            {
                                              result = 1;
                                            }
                                          }
                                          else
                                          {
                                            result = 1;
                                          }
                                        }
                                        else
                                        {
                                          result = 1;
                                        }
                                      }
                                      else
                                      {
                                        result = 1;
                                      }
                                    }
                                    else
                                    {
                                      result = 1;
                                    }
                                  }
                                  else
                                  {
                                    result = 1;
                                  }
                                }
                                else
                                {
                                  result = 1;
                                }
                              }
                              else
                              {
                                result = 2;
                              }
                            }
                            else
                            {
                              result = 2;
                            }
                          }
                          else
                          {
                            result = 1;
                          }
                        }
                        else
                        {
                          result = 2;
                        }
                      }
                      else
                      {
                        result = 2;
                      }
                    }
                    else
                    {
                      result = 2;
                    }
                  }
                  else
                  {
                    result = 2;
                  }
                }
                else
                {
                  result = 1;
                }
              }
              else
              {
                result = 1;
              }
            }
            else
            {
              result = 1;
            }
          }
          else
          {
            result = 1;
          }
        }
        else
        {
          result = 1;
        }
      }
      else
      {
        result = 1;
      }
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}
