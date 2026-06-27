int __usercall sub_6F744590@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  unsigned int v2; // edi@2
  unsigned int v3; // esi@4
  unsigned int v4; // ebx@4
  unsigned int v5; // ecx@7

  if ( dword_6FBB9564 )
  {
    v2 = 0;
    if ( dword_6FBB9564 == 1 )
      v2 = 0xFFFFFF;
    v3 = 0;
    v4 = 0;
    if ( dword_6FBB9564 == 1 )
    {
      v3 = 16711680;
      if ( dword_6FBB9564 == 1 )
        v4 = 65280;
    }
    v5 = 0;
    if ( dword_6FBB9564 == 1 )
      v5 = 255;
  }
  else
  {
    v5 = dword_70041E70;
    v4 = dword_70041E74;
    v3 = dword_70041E78;
    v2 = dword_70041E7C;
  }
  return sub_6F7435E0(a1, a2, v5, v4, v3, v2);
}
