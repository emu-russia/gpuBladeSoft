signed int *__usercall sub_6F7C0810@<eax>(signed int *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  signed int *result; // eax@1
  signed int v4; // ecx@2
  int v5; // ebx@5
  _DWORD *v6; // edx@6
  int v7; // eax@6
  _DWORD *v8; // ecx@6
  _DWORD *v9; // edi@7
  bool v10; // zf@8
  int v11; // ebp@8
  int v12; // edi@8
  unsigned int v13; // ebx@10
  int v14; // ebp@10
  unsigned int v15; // ecx@10
  int *v16; // edx@13
  signed int v17; // eax@13
  signed int v18; // edx@15
  int v19; // eax@17
  int v20; // eax@19
  unsigned int v21; // edx@19
  int v22; // ebx@21
  int v23; // ebx@21
  signed int v24; // [sp+0h] [bp-30h]@6
  signed int v25; // [sp+4h] [bp-2Ch]@2
  unsigned int v26; // [sp+4h] [bp-2Ch]@10
  _DWORD *v27; // [sp+8h] [bp-28h]@2
  signed int *v28; // [sp+Ch] [bp-24h]@1
  int v29; // [sp+10h] [bp-20h]@1
  int *v30; // [sp+14h] [bp-1Ch]@1
  signed int *v31; // [sp+18h] [bp-18h]@1
  int v32; // [sp+1Ch] [bp-14h]@2

  v31 = a1;
  result = (signed int *)*a1;
  v30 = (int *)a2;
  v29 = a3;
  v28 = result;
  if ( result == (signed int *)1 )
    return result;
  v25 = 1;
  v4 = 1;
  v32 = a2 + 12;
  v27 = (_DWORD *)(a2 + 12);
  if ( (unsigned int)result <= 1 )
    goto LABEL_23;
  do
  {
    if ( !v25 )
    {
      v27 += 3;
      v25 = 1;
    }
    v5 = *v27;
    if ( *v27 < *(v27 - 3) )
    {
      v6 = v27;
      v7 = (int)(v27 - 3);
      v8 = v27;
      v24 = v25;
      do
      {
        v10 = v24-- == 1;
        v11 = v6[1];
        v12 = v6[2];
        *v6 = *(_DWORD *)v7;
        v6[1] = *(_DWORD *)(v7 + 4);
        v6[2] = *(_DWORD *)(v7 + 8);
        *(_DWORD *)v7 = v5;
        *(_DWORD *)(v7 + 4) = v11;
        *(_DWORD *)(v7 + 8) = v12;
        if ( v10 )
          break;
        v9 = v8;
        v5 = *(v8 - 3);
        v6 -= 3;
        v7 -= 12;
        v8 -= 3;
      }
      while ( v5 < *(v9 - 6) );
    }
    ++v25;
    v27 += 3;
  }
  while ( v28 != (signed int *)v25 );
  v13 = 0;
  v14 = *v30;
  v26 = (unsigned int)v28 - 1;
  v15 = 1;
  do
  {
    if ( v30[3 * v15] - v14 <= v29 )
    {
      if ( v15 != v26 )
        goto LABEL_26;
      if ( ++v15 <= v13 )
      {
LABEL_28:
        v18 = v13;
        v17 = 0;
        goto LABEL_16;
      }
    }
    else if ( v15 <= v13 )
    {
      goto LABEL_28;
    }
    v16 = &v30[3 * v13];
    v17 = 0;
    do
    {
      v17 += *v16;
      *v16 = 0;
      v16 += 3;
    }
    while ( v16 != &v30[3 * v15] );
    v18 = v15;
LABEL_16:
    v30[3 * v13] = v17 / v18;
    if ( v15 < v26 )
    {
      v13 = v15 + 1;
      v19 = 3 * (v15++ + 1);
      v14 = v30[v19];
      continue;
    }
LABEL_26:
    ++v15;
  }
  while ( (unsigned int)v28 > v15 );
  v20 = v32;
  v4 = 1;
  v21 = 1;
  do
  {
    if ( *(_DWORD *)v20 )
    {
      v22 = 3 * v4++;
      v23 = (int)&v30[v22];
      *(_DWORD *)v23 = *(_DWORD *)v20;
      *(_DWORD *)(v23 + 4) = *(_DWORD *)(v20 + 4);
      *(_DWORD *)(v23 + 8) = *(_DWORD *)(v20 + 8);
    }
    ++v21;
    v20 += 12;
  }
  while ( (unsigned int)v28 > v21 );
LABEL_23:
  result = v31;
  *v31 = v4;
  return result;
}
