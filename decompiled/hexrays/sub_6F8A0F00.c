signed int __cdecl sub_6F8A0F00(int a1, int a2)
{
  signed int result; // eax@7
  int v3; // eax@12
  int v4; // ebx@13

  if ( a2 == 1 )
  {
    if ( !dword_70372B64 )
      InitializeCriticalSection((LPCRITICAL_SECTION)&unk_70372B68);
    dword_70372B64 = 1;
    result = 1;
  }
  else
  {
    if ( !a2 )
    {
      if ( dword_70372B64 )
        sub_6F8A0D70();
      if ( dword_70372B64 == 1 )
      {
        v3 = dword_70372B60;
        if ( dword_70372B60 )
        {
          do
          {
            v4 = *(_DWORD *)(v3 + 8);
            free((void *)v3);
            v3 = v4;
          }
          while ( v4 );
        }
        dword_70372B60 = 0;
        dword_70372B64 = 0;
        DeleteCriticalSection((LPCRITICAL_SECTION)&unk_70372B68);
      }
      return 1;
    }
    if ( a2 != 2 )
    {
      if ( a2 == 3 )
      {
        if ( dword_70372B64 )
          sub_6F8A0D70();
      }
      return 1;
    }
    sub_6F8A13A0();
    result = 1;
  }
  return result;
}
