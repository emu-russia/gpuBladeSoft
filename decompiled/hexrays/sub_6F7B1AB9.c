void __cdecl sub_6F7B1AB9(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  int v40; // esi@1
  int v41; // ecx@1
  int v42; // edx@1
  int v43; // ebx@1
  int v44; // eax@2
  int retaddr; // [sp+0h] [bp+0h]@1
  int v46; // [sp+4h] [bp+4h]@1
  int v47; // [sp+8h] [bp+8h]@1

  JUMPOUT(*(_WORD *)(a40 + 80), *(_DWORD *)a8, &loc_6F7B1A8C);
  v40 = *(_DWORD *)(a8 + 4);
  JUMPOUT(*(_WORD *)(a40 + 44), v40, &loc_6F7B1A8C);
  v41 = *(_DWORD *)(a40 + 52) + 8 * (unsigned __int16)v40;
  v42 = *(_DWORD *)(a40 + 88) + 8 * (unsigned __int16)*(_DWORD *)a8;
  v47 = *(_DWORD *)(v41 + 4) - *(_DWORD *)(v42 + 4);
  v46 = *(_DWORD *)v41 - *(_DWORD *)v42;
  v43 = (*(int (**)(void))(a40 + 572))() / -2;
  (*(void (**)(void))(a40 + 584))();
  retaddr = a40;
  (*(void (**)(void))(a40 + 584))();
  v44 = *(_DWORD *)(a40 + 12);
  JUMPOUT(&loc_6F7B0D90);
}
