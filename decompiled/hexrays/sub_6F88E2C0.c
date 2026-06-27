char *__usercall sub_6F88E2C0@<eax>(int a1@<eax>)
{
  int v1; // ebp@1
  unsigned int v2; // edi@1
  size_t v3; // edx@1
  unsigned int v4; // eax@2
  unsigned int v5; // ebx@2
  int v6; // esi@3
  size_t v7; // edi@3
  int v8; // eax@4
  int v9; // esi@7
  int v10; // eax@8
  int v11; // edx@8
  int v12; // ebx@8
  int v13; // ecx@9
  int v14; // ebx@9
  int v15; // eax@9
  _WORD *v16; // eax@9
  _BYTE *v17; // ebx@15
  int v18; // eax@15
  int v19; // eax@19
  int v20; // esi@19
  _WORD *v21; // edx@19
  __int16 v22; // ax@20
  _WORD *v23; // edx@23
  size_t v24; // esi@23
  __int16 v25; // ax@24
  char *result; // eax@28
  unsigned int v27; // edx@28
  unsigned int v28; // ebx@29
  unsigned int v29; // edx@30
  size_t v30; // esi@30
  unsigned int v31; // edx@36
  size_t v32; // ebx@36
  int v33; // [sp+14h] [bp-38h]@8
  int v34; // [sp+14h] [bp-38h]@14
  int v35; // [sp+1Ch] [bp-30h]@8
  int v36; // [sp+20h] [bp-2Ch]@8
  int v37; // [sp+24h] [bp-28h]@1
  size_t v38; // [sp+28h] [bp-24h]@1
  int v39; // [sp+2Ch] [bp-20h]@1

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 116);
  v3 = *(_DWORD *)(a1 + 44);
  v38 = v3;
  v39 = 2 * v3;
  v37 = v3 - 262;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v1 + 108);
    v5 = *(_DWORD *)(v1 + 60) - v2 - v4;
    if ( v4 >= v37 + v3 )
      break;
    v6 = *(_DWORD *)v1;
    v7 = *(_DWORD *)(*(_DWORD *)v1 + 4);
    if ( !v7 )
      goto LABEL_28;
LABEL_4:
    v8 = *(_DWORD *)(v1 + 116);
    if ( v5 >= v7 )
    {
      v34 = 0;
    }
    else
    {
      if ( !v5 )
      {
        v7 = 0;
        goto LABEL_7;
      }
      v34 = v7 - v5;
      v7 = v5;
    }
    v17 = (_BYTE *)(*(_DWORD *)(v1 + 56) + *(_DWORD *)(v1 + 108) + v8);
    *(_DWORD *)(v6 + 4) = v34;
    memcpy(v17, *(const void **)v6, v7);
    v18 = *(_DWORD *)(*(_DWORD *)(v6 + 28) + 24);
    if ( v18 == 1 )
    {
      *(_DWORD *)(v6 + 48) = sub_6F88BA20(*(_DWORD *)(v6 + 48), v17, v7);
    }
    else if ( v18 == 2 )
    {
      *(_DWORD *)(v6 + 48) = sub_6F88BF50(*(_DWORD *)(v6 + 48), (int)v17, v7);
    }
    *(_DWORD *)v6 += v7;
    *(_DWORD *)(v6 + 8) += v7;
    v8 = *(_DWORD *)(v1 + 116);
LABEL_7:
    v9 = *(_DWORD *)(v1 + 5812);
    v2 = v8 + v7;
    *(_DWORD *)(v1 + 116) = v2;
    if ( v2 + v9 > 2 )
    {
      v10 = *(_DWORD *)(v1 + 56);
      v33 = *(_DWORD *)(v1 + 88);
      v11 = *(_DWORD *)(v1 + 108) - v9;
      v12 = *(_BYTE *)(v10 + v11);
      v35 = *(_DWORD *)(v1 + 56);
      v36 = *(_DWORD *)(v1 + 84);
      *(_DWORD *)(v1 + 72) = v12;
      *(_DWORD *)(v1 + 72) = v36 & ((v12 << v33) ^ *(_BYTE *)(v10 + v11 + 1));
      do
      {
        if ( !v9 )
          break;
        --v9;
        v13 = *(_DWORD *)(v1 + 64);
        v14 = *(_DWORD *)(v1 + 68);
        v15 = v36 & ((*(_DWORD *)(v1 + 72) << v33) ^ *(_BYTE *)(v35 + v11 + 2));
        *(_DWORD *)(v1 + 72) = v15;
        v16 = (_WORD *)(v14 + 2 * v15);
        *(_WORD *)(v13 + 2 * (v11 & *(_DWORD *)(v1 + 52))) = *v16;
        *v16 = v11++;
        *(_DWORD *)(v1 + 5812) = v9;
      }
      while ( v9 + v2 > 2 );
    }
    if ( v2 > 0x105 || !*(_DWORD *)(*(_DWORD *)v1 + 4) )
      goto LABEL_28;
    v3 = *(_DWORD *)(v1 + 44);
  }
  memcpy(*(void **)(v1 + 56), (const void *)(*(_DWORD *)(v1 + 56) + v38), v38);
  v19 = *(_DWORD *)(v1 + 68);
  *(_DWORD *)(v1 + 112) -= v38;
  *(_DWORD *)(v1 + 108) -= v38;
  *(_DWORD *)(v1 + 92) -= v38;
  v20 = *(_DWORD *)(v1 + 76);
  v21 = (_WORD *)(v19 + 2 * v20);
  do
  {
    --v21;
    v22 = 0;
    if ( v38 <= *v21 )
      v22 = *v21 - v38;
    --v20;
    *v21 = v22;
  }
  while ( v20 );
  v23 = (_WORD *)(*(_DWORD *)(v1 + 64) + v39);
  v24 = v38;
  do
  {
    --v23;
    v25 = 0;
    if ( v38 <= *v23 )
      v25 = *v23 - v38;
    --v24;
    *v23 = v25;
  }
  while ( v24 );
  v6 = *(_DWORD *)v1;
  v5 += v38;
  v7 = *(_DWORD *)(*(_DWORD *)v1 + 4);
  if ( v7 )
    goto LABEL_4;
LABEL_28:
  result = *(char **)(v1 + 5824);
  v27 = *(_DWORD *)(v1 + 60);
  if ( (unsigned int)result < v27 )
  {
    v28 = *(_DWORD *)(v1 + 108) + *(_DWORD *)(v1 + 116);
    if ( (unsigned int)result >= v28 )
    {
      if ( (unsigned int)result < v28 + 258 )
      {
        v31 = v27 - (_DWORD)result;
        v32 = v28 - (_DWORD)result + 258;
        if ( v32 > v31 )
          v32 = v31;
        result = (char *)memset(&result[*(_DWORD *)(v1 + 56)], 0, v32);
        *(_DWORD *)(v1 + 5824) += v32;
      }
    }
    else
    {
      v29 = v27 - v28;
      v30 = 258;
      if ( v29 <= 0x102 )
        v30 = v29;
      result = (char *)memset((void *)(v28 + *(_DWORD *)(v1 + 56)), 0, v30);
      *(_DWORD *)(v1 + 5824) = v30 + v28;
    }
  }
  return result;
}
