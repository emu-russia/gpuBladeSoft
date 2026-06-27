int __usercall sub_6F791EC0@<eax>(unsigned int *a1@<eax>, _BYTE *a2@<edx>)
{
  unsigned int v2; // ebp@1
  int v3; // eax@2
  _BYTE *v4; // esi@3
  unsigned __int8 v5; // bl@4
  int v6; // edi@7
  unsigned __int8 v7; // bl@12
  int v8; // eax@15
  int v9; // esi@19
  int v10; // eax@19
  unsigned int *v12; // [sp+0h] [bp-28h]@1
  char v13; // [sp+6h] [bp-22h]@7
  bool v14; // [sp+7h] [bp-21h]@3
  _BYTE *v15; // [sp+14h] [bp-14h]@1

  v2 = *a1;
  v12 = a1;
  v15 = (_BYTE *)v2;
  if ( v2 >= (unsigned int)a2 )
    return 0;
  v3 = *(_BYTE *)v2;
  if ( ((_BYTE)v3 - 43) & 0xFD )
  {
    v4 = (_BYTE *)v2;
    v14 = 0;
    goto LABEL_4;
  }
  v4 = (_BYTE *)(v2 + 1);
  v14 = (_BYTE)v3 == 45;
  if ( a2 == (_BYTE *)(v2 + 1) )
    return 0;
  if ( (unsigned int)a2 <= v2 + 1 )
  {
LABEL_33:
    v15 = v4;
    v10 = (int)v4;
    v6 = 0;
    goto LABEL_27;
  }
  v3 = *(_BYTE *)(v2 + 1);
LABEL_4:
  v5 = 1;
  if ( (unsigned __int8)(v3 - 9) <= 0x17u )
    v5 = ((0x80001Bu >> (v3 - 9)) & 1 ^ 1) & 1;
  if ( ((char)v3 <= 0) >= v5 )
    goto LABEL_33;
  v13 = 0;
  v6 = 0;
  do
  {
    v8 = byte_6FB58BC0[v3];
    if ( (char)v8 < 0 || (char)v8 > 9 )
      break;
    if ( v6 <= 214748364 )
    {
      if ( v6 != 214748364 || (char)v8 <= 7 )
      {
        v6 = v8 + 10 * v6;
      }
      else
      {
        v13 = 1;
        v6 = 214748364;
      }
    }
    else
    {
      v13 = 1;
    }
    if ( a2 <= ++v4 )
      break;
    v3 = *v4;
    v7 = 1;
    if ( (unsigned __int8)(v3 - 9) <= 0x17u )
      v7 = ((0x80001Bu >> (v3 - 9)) & 1 ^ 1) & 1;
  }
  while ( ((char)v3 <= 0) < v7 );
  v15 = v4;
  v10 = (int)v4;
  if ( v13 )
    v6 = 0x7FFFFFFF;
LABEL_27:
  if ( v14 )
    v6 = -v6;
  if ( (_BYTE *)v2 == v4 )
    return 0;
  if ( a2 > v4 && *v4 == 35 )
  {
    v9 = (int)(v4 + 1);
    v15 = (_BYTE *)v9;
    v6 = sub_6F7912D0((unsigned int *)&v15, a2, v6);
    v10 = (int)v15;
    if ( (_BYTE *)v9 == v15 )
      return 0;
  }
  *v12 = v10;
  return v6;
}
