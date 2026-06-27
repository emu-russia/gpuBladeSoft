int __stdcall sub_6F8EF630(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // eax@1
  int v6; // edi@1
  unsigned int v7; // ebx@1
  char v8; // ST00_1@1
  void *v9; // esp@1
  unsigned __int64 v10; // rcx@1
  unsigned int v11; // esi@1
  bool v12; // dl@1
  bool v13; // zf@1
  __int64 v14; // rax@1
  int v15; // ebx@4
  int v16; // edx@4
  int v17; // esi@8
  char v18; // si@9
  unsigned int v20; // eax@14
  void *v21; // esp@14
  signed int v22; // ST14_4@14
  unsigned int v23; // eax@16
  void *v24; // esp@16
  _WORD *v25; // eax@16
  char v26; // [sp+0h] [bp-68h]@4
  int v27; // [sp+20h] [bp-48h]@1
  int v28; // [sp+24h] [bp-44h]@1
  int v29; // [sp+28h] [bp-40h]@1
  unsigned int v30; // [sp+2Ch] [bp-3Ch]@1
  int v31; // [sp+30h] [bp-38h]@1
  int v32; // [sp+34h] [bp-34h]@1
  __int64 v33; // [sp+38h] [bp-30h]@1

  v31 = a1;
  v29 = a2;
  v28 = a4;
  v33 = a5;
  v5 = sub_6F8BF000(a3 + 108);
  v6 = v5;
  v32 = v5 + 40;
  v30 = *(_DWORD *)(a3 + 12);
  LOBYTE(v7) = v30;
  sub_6F8A13B0(0x60u, v8);
  v10 = __PAIR__(v7, (unsigned int)a5) & 0x4AFFFFFFFFi64;
  v9 = alloca(96);
  v27 = HIDWORD(v10);
  v11 = ((unsigned int)&v28 + 3) & 0xFFFFFFF0;
  v12 = HIDWORD(v10) != 64;
  v13 = HIDWORD(v10) == 8;
  HIDWORD(v10) = HIDWORD(a5);
  LODWORD(v14) = a5;
  LOBYTE(v32) = !v13 & BYTE4(v14);
  HIDWORD(v14) = HIDWORD(a5);
  if ( ((HIDWORD(a5) | (((v10 - 1) >> 32) - 1)) & 0x80000000) != 0i64 && (_BYTE)v32 )
    v14 = -v14;
  v15 = sub_6F959630((_WORD *)(v11 + 80), v14, HIDWORD(v14), v6 + 40, v30, v32);
  v16 = v11 + 2 * (40 - v15);
  if ( !*(_BYTE *)(v6 + 16) )
  {
    if ( (_BYTE)v32 )
      goto LABEL_6;
LABEL_17:
    if ( v30 & 0x200 && v33 )
    {
      if ( v27 == 64 )
      {
        ++v15;
        v16 -= 2;
        *(_WORD *)v16 = *(_WORD *)(v6 + 48);
      }
      else
      {
        v15 += 2;
        v16 -= 4;
        *(_WORD *)(v16 + 2) = *(_WORD *)(v6 + 40 + 2 * (((v30 >> 14) & 1) + 2));
        *(_WORD *)v16 = *(_WORD *)(v6 + 48);
      }
    }
    goto LABEL_8;
  }
  v23 = 16 * ((unsigned int)(4 * v15 + 31) >> 4);
  sub_6F8A13B0(v23, v26);
  v24 = alloca(v23);
  v25 = sub_6F9598C0(
          (_WORD *)((((unsigned int)&v28 + 3) & 0xFFFFFFF0) + 4),
          *(_WORD *)(v6 + 38),
          *(char **)(v6 + 8),
          *(_DWORD *)(v6 + 12),
          (char *)v16,
          (char *)(v16 + 2 * v15));
  v16 = (((unsigned int)&v28 + 3) & 0xFFFFFFF0) + 4;
  v15 = ((signed int)v25 - v16) >> 1;
  if ( !(_BYTE)v32 )
    goto LABEL_17;
LABEL_6:
  if ( SHIDWORD(v33) < 0 )
  {
    ++v15;
    v16 -= 2;
    *(_WORD *)v16 = *(_WORD *)(v6 + 40);
  }
  else if ( v30 & 0x800 )
  {
    ++v15;
    v16 -= 2;
    *(_WORD *)v16 = *(_WORD *)(v6 + 42);
    v17 = *(_DWORD *)(a3 + 8);
    if ( v17 <= v15 )
      goto LABEL_9;
LABEL_14:
    v20 = 16 * ((unsigned int)(2 * v17 + 27) >> 4);
    sub_6F8A13B0(v20, v26);
    v21 = alloca(v20);
    v22 = v15;
    v15 = v17;
    sub_6F934DA0(a3, v28, (void *)(((unsigned int)&v28 + 3) & 0xFFFFFFF0), v16, v17, v22);
    v16 = ((unsigned int)&v28 + 3) & 0xFFFFFFF0;
    goto LABEL_9;
  }
LABEL_8:
  v17 = *(_DWORD *)(a3 + 8);
  if ( v17 > v15 )
    goto LABEL_14;
LABEL_9:
  *(_DWORD *)(a3 + 8) = 0;
  v18 = v29;
  if ( !(_BYTE)v29 && (*(int (__stdcall **)(int, int))(*(_DWORD *)v31 + 48))(v16, v15) != v15 )
    v18 = 1;
  LOBYTE(v33) = v18;
  return v31;
}
