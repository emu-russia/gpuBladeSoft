int __usercall sub_6F7912D0@<eax>(unsigned int *a1@<eax>, _BYTE *a2@<edx>, signed int a3@<ecx>)
{
  unsigned int v3; // esi@1
  int result; // eax@1
  _BYTE *v5; // ebp@2
  signed int v6; // edi@2
  int v7; // ebx@3
  unsigned __int8 v8; // al@5
  unsigned __int8 v9; // dl@12
  char v10; // dl@15
  unsigned int v11; // ecx@25
  int v12; // [sp+0h] [bp-1Ch]@4
  unsigned int *v13; // [sp+4h] [bp-18h]@1
  char v14; // [sp+9h] [bp-13h]@8
  char v15; // [sp+Ah] [bp-12h]@4
  bool v16; // [sp+Bh] [bp-11h]@4

  v3 = *a1;
  v13 = a1;
  result = 0;
  if ( v3 < (unsigned int)a2 )
  {
    v5 = a2;
    result = 0;
    v6 = a3;
    if ( (unsigned int)(a3 - 2) <= 0x22 )
    {
      v7 = *(_BYTE *)v3;
      if ( ((_BYTE)v7 - 43) & 0xFD )
      {
        v16 = 0;
        v12 = 0x7FFFFFFF / a3;
        v15 = 0x7FFFFFFF % a3;
      }
      else
      {
        v11 = v3 + 1;
        v16 = (_BYTE)v7 == 45;
        if ( a2 == (_BYTE *)(v3 + 1) )
          return result;
        v12 = 0x7FFFFFFF / v6;
        v15 = 0x7FFFFFFF % v6;
        if ( (unsigned int)a2 <= v11 )
          goto LABEL_29;
        v7 = *(_BYTE *)(v3++ + 1);
      }
      v8 = 1;
      if ( (unsigned __int8)(v7 - 9) <= 0x17u )
        v8 = ((0x80001Bu >> (v7 - 9)) & 1 ^ 1) & 1;
      if ( ((char)v7 <= 0) < v8 )
      {
        v14 = 0;
        result = 0;
        do
        {
          v10 = byte_6FB58BC0[v7];
          if ( v10 < 0 || v6 <= v10 )
            break;
          if ( result <= v12 && (result != v12 || v10 <= v15) )
            result = v10 + v6 * result;
          else
            v14 = 1;
          if ( (unsigned int)v5 <= ++v3 )
            break;
          v7 = *(_BYTE *)v3;
          v9 = 1;
          if ( (unsigned __int8)(v7 - 9) <= 0x17u )
            v9 = ((0x80001Bu >> (v7 - 9)) & 1 ^ 1) & 1;
        }
        while ( ((char)v7 <= 0) < v9 );
        *v13 = v3;
        if ( v14 )
          result = 0x7FFFFFFF;
        goto LABEL_22;
      }
      v11 = v3;
LABEL_29:
      *v13 = v11;
      result = 0;
LABEL_22:
      if ( v16 )
        result = -result;
      return result;
    }
  }
  return result;
}
