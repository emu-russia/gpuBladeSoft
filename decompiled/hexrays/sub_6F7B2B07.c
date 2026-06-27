void __cdecl sub_6F7B2B07(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  int v40; // edx@1
  int v41; // eax@1
  int v42; // eax@1

  v40 = *(_DWORD *)(a40 + 428);
  JUMPOUT(v40, 0, sub_6F7B38A6);
  *(_DWORD *)(a40 + 428) = v40 - 1;
  v41 = *(_DWORD *)(a40 + 436) + 16 * (v40 - 1);
  --*(_DWORD *)(v41 + 8);
  *(_BYTE *)(a40 + 376) = 0;
  JUMPOUT(*(_DWORD *)(v41 + 8), 0, sub_6F7B385C);
  v42 = *(_DWORD *)(v41 + 12);
  *(_DWORD *)(a40 + 428) = v40;
  *(_DWORD *)(a40 + 360) = *(_DWORD *)(v42 + 4);
  *(_DWORD *)(a40 + 16) = a10;
  JUMPOUT(&loc_6F7B1017);
}
