int __stdcall sub_6F8EF1E0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int v6; // edi@1
  unsigned int v7; // esi@1
  char v8; // ST00_1@1
  void *v9; // esp@1
  int v10; // eax@1
  int v11; // ebx@4
  int v12; // edx@4
  int v13; // esi@8
  char v14; // si@9
  unsigned int v16; // eax@14
  void *v17; // esp@14
  signed int v18; // ST14_4@14
  unsigned int v19; // eax@16
  void *v20; // esp@16
  int v21; // ST0C_4@16
  char *v22; // eax@16
  _WORD *v23; // eax@16
  char v24; // [sp+0h] [bp-68h]@4
  char v25; // [sp+27h] [bp-41h]@4
  unsigned int v26; // [sp+28h] [bp-40h]@1
  int v27; // [sp+2Ch] [bp-3Ch]@1
  _WORD *v28; // [sp+30h] [bp-38h]@4
  int v29; // [sp+34h] [bp-34h]@1
  int v30; // [sp+38h] [bp-30h]@1
  int v31; // [sp+3Ch] [bp-2Ch]@1

  v30 = a1;
  v29 = a2;
  v27 = a4;
  v5 = sub_6F8BF000(a3 + 108);
  v6 = v5;
  v31 = v5 + 40;
  v7 = *(_DWORD *)(a3 + 12);
  sub_6F8A13B0(0x40u, v8);
  v9 = alloca(64);
  v26 = v7 & 0x4A;
  v10 = a5;
  LOBYTE(v31) = v26 != 8 && v26 != 64;
  if ( a5 <= 0 )
  {
    v10 = -a5;
    if ( (v7 & 0x4A) == 8 || (v7 & 0x4A) == 64 )
      v10 = a5;
  }
  v28 = (_WORD *)((unsigned int)&v25 & 0xFFFFFFF0);
  v11 = sub_6F959580((_WORD *)(((unsigned int)&v25 & 0xFFFFFFF0) + 40), v10, v6 + 40, v7, v31);
  v12 = (int)&v28[20 - v11];
  if ( !*(_BYTE *)(v6 + 16) )
  {
    if ( (_BYTE)v31 )
      goto LABEL_6;
LABEL_17:
    if ( v7 & 0x200 && a5 )
    {
      if ( v26 == 64 )
      {
        ++v11;
        v12 -= 2;
        *(_WORD *)v12 = *(_WORD *)(v6 + 48);
      }
      else
      {
        v11 += 2;
        v12 -= 4;
        *(_WORD *)(v12 + 2) = *(_WORD *)(v6 + 40 + 2 * (((v7 >> 14) & 1) + 2));
        *(_WORD *)v12 = *(_WORD *)(v6 + 48);
      }
    }
    goto LABEL_8;
  }
  v19 = 16 * ((unsigned int)(4 * v11 + 31) >> 4);
  sub_6F8A13B0(v19, v24);
  v20 = alloca(v19);
  v21 = *(_DWORD *)(v6 + 12);
  v22 = *(char **)(v6 + 8);
  v28 = (_WORD *)(((unsigned int)&v25 & 0xFFFFFFF0) + 4);
  v23 = sub_6F9598C0(v28, *(_WORD *)(v6 + 38), v22, v21, (char *)v12, (char *)(v12 + 2 * v11));
  v12 = (int)v28;
  v11 = v23 - v28;
  if ( !(_BYTE)v31 )
    goto LABEL_17;
LABEL_6:
  if ( a5 < 0 )
  {
    ++v11;
    v12 -= 2;
    *(_WORD *)v12 = *(_WORD *)(v6 + 40);
  }
  else if ( v7 & 0x800 )
  {
    ++v11;
    v12 -= 2;
    *(_WORD *)v12 = *(_WORD *)(v6 + 42);
    v13 = *(_DWORD *)(a3 + 8);
    if ( v13 <= v11 )
      goto LABEL_9;
LABEL_14:
    v16 = 16 * ((unsigned int)(2 * v13 + 27) >> 4);
    sub_6F8A13B0(v16, v24);
    v17 = alloca(v16);
    v18 = v11;
    v11 = v13;
    sub_6F934DA0(a3, v27, (void *)((unsigned int)&v25 & 0xFFFFFFF0), v12, v13, v18);
    v12 = (unsigned int)&v25 & 0xFFFFFFF0;
    goto LABEL_9;
  }
LABEL_8:
  v13 = *(_DWORD *)(a3 + 8);
  if ( v13 > v11 )
    goto LABEL_14;
LABEL_9:
  *(_DWORD *)(a3 + 8) = 0;
  v14 = v29;
  if ( !(_BYTE)v29 && (*(int (__stdcall **)(int, int))(*(_DWORD *)v30 + 48))(v12, v11) != v11 )
    v14 = 1;
  LOBYTE(v31) = v14;
  return v30;
}
