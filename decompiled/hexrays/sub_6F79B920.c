int __cdecl sub_6F79B920(int a1, unsigned int a2)
{
  unsigned int v2; // edx@1
  signed int v3; // eax@1
  int v4; // ecx@1
  unsigned __int8 v5; // cf@1
  unsigned int v6; // ecx@1
  _DWORD *v7; // edi@2
  int v8; // eax@2
  _DWORD *v9; // esi@3
  unsigned int v10; // eax@8

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 8 * *(_DWORD *)(a1 + 16) - 8;
  v4 = *(_DWORD *)(a1 + 20);
  v5 = __CFADD__(v3, v4);
  v6 = v3 + v4;
  if ( v5 )
    return 0;
  v7 = (_DWORD *)(v2 + 8 * (v3 >> 4));
  v8 = *v7;
  if ( a2 == *v7 )
  {
LABEL_14:
    v9 = v7;
    return v9[1];
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = v8 & 0x7FFFFFFF;
    if ( a2 == v10 )
      break;
    if ( v2 == v6 )
      goto LABEL_12;
    if ( a2 <= v10 )
      goto LABEL_11;
    v2 = (unsigned int)(v7 + 2);
    if ( v6 < (unsigned int)(v7 + 2) )
      goto LABEL_12;
LABEL_7:
    v7 = (_DWORD *)(v2 + 8 * ((signed int)(v6 - v2) >> 4));
    v8 = *v7;
    if ( *v7 == a2 )
      goto LABEL_14;
  }
  if ( v2 == v6 )
    goto LABEL_14;
  v9 = v7;
LABEL_11:
  v6 = (unsigned int)(v7 - 2);
  if ( (unsigned int)(v7 - 2) >= v2 )
    goto LABEL_7;
LABEL_12:
  if ( v9 )
    return v9[1];
  return 0;
}
