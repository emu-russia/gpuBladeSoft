unsigned int __cdecl sub_6F8AB4A0(int a1, _DWORD *a2, signed int a3)
{
  int v3; // ebx@1
  char v4; // si@7
  char v5; // al@8
  int v6; // edx@12
  unsigned int v7; // eax@12
  unsigned int v8; // esi@14
  int v9; // edi@18
  int v10; // ebp@19
  unsigned int v11; // ebx@19
  __int64 v13; // rax@35
  unsigned __int64 v14; // rax@36
  unsigned __int64 v15; // rax@36
  signed int v16; // [sp+1Ch] [bp-30h]@18
  int v17; // [sp+20h] [bp-2Ch]@13
  _BYTE *v18; // [sp+20h] [bp-2Ch]@17
  unsigned int v19; // [sp+24h] [bp-28h]@16
  signed int v20; // [sp+28h] [bp-24h]@18
  char v21; // [sp+2Fh] [bp-1Dh]@8

  v3 = a1;
  if ( a2 )
    *a2 = a1;
  if ( a3 == 1 || (unsigned int)a3 > 0x24 )
  {
    v8 = 0;
    *errno() = 33;
    return v8;
  }
  while ( 1 )
  {
    v4 = *(_BYTE *)v3;
    if ( !isspace(*(_BYTE *)v3) )
      break;
    ++v3;
  }
  v5 = v4;
  v21 = v4;
  if ( !((v4 - 43) & 0xFD) )
    v5 = *(_BYTE *)(v3++ + 1);
  if ( a3 )
  {
    if ( a3 != 16 || v5 != 48 )
      goto LABEL_12;
    if ( (*(_BYTE *)(v3 + 1) & 0xDF) != 88 )
    {
      v19 = 16;
      v7 = 0;
      goto LABEL_17;
    }
    goto LABEL_42;
  }
  a3 = 10;
  if ( v5 == 48 )
  {
    if ( (*(_BYTE *)(v3 + 1) & 0xDF) != 88 )
    {
      v19 = 8;
      v7 = 0;
      a3 = 8;
      goto LABEL_17;
    }
LABEL_42:
    v5 = *(_BYTE *)(v3 + 2);
    a3 = 16;
    v3 += 2;
  }
LABEL_12:
  v6 = v5;
  v7 = v5 - 48;
  if ( v7 <= 9 )
  {
LABEL_16:
    v19 = a3;
    goto LABEL_17;
  }
  v17 = v6;
  if ( !isupper(v6) )
  {
    v8 = 0;
    if ( !islower(v17) )
      return v8;
    v7 = v17 - 87;
    goto LABEL_16;
  }
  v7 = v17 - 55;
  v19 = a3;
LABEL_17:
  v8 = 0;
  v18 = (_BYTE *)(v3 + 1);
  if ( v7 < v19 )
  {
    v8 = v7;
    v20 = 0;
    v9 = (signed int)v7 >> 31;
    v16 = a3 >> 31;
    while ( 1 )
    {
      v10 = *v18;
      v11 = v10 - 48;
      if ( (unsigned int)(v10 - 48) > 9 )
      {
        v11 = v10 - 55;
        if ( !isupper(*v18) )
        {
          if ( !islower(v10) )
            break;
          v11 = v10 - 87;
        }
      }
      if ( v11 >= v19 )
        break;
      LODWORD(v13) = sub_6F8A1530(v9, 0xFFFFFFFFFFFFFFFFui64, a3, v16);
      if ( (unsigned __int64)(v13 + 1) >> 32 < (unsigned int)((signed int)v13 + 1 < v8) + v9
        || (v14 = (unsigned int)a3 * (unsigned __int64)v8,
            HIDWORD(v14) += v9 * a3 + v8 * v16,
            v15 = (signed int)v11 + v14,
            HIDWORD(v15) < (unsigned int)((unsigned int)v15 < v8) + v9) )
      {
        v20 = 1;
      }
      else
      {
        v9 = HIDWORD(v15);
        v8 = v15;
      }
      ++v18;
    }
    if ( a2 )
      *a2 = v18;
    if ( v20 )
    {
      v8 = -1;
      *errno() = 34;
    }
    else if ( v21 == 45 )
    {
      v8 = -v8;
    }
  }
  return v8;
}
