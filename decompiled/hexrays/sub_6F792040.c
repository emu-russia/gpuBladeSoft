int __usercall sub_6F792040@<eax>(_BYTE **a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>)
{
  _BYTE *v3; // esi@1
  char v4; // al@2
  _BYTE *v5; // ebp@2
  bool v6; // zf@3
  _BYTE *v7; // eax@3
  int v8; // ebx@6
  signed int v9; // edi@7
  int v10; // esi@7
  int v11; // ecx@20
  int v12; // ST1C_4@22
  int v13; // edx@22
  int result; // eax@25
  char v15; // cl@43
  char v16; // di@44
  unsigned __int8 v17; // cl@45
  int v18; // edx@46
  int v19; // edx@53
  int v20; // ecx@71
  int v21; // [sp+10h] [bp-3Ch]@1
  _BYTE **v22; // [sp+14h] [bp-38h]@1
  char v23; // [sp+1Ah] [bp-32h]@6
  bool v24; // [sp+1Bh] [bp-31h]@3
  char v25; // [sp+1Ch] [bp-30h]@9
  _BYTE *v26; // [sp+2Ch] [bp-20h]@1

  v3 = *a1;
  v22 = a1;
  v21 = a3;
  v26 = v3;
  if ( v3 >= a2 )
    return 0;
  v4 = *v3;
  v5 = a2;
  if ( (*v3 - 43) & 0xFD )
  {
    v24 = 0;
    if ( v4 == 46 )
    {
LABEL_41:
      v23 = 0;
      v8 = 0;
      goto LABEL_42;
    }
  }
  else
  {
    v6 = v4 == 45;
    v7 = v3 + 1;
    v24 = v6;
    v26 = v3 + 1;
    if ( a2 == v3 + 1 )
      return 0;
    if ( v3[1] == 46 )
    {
      if ( a2 <= v7 )
      {
        v23 = 0;
        v8 = 0;
LABEL_7:
        v9 = 1;
        v10 = 0;
        goto LABEL_8;
      }
      ++v3;
      goto LABEL_41;
    }
    ++v3;
  }
  v8 = sub_6F791EC0((unsigned int *)&v26, a2);
  v7 = v26;
  if ( v26 == v3 )
    return 0;
  v23 = 1;
  if ( v8 <= 0x7FFF )
  {
    v8 <<= 16;
    v23 = 0;
    if ( v5 <= v26 )
      goto LABEL_7;
  }
  else if ( v5 <= v26 )
  {
    goto LABEL_7;
  }
  if ( *v26 != 46 )
    goto LABEL_7;
  v3 = v26;
LABEL_42:
  v7 = v3 + 1;
  v26 = v3 + 1;
  if ( v5 <= v3 + 1 )
    goto LABEL_7;
  v15 = v3[1];
  if ( v15 == 32 )
  {
    v9 = 1;
    v10 = 0;
    goto LABEL_37;
  }
  v16 = v3[1];
  if ( (unsigned __int8)(v16 - 12) <= 1u || (unsigned __int8)(v15 - 9) <= 1u )
    goto LABEL_7;
  v17 = v3[1];
  if ( v16 <= 0 )
    goto LABEL_7;
  v9 = 1;
  v10 = 0;
  v18 = v17;
  do
  {
    v19 = byte_6FB58BC0[v18];
    if ( (unsigned __int8)v19 > 9u )
      break;
    if ( v9 <= 214748363 && v10 <= 214748363 )
    {
      v10 = v19 + 10 * v10;
      if ( v8 || v21 <= 0 )
        v9 *= 10;
      else
        --v21;
    }
    v26 = ++v7;
    if ( v5 == v7 )
    {
      v7 = v5;
      break;
    }
    v18 = *v7;
    if ( (_BYTE)v18 == 32 )
      goto LABEL_37;
  }
  while ( (unsigned __int8)(v18 - 9) > 1u && (unsigned __int8)(v18 - 12) > 1u && (char)v18 > 0 );
LABEL_8:
  if ( v5 <= v7 + 1 )
  {
LABEL_37:
    v25 = 0;
    goto LABEL_10;
  }
  v25 = 0;
  if ( (*v7 & 0xDF) == 69 )
  {
    v26 = v7 + 1;
    v12 = (int)(v7 + 1);
    v13 = sub_6F791EC0((unsigned int *)&v26, v5);
    v7 = v26;
    if ( (_BYTE *)v12 == v26 )
      return 0;
    if ( v13 > 1000 )
    {
      *v22 = v26;
      if ( !(v8 | v10) )
        return 0;
      goto LABEL_32;
    }
    v25 = 1;
    if ( v13 >= -1000 )
    {
      v21 += v13;
      v25 = 0;
    }
  }
LABEL_10:
  *v22 = v7;
  if ( !(v10 | v8) )
    return 0;
  if ( !v23 )
  {
    if ( !v25 )
    {
      if ( v21 > 0 )
      {
        if ( v8 > 214748363 )
          goto LABEL_32;
        while ( 1 )
        {
          v11 = 10 * v8;
          v8 *= 10;
          if ( v10 > 214748363 )
          {
            if ( v9 == 1 )
              goto LABEL_32;
            v9 /= 10;
          }
          else
          {
            v10 *= 10;
          }
          if ( !--v21 )
            break;
          if ( v11 > 214748363 )
            goto LABEL_32;
        }
LABEL_61:
        if ( v10 )
          v8 += sub_6F7C9760(v10, v9);
        goto LABEL_33;
      }
      if ( !v21 )
        goto LABEL_61;
      while ( 1 )
      {
        v20 = v8 / 10;
        v8 /= 10;
        if ( v9 <= 214748363 )
          v9 *= 10;
        else
          v10 /= 10;
        if ( !(v10 | v20) )
          break;
        if ( !++v21 )
          goto LABEL_61;
      }
    }
    return 0;
  }
LABEL_32:
  v8 = 0x7FFFFFFF;
LABEL_33:
  result = v8;
  if ( v24 )
    result = -v8;
  return result;
}
