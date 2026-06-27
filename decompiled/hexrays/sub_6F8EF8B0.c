int __stdcall sub_6F8EF8B0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi@1
  unsigned int v7; // esi@1
  char v8; // ST00_1@1
  void *v9; // esp@1
  int v10; // ebx@1
  int v11; // edx@1
  int v12; // esi@3
  char v13; // si@5
  unsigned int v15; // eax@9
  void *v16; // esp@9
  int v17; // ST0C_4@9
  char *v18; // eax@9
  _WORD *v19; // eax@9
  unsigned int v20; // eax@4
  void *v21; // esp@4
  signed int v22; // ST14_4@4
  char v23; // [sp+0h] [bp-68h]@1
  int v24; // [sp+24h] [bp-44h]@1
  int v25; // [sp+28h] [bp-40h]@1
  _WORD *v26; // [sp+2Ch] [bp-3Ch]@1
  int v27; // [sp+30h] [bp-38h]@1
  int v28; // [sp+34h] [bp-34h]@1
  int v29; // [sp+38h] [bp-30h]@1
  int v30; // [sp+3Ch] [bp-2Ch]@1

  v30 = a1;
  v24 = a5;
  v27 = a2;
  v25 = a4;
  v29 = a6;
  v6 = sub_6F8BF000(a3 + 108);
  v28 = v6 + 40;
  v7 = *(_DWORD *)(a3 + 12);
  sub_6F8A13B0(0x60u, v8);
  v9 = alloca(96);
  v26 = (_WORD *)(((unsigned int)&v24 + 3) & 0xFFFFFFF0);
  LOBYTE(v28) = (v7 & 0x4A) != 8 && (v7 & 0x4A) != 64;
  v10 = sub_6F959630((_WORD *)((((unsigned int)&v24 + 3) & 0xFFFFFFF0) + 80), a5, a6, v6 + 40, v7, v28);
  v11 = (((unsigned int)&v24 + 3) & 0xFFFFFFF0) + 2 * (40 - v10);
  if ( *(_BYTE *)(v6 + 16) )
  {
    v15 = 16 * ((unsigned int)(4 * v10 + 31) >> 4);
    sub_6F8A13B0(v15, v23);
    v16 = alloca(v15);
    v17 = *(_DWORD *)(v6 + 12);
    v18 = *(char **)(v6 + 8);
    v26 = (_WORD *)((((unsigned int)&v24 + 3) & 0xFFFFFFF0) + 4);
    v19 = sub_6F9598C0(v26, *(_WORD *)(v6 + 38), v18, v17, (char *)v11, (char *)(v11 + 2 * v10));
    v11 = (int)v26;
    v10 = v19 - v26;
    if ( (_BYTE)v28 )
      goto LABEL_3;
  }
  else if ( (_BYTE)v28 )
  {
    goto LABEL_3;
  }
  if ( v7 & 0x200 && v29 | v24 )
  {
    if ( (v7 & 0x4A) == 64 )
    {
      ++v10;
      v11 -= 2;
      *(_WORD *)v11 = *(_WORD *)(v6 + 48);
    }
    else
    {
      v10 += 2;
      v11 -= 4;
      *(_WORD *)(v11 + 2) = *(_WORD *)(v6 + 40 + 2 * (((v7 >> 14) & 1) + 2));
      *(_WORD *)v11 = *(_WORD *)(v6 + 48);
    }
  }
LABEL_3:
  v12 = *(_DWORD *)(a3 + 8);
  if ( v12 > v10 )
  {
    v20 = 16 * ((unsigned int)(2 * v12 + 27) >> 4);
    sub_6F8A13B0(v20, v23);
    v21 = alloca(v20);
    v22 = v10;
    v10 = v12;
    sub_6F934DA0(a3, v25, (void *)(((unsigned int)&v24 + 3) & 0xFFFFFFF0), v11, v12, v22);
    v11 = ((unsigned int)&v24 + 3) & 0xFFFFFFF0;
  }
  *(_DWORD *)(a3 + 8) = 0;
  v13 = v27;
  if ( !(_BYTE)v27 && (*(int (__stdcall **)(int, int))(*(_DWORD *)v30 + 48))(v11, v10) != v10 )
    v13 = 1;
  LOBYTE(v29) = v13;
  return v30;
}
