void __usercall sub_6F7B2448(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9)
{
  JUMPOUT(*a9, 0, &loc_6F7B0FF4);
  *(_DWORD *)(a1 + 340) = *a9;
  JUMPOUT(&loc_6F7B0FF4);
}
