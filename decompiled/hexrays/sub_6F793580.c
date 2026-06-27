signed int __cdecl sub_6F793580(int a1, int a2, int a3, int *a4, char a5)
{
  int v5; // edi@1
  unsigned __int8 *v6; // ecx@1
  unsigned __int8 *v7; // eax@1
  unsigned __int8 v8; // dl@2
  unsigned int v10; // ecx@18
  int v11; // ebp@18
  int v12; // ecx@21
  signed int v13; // edi@21
  unsigned __int8 v14; // al@22
  unsigned int v15; // eax@25
  int v16; // eax@26
  signed int v17; // esi@29
  int v18; // edx@30
  unsigned int v19; // ecx@40
  unsigned __int8 *v20; // [sp+0h] [bp-20h]@21
  int v21; // [sp+8h] [bp-18h]@21
  unsigned __int8 *v22; // [sp+Ch] [bp-14h]@21

  v5 = a1;
  v6 = *(unsigned __int8 **)(a1 + 8);
  v7 = *(unsigned __int8 **)a1;
  if ( (unsigned int)v6 <= *(_DWORD *)a1 )
    goto LABEL_12;
  while ( 1 )
  {
    v8 = *v7;
    if ( (unsigned __int8)(v8 - 9) > 1u && (unsigned __int8)(v8 - 12) > 1u )
    {
      if ( v8 & 0xDF )
        break;
    }
LABEL_11:
    if ( v6 <= ++v7 )
      goto LABEL_12;
  }
  if ( v8 == 37 )
  {
    if ( v6 > v7 )
    {
      while ( v6 != ++v7 )
      {
        if ( *v7 == 13 || *v7 == 10 )
          goto LABEL_11;
      }
      v7 = *(unsigned __int8 **)(a1 + 8);
    }
    goto LABEL_11;
  }
  *(_DWORD *)a1 = v7;
  if ( v6 <= v7 )
    return 0;
  if ( a5 )
  {
    if ( *v7 != 60 )
      return 3;
    if ( ++v7 >= v6 )
    {
      *a4 = 0;
      goto LABEL_35;
    }
    v19 = v6 - v7;
    v11 = 2 * a3;
    if ( 2 * a3 > v19 )
      v11 = v19;
    if ( !v11 )
    {
      *a4 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v10 = v6 - v7;
    v11 = 2 * a3;
    if ( 2 * a3 > v10 )
      v11 = v10;
    if ( !v11 )
    {
      *a4 = 0;
      *(_DWORD *)a1 = v7;
      return 0;
    }
  }
  v21 = 0;
  v12 = 0;
  v22 = v7;
  v20 = v7;
  v13 = 1;
  while ( 2 )
  {
    v14 = *v20;
    if ( (unsigned __int8)(*v20 - 9) <= 1u || (unsigned __int8)(*v20 - 12) <= 1u || !(v14 & 0xDF) )
    {
LABEL_28:
      ++v12;
      ++v20;
      if ( v12 == v11 )
      {
        v17 = v13;
        v5 = a1;
        v7 = &v22[v12];
        goto LABEL_30;
      }
      continue;
    }
    break;
  }
  if ( v14 <= 0x7Fu )
  {
    v15 = byte_6FB58BC0[v14 & 0x7F];
    if ( v15 <= 0xF )
    {
      v16 = 16 * v13 | v15;
      v13 = v16;
      if ( BYTE1(v16) & 1 )
      {
        v13 = 1;
        *(_BYTE *)(a2 + v21++) = v16;
      }
      goto LABEL_28;
    }
  }
  v17 = v13;
  v5 = a1;
  v7 = v20;
LABEL_30:
  v18 = v21;
  if ( v17 != 1 )
  {
    v18 = v21 + 1;
    *(_BYTE *)(a2 + v21) = 16 * v17;
  }
  *a4 = v18;
  if ( !a5 )
  {
LABEL_12:
    *(_DWORD *)v5 = v7;
    return 0;
  }
LABEL_33:
  if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 8) || *v7 == 62 )
  {
LABEL_35:
    *(_DWORD *)v5 = v7 + 1;
    return 0;
  }
  return 3;
}
