void __usercall sub_6F7B385C(_DWORD *a1@<eax>, int a2@<esi>)
{
  JUMPOUT(*a1 - 1, 2, sub_6F7B3B8F);
  *(_DWORD *)(a2 + 12) = 132;
  JUMPOUT(&loc_6F7B0DEB);
}
