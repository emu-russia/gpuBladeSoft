void __cdecl sub_6F7B1430(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int *a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  int v40; // eax@2
  int v41; // eax@1
  int retaddr; // [sp+0h] [bp+0h]@1
  int v43; // [sp+4h] [bp+4h]@1

  v43 = *a8;
  retaddr = a40;
  v41 = (*(int (**)(void))(a40 + 568))() & 0x7F;
  *a8 = v41 == 64;
  v40 = *(_DWORD *)(a40 + 12);
  JUMPOUT(&loc_6F7B0D90);
}
