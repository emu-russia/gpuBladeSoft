void __cdecl sub_6F7C23F0(int a1)
{
  int v1; // ebx@2
  int v2; // edi@2
  int v3; // eax@3
  void (__cdecl *v4)(_DWORD); // edx@4

  if ( a1 )
  {
    v1 = 0;
    v2 = *(_DWORD *)(*(_DWORD *)a1 + 100);
    do
    {
      v3 = *(_DWORD *)(a1 + v1 + 16);
      if ( v3 )
      {
        v4 = (void (__cdecl *)(_DWORD))*((_DWORD *)*(&off_6FB6B55C + (*(_DWORD **)((char *)&off_6FB6B420 + v1))[1]) + 4);
        if ( v4 )
        {
          v4(*(_DWORD *)(a1 + v1 + 16));
          v3 = *(_DWORD *)(a1 + v1 + 16);
        }
        sub_6F773D90(v2, v3);
        *(_DWORD *)(a1 + v1 + 16) = 0;
      }
      v1 += 4;
    }
    while ( v1 != 196 );
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
    sub_6F773D90(v2, a1);
  }
}
