void __usercall sub_6F7B30D1(int a1@<eax>, char a2@<bl>, int a3@<esi>, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43)
{
  int v43; // eax@1
  int v44; // eax@2
  int retaddr; // [sp+0h] [bp+0h]@1
  int v46; // [sp+4h] [bp+4h]@1
  int v47; // [sp+8h] [bp+8h]@1

  JUMPOUT(a2 & 1, 0, sub_6F7B39A4);
  v43 = *(_DWORD *)(a3 + 124) + 8 * a1;
  v47 = *(_DWORD *)(v43 + 4);
  v46 = *(_DWORD *)v43;
  retaddr = a3;
  (*(void (**)(void))(a3 + 572))();
  v44 = *(_DWORD *)(a43 + 12);
  JUMPOUT(&loc_6F7B157E);
}
