void __usercall sub_6F7B2560(unsigned __int8 a1@<bl>, int a2@<edi>, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, __int16 a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42)
{
  __int16 v42; // dx@1

  LOBYTE(v42) = 0;
  HIBYTE(v42) = ((a1 & 1) << 6) ^ 0x40;
  if ( a1 <= 3u )
  {
    *(_WORD *)(a2 + 294) = (a1 & 1) << 14;
    *(_WORD *)(a2 + 296) = v42;
    *(_WORD *)(a2 + 290) = (a1 & 1) << 14;
    *(_WORD *)(a2 + 292) = v42;
  }
  JUMPOUT(a1 & 2, 0, &loc_6F7B0F53);
  *(_WORD *)(a42 + 298) = (a1 & 1) << 14;
  *(_WORD *)(a42 + 300) = v42;
  JUMPOUT(&loc_6F7B0F53);
}
