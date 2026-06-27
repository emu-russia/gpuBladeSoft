signed int __cdecl sub_6F7CA4F0(int a1, int a2, int a3)
{
  unsigned int v3; // ebp@1
  int v4; // edi@1
  unsigned int v5; // eax@1
  unsigned int v6; // esi@2
  signed int result; // eax@3
  unsigned int v8; // edx@5
  unsigned int v9; // eax@5
  unsigned int v10; // esi@6
  char *v11; // eax@7
  char *v12; // edi@7
  int v13; // ecx@8
  int v14; // edx@9
  int v15; // esi@9
  int v16; // edx@9
  bool v17; // zf@9
  int v18; // edx@10
  int v19; // esi@10
  char *v20; // eax@12
  int v21; // edx@14
  int v22; // esi@15
  int v23; // eax@15
  int v24; // eax@15
  int v25; // eax@15
  int v26; // eax@15
  int v27; // eax@15
  int v28; // eax@15
  int v29; // eax@18
  char *v30; // eax@20
  int v31; // ecx@20
  int v32; // [sp+2Ch] [bp-20h]@1

  v32 = 0;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)a1;
  v5 = a2 + *(_WORD *)(a1 + 22) + *(_WORD *)(a1 + 58);
  if ( v5 <= v3 )
  {
    v8 = *(_DWORD *)(a1 + 8);
    v9 = a3 + *(_WORD *)(a1 + 20) + *(_WORD *)(a1 + 56);
    if ( v8 >= v9 )
      return 0;
    goto LABEL_6;
  }
  v6 = (v5 + 7) & 0xFFFFFFF8;
  if ( v6 > 0x7FFF )
    return 10;
  v20 = sub_6F773B30(v4, 8, v3, v6, *(char **)(a1 + 24), &v32);
  v21 = v32;
  *(_DWORD *)(a1 + 24) = v20;
  if ( v21 )
  {
LABEL_15:
    v22 = *(_DWORD *)a1;
    sub_6F773D90(*(_DWORD *)a1, (int)v20);
    v23 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 24) = 0;
    sub_6F773D90(v22, v23);
    v24 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 28) = 0;
    sub_6F773D90(v22, v24);
    v25 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 32) = 0;
    sub_6F773D90(v22, v25);
    v26 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 40) = 0;
    sub_6F773D90(v22, v26);
    *(_DWORD *)(a1 + 52) = 0;
    *(_WORD *)(a1 + 22) = 0;
    *(_WORD *)(a1 + 20) = 0;
    v27 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 56) = v27;
    v28 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 84) = 0;
    *(_DWORD *)(a1 + 88) = 0;
    *(_DWORD *)(a1 + 60) = v28;
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 76) = *(_DWORD *)(a1 + 40);
    return v32;
  }
  *(_DWORD *)(a1 + 28) = sub_6F773B30(v4, 1, v3, v6, *(char **)(a1 + 28), &v32);
  if ( v32 )
    goto LABEL_12;
  if ( !*(_BYTE *)(a1 + 16) )
    goto LABEL_18;
  v30 = sub_6F773B30(v4, 8, 2 * v3, 2 * v6, *(char **)(a1 + 40), &v32);
  v31 = v32;
  *(_DWORD *)(a1 + 40) = v30;
  if ( v31 )
  {
LABEL_12:
    v20 = *(char **)(a1 + 24);
    goto LABEL_15;
  }
  memmove(&v30[8 * v6], &v30[8 * v3], 8 * v3);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 40) + 8 * v6;
LABEL_18:
  v13 = *(_WORD *)(a1 + 20);
  v29 = *(_WORD *)(a1 + 56);
  v8 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = v6;
  v9 = a3 + v13 + v29;
  if ( v8 >= v9 )
  {
    v12 = *(char **)(a1 + 32);
    result = v32;
    goto LABEL_9;
  }
LABEL_6:
  v10 = (v9 + 3) & 0xFFFFFFFC;
  if ( v10 > 0x7FFF )
    return 10;
  v11 = sub_6F773B30(v4, 2, v8, v10, *(char **)(a1 + 32), &v32);
  v12 = v11;
  *(_DWORD *)(a1 + 32) = v11;
  result = v32;
  if ( v32 )
    goto LABEL_12;
  v13 = *(_WORD *)(a1 + 20);
  *(_DWORD *)(a1 + 8) = v10;
LABEL_9:
  v14 = *(_WORD *)(a1 + 22);
  v15 = 8 * v14;
  v16 = *(_DWORD *)(a1 + 28) + v14;
  v17 = *(_BYTE *)(a1 + 16) == 0;
  *(_DWORD *)(a1 + 60) = v15 + *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 64) = v16;
  *(_DWORD *)(a1 + 68) = &v12[2 * v13];
  if ( !v17 )
  {
    v18 = v15 + *(_DWORD *)(a1 + 40);
    v19 = *(_DWORD *)(a1 + 44) + v15;
    *(_DWORD *)(a1 + 76) = v18;
    *(_DWORD *)(a1 + 80) = v19;
  }
  if ( result )
    goto LABEL_12;
  return result;
}
