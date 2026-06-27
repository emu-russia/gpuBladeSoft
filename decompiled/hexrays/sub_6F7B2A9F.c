void __usercall sub_6F7B2A9F(char a1@<bl>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int *a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41)
{
  int v41; // esi@1
  int v42; // eax@2
  int retaddr; // [sp+0h] [bp+0h]@1

  v41 = *a9;
  JUMPOUT(*a9, *(_WORD *)(a41 + 44), &loc_6F7B15A0);
  JUMPOUT((a1 & 1) != 0, sub_6F7B391A);
  retaddr = a41;
  (*(void (**)(void))(a41 + 584))();
  *(_WORD *)(a41 + 284) = v41;
  *(_WORD *)(a41 + 286) = v41;
  v42 = *(_DWORD *)(a41 + 12);
  JUMPOUT(&loc_6F7B0D90);
}
