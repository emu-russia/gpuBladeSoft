void __usercall sub_6F7B2125(char a1@<bl>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41)
{
  int v41; // eax@1
  int v42; // ebp@1
  int v43; // esi@1
  int v44; // ecx@1
  _DWORD *v45; // edx@1
  unsigned __int64 v46; // rax@1
  int v47; // eax@4

  JUMPOUT(*(_WORD *)(a41 + 80), *(_DWORD *)a9, &loc_6F7B1B7D);
  v41 = *(_DWORD *)(a9 + 4);
  JUMPOUT(*(_WORD *)(a41 + 116), v41, &loc_6F7B1B7D);
  v42 = 8 * (unsigned __int16)v41;
  v43 = 8 * (unsigned __int16)*(_DWORD *)a9;
  v44 = *(_DWORD *)(a41 + 120) + 8 * (unsigned __int16)v41;
  v45 = (_DWORD *)(v43 + *(_DWORD *)(a41 + 84));
  LODWORD(v46) = *v45 - *(_DWORD *)v44;
  HIDWORD(v46) = *(_DWORD *)(HIDWORD(v46) + 4) - *(_DWORD *)(v44 + 4);
  if ( v46 )
  {
    if ( a1 & 1 )
      v46 = __PAIR__(v46, -HIDWORD(v46));
  }
  else
  {
    v46 = 0x4000i64;
  }
  sub_6F7AB340(v46, a13);
  v47 = *(_DWORD *)(*(_DWORD *)(a41 + 88) + v43) - *(_DWORD *)(v42 + *(_DWORD *)(a41 + 124));
  JUMPOUT(&loc_6F7B0F4E);
}
