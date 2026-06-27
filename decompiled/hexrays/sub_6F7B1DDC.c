void __usercall sub_6F7B1DDC(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41)
{
  int v41; // eax@1
  int v42; // edx@1
  int v43; // ebx@2
  int v44; // ecx@2
  int v45; // esi@2
  int v46; // edi@2
  int v47; // ebp@2
  int v48; // edi@2
  int v49; // edi@2
  int v50; // [sp+18h] [bp+18h]@2

  v41 = *a9;
  JUMPOUT(*a9, 0, sub_6F7B32B3);
  JUMPOUT(*a9, 1, &loc_6F7B2491);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 164);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 168);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 176);
  v42 = a1;
  v43 = *(_DWORD *)(a1 + 36);
  v44 = *(_DWORD *)(a41 + 40);
  *(_DWORD *)(a41 + 72) = v43;
  *(_DWORD *)(a41 + 76) = v44;
  v50 = *(_DWORD *)(a41 + 44);
  *(_DWORD *)(a41 + 80) = v50;
  v45 = *(_DWORD *)(a41 + 48);
  *(_DWORD *)(a41 + 84) = v45;
  v46 = *(_DWORD *)(a41 + 52);
  v47 = *(_DWORD *)(v42 + 56);
  *(_DWORD *)(v42 + 108) = v43;
  *(_DWORD *)(v42 + 112) = v44;
  *(_DWORD *)(v42 + 120) = v45;
  *(_DWORD *)(v42 + 88) = v46;
  v48 = *(_DWORD *)(v42 + 60);
  *(_DWORD *)(v42 + 92) = v47;
  *(_DWORD *)(v42 + 128) = v47;
  *(_DWORD *)(v42 + 96) = v48;
  *(_DWORD *)(v42 + 100) = *(_DWORD *)(v42 + 64);
  *(_DWORD *)(v42 + 104) = *(_DWORD *)(v42 + 68);
  *(_DWORD *)(v42 + 116) = v50;
  *(_DWORD *)(v42 + 124) = *(_DWORD *)(v42 + 52);
  *(_DWORD *)(v42 + 132) = *(_DWORD *)(v42 + 60);
  v49 = *(_DWORD *)(v42 + 64);
  *(_WORD *)(v42 + 344) = v41;
  *(_WORD *)(v42 + 346) = v41;
  *(_DWORD *)(v42 + 136) = v49;
  *(_DWORD *)(v42 + 140) = *(_DWORD *)(v42 + 68);
  JUMPOUT(loc_6F7B1EE2);
}
