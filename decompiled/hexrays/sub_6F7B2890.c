void __cdecl sub_6F7B2890(int a1, int a2, int a3, int a4, int a5, int a6, int a7, unsigned int *a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  unsigned int v40; // ecx@1
  unsigned int v41; // ebx@1
  unsigned int v42; // edx@1
  unsigned int i; // eax@1
  int v44; // edx@8
  int v45; // edi@8
  bool v46; // cf@8
  bool v47; // zf@8
  int v48; // edx@8
  int v49; // edi@8
  char v50; // al@10
  int v51; // eax@14

  v40 = *(_DWORD *)(a40 + 396);
  v41 = *(_DWORD *)(a40 + 404);
  v42 = v41 + 24 * v40;
  for ( i = *a8; v42 > v41 && i != *(_DWORD *)(v41 + 12); v41 += 24 )
    ;
  if ( v42 == v41 )
  {
    if ( v40 >= *(_DWORD *)(a40 + 400) )
      goto LABEL_13;
    *(_DWORD *)(a40 + 396) = v40 + 1;
  }
  if ( i <= 0xFFFF )
  {
    v44 = *(_DWORD *)(a40 + 352);
    v45 = *(_DWORD *)(a40 + 360);
    *(_BYTE *)(v41 + 16) = 1;
    *(_BYTE *)(v41 + 17) = 0;
    v46 = i < *(_DWORD *)(a40 + 420);
    v47 = i == *(_DWORD *)(a40 + 420);
    *(_DWORD *)(v41 + 12) = i;
    *(_DWORD *)v41 = v44;
    v48 = v45 + 1;
    *(_DWORD *)(v41 + 20) = 0;
    v49 = a40;
    *(_DWORD *)(v41 + 4) = v48;
    if ( !v46 && !v47 )
    {
      *(_DWORD *)(a40 + 420) = i;
      v49 = a40;
    }
    while ( 1 )
    {
      JUMPOUT(sub_6F7AA1B0(v49), 0, &loc_6F7B2221);
      v50 = *(_BYTE *)(v49 + 368);
      if ( v50 == 45 )
        break;
      JUMPOUT(v50, -119, &loc_6F7B193E);
      if ( v50 == 44 )
        JUMPOUT(&loc_6F7B193E);
    }
    *(_DWORD *)(v41 + 8) = *(_DWORD *)(v49 + 360);
    v51 = *(_DWORD *)(v49 + 12);
    JUMPOUT(&loc_6F7B0D90);
  }
LABEL_13:
  *(_DWORD *)(a40 + 12) = 140;
  JUMPOUT(&loc_6F7B0DEB);
}
