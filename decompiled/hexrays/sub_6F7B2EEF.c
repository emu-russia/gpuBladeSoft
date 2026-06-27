void __usercall sub_6F7B2EEF(int a1@<edx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
  JUMPOUT(a3 + 1, a2, &loc_6F7B1320);
  *(_DWORD *)(a4 + 372) = 2 - *(_BYTE *)(a13 + a3 + 1) * a1;
  JUMPOUT(&loc_6F7B1D44);
}
