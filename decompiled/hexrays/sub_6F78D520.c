signed int __cdecl sub_6F78D520(int a1)
{
  unsigned int v1; // ebx@1
  int v2; // eax@1
  int *v3; // eax@3
  signed int v4; // edx@3
  unsigned int v5; // ecx@4

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 408);
  v2 = *(_DWORD *)(*(_DWORD *)a1 + 416);
  *(_DWORD *)(a1 + 16) = v1;
  *(_DWORD *)(a1 + 20) = v2;
  if ( v1 <= 1 )
    return 0;
  if ( *(_DWORD *)v2 < *(_DWORD *)(v2 + 16) )
  {
    v3 = (int *)(v2 + 16);
    v4 = 1;
    while ( v1 != ++v4 )
    {
      v5 = *v3;
      v3 += 4;
      if ( v5 >= *v3 )
        return 8;
    }
    return 0;
  }
  return 8;
}
