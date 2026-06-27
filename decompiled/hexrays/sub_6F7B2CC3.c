void __usercall sub_6F7B2CC3(int a1@<eax>, int a2@<ecx>, int a3, int a4, int a5, int a6, int a7, int a8, int a9, _DWORD *a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42)
{
  int v42; // ecx@1
  int v43; // edx@1
  int v44; // esi@1
  int v45; // ebx@1

  JUMPOUT(a2, a1, sub_6F7B2EAA);
  JUMPOUT(*(_BYTE *)(a1 + 16), 0, sub_6F7B2EAA);
  v42 = *(_DWORD *)(a42 + 428);
  JUMPOUT(v42, *(_DWORD *)(a42 + 432), &loc_6F7B2F40);
  JUMPOUT(*a10, 0, &loc_6F7B0FF4);
  v43 = *(_DWORD *)(a42 + 436) + 16 * v42;
  v44 = *(_DWORD *)(a42 + 360);
  *(_DWORD *)v43 = *(_DWORD *)(a42 + 352);
  *(_DWORD *)(v43 + 4) = v44 + 1;
  v45 = *a10;
  *(_DWORD *)(v43 + 12) = a1;
  *(_DWORD *)(v43 + 8) = v45;
  *(_DWORD *)(a42 + 428) = v42 + 1;
  JUMPOUT(*(_DWORD *)a1 - 1, 2, &loc_6F7B4081);
  *(_DWORD *)(a42 + 12) = 132;
  JUMPOUT(&loc_6F7B2A43);
}
