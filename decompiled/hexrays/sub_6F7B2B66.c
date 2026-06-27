void __usercall sub_6F7B2B66(char a1@<bl>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, __int16 a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41)
{
  unsigned int v41; // edx@1
  unsigned int v42; // edi@1
  int v43; // [sp+5Ch] [bp+5Ch]@1
  int v44; // [sp+60h] [bp+60h]@1
  int v45; // [sp+64h] [bp+64h]@1

  JUMPOUT(*(_WORD *)(a41 + 154), 0, &loc_6F7B0FF4);
  JUMPOUT(a1 & 1, 0, sub_6F7B359F);
  v43 = *(_DWORD *)(a41 + 156);
  LOBYTE(a7) = 8;
  v44 = *(_DWORD *)(a41 + 160);
  v45 = *(_DWORD *)(a41 + 164);
  v41 = *(_WORD *)(a41 + 152);
  v42 = **(_WORD **)(a41 + 172) - *(_WORD *)(a41 + 176);
  if ( v42 >= v41 )
    v42 = v41 - 1;
  JUMPOUT(0, v42, sub_6F7B2C30);
  JUMPOUT(**(_BYTE **)(a41 + 168) & 8, 0, sub_6F7B2DD8);
  sub_6F7B2C29(0, v42, a41, a2, a3, a4, a5, a6, a7, a8, 0);
}
