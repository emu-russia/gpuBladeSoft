int __usercall sub_6F8973B0@<eax>(int result@<eax>, int a2@<edx>)
{
  if ( !result || *(_DWORD *)result != 47 )
    return 0;
  if ( a2 <= 0 )
  {
    if ( !a2 )
      return *(_DWORD *)(result + 8);
    return 0;
  }
  while ( 1 )
  {
    result = *(_DWORD *)(result + 12);
    --a2;
    if ( !result )
      break;
    if ( *(_DWORD *)result != 47 )
      return 0;
    if ( !a2 )
      return *(_DWORD *)(result + 8);
  }
  return result;
}
