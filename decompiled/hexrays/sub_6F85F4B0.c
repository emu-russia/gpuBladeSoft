int __usercall sub_6F85F4B0@<eax>(int a1@<eax>, signed int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // ebx@3
  int result; // eax@5
  int v6; // ebx@6
  int v7; // esi@6

  if ( a2 > 4 )
  {
    v6 = a1;
    v7 = 0;
    do
    {
      *(_DWORD *)v6 = 1;
      *(_DWORD *)(v6 + 4) = v7;
      *(_DWORD *)(v6 + 20) = 0;
      *(_DWORD *)(v6 + 24) = 0;
      *(_DWORD *)(v6 + 28) = a3;
      *(_DWORD *)(v6 + 32) = a4;
      v6 += 36;
      ++v7;
    }
    while ( v7 != a2 );
    result = a1 + 36 * v7;
  }
  else
  {
    *(_DWORD *)a1 = a2;
    if ( a2 > 0 )
    {
      v4 = 0;
      do
      {
        *(_DWORD *)(a1 + 4 * v4 + 4) = v4;
        ++v4;
      }
      while ( v4 != a2 );
    }
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 28) = a3;
    *(_DWORD *)(a1 + 32) = a4;
    result = a1 + 36;
  }
  return result;
}
