signed int __cdecl sub_6F90A680(int a1, int a2, char a3)
{
  signed int result; // eax@1
  _BYTE *v4; // edx@1
  int v5; // edi@5
  _BYTE *v6; // ecx@6
  _BYTE *v7; // esi@7
  unsigned int v8; // edx@8

  result = *(_DWORD *)(a1 + 12);
  v4 = (_BYTE *)(a2 + 1);
  *(_BYTE *)a2 = 37;
  if ( BYTE1(result) & 8 )
  {
    *(_BYTE *)(a2 + 1) = 43;
    v4 = (_BYTE *)(a2 + 2);
  }
  if ( BYTE1(result) & 4 )
    *v4++ = 35;
  v5 = result & 0x104;
  if ( v5 == 260 )
  {
    v6 = v4;
    if ( !a3 )
      goto LABEL_16;
LABEL_12:
    *(++v6 - 1) = a3;
    v7 = v6 + 1;
    if ( v5 != 4 )
      goto LABEL_8;
LABEL_13:
    *v6 = 102;
    *v7 = 0;
    return result;
  }
  v6 = v4 + 2;
  *(_WORD *)v4 = 10798;
  if ( a3 )
    goto LABEL_12;
  v7 = v4 + 3;
  if ( v5 == 4 )
    goto LABEL_13;
LABEL_8:
  v8 = result & 0x4000;
  if ( v5 == 256 )
  {
    result = v8 < 1 ? 101 : 69;
    *v6 = result;
    *v7 = 0;
    return result;
  }
  if ( v5 != 260 )
  {
    result = v8 < 1 ? 103 : 71;
    *v6 = result;
    *v7 = 0;
    return result;
  }
  v4 = v6;
LABEL_16:
  result = (result & 0x4000u) < 1 ? 97 : 65;
  *v4 = result;
  v4[1] = 0;
  return result;
}
