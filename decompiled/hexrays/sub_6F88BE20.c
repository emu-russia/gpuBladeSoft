int __usercall sub_6F88BE20@<eax>(int result@<eax>, _DWORD *a2@<edx>)
{
  int v2; // edi@1
  unsigned int v3; // ecx@2
  _DWORD *v4; // ebx@3
  int v5; // esi@3

  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = a2[v2];
      if ( v3 )
        break;
      *(_DWORD *)(result + 4 * v2++) = 0;
      if ( v2 == 32 )
        return result;
    }
    v4 = a2;
    v5 = 0;
    do
    {
      if ( v3 & 1 )
        v5 ^= *v4;
      ++v4;
      v3 >>= 1;
    }
    while ( v3 );
    *(_DWORD *)(result + 4 * v2++) = v5;
  }
  while ( v2 != 32 );
  return result;
}
