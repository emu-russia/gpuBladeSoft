void __cdecl sub_6F7B1A3E(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  unsigned __int16 v40; // dx@1
  int v41; // eax@1
  unsigned __int16 v42; // dx@3
  int v43; // esi@3

  v40 = *(_WORD *)(a40 + 44);
  v41 = *(_DWORD *)(a8 + 12);
  if ( v40 > (unsigned __int16)*(_DWORD *)(a8 + 16) && v40 > (unsigned __int16)v41 )
  {
    v42 = *(_WORD *)(a40 + 80);
    v43 = *(_DWORD *)(a8 + 4);
    if ( v42 > (unsigned __int16)*(_DWORD *)(a8 + 8) && v42 > (unsigned __int16)v43 )
      JUMPOUT(*(_WORD *)(a40 + 116), *(_DWORD *)a8, sub_6F7B3E8F);
  }
  JUMPOUT(*(_BYTE *)(a40 + 561), 0, &loc_6F7B15AD);
  JUMPOUT(&loc_6F7B0FF4);
}
