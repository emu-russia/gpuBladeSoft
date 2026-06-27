void __usercall sub_6F7B1C73(int a1@<ebp>, int a2@<edi>, int a3, int a4, int a5, int a6, int a7, int a8, int a9, _DWORD *a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42)
{
  int v42; // ecx@1
  int v43; // esi@1
  int v44; // ecx@1
  int v45; // edx@2

  v42 = *a10;
  JUMPOUT(*a10, 0, sub_6F7B3109);
  JUMPOUT(a1, 0, sub_6F7B3109);
  *(_DWORD *)(a2 + 12) = 132;
  v43 = a42;
  v44 = *(_DWORD *)(a42 + 360) + v42;
  *(_DWORD *)(a42 + 360) = v44;
  if ( v44 < 0
    || (v45 = *(_DWORD *)(a42 + 428), v45 > 0)
    && v44 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a42 + 436) + 16 * (v45 + 0xFFFFFFF) + 12) + 8) )
  {
    v43 = a42;
    *(_DWORD *)(a42 + 12) = 132;
  }
  *(_BYTE *)(v43 + 376) = 0;
  JUMPOUT(&loc_6F7B0D90);
}
