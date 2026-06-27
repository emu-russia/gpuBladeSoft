void __usercall sub_6F7B16B8(int a1@<eax>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41)
{
  int v41; // ebx@1
  int v42; // edx@1
  int v43; // ebp@1
  __int16 v44; // cx@1
  int v45; // edx@1
  _DWORD *v46; // ebx@2
  _DWORD *v47; // ecx@2

  v41 = a41;
  v42 = *(_DWORD *)(a41 + 360);
  v43 = *(_BYTE *)(a10 + v42 + 1);
  v44 = *(_BYTE *)(a10 + v42 + 1);
  JUMPOUT(v43, a1 + 1 - *(_DWORD *)(a41 + 16), &loc_6F7B2F40);
  v45 = v42 + 2;
  *(_DWORD *)(a41 + 360) = v45;
  if ( (_WORD)v43 )
  {
    v46 = a9;
    v47 = &a9[(unsigned __int16)(v44 - 1)];
    while ( 1 )
    {
      *(_DWORD *)(a41 + 360) = v45 + 2;
      *v46 = (signed __int16)((*(_BYTE *)(a10 + v45) << 8) + *(_BYTE *)(a10 + v45 + 2 - 1));
      if ( v47 == v46 )
        break;
      v45 = *(_DWORD *)(a41 + 360);
      ++v46;
    }
    v41 = a41;
    a11 = *(_DWORD *)(a41 + 32);
  }
  *(_BYTE *)(a41 + 376) = 0;
  *(_DWORD *)(v41 + 32) = v43 + a11;
  JUMPOUT(&loc_6F7B2B5E);
}
