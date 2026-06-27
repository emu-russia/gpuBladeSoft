void __usercall sub_6F7B23BE(int a1@<eax>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41)
{
  int v41; // edx@1
  int v42; // esi@1
  unsigned __int16 v43; // bx@1
  signed int v44; // eax@1
  int v45; // ecx@3
  int v46; // eax@4
  int v47; // [sp+18h] [bp+18h]@1

  v41 = *(_DWORD *)(a41 + 360);
  v42 = *(_BYTE *)(a10 + v41 + 1);
  v43 = *(_BYTE *)(a10 + v41 + 1);
  JUMPOUT(v42, a1 + 1 - *(_DWORD *)(a41 + 16), &loc_6F7B2F40);
  JUMPOUT(v42, 0, sub_6F7B3C69);
  v47 = *(_BYTE *)(a10 + v41 + 1);
  v44 = 1;
  while ( 1 )
  {
    v45 = (unsigned __int16)v44++;
    *(_DWORD *)(a9 + 4 * v45 - 4) = *(_BYTE *)(v45 + a10 + v41 + 1);
    if ( v43 < (unsigned __int16)v44 )
      break;
    v41 = *(_DWORD *)(a41 + 360);
  }
  v46 = *(_BYTE *)(a41 + 376);
  *(_DWORD *)(a41 + 32) += v47;
  JUMPOUT(&loc_6F7B10EA);
}
