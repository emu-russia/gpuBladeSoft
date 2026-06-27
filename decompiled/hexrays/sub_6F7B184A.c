void __usercall sub_6F7B184A(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9)
{
  int v9; // eax@1

  v9 = *a9;
  JUMPOUT(*a9, 6, sub_6F7B3018);
  *(_WORD *)(a1 + 334) = v9;
  JUMPOUT(&loc_6F7B0FF4);
}
