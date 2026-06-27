int __stdcall sub_6F8EDF10(int a1, int a2, int a3, int a4, __int64 a5)
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
  _BYTE *v15; // eax@4
  int v16; // ebx@4
  int v17; // edx@4
  int v18; // esi@8
  char v19; // si@9
  unsigned int v21; // eax@14
  void *v22; // esp@14
  signed int v23; // ST14_4@14
  unsigned int v24; // eax@16
  void *v25; // esp@16
  _BYTE *v26; // eax@16
  char v27; // [sp+0h] [bp-68h]@4
  int v28; // [sp+20h] [bp-48h]@1
  int v29; // [sp+24h] [bp-44h]@1
  int v30; // [sp+28h] [bp-40h]@1
  unsigned int v31; // [sp+2Ch] [bp-3Ch]@1
  int v32; // [sp+30h] [bp-38h]@1
  int v33; // [sp+34h] [bp-34h]@1
  __int64 v34; // [sp+38h] [bp-30h]@1

  v32 = a1;
  v30 = a2;
  v29 = a4;
  v34 = a5;
  v5 = sub_6F8BEE80(a3 + 108);
  v6 = v5;
  v7 = *(_DWORD *)(a3 + 12);
  v33 = v5 + 38;
  v31 = v7;
  sub_6F8A13B0(0x40u, v8);
  v10 = __PAIR__(v7, (unsigned int)a5) & 0x4AFFFFFFFFi64;
  v9 = alloca(64);
  v28 = HIDWORD(v10);
  v11 = ((unsigned int)&v29 + 3) & 0xFFFFFFF0;
  v12 = HIDWORD(v10) != 64;
  v13 = HIDWORD(v10) == 8;
  HIDWORD(v10) = HIDWORD(a5);
  LODWORD(v14) = a5;
  LOBYTE(v33) = !v13 & BYTE4(v14);
  HIDWORD(v14) = HIDWORD(a5);
  if ( ((HIDWORD(a5) | (((v10 - 1) >> 32) - 1)) & 0x80000000) != 0i64 && (_BYTE)v33 )
    v14 = -v14;
  v15 = sub_6F959490((_BYTE *)(v11 + 40), v14, HIDWORD(v14), v6 + 38, v31, v33);
  v16 = (int)v15;
  v17 = v11 - (_DWORD)v15 + 40;
  if ( !*(_BYTE *)(v6 + 16) )
  {
    if ( (_BYTE)v33 )
      goto LABEL_6;
LABEL_17:
    if ( v31 & 0x200 && v34 )
    {
      if ( v28 == 64 )
      {
        ++v16;
        *(_BYTE *)--v17 = *(_BYTE *)(v6 + 42);
      }
      else
      {
        v16 += 2;
        v17 -= 2;
        *(_BYTE *)(v17 + 1) = *(_BYTE *)(v6 + ((v31 >> 14) & 1) + 40);
        *(_BYTE *)v17 = *(_BYTE *)(v6 + 42);
      }
    }
    goto LABEL_8;
  }
  v24 = 16 * ((unsigned int)(2 * (_DWORD)v15 + 29) >> 4);
  sub_6F8A13B0(v24, v27);
  v25 = alloca(v24);
  v26 = sub_6F959760(
          (_BYTE *)((((unsigned int)&v29 + 3) & 0xFFFFFFF0) + 2),
          *(_BYTE *)(v6 + 37),
          *(char **)(v6 + 8),
          *(_DWORD *)(v6 + 12),
          (_BYTE *)v17,
          (_BYTE *)(v17 + v16));
  v17 = (((unsigned int)&v29 + 3) & 0xFFFFFFF0) + 2;
  v16 = (int)&v26[-v17];
  if ( !(_BYTE)v33 )
    goto LABEL_17;
LABEL_6:
  if ( SHIDWORD(v34) < 0 )
  {
    ++v16;
    *(_BYTE *)--v17 = *(_BYTE *)(v6 + 38);
  }
  else if ( v31 & 0x800 )
  {
    ++v16;
    *(_BYTE *)--v17 = *(_BYTE *)(v6 + 39);
    v18 = *(_DWORD *)(a3 + 8);
    if ( v18 <= v16 )
      goto LABEL_9;
LABEL_14:
    v21 = 16 * ((unsigned int)(v18 + 27) >> 4);
    sub_6F8A13B0(v21, v27);
    v22 = alloca(v21);
    v23 = v16;
    v16 = v18;
    sub_6F934AA0(a3, v29, (void *)(((unsigned int)&v29 + 3) & 0xFFFFFFF0), v17, v18, v23);
    v17 = ((unsigned int)&v29 + 3) & 0xFFFFFFF0;
    goto LABEL_9;
  }
LABEL_8:
  v18 = *(_DWORD *)(a3 + 8);
  if ( v18 > v16 )
    goto LABEL_14;
LABEL_9:
  *(_DWORD *)(a3 + 8) = 0;
  v19 = v30;
  if ( !(_BYTE)v30 && (*(int (__stdcall **)(int, int))(*(_DWORD *)v32 + 48))(v17, v16) != v16 )
    v19 = 1;
  LOBYTE(v34) = v19;
  return v32;
}
