void __usercall sub_6F7B3164(int *a1@<edx>, int a2@<ecx>, int a3@<ebx>, int a4@<ebp>, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44)
{
  int v44; // esi@1
  int v45; // eax@1
  int i; // ecx@1
  int v47; // edx@4
  int v48; // [sp+18h] [bp+18h]@1
  int v49; // [sp+24h] [bp+24h]@1

  v44 = *a1;
  v49 = a2;
  v48 = sub_6F7A9D10(*a1, *(_WORD *)(a44 + 298));
  v45 = sub_6F7A9D10(v44, *(_WORD *)(a44 + 300));
  JUMPOUT(a3, 0, &loc_6F7B3DDF);
  for ( i = v49; ; i = *(_DWORD *)(a44 + 24) )
  {
    *(_DWORD *)(a44 + 28) = --a4;
    v47 = *(_DWORD *)(i + 4 * a4);
    if ( *(_WORD *)(a44 + 116) <= (unsigned __int16)v47 )
    {
      JUMPOUT(*(_BYTE *)(a44 + 561), 0, &loc_6F7B3057);
    }
    else
    {
      if ( *(_WORD *)(a44 + 298) )
      {
        *(_DWORD *)(*(_DWORD *)(a44 + 124) + 8 * (unsigned __int16)v47) += v48;
        *(_BYTE *)(*(_DWORD *)(a44 + 132) + (unsigned __int16)v47) |= 8u;
      }
      if ( *(_WORD *)(a44 + 300) )
      {
        v47 = (unsigned __int16)v47;
        *(_DWORD *)(*(_DWORD *)(a44 + 124) + 8 * v47 + 4) += v45;
        *(_BYTE *)(*(_DWORD *)(a44 + 132) + (unsigned __int16)v47) |= 0x10u;
      }
      a4 = *(_DWORD *)(a44 + 28);
      a3 = *(_DWORD *)(a44 + 304);
    }
    *(_DWORD *)(a44 + 304) = --a3;
    JUMPOUT(a3, 0, &loc_6F7B3071);
  }
}
