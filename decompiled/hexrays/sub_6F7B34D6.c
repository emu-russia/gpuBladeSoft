void __usercall sub_6F7B34D6(int a1@<eax>, int a2@<ebx>, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42)
{
  int v42; // eax@1
  int v43; // ecx@2
  int v44; // eax@2
  int v45; // edx@2
  int v46; // eax@2
  int retaddr; // [sp+0h] [bp+0h]@1
  int v48; // [sp+4h] [bp+4h]@1
  int v49; // [sp+8h] [bp+8h]@1
  int v50; // [sp+Ch] [bp+Ch]@1

  a2 = (unsigned __int16)a2;
  v42 = *(_DWORD *)(a1 + 124) + 8 * (unsigned __int16)a2;
  v49 = *(_DWORD *)(v42 + 4);
  v48 = *(_DWORD *)v42;
  v50 = *(_DWORD *)(a10 + 4) - (*(int (**)(void))(a42 + 572))();
  retaddr = a42;
  (*(void (**)(void))(a42 + 584))();
  JUMPOUT(*(_WORD *)(a42 + 348), 0, &loc_6F7B0FD1);
  v43 = *(_DWORD *)(a42 + 120);
  v44 = *(_DWORD *)(a42 + 124);
  v45 = *(_DWORD *)(v44 + 8 * a2 + 4);
  *(_DWORD *)(v43 + 8 * a2) = *(_DWORD *)(v44 + 8 * a2);
  *(_DWORD *)(v43 + 8 * a2 + 4) = v45;
  v46 = *(_DWORD *)(a42 + 12);
  JUMPOUT(&loc_6F7B0D90);
}
