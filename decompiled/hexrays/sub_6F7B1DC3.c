void __usercall sub_6F7B1DC3(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9)
{
  JUMPOUT(*a9, 0, sub_6F7B3018);
  *(_DWORD *)(a1 + 304) = *a9;
  JUMPOUT(&loc_6F7B0FF4);
}
