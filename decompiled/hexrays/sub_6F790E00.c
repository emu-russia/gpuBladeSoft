signed int __usercall sub_6F790E00@<eax>(unsigned int *a1@<eax>, unsigned int a2@<edx>)
{
  unsigned int *v2; // edi@1
  unsigned int v3; // esi@1
  char v4; // bl@2
  char *v5; // ecx@7
  signed int result; // eax@11
  unsigned int v7; // esi@15
  int v8; // [sp+0h] [bp-14h]@2

  v2 = a1;
  v3 = *a1;
  if ( *a1 < a2 )
  {
    v4 = *(_BYTE *)v3;
    v8 = 0;
    while ( 1 )
    {
      v5 = (char *)(v3 + 1);
      if ( v4 == 92 )
      {
        if ( (char *)a2 == v5 )
        {
LABEL_11:
          result = 3;
          goto LABEL_12;
        }
        v4 = *(_BYTE *)(v3 + 1);
        switch ( v4 )
        {
          case 40:
          case 41:
          case 92:
          case 98:
          case 102:
          case 110:
          case 114:
          case 116:
            v5 = (char *)(v3 + 2);
            if ( v3 + 2 >= a2 )
              goto LABEL_11;
            goto LABEL_6;
          default:
            if ( a2 <= (unsigned int)v5 )
              goto LABEL_11;
            if ( (unsigned __int8)(v4 - 48) > 7u )
            {
              ++v3;
              continue;
            }
            v7 = 0;
            do
            {
              ++v7;
              ++v5;
            }
            while ( v7 <= 2 && a2 > (unsigned int)v5 && (unsigned __int8)(*v5 - 48) <= 7u );
            break;
        }
      }
      else if ( v4 == 40 )
      {
        ++v8;
      }
      else if ( v4 == 41 && !--v8 )
      {
        *a1 = (unsigned int)v5;
        return 0;
      }
      if ( (unsigned int)v5 >= a2 )
        goto LABEL_11;
LABEL_6:
      v4 = *v5;
      v3 = (unsigned int)v5;
    }
  }
  v5 = (char *)*a1;
  result = 3;
LABEL_12:
  *v2 = (unsigned int)v5;
  return result;
}
