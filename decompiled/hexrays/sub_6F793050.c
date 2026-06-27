int __cdecl sub_6F793050(int a1)
{
  unsigned int *v1; // eax@1
  unsigned int v2; // ebx@1
  unsigned int v3; // esi@2
  bool v4; // al@3
  int result; // eax@14
  _BYTE *v6; // edx@15
  unsigned __int8 v7; // di@16
  _BYTE *v8; // ebp@17
  unsigned __int8 v9; // si@20
  unsigned __int8 v10; // al@23
  int v11; // esi@23
  unsigned __int8 v12; // bl@28
  int v13; // eax@31
  signed int v14; // ecx@36
  int v15; // eax@36
  signed int v16; // esi@38
  signed int v17; // ecx@39
  int v18; // esi@41
  int v19; // ebp@46
  char v20; // [sp+1h] [bp-27h]@23
  bool v21; // [sp+2h] [bp-26h]@15
  bool v22; // [sp+3h] [bp-25h]@17
  unsigned int v23; // [sp+4h] [bp-24h]@23
  _BYTE *v24; // [sp+14h] [bp-14h]@15

  v1 = (unsigned int *)a1;
  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 >= *(_DWORD *)(a1 + 8) )
  {
LABEL_13:
    *v1 = v2;
    goto LABEL_14;
  }
  v3 = *(_DWORD *)(a1 + 8);
  while ( 1 )
  {
    v4 = (*(_BYTE *)v2 & 0xDF) != 0
      && (unsigned __int8)(*(_BYTE *)v2 - 9) > 1u
      && (unsigned __int8)(*(_BYTE *)v2 - 12) > 1u;
    if ( v4 )
      break;
LABEL_11:
    if ( v3 <= ++v2 )
    {
      v1 = (unsigned int *)a1;
      goto LABEL_13;
    }
  }
  if ( *(_BYTE *)v2 == 37 )
  {
    if ( v3 > v2 )
    {
      while ( v3 != ++v2 )
      {
        if ( *(_BYTE *)v2 == 13 || *(_BYTE *)v2 == 10 )
          goto LABEL_11;
      }
      v2 = *(_DWORD *)(a1 + 8);
    }
    goto LABEL_11;
  }
  v21 = (*(_BYTE *)v2 & 0xDF) != 0
     && (unsigned __int8)(*(_BYTE *)v2 - 9) > 1u
     && (unsigned __int8)(*(_BYTE *)v2 - 12) > 1u;
  v6 = *(_BYTE **)(a1 + 8);
  v24 = (_BYTE *)v2;
  *(_DWORD *)a1 = v2;
  if ( v3 <= v2 )
    goto LABEL_14;
  v7 = *(_BYTE *)v2;
  if ( !((*(_BYTE *)v2 - 43) & 0xFD) )
  {
    v8 = (_BYTE *)(v2 + 1);
    v22 = v7 == 45;
    if ( v3 != v2 + 1 )
    {
      if ( v3 > v2 + 1 )
      {
        v7 = *(_BYTE *)(v2 + 1);
        goto LABEL_20;
      }
      goto LABEL_48;
    }
    goto LABEL_14;
  }
  v8 = (_BYTE *)v2;
  v22 = 0;
LABEL_20:
  v9 = v4;
  if ( (unsigned __int8)(v7 - 9) <= 0x17u )
    v9 = ((0x80001Bu >> (v7 - 9)) & 1 ^ 1) & 1;
  if ( ((char)v7 <= 0) >= v9 )
  {
LABEL_48:
    v24 = v8;
    v15 = (int)v8;
    v16 = 0;
  }
  else
  {
    v10 = v7;
    v20 = 0;
    v11 = 0;
    v23 = v2;
    do
    {
      v13 = byte_6FB58BC0[v10];
      if ( (char)v13 < 0 || (char)v13 > 9 )
        break;
      if ( v11 <= 214748364 )
      {
        if ( v11 != 214748364 || (char)v13 <= 7 )
        {
          v11 = v13 + 10 * v11;
        }
        else
        {
          v20 = 1;
          v11 = 214748364;
        }
      }
      else
      {
        v20 = 1;
      }
      if ( v6 <= ++v8 )
        break;
      v10 = *v8;
      v12 = v21;
      if ( (unsigned __int8)(*v8 - 9) <= 0x17u )
        v12 = ((0x80001Bu >> (*v8 - 9)) & 1 ^ 1) & 1;
    }
    while ( ((char)v10 <= 0) < v12 );
    v14 = 0x7FFFFFFF;
    v2 = v23;
    v24 = v8;
    v15 = (int)v8;
    if ( !v20 )
      v14 = v11;
    v16 = v14;
  }
  v17 = -v16;
  if ( !v22 )
    v17 = v16;
  v18 = v17;
  if ( (_BYTE *)v2 != v8
    && (v6 <= v8
     || *v8 != 35
     || (v19 = (int)(v8 + 1),
         v24 = (_BYTE *)v19,
         v18 = sub_6F7912D0((unsigned int *)&v24, v6, v17),
         v15 = (int)v24,
         (_BYTE *)v19 != v24)) )
  {
    *(_DWORD *)a1 = v15;
    result = v18;
  }
  else
  {
LABEL_14:
    result = 0;
  }
  return result;
}
