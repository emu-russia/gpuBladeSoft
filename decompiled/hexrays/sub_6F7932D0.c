signed int __cdecl sub_6F7932D0(int a1, int a2, char *a3)
{
  _BYTE *v3; // esi@1
  _BYTE *v4; // eax@1
  char v5; // dl@2
  int v6; // edi@12
  char v8; // dl@15
  _BYTE *v9; // ebx@17
  char *v10; // ebp@19
  char *v11; // eax@35
  char v12; // [sp+Bh] [bp-31h]@16
  char v13; // [sp+1Ah] [bp-22h]@35
  _BYTE *v14; // [sp+1Ch] [bp-20h]@14

  v3 = *(_BYTE **)(a1 + 8);
  v4 = *(_BYTE **)a1;
  if ( *(_DWORD *)a1 >= (unsigned int)v3 )
    goto LABEL_12;
  while ( 1 )
  {
    v5 = *v4;
    if ( (unsigned __int8)(v5 - 12) > 1u && (unsigned __int8)(v5 - 9) > 1u )
    {
      if ( v5 & 0xDF )
        break;
    }
LABEL_11:
    if ( v3 <= ++v4 )
      goto LABEL_12;
  }
  if ( v5 == 37 )
  {
    if ( v3 > v4 )
    {
      while ( v3 != ++v4 )
      {
        if ( *v4 == 13 || *v4 == 10 )
          goto LABEL_11;
      }
      v4 = *(_BYTE **)(a1 + 8);
    }
    goto LABEL_11;
  }
  v14 = v4;
  *(_DWORD *)a1 = v4;
  if ( v3 <= v4 )
  {
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  v8 = *v4;
  if ( *v4 == 91 )
  {
    v12 = 93;
LABEL_17:
    v9 = v4 + 1;
    v14 = v4 + 1;
    if ( v3 > v4 + 1 )
    {
      v8 = v4[1];
      goto LABEL_19;
    }
    ++v4;
    v6 = 0;
LABEL_13:
    *(_DWORD *)a1 = v4;
    return v6;
  }
  v12 = 125;
  if ( v8 == 123 )
    goto LABEL_17;
  v9 = v4;
  v12 = 0;
LABEL_19:
  v10 = a3;
  v6 = 0;
  while ( 1 )
  {
    if ( (unsigned __int8)(v8 - 9) <= 1u || (unsigned __int8)(v8 - 12) <= 1u || !(v8 & 0xDF) )
      goto LABEL_29;
    if ( v8 == 37 )
    {
      if ( v3 > v9 )
      {
        while ( v3 != ++v9 )
        {
          if ( *v9 == 13 || *v9 == 10 )
            goto LABEL_29;
        }
        v9 = v3;
      }
LABEL_29:
      v4 = v9 + 1;
      if ( v3 <= v9 + 1 )
        goto LABEL_13;
      v8 = (v9++)[1];
      continue;
    }
    v14 = v9;
    if ( v3 <= v9 )
      goto LABEL_49;
    if ( *v9 == v12 )
    {
      *(_DWORD *)a1 = v9 + 1;
      return v6;
    }
    if ( a3 && a2 <= v6 )
    {
LABEL_49:
      *(_DWORD *)a1 = v9;
      return v6;
    }
    v11 = &v13;
    if ( a3 )
      v11 = v10;
    *(_WORD *)v11 = (unsigned int)sub_6F792040(&v14, v3, 0) >> 16;
    v4 = v14;
    if ( v14 == v9 )
      break;
    ++v6;
    if ( !v12 || v3 <= v14 )
      goto LABEL_13;
    v10 += 2;
    v8 = *v14;
    v9 = v14;
  }
  *(_DWORD *)a1 = v9;
  return -1;
}
