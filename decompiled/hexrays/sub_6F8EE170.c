int __stdcall sub_6F8EE170(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax@1
  int v7; // edi@1
  unsigned int v8; // esi@1
  char v9; // ST00_1@1
  void *v10; // esp@1
  _BYTE *v11; // eax@1
  int v12; // ebx@1
  int v13; // edx@1
  int v14; // esi@3
  char v15; // si@5
  unsigned int v17; // eax@9
  void *v18; // esp@9
  int v19; // ST0C_4@9
  char *v20; // eax@9
  _BYTE *v21; // eax@9
  unsigned int v22; // eax@4
  void *v23; // esp@4
  signed int v24; // ST14_4@4
  char v25; // [sp+0h] [bp-68h]@1
  int v26; // [sp+24h] [bp-44h]@1
  int v27; // [sp+28h] [bp-40h]@1
  _BYTE *v28; // [sp+2Ch] [bp-3Ch]@1
  int v29; // [sp+30h] [bp-38h]@1
  int v30; // [sp+34h] [bp-34h]@1
  int v31; // [sp+38h] [bp-30h]@1
  int v32; // [sp+3Ch] [bp-2Ch]@1

  v32 = a1;
  v26 = a5;
  v29 = a2;
  v27 = a4;
  v31 = a6;
  v6 = sub_6F8BEE80(a3 + 108);
  v7 = v6;
  v30 = v6 + 38;
  v8 = *(_DWORD *)(a3 + 12);
  sub_6F8A13B0(0x40u, v9);
  v10 = alloca(64);
  v28 = (_BYTE *)(((unsigned int)&v26 + 3) & 0xFFFFFFF0);
  LOBYTE(v30) = (v8 & 0x4A) != 8 && (v8 & 0x4A) != 64;
  v11 = sub_6F959490((_BYTE *)((((unsigned int)&v26 + 3) & 0xFFFFFFF0) + 40), a5, a6, v6 + 38, v8, v30);
  v12 = (int)v11;
  v13 = (((unsigned int)&v26 + 3) & 0xFFFFFFF0) - (_DWORD)v11 + 40;
  if ( *(_BYTE *)(v7 + 16) )
  {
    v17 = 16 * ((unsigned int)(2 * (_DWORD)v11 + 29) >> 4);
    sub_6F8A13B0(v17, v25);
    v18 = alloca(v17);
    v19 = *(_DWORD *)(v7 + 12);
    v20 = *(char **)(v7 + 8);
    v28 = (_BYTE *)((((unsigned int)&v26 + 3) & 0xFFFFFFF0) + 2);
    v21 = sub_6F959760(v28, *(_BYTE *)(v7 + 37), v20, v19, (_BYTE *)v13, (_BYTE *)(v13 + v12));
    v13 = (int)v28;
    v12 = v21 - v28;
    if ( (_BYTE)v30 )
      goto LABEL_3;
  }
  else if ( (_BYTE)v30 )
  {
    goto LABEL_3;
  }
  if ( v8 & 0x200 && v31 | v26 )
  {
    if ( (v8 & 0x4A) == 64 )
    {
      ++v12;
      *(_BYTE *)--v13 = *(_BYTE *)(v7 + 42);
    }
    else
    {
      v12 += 2;
      v13 -= 2;
      *(_BYTE *)(v13 + 1) = *(_BYTE *)(v7 + ((v8 >> 14) & 1) + 40);
      *(_BYTE *)v13 = *(_BYTE *)(v7 + 42);
    }
  }
LABEL_3:
  v14 = *(_DWORD *)(a3 + 8);
  if ( v14 > v12 )
  {
    v22 = 16 * ((unsigned int)(v14 + 27) >> 4);
    sub_6F8A13B0(v22, v25);
    v23 = alloca(v22);
    v24 = v12;
    v12 = v14;
    sub_6F934AA0(a3, v27, (void *)(((unsigned int)&v26 + 3) & 0xFFFFFFF0), v13, v14, v24);
    v13 = ((unsigned int)&v26 + 3) & 0xFFFFFFF0;
  }
  *(_DWORD *)(a3 + 8) = 0;
  v15 = v29;
  if ( !(_BYTE)v29 && (*(int (__stdcall **)(int, int))(*(_DWORD *)v32 + 48))(v13, v12) != v12 )
    v15 = 1;
  LOBYTE(v31) = v15;
  return v32;
}
