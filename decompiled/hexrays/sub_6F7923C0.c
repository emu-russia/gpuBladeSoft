signed int __usercall sub_6F7923C0@<eax>(unsigned int *a1@<eax>, unsigned int a2@<edx>)
{
  unsigned int v2; // ecx@1
  unsigned int v3; // ebx@2
  int v4; // esi@2
  unsigned __int8 *i; // edx@2
  signed int result; // eax@5
  bool v7; // cl@5
  unsigned __int8 v8; // al@8
  unsigned __int8 v9; // al@18
  char v10; // bp@18
  unsigned int *v11; // [sp+4h] [bp-24h]@1
  _BYTE *v12; // [sp+14h] [bp-14h]@1

  v2 = *a1;
  v11 = a1;
  v12 = (_BYTE *)v2;
  if ( v2 >= a2 )
  {
    result = 0;
    *v11 = v2;
    return result;
  }
  v3 = a2;
  v4 = 0;
  for ( i = (unsigned __int8 *)v2; ; v2 = (unsigned int)i )
  {
    v8 = *i;
    if ( *i == 60 )
    {
      while ( 1 )
      {
        if ( v3 <= (unsigned int)++i )
          goto LABEL_28;
        while ( 1 )
        {
          v9 = *i;
          v10 = *i & 0xDF;
          if ( (unsigned __int8)(v9 - 9) > 1u && (unsigned __int8)(v9 - 12) > 1u )
          {
            if ( v10 )
              break;
          }
LABEL_27:
          if ( v3 <= (unsigned int)++i )
            goto LABEL_28;
        }
        if ( v9 == 37 )
          break;
        if ( v3 <= (unsigned int)i )
          goto LABEL_28;
        if ( (unsigned __int8)(v9 - 48) > 9u && (unsigned __int8)(v10 - 65) > 5u )
        {
          if ( v9 != 62 )
          {
            ++i;
            v7 = 0;
            result = 3;
            goto LABEL_6;
          }
LABEL_28:
          i += 2;
          v7 = v3 > (unsigned int)i;
          result = 0;
          goto LABEL_6;
        }
      }
      if ( v3 > (unsigned int)i )
      {
        while ( (unsigned __int8 *)v3 != ++i )
        {
          if ( *i == 13 || *i == 10 )
            goto LABEL_27;
        }
        i = (unsigned __int8 *)v3;
      }
      goto LABEL_27;
    }
    if ( v8 <= 0x3Cu )
      break;
    if ( v8 == 123 )
    {
      ++v4;
      goto LABEL_13;
    }
    if ( v8 == 125 && !--v4 )
    {
      result = 0;
      *v11 = (unsigned int)(i + 1);
      return result;
    }
LABEL_13:
    i = (unsigned __int8 *)(v2 + 1);
    v12 = (_BYTE *)(v2 + 1);
    result = 0;
    if ( v3 <= v2 + 1 )
      goto LABEL_14;
LABEL_7:
    ;
  }
  if ( v8 != 37 )
  {
    if ( v8 == 40 )
    {
      result = sub_6F790E00((unsigned int *)&v12, v3);
      i = v12 + 1;
      v7 = result == 0 && v3 > (unsigned int)(v12 + 1);
      goto LABEL_6;
    }
    goto LABEL_13;
  }
  if ( v3 > (unsigned int)i )
  {
    while ( (unsigned __int8 *)v3 != ++i )
    {
      if ( *i == 13 || *i == 10 )
        goto LABEL_42;
    }
    i = (unsigned __int8 *)v3;
  }
LABEL_42:
  v7 = v3 > (unsigned int)++i;
  result = 0;
LABEL_6:
  v12 = i;
  if ( v7 )
    goto LABEL_7;
LABEL_14:
  if ( v4 )
    result = 3;
  *v11 = (unsigned int)i;
  return result;
}
