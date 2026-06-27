void __usercall sub_6F7B1067(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int *a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41)
{
  int v41; // ecx@1
  unsigned int v42; // eax@1
  int v43; // edx@1
  int v44; // eax@1
  unsigned int v45; // edx@1
  int v46; // edx@5
  int v47; // edx@8
  char v48; // al@10

  v41 = *a9;
  v42 = *a9 & 1;
  v43 = -(v42 < 1);
  v44 = -v42 & 0x23;
  v45 = (v43 & 0xFFFFFFDD) + 163;
  if ( *a9 & 2 && *(_BYTE *)(a1 + 281) )
    v44 = v45;
  if ( v41 & 4 )
  {
    v46 = v44;
    BYTE1(v46) |= 1u;
    if ( *(_BYTE *)(a41 + 282) )
      v44 = v46;
  }
  if ( v41 & 0x20 )
  {
    v47 = v44;
    BYTE1(v47) |= 0x10u;
    if ( *(_BYTE *)(a41 + 608) )
      v44 = v47;
  }
  *a9 = v44;
  v48 = *(_BYTE *)(a41 + 376);
  *(_DWORD *)(a41 + 16) = *(_DWORD *)(a41 + 32);
  JUMPOUT(v48, 0, &loc_6F7B1017);
  JUMPOUT(&loc_6F7B1004);
}
