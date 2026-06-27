int __thiscall sub_6F908910(void *this, int *a2)
{
  int result; // eax@1
  int v3; // edx@3

  result = *(_DWORD *)this;
  if ( *(_DWORD *)(*(_DWORD *)this - 4) < 0 )
    *(_DWORD *)(result - 4) = 0;
  v3 = *a2;
  if ( *(_DWORD *)(*a2 - 4) < 0 )
    *(_DWORD *)(v3 - 4) = 0;
  *(_DWORD *)this = v3;
  *a2 = result;
  return result;
}
