signed int __cdecl sub_6F77F5A0(int a1, int *a2, int *a3, _DWORD *a4)
{
  int v4; // ebx@1
  unsigned int v5; // edx@2
  signed int result; // eax@2
  int v7; // eax@4
  int v8; // eax@7
  unsigned int v9; // edx@13
  unsigned int v10; // edx@15
  unsigned int v11; // edx@19
  int v12; // ecx@22
  int v13; // ecx@24

  v4 = *(_DWORD *)(a1 + 656);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 1456);
    result = 6;
    if ( v5 == 0xFFFF )
      return result;
    if ( a2 )
    {
      v7 = *(_DWORD *)(v4 + 2964);
      if ( !v7 )
      {
        if ( v5 <= 0x186 )
        {
          v12 = *(_DWORD *)(v4 + 2956);
          if ( v12 )
            v7 = (*(int (__cdecl **)(_DWORD))(v12 + 20))(*(_DWORD *)(v4 + 1456));
        }
        else
        {
          v11 = v5 - 391;
          if ( v11 < *(_DWORD *)(v4 + 1312) )
            v7 = *(_DWORD *)(*(_DWORD *)(v4 + 1316) + 4 * v11);
        }
        *(_DWORD *)(v4 + 2964) = v7;
      }
      *a2 = v7;
    }
    if ( a3 )
    {
      v8 = *(_DWORD *)(v4 + 2968);
      if ( !v8 )
      {
        v9 = *(_DWORD *)(v4 + 1460);
        if ( v9 != 0xFFFF )
        {
          if ( v9 <= 0x186 )
          {
            v13 = *(_DWORD *)(v4 + 2956);
            if ( v13 )
              v8 = (*(int (__cdecl **)(_DWORD))(v13 + 20))(*(_DWORD *)(v4 + 1460));
          }
          else
          {
            v10 = v9 - 391;
            if ( v10 < *(_DWORD *)(v4 + 1312) )
              v8 = *(_DWORD *)(*(_DWORD *)(v4 + 1316) + 4 * v10);
          }
        }
        *(_DWORD *)(v4 + 2968) = v8;
      }
      *a3 = v8;
    }
    if ( a4 )
      *a4 = *(_DWORD *)(v4 + 1464);
  }
  return 0;
}
