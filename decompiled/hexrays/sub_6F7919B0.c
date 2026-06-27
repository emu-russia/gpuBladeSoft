signed int __usercall sub_6F7919B0@<eax>(const char *a1@<eax>, size_t a2@<edx>)
{
  int v2; // ebx@1
  char v3; // si@1
  char *v4; // ecx@2
  size_t v6; // ebp@5
  const char *v7; // edi@5

  v2 = 0;
  v3 = *a1;
  while ( 1 )
  {
    v4 = off_6FB58F00[v2];
    if ( *v4 == v3 )
      break;
    if ( ++v2 == 74 )
      return 75;
  }
  v6 = a2;
  v7 = a1;
  while ( strncmp(v4, v7, v6) )
  {
    if ( ++v2 != 74 )
    {
      v4 = off_6FB58F00[v2];
      if ( *v4 == v3 )
        continue;
    }
    return 75;
  }
  return v2;
}
