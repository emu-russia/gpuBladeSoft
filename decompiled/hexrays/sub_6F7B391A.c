void __usercall sub_6F7B391A(int a1@<eax>, int a2@<ebx>, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42)
{
  int v42; // eax@1
  int retaddr; // [sp+0h] [bp+0h]@1
  int v44; // [sp+4h] [bp+4h]@1
  int v45; // [sp+8h] [bp+8h]@1
  int v46; // [sp+8h] [bp+8h]@1

  v42 = *(_DWORD *)(a1 + 52) + 8 * a2;
  v45 = *(_DWORD *)(v42 + 4);
  v44 = *(_DWORD *)v42;
  (*(void (**)(void))(a42 + 572))();
  v46 = *(_DWORD *)(a42 + 264);
  retaddr = a42;
  (*(void (**)(void))(a42 + 568))();
  JUMPOUT(&loc_6F7B2AC4);
}
