signed int __usercall sub_6F90DFB0@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, char a4)
{
  _WORD *v4; // ecx@2
  unsigned int v5; // esi@3
  __int16 v6; // bx@5
  unsigned int v7; // esi@7
  __int16 v8; // si@9
  __int16 *v9; // esi@11
  int v10; // ebx@11
  signed int result; // eax@12
  unsigned int v12; // [sp+0h] [bp-18h]@1

  v12 = a3;
  if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)a1 )
    return 0;
  v4 = *(_WORD **)a2;
  if ( (unsigned int)(*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) <= 1 )
  {
LABEL_14:
    result = 1;
  }
  else
  {
    v5 = **(_WORD **)a1;
    if ( v5 - 55296 > 0x3FF && v12 >= v5 )
    {
      v6 = **(_WORD **)a1;
      do
      {
        v8 = __ROL2__(v6, 8);
        if ( !(a4 & 1) )
          v6 = v8;
        *v4 = v6;
        v9 = *(__int16 **)a1;
        v4 = (_WORD *)(*(_DWORD *)a2 + 2);
        v10 = *(_DWORD *)a1 + 2;
        *(_DWORD *)a2 = v4;
        *(_DWORD *)a1 = v10;
        if ( *(_DWORD *)(a1 + 4) == v10 )
          return 0;
        if ( (unsigned int)(*(_DWORD *)(a2 + 4) - (_DWORD)v4) <= 1 )
          goto LABEL_14;
        v7 = (unsigned __int16)v9[1];
        v6 = v7;
      }
      while ( v7 - 55296 > 0x3FF && v7 <= v12 );
    }
    result = 2;
  }
  return result;
}
