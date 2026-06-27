int __usercall sub_6F79A4B0@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, int a4, int a5, int a6)
{
  int v6; // ebp@1
  int v7; // edi@1
  int v8; // ebx@1
  int v9; // eax@2
  int v10; // esi@2
  bool v11; // cf@2
  bool v12; // zf@2
  int v13; // ebx@3
  int v14; // esi@4
  unsigned int v15; // edx@6
  int v16; // eax@9
  unsigned int v17; // eax@9
  unsigned int v18; // ebx@9
  char *v19; // eax@10
  int v20; // ebx@10
  signed int v21; // edi@11
  _BYTE *v22; // edx@11
  signed int i; // esi@11
  int v24; // ecx@12
  int v25; // ecx@12
  bool v26; // zf@14
  bool v27; // zf@18
  int result; // eax@23
  char *v29; // eax@28
  char *v30; // edx@28
  signed int v31; // ebx@30
  char *v32; // eax@30
  char *v33; // edx@30
  char *v34; // eax@32
  char v35; // [sp+28h] [bp-34h]@12
  unsigned int v36; // [sp+28h] [bp-34h]@30
  unsigned int v37; // [sp+28h] [bp-34h]@32
  unsigned int v38; // [sp+2Ch] [bp-30h]@28
  int v39; // [sp+3Ch] [bp-20h]@9

  v6 = a2;
  v7 = a1;
  v8 = *(_DWORD *)(a1 + 12);
  if ( v8 )
  {
    v9 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(v9 + 16 * (v8 + 0xFFFFFFF) + 12) = a5;
    v10 = v8 + 1;
    v11 = (unsigned int)(v8 + 1) < *(_DWORD *)(v7 + 16);
    v12 = v8 + 1 == *(_DWORD *)(v7 + 16);
    if ( (unsigned int)(v8 + 1) <= *(_DWORD *)(v7 + 16) )
      goto LABEL_3;
    v15 = *(_DWORD *)(v7 + 16);
    v39 = 0;
    if ( v11 || v12 )
      goto LABEL_3;
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 16);
    v9 = *(_DWORD *)(a1 + 20);
    if ( v15 )
    {
      *(_DWORD *)v9 = 0;
      *(_DWORD *)(v9 + 12) = 0;
      v10 = 1;
      *(_DWORD *)(v7 + 12) = 1;
      goto LABEL_8;
    }
    v39 = 0;
    v10 = 1;
  }
  v38 = a3;
  v29 = sub_6F773B30(a6, 16, v15, (v8 + 8) & 0xFFFFFFF8, (char *)v9, &v39);
  v30 = v29;
  *(_DWORD *)(v7 + 20) = v29;
  result = v39;
  if ( v39 )
    return result;
  v9 = (int)v30;
  *(_DWORD *)(v7 + 16) = (v8 + 8) & 0xFFFFFFF8;
  a3 = v38;
LABEL_3:
  v13 = v9 + 16 * v8;
  *(_DWORD *)v13 = 0;
  *(_DWORD *)(v13 + 12) = 0;
  *(_DWORD *)(v7 + 12) = v10;
  if ( v10 )
  {
LABEL_8:
    v14 = v9 + 16 * (v10 + 0xFFFFFFF);
    goto LABEL_9;
  }
  v14 = v9;
  if ( !*(_DWORD *)(v7 + 16) )
  {
    v37 = a3;
    v39 = 0;
    v34 = sub_6F773B30(a6, 16, 0, 8, (char *)v9, &v39);
    v14 = (int)v34;
    *(_DWORD *)(v7 + 20) = v34;
    result = v39;
    if ( v39 )
      return result;
    *(_DWORD *)(v7 + 16) = 8;
    a3 = v37;
  }
  *(_DWORD *)v14 = 0;
  *(_DWORD *)(v14 + 12) = 0;
  *(_DWORD *)(v7 + 12) = 1;
LABEL_9:
  v16 = *(_DWORD *)(v14 + 4);
  v39 = 0;
  v17 = (unsigned int)(v16 + 7) >> 3;
  v18 = (unsigned int)(a4 + 7) >> 3;
  if ( v17 < v18 )
  {
    v36 = a3;
    v31 = (v18 + 7) & 0xFFFFFFF8;
    v32 = sub_6F773B30(a6, 1, v17, v31, *(char **)(v14 + 8), &v39);
    v33 = v32;
    *(_DWORD *)(v14 + 8) = v32;
    result = v39;
    if ( v39 )
      return result;
    v19 = v33;
    a3 = v36;
    *(_DWORD *)(v14 + 4) = 8 * v31;
    v20 = a4;
  }
  else
  {
    v19 = *(char **)(v14 + 8);
    v20 = a4;
  }
  v21 = 128 >> (a3 & 7);
  v22 = (_BYTE *)(v6 + (a3 >> 3));
  *(_DWORD *)v14 = v20;
  for ( i = 128; a4; --a4 )
  {
    v24 = (unsigned __int8)*v19;
    v35 = v24 | i;
    v25 = ~i & v24;
    if ( (unsigned __int8)v21 & *v22 )
      LOBYTE(v25) = v35;
    v21 >>= 1;
    v26 = v21 == 0;
    if ( !v21 )
      v21 = 128;
    *v19 = v25;
    if ( v26 )
      ++v22;
    i >>= 1;
    v27 = i == 0;
    if ( !i )
      i = 128;
    if ( v27 )
      ++v19;
  }
  return 0;
}
