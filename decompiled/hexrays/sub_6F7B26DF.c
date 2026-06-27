void __cdecl sub_6F7B26DF(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40)
{
  int v40; // esi@1
  int v41; // eax@1
  int v42; // edi@2
  int v43; // edx@2
  int v44; // ecx@3
  bool v45; // zf@3
  __int16 v46; // ax@3
  int v47; // eax@4
  int v48; // ebx@5
  int v49; // ecx@5
  int v50; // edx@5
  int v51; // eax@5
  int v52; // edx@5
  int v53; // eax@5
  int v54; // edi@5
  int retaddr; // [sp+0h] [bp+0h]@3
  int v56; // [sp+4h] [bp+4h]@3
  int v57; // [sp+8h] [bp+8h]@3
  int v58; // [sp+Ch] [bp+Ch]@3
  int v59; // [sp+Ch] [bp+Ch]@5

  v40 = *(_DWORD *)a8;
  JUMPOUT(*(_DWORD *)a8, *(_WORD *)(a40 + 80), &loc_6F7B1B7D);
  v41 = *(_WORD *)(a40 + 284);
  JUMPOUT(v41, *(_WORD *)(a40 + 44), &loc_6F7B1B7D);
  if ( *(_WORD *)(a40 + 346) )
  {
    v42 = a40;
    v43 = *(_DWORD *)(a40 + 88) + 8 * (unsigned __int16)v40;
  }
  else
  {
    v48 = (unsigned __int16)v40;
    v49 = *(_DWORD *)(a40 + 84);
    v50 = *(_DWORD *)(a40 + 48) + 8 * v41;
    v51 = *(_DWORD *)v50;
    v52 = *(_DWORD *)(v50 + 4);
    *(_DWORD *)(v49 + 8 * v48) = v51;
    *(_DWORD *)(v49 + 8 * v48 + 4) = v52;
    v59 = *(_DWORD *)(a8 + 4);
    retaddr = a40;
    (*(void (**)(void))(a40 + 588))();
    v53 = *(_DWORD *)(a40 + 84);
    v43 = *(_DWORD *)(a40 + 88) + 8 * (unsigned __int16)v40;
    v54 = *(_DWORD *)(v53 + 8 * (unsigned __int16)v40);
    *(_DWORD *)(v43 + 4) = *(_DWORD *)(v53 + 8 * (unsigned __int16)v40 + 4);
    *(_DWORD *)v43 = v54;
    v41 = *(_WORD *)(a40 + 284);
    v42 = a40;
  }
  v44 = *(_DWORD *)(v42 + 52) + 8 * v41;
  v57 = *(_DWORD *)(v43 + 4) - *(_DWORD *)(v44 + 4);
  v56 = *(_DWORD *)v43 - *(_DWORD *)v44;
  v58 = *(_DWORD *)(a8 + 4) - (*(int (**)(void))(v42 + 572))();
  retaddr = a40;
  (*(void (**)(void))(a40 + 584))();
  v45 = (*(_BYTE *)(a40 + 368) & 1) == 0;
  v46 = *(_WORD *)(a40 + 284);
  *(_WORD *)(a40 + 288) = v40;
  *(_WORD *)(a40 + 286) = v46;
  JUMPOUT(v45, &loc_6F7B0FD1);
  *(_WORD *)(a40 + 284) = v40;
  v47 = *(_DWORD *)(a40 + 12);
  JUMPOUT(&loc_6F7B0D90);
}
