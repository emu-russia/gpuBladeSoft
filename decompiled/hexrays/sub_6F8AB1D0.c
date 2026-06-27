unsigned int __cdecl sub_6F8AB1D0(int a1, _DWORD *a2, unsigned int a3)
{
  int v3; // edi@1
  char v4; // bl@7
  char v5; // al@8
  int v6; // ebp@12
  unsigned int v7; // eax@12
  int v8; // ecx@14
  unsigned int result; // eax@14
  signed int v10; // ebp@15
  int v11; // ecx@16
  unsigned int v12; // esi@17
  int v13; // edi@17
  _BYTE *i; // ebp@17
  unsigned int v15; // ebx@18
  signed __int64 v16; // rax@20
  unsigned __int64 v17; // kr00_8@21
  int v18; // ebx@23
  unsigned int v19; // [sp+24h] [bp-28h]@15
  signed int v20; // [sp+28h] [bp-24h]@17
  char v21; // [sp+2Fh] [bp-1Dh]@8

  v3 = a1;
  if ( a2 )
    *a2 = a1;
  if ( a3 == 1 || a3 > 0x24 )
  {
    *errno() = 33;
    return 0;
  }
  while ( 1 )
  {
    v4 = *(_BYTE *)v3;
    if ( !isspace(*(_BYTE *)v3) )
      break;
    ++v3;
  }
  v21 = v4;
  v5 = v4;
  if ( !((v4 - 43) & 0xFD) )
    v5 = *(_BYTE *)(v3++ + 1);
  if ( a3 )
  {
    if ( a3 != 16 || v5 != 48 )
    {
LABEL_12:
      v6 = v5;
      v7 = v5 - 48;
      if ( v7 <= 9 )
      {
        v10 = v7;
        v19 = a3;
      }
      else if ( isupper(v6) )
      {
        v10 = v6 - 55;
        v19 = a3;
      }
      else
      {
        v8 = islower(v6);
        result = 0;
        if ( !v8 )
          return result;
        v10 = v6 - 87;
        v19 = a3;
      }
      goto LABEL_16;
    }
    if ( (*(_BYTE *)(v3 + 1) & 0xDF) == 88 )
    {
LABEL_35:
      v5 = *(_BYTE *)(v3 + 2);
      a3 = 16;
      v3 += 2;
      goto LABEL_12;
    }
    v19 = 16;
  }
  else
  {
    a3 = 10;
    if ( v5 != 48 )
      goto LABEL_12;
    if ( (*(_BYTE *)(v3 + 1) & 0xDF) == 88 )
      goto LABEL_35;
    v19 = 8;
    a3 = 8;
  }
  v10 = 0;
LABEL_16:
  v11 = v3 + 1;
  result = 0;
  if ( v10 >= v19 )
    return result;
  v12 = v10;
  v20 = 0;
  v13 = v10 >> 31;
  for ( i = (_BYTE *)v11; ; ++i )
  {
    v18 = *i;
    if ( (unsigned int)(v18 - 48) <= 9 )
    {
      v15 = v18 - 48;
      goto LABEL_19;
    }
    if ( isupper(*i) )
    {
      v15 = v18 - 55;
      goto LABEL_19;
    }
    if ( !islower(v18) )
      break;
    v15 = v18 - 87;
LABEL_19:
    if ( v15 >= v19 )
      break;
    v16 = sub_6F8A13E0(v12, 0x7FFFFFFFFFFFFFFFi64, (signed int)a3);
    if ( (unsigned __int64)(v16 + 2) >> 32 < (unsigned int)((signed int)v16 + 2 < v12) + v13 )
    {
      v20 = 1;
    }
    else
    {
      v17 = (signed int)v15 + (signed int)a3 * __PAIR__(v13, v12);
      v13 = v17 >> 32;
      v12 = v17;
    }
  }
  if ( a2 )
    *a2 = i;
  if ( v21 == 45 )
  {
    if ( (unsigned int)(v12 > 0) + v13 > 0x80000000 || v20 )
    {
      *errno() = 34;
      result = 0;
    }
    else
    {
      result = -v12;
    }
  }
  else
  {
    result = v12;
    if ( v13 < 0 || v20 )
    {
      *errno() = 34;
      result = -1;
    }
  }
  return result;
}
