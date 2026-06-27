int *__usercall sub_6F68D640@<eax>(int a1@<eax>)
{
  int *v1; // ebx@1
  size_t v2; // ebp@2
  int *v3; // eax@3
  unsigned int v4; // esi@5
  const void *v5; // ecx@5
  size_t v6; // edi@5
  const void *v7; // ST14_4@8
  unsigned int v8; // eax@8
  unsigned int v9; // edx@9
  int v10; // eax@13
  bool v11; // sf@15
  int *result; // eax@15
  int v13; // eax@21
  const void *v14; // [sp+18h] [bp-24h]@2
  int v15; // [sp+1Ch] [bp-20h]@1

  v1 = (int *)dword_6FBBD7E4;
  v15 = a1;
  if ( !dword_6FBBD7E4 )
  {
    v1 = &dword_6FBBD7E0;
    goto LABEL_20;
  }
  v2 = *(_DWORD *)(a1 + 4);
  v14 = *(const void **)a1;
  while ( 1 )
  {
    v4 = v1[5];
    v5 = (const void *)v1[4];
    v6 = v1[5];
    if ( v2 <= v4 )
      v6 = v2;
    if ( !v6 || (v7 = (const void *)v1[4], v8 = memcmp(v14, (const void *)v1[4], v6), v5 = v7, !v8) )
      v8 = v2 - v4;
    v9 = v8 >> 31;
    if ( v8 >> 31 )
      break;
    v3 = (int *)v1[3];
    if ( !v3 )
      goto LABEL_11;
LABEL_4:
    v1 = v3;
  }
  v3 = (int *)v1[2];
  if ( v3 )
    goto LABEL_4;
LABEL_11:
  if ( !(_BYTE)v9 )
    goto LABEL_12;
LABEL_20:
  result = 0;
  if ( (int *)dword_6FBBD7E8 != v1 )
  {
    sub_6F95ABE0((int)v1);
    v1 = (int *)v13;
    v2 = *(_DWORD *)(v15 + 4);
    v5 = *(const void **)(v13 + 16);
    v14 = *(const void **)v15;
    v4 = *(_DWORD *)(v13 + 20);
    v6 = v2;
    if ( v4 <= v2 )
      v6 = *(_DWORD *)(v13 + 20);
LABEL_12:
    if ( !v6 || (v10 = memcmp(v5, v14, v6)) == 0 )
      v10 = v4 - v2;
    v11 = v10 < 0;
    result = v1;
    if ( v11 )
      result = 0;
  }
  return result;
}
