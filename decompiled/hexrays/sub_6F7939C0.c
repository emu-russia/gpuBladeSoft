signed int __cdecl sub_6F7939C0(int a1)
{
  int v1; // esi@1
  int v2; // ebp@1
  unsigned int v3; // ebx@1
  bool v4; // cf@1
  unsigned int v5; // edi@1
  char v6; // dl@2
  unsigned int v7; // edx@11
  signed int result; // eax@11
  int v9; // ecx@13
  unsigned int v10; // ebp@27
  char v11; // cl@27
  char *v12; // esi@27
  unsigned __int8 v13; // al@31
  bool v14; // bl@31
  unsigned __int8 v15; // cl@31
  char *v16; // edi@37
  char v17; // dl@39
  char v18; // bp@39
  char v19; // [sp+2h] [bp-26h]@18
  bool v20; // [sp+3h] [bp-25h]@17
  int v21; // [sp+4h] [bp-24h]@27
  _BYTE *v22; // [sp+14h] [bp-14h]@1

  v1 = a1;
  v2 = *(_DWORD *)a1;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)a1 < v3;
  v22 = (_BYTE *)v2;
  v5 = v2;
  if ( !v4 )
  {
LABEL_11:
    v7 = v5;
    result = 0;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v6 = *(_BYTE *)v5;
    if ( (v6 & 0xDF) != 0 && (unsigned __int8)(v6 - 9) > 1u && (unsigned __int8)(v6 - 12) > 1u )
      break;
LABEL_10:
    if ( v3 <= ++v5 )
      goto LABEL_11;
  }
  if ( v6 == 37 )
  {
    if ( v3 > v5 )
    {
      while ( v3 != ++v5 )
      {
        if ( *(_BYTE *)v5 == 13 || *(_BYTE *)v5 == 10 )
          goto LABEL_10;
      }
      v5 = v3;
    }
    goto LABEL_10;
  }
  v20 = (v6 & 0xDF) != 0 && (unsigned __int8)(v6 - 9) > 1u && (unsigned __int8)(v6 - 12) > 1u;
  v22 = (_BYTE *)v5;
  if ( v3 <= v5 )
  {
    v7 = v5;
    result = 0;
    goto LABEL_16;
  }
  v19 = *(_BYTE *)v5;
  if ( !((*(_BYTE *)v5 - 91) & 0xFD) )
  {
    v7 = v5 + 1;
    result = 0;
    goto LABEL_12;
  }
  if ( v19 == 123 )
  {
    result = sub_6F7923C0((unsigned int *)&v22, v3);
    v7 = (unsigned int)v22;
    goto LABEL_12;
  }
  if ( v19 == 40 )
  {
    result = sub_6F790E00((unsigned int *)&v22, v3);
    v7 = (unsigned int)v22;
    goto LABEL_12;
  }
  if ( v19 == 60 )
  {
    if ( v3 <= v5 + 1 )
    {
      v16 = (char *)(v5 + 1);
      goto LABEL_49;
    }
    if ( *(_BYTE *)(v5 + 1) == 60 )
    {
LABEL_60:
      v7 = v5 + 2;
      result = 0;
LABEL_12:
      if ( v3 <= v7 )
        goto LABEL_16;
      v9 = *(_DWORD *)v1;
      goto LABEL_14;
    }
    v16 = (char *)(v5 + 1);
LABEL_38:
    if ( v3 <= (unsigned int)v16 )
      goto LABEL_49;
    while ( 1 )
    {
      v17 = *v16;
      v18 = *v16 & 0xDF;
      if ( (unsigned __int8)(v17 - 9) > 1u && (unsigned __int8)(v17 - 12) > 1u && v18 )
      {
        if ( v17 != 37 )
        {
          if ( v3 <= (unsigned int)v16 )
            goto LABEL_49;
          if ( (unsigned __int8)(v17 - 48) > 9u && (unsigned __int8)(v18 - 65) > 5u )
          {
            result = 3;
            if ( v17 != 62 )
            {
              v7 = (unsigned int)v16;
              goto LABEL_12;
            }
LABEL_49:
            result = 0;
            v7 = (unsigned int)(v16 + 1);
            goto LABEL_12;
          }
          ++v16;
          goto LABEL_38;
        }
        if ( v3 > (unsigned int)v16 )
        {
          while ( (char *)v3 != ++v16 )
          {
            if ( *v16 == 13 || *v16 == 10 )
              goto LABEL_48;
          }
          v16 = (char *)v3;
        }
      }
LABEL_48:
      if ( v3 <= (unsigned int)++v16 )
        goto LABEL_49;
    }
  }
  if ( v19 == 62 )
  {
    v7 = v5 + 1;
    result = 3;
    v22 = (_BYTE *)(v5 + 1);
    if ( v3 <= v5 + 1 )
      goto LABEL_16;
    if ( *(_BYTE *)(v5 + 1) != 62 )
    {
      v9 = v2;
      goto LABEL_14;
    }
    goto LABEL_60;
  }
  v7 = v5;
  if ( v19 != 47 )
  {
LABEL_25:
    if ( (unsigned __int8)(v19 - 9) > 1u && (unsigned __int8)(v19 - 12) > 1u && v19 & 0xDF )
    {
      v21 = v2;
      v10 = v3;
      v11 = v19;
      v12 = (char *)(v7 + 1);
      while ( 1 )
      {
        v13 = v20;
        v14 = (((v11 & 0xDF) - 91) & 0xFD) == 0;
        v15 = v11 - 37;
        if ( v15 <= 0x19u )
          v13 = ((0x2800419u >> v15) & 1 ^ 1) & 1;
        if ( v13 <= v14 )
        {
          v3 = v10;
          v1 = a1;
          result = 0;
          goto LABEL_12;
        }
        v7 = (unsigned int)v12;
        v22 = v12;
        if ( v10 <= (unsigned int)v12 )
          break;
        v11 = *v12++;
        if ( (unsigned __int8)(v11 - 12) <= 1u || (unsigned __int8)(v11 - 9) <= 1u || !(v11 & 0xDF) )
        {
          v2 = v21;
          v1 = a1;
          goto LABEL_66;
        }
      }
      v1 = a1;
      result = 0;
      goto LABEL_16;
    }
LABEL_66:
    result = 0;
    v9 = v2;
LABEL_14:
    if ( v7 == v9 )
      result = 3;
    goto LABEL_16;
  }
  v7 = v5 + 1;
  v22 = (_BYTE *)(v5 + 1);
  if ( v3 > v5 + 1 )
  {
    v19 = *(_BYTE *)(v5 + 1);
    goto LABEL_25;
  }
  result = 0;
LABEL_16:
  *(_DWORD *)(v1 + 12) = result;
  *(_DWORD *)v1 = v7;
  return result;
}
