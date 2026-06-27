void __usercall sub_6F7B12C1(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9, int a10)
{
  int v10; // ebp@1
  int v11; // ebx@1
  int v12; // edx@2
  int v13; // edx@2

  JUMPOUT(*a9, 0, &loc_6F7B0FF4);
  v10 = *(_DWORD *)(a1 + 360) + a7;
  v11 = *(_DWORD *)(a1 + 364);
  *(_DWORD *)(a1 + 360) = v10;
  if ( v10 < v11 )
  {
    v12 = *(_BYTE *)(a10 + v10);
    *(_BYTE *)(a1 + 368) = v12;
    v13 = byte_6FB69720[v12];
    *(_DWORD *)(a1 + 372) = v13;
    JUMPOUT(v13, 0, sub_6F7B2FD0);
    JUMPOUT(v13 + v10, v11, sub_6F7B2DA0);
  }
  *(_DWORD *)(a1 + 12) = 131;
  JUMPOUT(&loc_6F7B0DEB);
}
