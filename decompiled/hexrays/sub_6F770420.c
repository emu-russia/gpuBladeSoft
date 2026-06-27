void __cdecl sub_6F770420(int a1, int a2, int a3)
{
  signed int v3; // ebx@2
  int v4; // eax@2
  int v5; // edx@3

  if ( a1 )
  {
    v3 = *(_WORD *)(a1 + 2);
    v4 = *(_DWORD *)(a1 + 4);
    if ( v3 > 0 )
    {
      v5 = 0;
      do
      {
        ++v5;
        *(_DWORD *)v4 += a2;
        *(_DWORD *)(v4 + 4) += a3;
        v4 += 8;
      }
      while ( (unsigned __int16)v5 < v3 );
    }
  }
}
