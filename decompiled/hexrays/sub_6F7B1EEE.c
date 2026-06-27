void __usercall sub_6F7B1EEE(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9)
{
  int v9; // eax@1

  v9 = *a9;
  JUMPOUT(*a9, 0, sub_6F7B3365);
  JUMPOUT(*a9, 1, &loc_6F7B2491);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a1 + 164);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a1 + 168);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a1 + 176);
  *(_WORD *)(a1 + 348) = v9;
  JUMPOUT(&loc_6F7B0FF4);
}
