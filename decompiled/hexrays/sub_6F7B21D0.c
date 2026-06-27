void __cdecl sub_6F7B21D0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  __int16 v40; // bx@1
  int v41; // edx@1
  int v42; // eax@1
  int v43; // ecx@1
  _BYTE *v44; // edx@2
  int v45; // eax@3

  v40 = *(_WORD *)(a40 + 152);
  v41 = *(_DWORD *)(a8 + 4);
  v42 = *(_DWORD *)a8;
  v43 = *(_DWORD *)(a8 + 4);
  JUMPOUT(v40, *(_DWORD *)a8, &loc_6F7B1B7D);
  JUMPOUT(v40, v41, &loc_6F7B1B7D);
  JUMPOUT(v41, *(_DWORD *)a8, &loc_6F7B0FF4);
  do
  {
    v44 = (_BYTE *)(*(_DWORD *)(a40 + 168) + (unsigned __int16)v42++);
    *v44 &= 0xFEu;
  }
  while ( (unsigned __int16)v43 >= (unsigned __int16)v42 );
  v45 = *(_DWORD *)(a40 + 12);
  JUMPOUT(&loc_6F7B0D90);
}
