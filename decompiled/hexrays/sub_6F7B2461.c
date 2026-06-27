void __cdecl sub_6F7B2461(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  int v40; // eax@1
  int v41; // edx@1

  v40 = *(_DWORD *)(a8 + 4);
  JUMPOUT(v40 - 1, 2, &loc_6F7B2491);
  v41 = *(_DWORD *)a8;
  if ( *(_DWORD *)a8 != 1 << (v40 - 1) )
  {
    if ( v41 )
      JUMPOUT(loc_6F7B2491);
  }
  *(_BYTE *)(a40 + 336) = v41 | *(_BYTE *)(a40 + 336) & ~(1 << (v40 - 1));
  JUMPOUT(&loc_6F7B0FF4);
}
