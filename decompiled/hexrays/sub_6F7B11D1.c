void __cdecl sub_6F7B11D1(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int *a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  signed int v40; // edx@1
  signed int v41; // ebp@1
  int v42; // eax@5
  char v43; // cl@6
  unsigned int v44; // eax@6
  int v45; // eax@9
  int v46; // edx@9
  int v47; // eax@9
  int retaddr; // [sp+0h] [bp+0h]@1
  int v49; // [sp+8h] [bp+8h]@11
  int v50; // [sp+18h] [bp+18h]@1
  int v51; // [sp+20h] [bp+20h]@6
  int v52; // [sp+24h] [bp+24h]@1

  retaddr = a40;
  v52 = (*(int (**)(void))(a40 + 592))();
  v50 = *a8;
  v40 = *(_DWORD *)(a40 + 28);
  JUMPOUT(*a8 == 0, sub_6F7B3DD0);
  v41 = 1;
  if ( v40 > 1 )
  {
    while ( 1 )
    {
      v40 -= 2;
      v42 = *(_DWORD *)(a40 + 24);
      *(_DWORD *)(a40 + 28) = v40;
      if ( *(_DWORD *)(v42 + 4 * (v40 + 1)) >= *(_DWORD *)(a40 + 380) )
      {
        if ( *(_BYTE *)(a40 + 561) )
          JUMPOUT(&loc_6F7B15AF);
      }
      else
      {
        v43 = *(_BYTE *)(a40 + 368);
        v51 = *(_DWORD *)(v42 + 4 * (v40 + 1) - 4);
        v44 = (*(_DWORD *)(v42 + 4 * (v40 + 1) - 4) & 0xF0u) >> 4;
        JUMPOUT(v43, 116, sub_6F7B2EA2);
        if ( v43 == 117 )
          v44 += 32;
        if ( v52 == *(_WORD *)(a40 + 332) + v44 )
        {
          v45 = v51 & 0xF;
          v46 = v45 - 7;
          v47 = v45 - 8;
          if ( v47 >= 0 )
            v47 = v46;
          retaddr = a40;
          v49 = v47 << (6 - *(_BYTE *)(a40 + 334));
          (*(void (**)(void))(a40 + 604))();
          v40 = *(_DWORD *)(a40 + 28);
        }
      }
      JUMPOUT(v50, ++v41, sub_6F7B347E);
      JUMPOUT(v40, 1, sub_6F7B3264);
    }
  }
  sub_6F7B326D(
    a40,
    a1,
    a2,
    a3,
    a4,
    a5,
    v50,
    a7,
    (int)a8,
    v52,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40);
}
