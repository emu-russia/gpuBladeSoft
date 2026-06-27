void __usercall sub_6F7B1499(char a1@<bl>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41)
{
  int v41; // eax@1
  int v42; // edx@1
  signed __int64 v43; // rax@1
  int v44; // edx@1
  int v45; // eax@1
  int retaddr; // [sp+0h] [bp+0h]@1

  JUMPOUT(*(_WORD *)(a41 + 44), *(_DWORD *)a9, sub_6F7B2FFB);
  v41 = *(_DWORD *)(a9 + 4);
  JUMPOUT(*(_WORD *)(a41 + 80), v41, sub_6F7B2FFB);
  JUMPOUT((a1 & 1) != 0, sub_6F7B3D23);
  JUMPOUT(*(_WORD *)(a41 + 344), 0, sub_6F7B3C3E);
  JUMPOUT(*(_WORD *)(a41 + 346), 0, sub_6F7B3C3E);
  v42 = *(_DWORD *)(a41 + 220);
  JUMPOUT(v42, *(_DWORD *)(a41 + 224), sub_6F7B3E3C);
  v43 = v42
      * (signed __int64)(*(_DWORD *)(*(_DWORD *)(a41 + 56) + 8 * (unsigned __int16)*(_DWORD *)a9)
                       - *(_DWORD *)(*(_DWORD *)(a41 + 92) + 8 * (unsigned __int16)v41));
  retaddr = a41;
  v44 = (*(int (**)(void))(a41 + 576))();
  v45 = *(_DWORD *)(a41 + 12);
  *(_DWORD *)a9 = v44;
  JUMPOUT(&loc_6F7B0D90);
}
