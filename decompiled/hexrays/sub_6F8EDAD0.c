int __stdcall sub_6F8EDAD0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int v6; // edi@1
  unsigned int v7; // esi@1
  char v8; // ST00_1@1
  void *v9; // esp@1
  int v10; // eax@1
  _BYTE *v11; // eax@4
  int v12; // ebx@4
  int v13; // edx@4
  int v14; // esi@8
  char v15; // si@9
  unsigned int v17; // eax@14
  void *v18; // esp@14
  signed int v19; // ST14_4@14
  unsigned int v20; // eax@16
  void *v21; // esp@16
  int v22; // ST0C_4@16
  char *v23; // eax@16
  _BYTE *v24; // eax@16
  char v25; // [sp+0h] [bp-68h]@4
  char v26; // [sp+27h] [bp-41h]@4
  unsigned int v27; // [sp+28h] [bp-40h]@1
  int v28; // [sp+2Ch] [bp-3Ch]@1
  _BYTE *v29; // [sp+30h] [bp-38h]@4
  int v30; // [sp+34h] [bp-34h]@1
  int v31; // [sp+38h] [bp-30h]@1
  int v32; // [sp+3Ch] [bp-2Ch]@1

  v31 = a1;
  v30 = a2;
  v28 = a4;
  v5 = sub_6F8BEE80(a3 + 108);
  v6 = v5;
  v32 = v5 + 38;
  v7 = *(_DWORD *)(a3 + 12);
  sub_6F8A13B0(0x20u, v8);
  v9 = alloca(32);
  v27 = v7 & 0x4A;
  v10 = a5;
  LOBYTE(v32) = v27 != 8 && v27 != 64;
  if ( a5 <= 0 )
  {
    v10 = -a5;
    if ( (v7 & 0x4A) == 8 || (v7 & 0x4A) == 64 )
      v10 = a5;
  }
  v29 = (_BYTE *)((unsigned int)&v26 & 0xFFFFFFF0);
  v11 = sub_6F9593E0((_BYTE *)(((unsigned int)&v26 & 0xFFFFFFF0) + 20), v10, v6 + 38, v7, v32);
  v12 = (int)v11;
  v13 = v29 - v11 + 20;
  if ( !*(_BYTE *)(v6 + 16) )
  {
    if ( (_BYTE)v32 )
      goto LABEL_6;
LABEL_17:
    if ( v7 & 0x200 && a5 )
    {
      if ( v27 == 64 )
      {
        ++v12;
        *(_BYTE *)--v13 = *(_BYTE *)(v6 + 42);
      }
      else
      {
        v12 += 2;
        v13 -= 2;
        *(_BYTE *)(v13 + 1) = *(_BYTE *)(v6 + ((v7 >> 14) & 1) + 40);
        *(_BYTE *)v13 = *(_BYTE *)(v6 + 42);
      }
    }
    goto LABEL_8;
  }
  v20 = 16 * ((unsigned int)(2 * (_DWORD)v11 + 29) >> 4);
  sub_6F8A13B0(v20, v25);
  v21 = alloca(v20);
  v22 = *(_DWORD *)(v6 + 12);
  v23 = *(char **)(v6 + 8);
  v29 = (_BYTE *)(((unsigned int)&v26 & 0xFFFFFFF0) + 2);
  v24 = sub_6F959760(v29, *(_BYTE *)(v6 + 37), v23, v22, (_BYTE *)v13, (_BYTE *)(v13 + v12));
  v13 = (int)v29;
  v12 = v24 - v29;
  if ( !(_BYTE)v32 )
    goto LABEL_17;
LABEL_6:
  if ( a5 < 0 )
  {
    ++v12;
    *(_BYTE *)--v13 = *(_BYTE *)(v6 + 38);
  }
  else if ( v7 & 0x800 )
  {
    ++v12;
    *(_BYTE *)--v13 = *(_BYTE *)(v6 + 39);
    v14 = *(_DWORD *)(a3 + 8);
    if ( v14 <= v12 )
      goto LABEL_9;
LABEL_14:
    v17 = 16 * ((unsigned int)(v14 + 27) >> 4);
    sub_6F8A13B0(v17, v25);
    v18 = alloca(v17);
    v19 = v12;
    v12 = v14;
    sub_6F934AA0(a3, v28, (void *)((unsigned int)&v26 & 0xFFFFFFF0), v13, v14, v19);
    v13 = (unsigned int)&v26 & 0xFFFFFFF0;
    goto LABEL_9;
  }
LABEL_8:
  v14 = *(_DWORD *)(a3 + 8);
  if ( v14 > v12 )
    goto LABEL_14;
LABEL_9:
  *(_DWORD *)(a3 + 8) = 0;
  v15 = v30;
  if ( !(_BYTE)v30 && (*(int (__stdcall **)(int, int))(*(_DWORD *)v31 + 48))(v13, v12) != v12 )
    v15 = 1;
  LOBYTE(v32) = v15;
  return v31;
}
