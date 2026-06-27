int __cdecl sub_6F8A79D0(int a1)
{
  int v1; // ebx@1
  int v2; // esi@1
  _DWORD *v3; // eax@1
  int result; // eax@4
  int *v5; // edi@6

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 16);
  v3 = (_DWORD *)(a1 + 20);
  do
  {
    if ( *v3 != -1 )
    {
      ++*v3;
      return a1;
    }
    ++v3;
    *(v3 - 1) = 0;
  }
  while ( a1 + 20 + 4 * v2 > (unsigned int)v3 );
  if ( v2 >= *(_DWORD *)(a1 + 8) )
  {
    v5 = sub_6F8B0700(*(_DWORD *)(a1 + 4) + 1);
    memcpy(v5 + 3, (const void *)(a1 + 12), 4 * *(_DWORD *)(a1 + 16) + 8);
    v1 = (int)v5;
    sub_6F8B07F0((void *)a1);
    v2 = v5[4];
  }
  *(_DWORD *)(v1 + 16) = v2 + 1;
  result = v1;
  *(_DWORD *)(v1 + 4 * v2 + 20) = 1;
  return result;
}
