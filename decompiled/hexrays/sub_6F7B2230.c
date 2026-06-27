void __cdecl sub_6F7B2230(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  __int16 v40; // bx@1
  int v41; // esi@1
  int v42; // eax@1
  _BYTE *v43; // edx@2

  v40 = *(_WORD *)(a40 + 152);
  v41 = *(_DWORD *)(a8 + 4);
  v42 = *(_DWORD *)a8;
  JUMPOUT(v40, v41, &loc_6F7B1B7D);
  JUMPOUT(v40, *(_DWORD *)a8, &loc_6F7B1B7D);
  JUMPOUT(*(_DWORD *)a8, v41, &loc_6F7B0FF4);
  do
  {
    v43 = (_BYTE *)(*(_DWORD *)(a40 + 168) + (unsigned __int16)v42++);
    *v43 |= 1u;
  }
  while ( (unsigned __int16)v41 >= (unsigned __int16)v42 );
  JUMPOUT(&loc_6F7B2221);
}
