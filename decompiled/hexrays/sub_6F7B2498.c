void __usercall sub_6F7B2498(int a1@<ecx>, int a2@<ebp>, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42)
{
  int v42; // edx@1
  int v43; // eax@7
  int v44; // eax@9

  v42 = *(_DWORD *)(a42 + 304);
  if ( *(_DWORD *)(a42 + 16) >= v42 )
  {
    if ( v42 <= 0 )
      JUMPOUT(&loc_6F7B2844);
    while ( 1 )
    {
      *(_DWORD *)(a42 + 28) = --a2;
      v43 = *(_DWORD *)(a1 + 4 * a2);
      if ( *(_WORD *)(a42 + 152) <= (unsigned __int16)v43 )
      {
        JUMPOUT(*(_BYTE *)(a42 + 561), 0, &loc_6F7B3057);
      }
      else
      {
        *(_BYTE *)(*(_DWORD *)(a42 + 168) + (unsigned __int16)v43) ^= 1u;
        a2 = *(_DWORD *)(a42 + 28);
        v42 = *(_DWORD *)(a42 + 304);
      }
      *(_DWORD *)(a42 + 304) = --v42;
      if ( v42 <= 0 )
      {
        v44 = *(_DWORD *)(a42 + 12);
        JUMPOUT(&loc_6F7B2844);
      }
      a1 = *(_DWORD *)(a42 + 24);
    }
  }
  JUMPOUT(*(_BYTE *)(a42 + 561), 0, &loc_6F7B2844);
  *(_DWORD *)(a42 + 12) = 129;
  JUMPOUT(&loc_6F7B2844);
}
