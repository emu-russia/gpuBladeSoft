_WORD *__cdecl sub_6F8AAC10(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // ebx@1
  __int16 v5; // si@1
  __int16 v6; // bp@2
  int v7; // edx@4
  int v8; // ecx@4
  _WORD *v9; // ecx@8
  _WORD *result; // eax@11
  int v11; // ebx@12
  int v12; // ebp@12
  unsigned __int16 v13; // cx@13
  char *v14; // edx@14
  int v15; // eax@18
  char *v16; // eax@19
  signed int v17; // eax@22
  int v18; // ecx@23
  int v19; // edx@29
  int v20; // ecx@29
  int v21; // ecx@33
  _WORD *v22; // ecx@37
  int v23; // ecx@42
  unsigned int v24; // eax@46
  unsigned int v25; // edx@48
  bool v26; // zf@49
  int v27; // ecx@53
  __int16 v28; // [sp+1Ah] [bp-46h]@2
  __int16 v29; // [sp+2Ch] [bp-34h]@12
  unsigned __int16 v30; // [sp+2Eh] [bp-32h]@12
  char v31; // [sp+30h] [bp-30h]@19
  char v32; // [sp+3Ch] [bp-24h]@20
  __int16 v33; // [sp+3Eh] [bp-22h]@12
  unsigned __int16 v34; // [sp+40h] [bp-20h]@12
  char v35; // [sp+42h] [bp-1Eh]@14
  char v36; // [sp+4Eh] [bp-12h]@15

  v3 = a1;
  v4 = a2;
  v5 = *(_WORD *)(a1 + 10) & 0x7FFF;
  if ( v5 == 0x7FFF )
  {
    v18 = a1;
    while ( 1 )
    {
      v18 += 2;
      if ( *(_WORD *)(v18 - 2) )
        break;
      if ( v18 == a1 + 10 )
        goto LABEL_2;
    }
    *(_DWORD *)a3 = *(_DWORD *)a1;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 4);
    result = *(_WORD **)(a1 + 8);
    *(_DWORD *)(a3 + 8) = result;
    return result;
  }
LABEL_2:
  v28 = *(_WORD *)(a2 + 10);
  v6 = v28 & 0x7FFF;
  if ( (v28 & 0x7FFF) == 0x7FFF )
  {
    v19 = a2 + 10;
    v20 = a2;
    do
    {
      v20 += 2;
      if ( *(_WORD *)(v20 - 2) )
      {
        *(_DWORD *)a3 = *(_DWORD *)a2;
        *(_DWORD *)(a3 + 4) = *(_DWORD *)(a2 + 4);
        result = *(_WORD **)(a2 + 8);
        *(_DWORD *)(a3 + 8) = result;
        return result;
      }
    }
    while ( v20 != v19 );
    if ( v5 == 0x7FFF )
      goto LABEL_4;
    goto LABEL_33;
  }
  if ( v5 != 0x7FFF )
    goto LABEL_12;
LABEL_4:
  v7 = a1 + 10;
  v8 = a1;
  while ( 1 )
  {
    v8 += 2;
    if ( *(_WORD *)(v8 - 2) )
      break;
    if ( v7 == v8 )
    {
      if ( !*(_WORD *)(a2 + 2) )
      {
        v9 = (_WORD *)(a2 + 4);
        while ( !*v9 )
        {
          ++v9;
          if ( v9 == (_WORD *)(a2 + 16) )
          {
LABEL_11:
            result = (_WORD *)a3;
            *(_DWORD *)a3 = 0;
            *(_DWORD *)(a3 + 4) = 0;
            *(_DWORD *)(a3 + 8) = 2147467264;
            return result;
          }
        }
      }
      break;
    }
  }
  if ( v6 == 0x7FFF )
  {
    v19 = a2 + 10;
LABEL_33:
    v21 = a2;
    while ( 1 )
    {
      v21 += 2;
      if ( *(_WORD *)(v21 - 2) )
        break;
      if ( v21 == v19 )
      {
        if ( !*(_WORD *)(a1 + 2) )
        {
          v22 = (_WORD *)(a1 + 4);
          while ( !*v22 )
          {
            ++v22;
            if ( (_WORD *)(a1 + 16) == v22 )
              goto LABEL_11;
          }
        }
        break;
      }
    }
    if ( v5 != 0x7FFF )
      goto LABEL_42;
    v7 = a1 + 10;
  }
  v27 = a1;
  while ( 1 )
  {
    v27 += 2;
    if ( *(_WORD *)(v27 - 2) )
      break;
    if ( v7 == v27 )
      goto LABEL_56;
  }
  if ( v6 == 0x7FFF )
  {
    v19 = a2 + 10;
LABEL_42:
    v23 = a2;
    while ( 1 )
    {
      v23 += 2;
      if ( *(_WORD *)(v23 - 2) )
        break;
      if ( v19 == v23 )
      {
        if ( v5 == 0x7FFF )
        {
          v7 = a1 + 10;
LABEL_56:
          while ( 1 )
          {
            v3 += 2;
            if ( *(_WORD *)(v3 - 2) )
              break;
            if ( v3 == v7 )
              goto LABEL_46;
          }
          v24 = 0;
        }
        else
        {
LABEL_46:
          v24 = (unsigned int)*(_WORD *)(a1 + 10) >> 31;
        }
        if ( v6 == 0x7FFF )
        {
          while ( 1 )
          {
            v4 += 2;
            if ( *(_WORD *)(v4 - 2) )
              break;
            if ( v4 == a2 + 10 )
              goto LABEL_48;
          }
          v25 = 0;
        }
        else
        {
LABEL_48:
          v25 = (unsigned int)v28 >> 31;
        }
        v26 = v25 == v24;
        result = (_WORD *)-32768;
        if ( v26 )
          result = 0;
        *(_DWORD *)a3 = 0;
        *(_WORD *)(a3 + 10) = (_WORD)result;
        *(_DWORD *)(a3 + 4) = 0;
        *(_WORD *)(a3 + 8) = 0;
        *(_WORD *)(a3 + 10) |= 0x7FFFu;
        return result;
      }
    }
  }
LABEL_12:
  sub_6F8A9F60((const char *)a1, &v29);
  sub_6F8A9F60((const char *)a2, &v33);
  v11 = v30;
  v12 = v34;
  if ( v30 )
  {
    v13 = v34;
LABEL_14:
    v14 = &v35;
    if ( v13 )
    {
LABEL_18:
      v15 = sub_6F8AA2F0((int)&v29, (int *)&v33);
      sub_6F8AA800((int)&v33, v15, 0, v11 + v12 - 16382, 64, 80);
      v33 = -(v29 != v33);
      return sub_6F8AAB80((int)&v33, a3);
    }
    while ( &v36 != v14 )
    {
      v14 += 2;
      if ( *((_WORD *)v14 - 1) )
      {
        v12 -= sub_6F8AA650((int)&v33);
        goto LABEL_18;
      }
    }
  }
  else
  {
    v16 = &v31;
    while ( v16 != &v32 )
    {
      v16 += 2;
      if ( *((_WORD *)v16 - 1) )
      {
        v17 = sub_6F8AA650((int)&v29);
        v13 = v34;
        v11 = -v17;
        goto LABEL_14;
      }
    }
  }
  result = (_WORD *)a3;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  return result;
}
