void __cdecl sub_6F7B1CF3(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  signed int v40; // esi@1
  int v41; // ebp@1
  int v42; // ebx@1
  int v43; // edx@2
  char v44; // al@2
  int v45; // edx@2

  v40 = 1;
  v41 = *(_DWORD *)(a40 + 360) + a6;
  v42 = *(_DWORD *)(a40 + 364);
  while ( 1 )
  {
    do
    {
      *(_DWORD *)(a40 + 360) = v41;
      JUMPOUT(v41, v42, &loc_6F7B1320);
      v43 = *(_BYTE *)(a9 + v41);
      v44 = v43;
      *(_BYTE *)(a40 + 368) = v43;
      v45 = byte_6FB69720[v43];
      *(_DWORD *)(a40 + 372) = v45;
      JUMPOUT(v45, 0, sub_6F7B2EEF);
      v41 += v45;
      JUMPOUT(v41, v42, &loc_6F7B1320);
      JUMPOUT(v44, 88, sub_6F7B2DD0);
    }
    while ( v44 != 89 );
    if ( !--v40 )
      JUMPOUT(&loc_6F7B0FF4);
  }
}
