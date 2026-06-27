int __cdecl sub_6F7911A0(int a1, unsigned int *a2)
{
  unsigned int v2; // ebx@1
  unsigned int v3; // edx@1
  unsigned int v4; // ebx@3
  int v5; // esi@4
  int result; // eax@4
  int v7; // ecx@6

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *a2 + 1;
  if ( v3 < v2 )
    v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 20) + v2;
  if ( v3 >= v4 )
  {
    v3 = 0;
    result = 0;
LABEL_9:
    *a2 = v3;
    return result;
  }
  v5 = *(_DWORD *)(a1 + 24);
  result = *(_WORD *)(v5 + 2 * v3);
  if ( *(_WORD *)(v5 + 2 * v3) )
    goto LABEL_9;
  do
  {
    if ( ++v3 >= v4 )
    {
      v3 = 0;
      goto LABEL_9;
    }
    v7 = *(_WORD *)(v5 + 2 * v3);
  }
  while ( !*(_WORD *)(v5 + 2 * v3) );
  *a2 = v3;
  return v7;
}
