int __cdecl sub_6F79BC60(unsigned int a1)
{
  int result; // eax@3
  _BYTE *v2; // edx@5
  int v3; // eax@16
  int v4; // edx@16
  int v5; // ecx@19
  int v6; // eax@19
  int v7; // ecx@22
  int v8; // eax@22
  int v9; // edx@22
  int v10; // ecx@25
  int v11; // eax@25
  int v12; // edx@25
  int v13; // esi@28
  int v14; // ecx@28
  char v15; // dl@28
  int v16; // esi@31
  int v17; // ecx@31
  char v18; // cl@34
  int v19; // eax@40
  int v20; // edx@40
  int v21; // ecx@43
  int v22; // eax@43
  int v23; // ecx@46
  int v24; // eax@46
  int v25; // edx@46
  int v26; // ecx@49
  int v27; // edx@49
  int v28; // eax@49
  char v29; // dl@52

  if ( *(_BYTE *)a1 != 117 )
  {
    if ( !*(_BYTE *)a1 )
      return 0;
LABEL_5:
    v2 = (_BYTE *)a1;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a1 + 1) == 110 && *(_BYTE *)(a1 + 2) == 105 )
  {
    v19 = *(_BYTE *)(a1 + 3);
    v20 = v19 - 48;
    if ( (unsigned int)(v19 - 48) > 9 )
    {
      if ( (unsigned int)(v19 - 65) > 5 )
        goto LABEL_16;
      v20 = v19 - 55;
    }
    v21 = *(_BYTE *)(a1 + 4);
    v22 = v21 - 48;
    if ( (unsigned int)(v21 - 48) > 9 )
    {
      if ( (unsigned int)(v21 - 65) > 5 )
        goto LABEL_16;
      v22 = v21 - 55;
    }
    v23 = *(_BYTE *)(a1 + 5);
    v24 = 16 * v20 + v22;
    v25 = v23 - 48;
    if ( (unsigned int)(v23 - 48) > 9 )
    {
      if ( (unsigned int)(v23 - 65) > 5 )
        goto LABEL_16;
      v25 = v23 - 55;
    }
    v26 = *(_BYTE *)(a1 + 6);
    v27 = 16 * v24 + v25;
    v28 = v26 - 48;
    if ( (unsigned int)(v26 - 48) > 9 )
    {
      if ( (unsigned int)(v26 - 65) > 5 )
        goto LABEL_16;
      v28 = v26 - 55;
    }
    result = 16 * v27 + v28;
    v29 = *(_BYTE *)(a1 + 7);
    if ( !v29 )
      return result;
    if ( v29 == 46 )
      return result | 0x80000000;
  }
LABEL_16:
  v3 = *(_BYTE *)(a1 + 1);
  v4 = v3 - 48;
  if ( (unsigned int)(v3 - 48) > 9 )
  {
    if ( (unsigned int)(v3 - 65) > 5 )
      goto LABEL_5;
    v4 = v3 - 55;
  }
  v5 = *(_BYTE *)(a1 + 2);
  v6 = v5 - 48;
  if ( (unsigned int)(v5 - 48) > 9 )
  {
    if ( (unsigned int)(v5 - 65) > 5 )
      goto LABEL_5;
    v6 = v5 - 55;
  }
  v7 = *(_BYTE *)(a1 + 3);
  v8 = 16 * v4 + v6;
  v9 = v7 - 48;
  if ( (unsigned int)(v7 - 48) > 9 )
  {
    if ( (unsigned int)(v7 - 65) > 5 )
      goto LABEL_5;
    v9 = v7 - 55;
  }
  v10 = *(_BYTE *)(a1 + 4);
  v11 = v9 + 16 * v8;
  v12 = v10 - 48;
  if ( (unsigned int)(v10 - 48) > 9 )
  {
    if ( (unsigned int)(v10 - 65) > 5 )
      goto LABEL_5;
    v12 = v10 - 55;
  }
  v13 = *(_BYTE *)(a1 + 5);
  result = v12 + 16 * v11;
  v14 = v13 - 48;
  v15 = *(_BYTE *)(a1 + 5);
  if ( (unsigned int)(v13 - 48) > 9 )
  {
    if ( (unsigned int)(v13 - 65) > 5 )
      goto LABEL_38;
    v14 = v13 - 55;
  }
  v16 = *(_BYTE *)(a1 + 6);
  result = v14 + 16 * result;
  v17 = v16 - 48;
  v15 = *(_BYTE *)(a1 + 6);
  if ( (unsigned int)(v16 - 48) <= 9 )
  {
LABEL_34:
    result = v17 + 16 * result;
    v18 = *(_BYTE *)(a1 + 7);
    goto LABEL_35;
  }
  if ( (unsigned int)(v16 - 65) <= 5 )
  {
    v17 = v16 - 55;
    goto LABEL_34;
  }
LABEL_38:
  v18 = v15;
LABEL_35:
  if ( v18 )
  {
    v2 = (_BYTE *)a1;
    if ( v18 == 46 )
      return result | 0x80000000;
LABEL_6:
    while ( *++v2 )
    {
      if ( *v2 == 46 && a1 < (unsigned int)v2 )
      {
        if ( !v2 )
          return 0;
        result = 2147483648;
        if ( a1 < (unsigned int)v2 )
        {
          result = sub_6F79BAD0((_BYTE *)a1, (unsigned int)v2);
          return result | 0x80000000;
        }
        return result;
      }
    }
    if ( a1 >= (unsigned int)v2 )
      return 0;
    result = sub_6F79BAD0((_BYTE *)a1, (unsigned int)v2);
  }
  return result;
}
