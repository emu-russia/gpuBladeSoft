int __cdecl sub_6F8B33F0(int *a1)
{
  int v1; // ebx@1

  v1 = *a1;
  if ( (unsigned int)*a1 < 0xFFFFFFFD && *a1 != 0 )
  {
    if ( *(_DWORD *)(v1 + 8) )
      CloseHandle(*(HANDLE *)(v1 + 8));
    free((void *)v1);
    *a1 = 0;
  }
  return 0;
}
