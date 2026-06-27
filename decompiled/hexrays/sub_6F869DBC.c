char __cdecl sub_6F869DBC(int a1)
{
  int v1; // ebx@1
  signed int v2; // edx@1
  signed int v3; // eax@1
  signed int v4; // eax@3
  int v5; // edx@4
  int v6; // eax@16
  int v7; // eax@18
  int v8; // eax@22
  int v9; // eax@23
  int v10; // eax@25
  int v11; // eax@32

  v1 = *(_DWORD *)(a1 + 404);
  v2 = *(_DWORD *)(v1 + 12);
  v3 = (v2 + *(_DWORD *)(v1 + 16) - 1) & 0xFFFF0000;
  if ( v2 > v3 )
    v3 += 0x8000;
  v4 = v3 << *(_DWORD *)(v1 + 28);
  *(_DWORD *)(v1 + 12) = v4;
  if ( v4 & 0xF8000000 )
  {
    v5 = *(_DWORD *)(v1 + 32);
    if ( v5 >= 0 )
    {
      if ( *(_DWORD *)(v1 + 24) )
      {
        do
        {
          sub_6F869D74(0, a1);
          v10 = *(_DWORD *)(v1 + 24) - 1;
          *(_DWORD *)(v1 + 24) = v10;
        }
        while ( v10 );
        v5 = *(_DWORD *)(v1 + 32);
      }
      sub_6F869D74(v5 + 1, a1);
      if ( *(_DWORD *)(v1 + 32) == 254 )
        sub_6F869D74(0, a1);
      v4 = *(_DWORD *)(v1 + 12);
    }
    *(_DWORD *)(v1 + 24) += *(_DWORD *)(v1 + 20);
    *(_DWORD *)(v1 + 20) = 0;
  }
  else
  {
    v7 = *(_DWORD *)(v1 + 32);
    if ( v7 )
    {
      if ( v7 >= 0 )
      {
        if ( *(_DWORD *)(v1 + 24) )
        {
          do
          {
            sub_6F869D74(0, a1);
            v11 = *(_DWORD *)(v1 + 24) - 1;
            *(_DWORD *)(v1 + 24) = v11;
          }
          while ( v11 );
          v7 = *(_DWORD *)(v1 + 32);
        }
        sub_6F869D74(v7, a1);
      }
    }
    else
    {
      ++*(_DWORD *)(v1 + 24);
    }
    if ( *(_DWORD *)(v1 + 20) )
    {
      if ( *(_DWORD *)(v1 + 24) )
      {
        do
        {
          sub_6F869D74(0, a1);
          v8 = *(_DWORD *)(v1 + 24) - 1;
          *(_DWORD *)(v1 + 24) = v8;
        }
        while ( v8 );
      }
      do
      {
        sub_6F869D74(-1, a1);
        sub_6F869D74(0, a1);
        v9 = *(_DWORD *)(v1 + 20) - 1;
        *(_DWORD *)(v1 + 20) = v9;
      }
      while ( v9 );
    }
    v4 = *(_DWORD *)(v1 + 12);
  }
  if ( v4 & 0x7FFF800 )
  {
    if ( *(_DWORD *)(v1 + 24) )
    {
      do
      {
        sub_6F869D74(0, a1);
        v6 = *(_DWORD *)(v1 + 24) - 1;
        *(_DWORD *)(v1 + 24) = v6;
      }
      while ( v6 );
      v4 = *(_DWORD *)(v1 + 12);
    }
    sub_6F869D74(v4 >> 19, a1);
    v4 = *(_DWORD *)(v1 + 12);
    if ( (unsigned __int8)(*(_DWORD *)(v1 + 12) >> 19) == -1 )
    {
      sub_6F869D74(0, a1);
      v4 = *(_DWORD *)(v1 + 12);
    }
    if ( v4 & 0x7F800 )
    {
      sub_6F869D74(v4 >> 11, a1);
      LOBYTE(v4) = (*(_DWORD *)(v1 + 12) >> 11) + 1;
      if ( (unsigned __int8)(*(_DWORD *)(v1 + 12) >> 11) == -1 )
        LOBYTE(v4) = sub_6F869D74(0, a1);
    }
  }
  return v4;
}
