int __usercall sub_6F745590@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  unsigned int v2; // esi@2
  unsigned int v3; // ebx@2
  unsigned int v4; // ecx@6

  if ( dword_6FBB9564 )
  {
    v2 = 0;
    v3 = 0;
    if ( dword_6FBB9564 == 1 )
      v2 = 16711680;
    if ( dword_6FBB9564 == 1 )
      v3 = 65280;
    v4 = 0;
    if ( dword_6FBB9564 == 1 )
      v4 = 255;
  }
  else
  {
    v4 = dword_70041E70;
    v3 = dword_70041E74;
    v2 = dword_70041E78;
  }
  return sub_6F744610(a1, a2, v4, v3, v2);
}
