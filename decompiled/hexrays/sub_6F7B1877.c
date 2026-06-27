void __cdecl sub_6F7B1877(int a1, int a2, int a3, int a4, int a5, int a6, int a7, _DWORD *a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  unsigned int v40; // ebx@1
  unsigned int v41; // eax@1
  unsigned int i; // edx@1
  int v43; // edx@8
  int v44; // edi@8
  char v45; // al@10

  v40 = *(_DWORD *)(a40 + 408);
  v41 = *(_DWORD *)(a40 + 416);
  for ( i = v41 + 24 * v40; i > v41 && *(_DWORD *)(v41 + 12) != *a8; v41 += 24 )
    ;
  if ( i == v41 )
  {
    if ( v40 >= *(_DWORD *)(a40 + 412) )
      goto LABEL_13;
    *(_DWORD *)(a40 + 408) = v40 + 1;
  }
  if ( *a8 <= 0xFFu )
  {
    *(_DWORD *)(v41 + 12) = *a8;
    *(_DWORD *)(v41 + 4) = *(_DWORD *)(a40 + 360) + 1;
    v43 = *(_DWORD *)(a40 + 352);
    *(_BYTE *)(v41 + 16) = 1;
    *(_DWORD *)v41 = v43;
    v44 = a40;
    if ( *a8 > *(_DWORD *)(a40 + 424) )
    {
      v44 = a40;
      *(_DWORD *)(a40 + 424) = (unsigned __int8)*a8;
    }
    do
    {
      JUMPOUT(sub_6F7AA1B0(v44), 0, &loc_6F7B2221);
      v45 = *(_BYTE *)(v44 + 368);
      JUMPOUT(v45, 45, &loc_6F7B2221);
    }
    while ( v45 != -119 && v45 != 44 );
    *(_DWORD *)(v44 + 12) = 137;
    JUMPOUT(&loc_6F7B0DEB);
  }
LABEL_13:
  *(_DWORD *)(a40 + 12) = 141;
  JUMPOUT(&loc_6F7B0DEB);
}
