signed int __usercall sub_6F90DD30@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  int v2; // ecx@1
  _BYTE *v3; // eax@2
  signed int result; // eax@3
  _BYTE *v5; // esi@6
  int v6; // ebx@6
  _BYTE *v7; // eax@8
  _BYTE *v8; // esi@11
  _BYTE *v9; // ebx@12
  _BYTE *v10; // ebx@13
  _BYTE *v11; // esi@14
  int v12; // ebx@14

  v2 = a1;
  if ( a2 <= 0x7F )
  {
    v3 = *(_BYTE **)a1;
    if ( v3 == *(_BYTE **)(v2 + 4) )
    {
      result = 0;
    }
    else
    {
      *(_DWORD *)v2 = v3 + 1;
      *v3 = a2;
      result = 1;
    }
    return result;
  }
  if ( a2 <= 0x7FF )
  {
    v5 = *(_BYTE **)a1;
    v6 = *(_DWORD *)(a1 + 4);
    result = 0;
    if ( (unsigned int)(v6 - (_DWORD)v5) <= 1 )
      return result;
    *(_DWORD *)v2 = v5 + 1;
    *v5 = (a2 >> 6) - 64;
LABEL_8:
    v7 = (_BYTE *)(*(_DWORD *)v2)++;
    *v7 = (a2 & 0x3F) + -128;
    return 1;
  }
  if ( a2 <= 0xFFFF )
  {
    v11 = *(_BYTE **)a1;
    v12 = *(_DWORD *)(a1 + 4);
    result = 0;
    if ( (unsigned int)(v12 - (_DWORD)v11) <= 2 )
      return result;
    *(_DWORD *)v2 = v11 + 1;
    *v11 = (a2 >> 12) - 32;
    goto LABEL_13;
  }
  result = 0;
  if ( a2 <= 0x10FFFF )
  {
    v8 = *(_BYTE **)v2;
    if ( (unsigned int)(*(_DWORD *)(v2 + 4) - *(_DWORD *)v2) > 3 )
    {
      *(_DWORD *)v2 = v8 + 1;
      *v8 = (a2 >> 18) - 16;
      v9 = (_BYTE *)(*(_DWORD *)v2)++;
      *v9 = ((a2 >> 12) & 0x3F) + -128;
LABEL_13:
      v10 = (_BYTE *)(*(_DWORD *)v2)++;
      *v10 = ((a2 >> 6) & 0x3F) + -128;
      goto LABEL_8;
    }
  }
  return result;
}
