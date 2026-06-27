int __stdcall sub_6F8EF430(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi@1
  unsigned int v6; // esi@1
  char v7; // ST00_1@1
  void *v8; // esp@1
  int v9; // ebx@1
  int v10; // edx@1
  int v11; // esi@3
  char v12; // si@5
  unsigned int v14; // eax@9
  void *v15; // esp@9
  int v16; // ST0C_4@9
  char *v17; // eax@9
  _WORD *v18; // eax@9
  unsigned int v19; // eax@4
  void *v20; // esp@4
  signed int v21; // ST14_4@4
  char v22; // [sp+0h] [bp-68h]@1
  int v23; // [sp+24h] [bp-44h]@1
  unsigned int v24; // [sp+28h] [bp-40h]@1
  int v25; // [sp+2Ch] [bp-3Ch]@1
  _WORD *v26; // [sp+30h] [bp-38h]@1
  int v27; // [sp+34h] [bp-34h]@1
  bool v28; // [sp+3Bh] [bp-2Dh]@1
  int v29; // [sp+3Ch] [bp-2Ch]@1

  v29 = a1;
  v27 = a2;
  v25 = a4;
  v5 = sub_6F8BF000(a3 + 108);
  v23 = v5 + 40;
  v6 = *(_DWORD *)(a3 + 12);
  sub_6F8A13B0(0x40u, v7);
  v8 = alloca(64);
  v24 = v6 & 0x4A;
  v26 = (_WORD *)(((unsigned int)&v23 + 3) & 0xFFFFFFF0);
  v28 = v24 != 8 && v24 != 64;
  v9 = sub_6F959580((_WORD *)((((unsigned int)&v23 + 3) & 0xFFFFFFF0) + 40), a5, v5 + 40, v6, v28);
  v10 = (((unsigned int)&v23 + 3) & 0xFFFFFFF0) + 2 * (20 - v9);
  if ( *(_BYTE *)(v5 + 16) )
  {
    v14 = 16 * ((unsigned int)(4 * v9 + 31) >> 4);
    sub_6F8A13B0(v14, v22);
    v15 = alloca(v14);
    v16 = *(_DWORD *)(v5 + 12);
    v17 = *(char **)(v5 + 8);
    v26 = (_WORD *)((((unsigned int)&v23 + 3) & 0xFFFFFFF0) + 4);
    v18 = sub_6F9598C0(v26, *(_WORD *)(v5 + 38), v17, v16, (char *)v10, (char *)(v10 + 2 * v9));
    v10 = (int)v26;
    v9 = v18 - v26;
    if ( v28 )
      goto LABEL_3;
  }
  else if ( v28 )
  {
    goto LABEL_3;
  }
  if ( v6 & 0x200 && a5 )
  {
    if ( v24 == 64 )
    {
      ++v9;
      v10 -= 2;
      *(_WORD *)v10 = *(_WORD *)(v5 + 48);
    }
    else
    {
      v9 += 2;
      v10 -= 4;
      *(_WORD *)(v10 + 2) = *(_WORD *)(v23 + 2 * (((v6 >> 14) & 1) + 2));
      *(_WORD *)v10 = *(_WORD *)(v5 + 48);
    }
  }
LABEL_3:
  v11 = *(_DWORD *)(a3 + 8);
  if ( v11 > v9 )
  {
    v19 = 16 * ((unsigned int)(2 * v11 + 27) >> 4);
    sub_6F8A13B0(v19, v22);
    v20 = alloca(v19);
    v21 = v9;
    v9 = v11;
    sub_6F934DA0(a3, v25, (void *)(((unsigned int)&v23 + 3) & 0xFFFFFFF0), v10, v11, v21);
    v10 = ((unsigned int)&v23 + 3) & 0xFFFFFFF0;
  }
  *(_DWORD *)(a3 + 8) = 0;
  v12 = v27;
  if ( !(_BYTE)v27 && (*(int (__stdcall **)(int, int))(*(_DWORD *)v29 + 48))(v10, v9) != v9 )
    v12 = 1;
  v28 = v12;
  return v29;
}
