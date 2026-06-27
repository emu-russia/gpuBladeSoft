void __usercall __spoils<ecx> sub_6F8A13B0(unsigned int a1@<eax>, char a2)
{
  char *v2; // ecx@1

  v2 = &a2;
  if ( a1 >= 0x1000 )
  {
    do
    {
      v2 -= 4096;
      *(_DWORD *)v2 = *(_DWORD *)v2;
      a1 -= 4096;
    }
    while ( a1 > 0x1000 );
  }
  *(_DWORD *)&v2[-a1] = *(_DWORD *)&v2[-a1];
}
