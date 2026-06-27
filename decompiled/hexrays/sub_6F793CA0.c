unsigned int __cdecl sub_6F793CA0(int a1, unsigned int a2)
{
  unsigned int result; // eax@1
  unsigned int v3; // ebp@1
  _BYTE *v4; // edx@1
  char v5; // al@15
  unsigned int v6; // edi@18
  int v7; // edx@19
  char v8; // dl@29
  unsigned int v9; // edx@43
  char v10; // al@44
  char v11; // dl@48
  unsigned int v12; // [sp+4h] [bp-28h]@47
  signed int v13; // [sp+8h] [bp-24h]@43
  _BYTE *v14; // [sp+18h] [bp-14h]@14

  result = a2;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_BYTE **)a1;
  *(_DWORD *)(a2 + 8) = 0;
  if ( v3 <= (unsigned int)v4 )
  {
LABEL_12:
    *(_DWORD *)a1 = v4;
    return result;
  }
  while ( 1 )
  {
    result = *v4;
    if ( (unsigned __int8)(result - 12) > 1u && (unsigned __int8)(result - 9) > 1u )
    {
      if ( result & 0xDF )
        break;
    }
LABEL_11:
    if ( v3 <= (unsigned int)++v4 )
      goto LABEL_12;
  }
  if ( (_BYTE)result == 37 )
  {
    if ( v3 > (unsigned int)v4 )
    {
      while ( (_BYTE *)v3 != ++v4 )
      {
        result = *v4;
        if ( (_BYTE)result == 13 || (_BYTE)result == 10 )
          goto LABEL_11;
      }
      v4 = (_BYTE *)v3;
    }
    goto LABEL_11;
  }
  *(_DWORD *)a1 = v4;
  v14 = v4;
  if ( v3 <= (unsigned int)v4 )
    return result;
  v5 = *v4;
  if ( *v4 != 91 )
  {
    if ( v5 == 123 )
    {
      *(_DWORD *)a2 = v4;
      *(_DWORD *)(a2 + 8) = 3;
      if ( !sub_6F7923C0((unsigned int *)&v14, v3) )
        goto LABEL_25;
    }
    else
    {
      if ( v5 != 40 )
      {
        *(_DWORD *)a2 = v4;
        *(_DWORD *)(a2 + 8) = 3 * (*v4 == 47) + 1;
        sub_6F7939C0(a1);
        result = *(_DWORD *)a1;
        v6 = a2;
        if ( !*(_DWORD *)(a1 + 12) )
        {
          *(_DWORD *)(a2 + 4) = result;
          v7 = result;
          goto LABEL_20;
        }
LABEL_41:
        v7 = *(_DWORD *)(v6 + 4);
        goto LABEL_20;
      }
      *(_DWORD *)a2 = v4;
      *(_DWORD *)(a2 + 8) = 2;
      if ( !sub_6F790E00((unsigned int *)&v14, v3) )
      {
LABEL_25:
        v7 = (int)v14;
        *(_DWORD *)(a2 + 4) = v14;
        result = v7;
        goto LABEL_20;
      }
    }
    v7 = *(_DWORD *)(a2 + 4);
    result = (unsigned int)v14;
    goto LABEL_20;
  }
  v6 = a2;
  *(_DWORD *)(a2 + 8) = 3;
  result = (unsigned int)(v4 + 1);
  *(_DWORD *)a2 = v4;
  v14 = v4 + 1;
  *(_DWORD *)a1 = v4 + 1;
  if ( (unsigned int)(v4 + 1) >= v3 )
    goto LABEL_41;
  while ( 2 )
  {
    v8 = *(_BYTE *)result;
    if ( (unsigned __int8)(*(_BYTE *)result - 9) <= 1u || (unsigned __int8)(*(_BYTE *)result - 12) <= 1u || !(v8 & 0xDF) )
    {
LABEL_38:
      if ( v3 <= ++result )
      {
        *(_DWORD *)a1 = result;
LABEL_40:
        v7 = *(_DWORD *)(a2 + 4);
        goto LABEL_20;
      }
      continue;
    }
    break;
  }
  if ( v8 == 37 )
  {
    if ( v3 > result )
    {
      while ( v3 != ++result )
      {
        if ( *(_BYTE *)result == 13 || *(_BYTE *)result == 10 )
          goto LABEL_38;
      }
      result = v3;
    }
    goto LABEL_38;
  }
  *(_DWORD *)a1 = result;
  v14 = (_BYTE *)result;
  if ( v3 <= result )
    goto LABEL_40;
  v13 = 1;
  v9 = result;
  if ( *(_DWORD *)(a1 + 12) )
    goto LABEL_40;
  v10 = *(_BYTE *)result;
  if ( v10 == 91 )
    goto LABEL_61;
LABEL_45:
  if ( v10 != 93 || (--v13, v13) )
  {
    while ( 1 )
    {
      *(_DWORD *)a1 = v9;
      sub_6F7939C0(a1);
      result = *(_DWORD *)a1;
      if ( *(_DWORD *)(a1 + 8) > *(_DWORD *)a1 )
      {
        v12 = *(_DWORD *)(a1 + 8);
        do
        {
          v11 = *(_BYTE *)result;
          if ( (unsigned __int8)(*(_BYTE *)result - 12) > 1u
            && (unsigned __int8)(*(_BYTE *)result - 9) > 1u
            && v11 & 0xDF )
          {
            if ( v11 != 37 )
              break;
            if ( v12 > result )
            {
              while ( v12 != ++result )
              {
                if ( *(_BYTE *)result == 13 || *(_BYTE *)result == 10 )
                  goto LABEL_57;
              }
              result = *(_DWORD *)(a1 + 8);
            }
          }
LABEL_57:
          ++result;
        }
        while ( v12 > result );
      }
      *(_DWORD *)a1 = result;
      v14 = (_BYTE *)result;
      if ( v3 <= result )
        goto LABEL_40;
      v9 = result;
      if ( *(_DWORD *)(a1 + 12) )
        goto LABEL_40;
      v10 = *(_BYTE *)result;
      if ( v10 != 91 )
        goto LABEL_45;
LABEL_61:
      ++v13;
    }
  }
  v7 = v9 + 1;
  *(_DWORD *)(a2 + 4) = v7;
  result = v7;
LABEL_20:
  if ( v7 )
  {
    *(_DWORD *)a1 = result;
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)a1 = result;
  }
  return result;
}
