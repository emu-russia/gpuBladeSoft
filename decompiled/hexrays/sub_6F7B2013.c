void __usercall sub_6F7B2013(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9)
{
  JUMPOUT(*a9, 0, sub_6F7B33C9);
  if ( *a9 == 1 )
  {
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 156);
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 160);
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 168);
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 176);
    *(_WORD *)(a1 + 344) = 1;
    JUMPOUT(&loc_6F7B0FF4);
  }
  JUMPOUT(&loc_6F7B15A0);
}
