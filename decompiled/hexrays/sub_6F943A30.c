int __fastcall sub_6F943A30(int a1, int a2, int a3)
{
  int v3; // ebx@1
  int v4; // edx@3
  unsigned int v5; // ecx@4
  int v6; // esi@5
  char *v7; // eax@5
  int v9; // edi@10
  int v10; // eax@10
  int v11; // esi@11
  int v12; // ebx@11
  int v13; // ecx@11
  __int16 v14; // cx@12
  int v15; // ebx@12
  int v16; // eax@12
  unsigned int v17; // eax@14
  const void *v18; // edx@18
  int *v19; // eax@20
  unsigned int v20; // edx@20
  int v21; // edx@24
  unsigned int v22; // ecx@24
  int v23; // ebx@24
  int v24; // [sp+0h] [bp-98h]@1
  unsigned int v25; // [sp+1Ch] [bp-7Ch]@20
  unsigned int v26; // [sp+20h] [bp-78h]@5
  int v27; // [sp+24h] [bp-74h]@1
  int v28; // [sp+28h] [bp-70h]@1
  char v29; // [sp+2Ch] [bp-6Ch]@1
  int v30; // [sp+30h] [bp-68h]@18
  int (__cdecl *v31)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-54h]@1
  __int16 *v32; // [sp+48h] [bp-50h]@1
  char *v33; // [sp+4Ch] [bp-4Ch]@1
  int (*v34)(); // [sp+50h] [bp-48h]@1
  int *v35; // [sp+54h] [bp-44h]@1
  int *v36; // [sp+68h] [bp-30h]@14
  unsigned int v37; // [sp+6Ch] [bp-2Ch]@14
  unsigned int v38; // [sp+70h] [bp-28h]@14
  char v39; // [sp+80h] [bp-18h]@1

  v33 = &v39;
  v28 = a1;
  v27 = a3;
  v31 = sub_6F962A50;
  v32 = &word_6F96ACCE;
  v34 = sub_6F943CD8;
  v35 = &v24;
  sub_6F8A1A60((int *)&v29);
  v3 = *(_DWORD *)(v28 + 32);
  if ( !(v3 & 0x10) )
    goto LABEL_27;
  if ( (_WORD)v27 == -1 )
  {
    LOWORD(v28) = 0;
    goto LABEL_9;
  }
  v4 = *(_DWORD *)(v28 + 36);
  if ( v4 == v28 + 44 )
    v5 = 7;
  else
    v5 = *(_DWORD *)(v28 + 44);
  v6 = *(_DWORD *)(v28 + 16);
  v7 = *(char **)(v28 + 20);
  v26 = *(_DWORD *)(v28 + 24);
  if ( (signed int)(v26 - v6) >> 1 >= v5 )
  {
    if ( v26 > (unsigned int)v7 )
    {
      *(_WORD *)v7 = v27;
LABEL_8:
      *(_DWORD *)(v28 + 20) = v7 + 2;
      LOWORD(v28) = v27;
      goto LABEL_9;
    }
    if ( v5 != 0x3FFFFFFF )
    {
      v37 = 0;
      v36 = (int *)&v38;
      v17 = 2 * v5;
      LOWORD(v38) = 0;
      if ( 2 * v5 > 0x3FFFFFFF )
        v17 = 0x3FFFFFFF;
      if ( v17 < 0x200 )
        v17 = 512;
      v30 = 1;
      sub_6F93EE90((int)&v36, v17);
      v18 = *(const void **)(v28 + 16);
      v26 = v37;
      if ( v18 )
      {
        sub_6F93CF20((int)&v36, 0, v37, v18, (*(_DWORD *)(v28 + 24) - (signed int)v18) >> 1);
        v26 = v37;
      }
      v19 = v36;
      v25 = v26 + 1;
      v20 = 7;
      if ( (unsigned int *)v36 != &v38 )
        v20 = v38;
      if ( v26 + 1 > v20 )
      {
        v30 = 1;
        sub_6F93F200((int)&v36, v26, 0, 0, 1);
        v19 = v36;
      }
      v21 = v26;
      v22 = v25;
      *((_WORD *)v19 + v26) = v27;
      v23 = v28;
      v37 = v22;
      *((_WORD *)v19 + v21 + 1) = 0;
      sub_6F93D930(v23 + 36, (int)&v36);
      sub_6F9435B0(
        v28,
        *(_DWORD *)(v28 + 36),
        (*(_DWORD *)(v28 + 8) - *(_DWORD *)(v28 + 4)) >> 1,
        (*(_DWORD *)(v28 + 20) - *(_DWORD *)(v28 + 16)) >> 1);
      if ( (unsigned int *)v36 != &v38 )
        j_free_1(v36);
      v7 = *(char **)(v28 + 20);
      goto LABEL_8;
    }
LABEL_27:
    LOWORD(v28) = -1;
    goto LABEL_9;
  }
  v9 = v28;
  v10 = (int)(&v7[v4] - v6);
  *(_DWORD *)(v28 + 16) = v4;
  *(_DWORD *)(v9 + 24) = v4 + 2 * v5;
  *(_DWORD *)(v9 + 20) = v10;
  if ( v3 & 8 )
  {
    v11 = *(_DWORD *)(v9 + 12);
    v12 = *(_DWORD *)(v9 + 4);
    *(_DWORD *)(v9 + 4) = v4;
    v26 = v11;
    v13 = *(_DWORD *)(v9 + 8);
    *(_DWORD *)(v9 + 12) = v4 + 2 * ((v11 - v12) >> 1) + 2;
    *(_DWORD *)(v9 + 8) = v4 + v13 - v12;
  }
  v14 = v27;
  v15 = v28;
  v16 = v10 + 2;
  *(_WORD *)(v16 - 2) = v27;
  LOWORD(v28) = v14;
  *(_DWORD *)(v15 + 20) = v16;
LABEL_9:
  sub_6F8A1AD0((int *)&v29);
  return (unsigned __int16)v28;
}
