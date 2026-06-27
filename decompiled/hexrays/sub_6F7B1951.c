void __usercall sub_6F7B1951(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int *a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41)
{
  int v41; // eax@1
  signed int v42; // edx@1

  v41 = *a9;
  v42 = (unsigned __int8)*a9;
  JUMPOUT(v42, 255, sub_6F7B3981);
  JUMPOUT(v42, 0, sub_6F7B3421);
  if ( BYTE1(v41) & 1 && v42 >= *(_WORD *)(a1 + 252) )
  {
    *(_BYTE *)(a1 + 337) = 1;
    v41 = *a9;
  }
  if ( BYTE1(v41) & 2 && *(_BYTE *)(a41 + 281) )
  {
    *(_BYTE *)(a41 + 337) = 1;
    v41 = *a9;
  }
  if ( BYTE1(v41) & 4 && *(_BYTE *)(a41 + 282) )
  {
    *(_BYTE *)(a41 + 337) = 1;
    v41 = *a9;
  }
  if ( BYTE1(v41) & 8 && v42 < *(_WORD *)(a41 + 252) )
  {
    *(_BYTE *)(a41 + 337) = 0;
    v41 = *a9;
  }
  if ( BYTE1(v41) & 0x10 && *(_BYTE *)(a41 + 281) )
  {
    *(_BYTE *)(a41 + 337) = 0;
    v41 = *a9;
  }
  JUMPOUT(BYTE1(v41) & 0x20, 0, &loc_6F7B0FF4);
  JUMPOUT(*(_BYTE *)(a41 + 282), 0, &loc_6F7B0FF4);
  *(_BYTE *)(a41 + 337) = 0;
  JUMPOUT(&loc_6F7B0FF4);
}
