int __cdecl sub_6F8A23C0(int a1)
{
  int v1; // eax@2
  int v2; // eax@4
  int v4; // eax@14

  *errno() = 0;
  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 552);
    if ( v1 >= 0 )
    {
      if ( v1 )
      {
        if ( !findnext(*(_DWORD *)(a1 + 548), a1) )
        {
          v4 = *(_DWORD *)(a1 + 552) + 1;
          *(_DWORD *)(a1 + 552) = v4;
          if ( v4 > 0 )
            goto LABEL_6;
          return 0;
        }
        if ( GetLastError() == 18 )
          *errno() = 0;
        findclose(*(_DWORD *)(a1 + 548));
        *(_DWORD *)(a1 + 548) = -1;
      }
      else
      {
        v2 = findfirst(a1 + 556, a1);
        *(_DWORD *)(a1 + 548) = v2;
        if ( v2 != -1 )
        {
          *(_DWORD *)(a1 + 552) = 1;
LABEL_6:
          *(_WORD *)(a1 + 286) = strlen((const char *)(a1 + 20));
          strcpy((char *)(a1 + 288), (const char *)(a1 + 20));
          return a1 + 280;
        }
      }
      *(_DWORD *)(a1 + 552) = -1;
    }
    return 0;
  }
  *errno() = 14;
  return 0;
}
