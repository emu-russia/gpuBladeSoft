int __stdcall sub_6F8EDD10(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int v6; // edi@1
  unsigned int v7; // esi@1
  char v8; // ST00_1@1
  void *v9; // esp@1
  _BYTE *v10; // eax@1
  int v11; // ebx@1
  int v12; // edx@1
  int v13; // esi@3
  char v14; // si@5
  unsigned int v16; // eax@9
  void *v17; // esp@9
  int v18; // ST0C_4@9
  char *v19; // eax@9
  _BYTE *v20; // eax@9
  unsigned int v21; // eax@4
  void *v22; // esp@4
  signed int v23; // ST14_4@4
  char v24; // [sp+0h] [bp-68h]@1
  int v25; // [sp+24h] [bp-44h]@1
  unsigned int v26; // [sp+28h] [bp-40h]@1
  int v27; // [sp+2Ch] [bp-3Ch]@1
  _BYTE *v28; // [sp+30h] [bp-38h]@1
  int v29; // [sp+34h] [bp-34h]@1
  bool v30; // [sp+3Bh] [bp-2Dh]@1
  int v31; // [sp+3Ch] [bp-2Ch]@1

  v31 = a1;
  v29 = a2;
  v27 = a4;
  v5 = sub_6F8BEE80(a3 + 108);
  v6 = v5;
  v25 = v5 + 38;
  v7 = *(_DWORD *)(a3 + 12);
  sub_6F8A13B0(0x20u, v8);
  v9 = alloca(32);
  v26 = v7 & 0x4A;
  v28 = (_BYTE *)(((unsigned int)&v25 + 3) & 0xFFFFFFF0);
  v30 = v26 != 8 && v26 != 64;
  v10 = sub_6F9593E0((_BYTE *)((((unsigned int)&v25 + 3) & 0xFFFFFFF0) + 20), a5, v5 + 38, v7, v30);
  v11 = (int)v10;
  v12 = (((unsigned int)&v25 + 3) & 0xFFFFFFF0) - (_DWORD)v10 + 20;
  if ( *(_BYTE *)(v6 + 16) )
  {
    v16 = 16 * ((unsigned int)(2 * (_DWORD)v10 + 29) >> 4);
    sub_6F8A13B0(v16, v24);
    v17 = alloca(v16);
    v18 = *(_DWORD *)(v6 + 12);
    v19 = *(char **)(v6 + 8);
    v28 = (_BYTE *)((((unsigned int)&v25 + 3) & 0xFFFFFFF0) + 2);
    v20 = sub_6F959760(v28, *(_BYTE *)(v6 + 37), v19, v18, (_BYTE *)v12, (_BYTE *)(v12 + v11));
    v12 = (int)v28;
    v11 = v20 - v28;
    if ( v30 )
      goto LABEL_3;
  }
  else if ( v30 )
  {
    goto LABEL_3;
  }
  if ( v7 & 0x200 && a5 )
  {
    if ( v26 == 64 )
    {
      ++v11;
      *(_BYTE *)--v12 = *(_BYTE *)(v6 + 42);
    }
    else
    {
      v11 += 2;
      v12 -= 2;
      *(_BYTE *)(v12 + 1) = *(_BYTE *)(v25 + ((v7 >> 14) & 1) + 2);
      *(_BYTE *)v12 = *(_BYTE *)(v6 + 42);
    }
  }
LABEL_3:
  v13 = *(_DWORD *)(a3 + 8);
  if ( v13 > v11 )
  {
    v21 = 16 * ((unsigned int)(v13 + 27) >> 4);
    sub_6F8A13B0(v21, v24);
    v22 = alloca(v21);
    v23 = v11;
    v11 = v13;
    sub_6F934AA0(a3, v27, (void *)(((unsigned int)&v25 + 3) & 0xFFFFFFF0), v12, v13, v23);
    v12 = ((unsigned int)&v25 + 3) & 0xFFFFFFF0;
  }
  *(_DWORD *)(a3 + 8) = 0;
  v14 = v29;
  if ( !(_BYTE)v29 && (*(int (__stdcall **)(int, int))(*(_DWORD *)v31 + 48))(v12, v11) != v11 )
    v14 = 1;
  v30 = v14;
  return v31;
}
