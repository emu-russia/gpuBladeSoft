int __usercall sub_6F8A41F0@<eax>(int a1@<eax>, _DWORD *a2@<edx>)
{
  int v2; // ecx@1
  int v3; // ecx@2
  int result; // eax@2
  _DWORD *v5; // esi@4
  int v6; // ebx@4
  FILE *v7; // edx@4
  int v8; // edx@5

  v2 = *(_DWORD *)(a1 + 4104);
  if ( v2 )
  {
    v3 = v2 - 1;
    *(_DWORD *)(a1 + 4104) = v3;
    result = *(_DWORD *)(a1 + 4 * v3 + 4);
    ++*a2;
    return result;
  }
  if ( *(_BYTE *)(a1 + 4108) & 1 )
    return -1;
  v5 = a2;
  v6 = a1;
  v7 = *(FILE **)a1;
  if ( *(_BYTE *)(a1 + 4100) & 1 )
  {
    result = LOBYTE(v7->_ptr);
    v8 = (int)&v7->_ptr + 1;
    if ( result )
    {
      ++*v5;
      *(_DWORD *)v6 = v8;
      return result;
    }
  }
  else
  {
    result = getc(*(FILE **)a1);
    if ( result != -1 )
    {
      ++*v5;
      return result;
    }
  }
  *(_BYTE *)(v6 + 4108) |= 1u;
  return -1;
}
