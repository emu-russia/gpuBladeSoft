int __usercall sub_6F967BF7@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, int a4, int a5, int a6)
{
  int v6; // ebp@1
  int v7; // ebx@1
  signed int v8; // esi@1
  int v9; // ebp@7
  signed int v10; // eax@9
  int v11; // ebp@11
  int v12; // eax@13
  unsigned __int8 *v14; // [sp+18h] [bp-1C4h]@1
  int v15; // [sp+1Ch] [bp-1C0h]@1
  int v16; // [sp+20h] [bp-1BCh]@1
  char v17; // [sp+30h] [bp-1ACh]@1
  char *v18; // [sp+1B4h] [bp-28h]@1
  int v19; // [sp+1B8h] [bp-24h]@1
  int v20; // [sp+1BCh] [bp-20h]@1

  v6 = a2;
  v7 = a1;
  v14 = 0;
  memset(&v16, 0, 0x1A0u);
  v19 = 4096;
  v20 = a1;
  v18 = &v17;
  v16 = a6;
  memset((void *)a1, 0, 0xB0u);
  *(_DWORD *)(a1 + 32) = -6553600;
  *(_DWORD *)(a1 + 36) = 3276800;
  *(_DWORD *)(a1 + 44) = 2;
  *(_DWORD *)(a1 + 48) = 0x10000;
  *(_DWORD *)(a1 + 60) = 0x10000;
  *(_DWORD *)(a1 + 156) = 8720;
  *(_DWORD *)a1 = 0xFFFF;
  *(_DWORD *)(a1 + 4) = 0xFFFF;
  *(_DWORD *)(a1 + 8) = 0xFFFF;
  *(_DWORD *)(a1 + 12) = 0xFFFF;
  *(_DWORD *)(a1 + 16) = 0xFFFF;
  *(_DWORD *)(a1 + 20) = 0xFFFF;
  *(_DWORD *)(a1 + 128) = 0xFFFF;
  *(_DWORD *)(a1 + 132) = 0xFFFF;
  *(_DWORD *)(a1 + 136) = 0xFFFF;
  *(_DWORD *)(a1 + 172) = 0xFFFF;
  v8 = sub_6F77D330(a2, a3, (int *)&v14, &v15);
  if ( !v8 )
    v8 = sub_6F9679E9((int)&v16, v14, (unsigned int)&v14[v15]);
  if ( !*(_DWORD *)(v6 + 28) )
    sub_6F772340(*(_DWORD *)v6, &v14);
  if ( !v8 && *(_DWORD *)(v7 + 132) == 0xFFFF )
  {
    v9 = *(_DWORD *)(v7 + 116);
    if ( v9 && *(_DWORD *)(v7 + 120) )
    {
      memset((void *)(v7 + 176), 0, 0x168u);
      *(_DWORD *)(v7 + 376) = 7;
      *(_DWORD *)(v7 + 380) = 1;
      *(_DWORD *)(v7 + 508) = -1;
      *(_DWORD *)(v7 + 516) = 3932;
      *(_DWORD *)(v7 + 372) = 2596864;
      memset(&v16, 0, 0x1A0u);
      v19 = 0x2000;
      v20 = v7 + 176;
      v18 = &v17;
      v16 = a6;
      v10 = sub_6F771FF0(a4, v9 + a5);
      if ( v10 )
        return v10;
      v10 = sub_6F772380(a4, *(_DWORD *)(v7 + 120));
      if ( v10 )
        return v10;
      v11 = sub_6F9679E9((int)&v16, *(unsigned __int8 **)(a4 + 32), *(_DWORD *)(a4 + 36));
      sub_6F772460(a4);
      if ( v11 )
        return v11;
      *(_BYTE *)(v7 + 176) &= 0xFEu;
    }
    v12 = *(_DWORD *)(v7 + 524);
    if ( v12 )
    {
      v8 = sub_6F771FF0(a4, a5 + *(_DWORD *)(v7 + 116) + v12);
      if ( !v8 )
      {
        v8 = sub_6F77AD30(v7 + 536, a4, 1);
        if ( !v8 )
          v8 = sub_6F967718((int *)(v7 + 536), (char **)(v7 + 568), 0);
      }
    }
  }
  return v8;
}
