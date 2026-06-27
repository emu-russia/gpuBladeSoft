int __usercall sub_6F90E070@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, char a4, int a5)
{
  int v5; // esi@1
  int v6; // ebx@1
  int v7; // ebp@3
  int v8; // edi@3
  unsigned int v9; // eax@5
  int v10; // edx@7
  int v11; // ecx@7
  __int16 v12; // cx@9
  int result; // eax@12
  unsigned int v14; // ecx@15
  __int16 v15; // ax@15
  __int16 v16; // cx@15
  unsigned int v17; // [sp+0h] [bp-18h]@1

  v5 = a1;
  v6 = a2;
  v17 = a3;
  if ( a4 & 4 )
    sub_6F90DF70(a1);
LABEL_3:
  v7 = *(_DWORD *)v5;
  v8 = *(_DWORD *)(v5 + 4);
  if ( *(_DWORD *)v5 != v8 )
  {
    while ( *(_DWORD *)v6 != *(_DWORD *)(v6 + 4) )
    {
      v9 = sub_6F90DAC0(v5, v17);
      if ( v9 == -2 )
        return (a5 != 0) + 1;
      if ( v17 < v9 )
        return 2;
      v10 = *(_DWORD *)v6;
      v11 = *(_DWORD *)(v6 + 4);
      if ( v9 > 0xFFFF )
      {
        if ( (unsigned int)(v11 - v10) <= 3 )
        {
LABEL_14:
          *(_DWORD *)v5 = v7;
          result = 1;
          *(_DWORD *)(v5 + 4) = v8;
          return result;
        }
        v14 = v9 >> 10;
        v15 = (v9 & 0x3FF) - 9216;
        v16 = v14 - 10304;
        if ( !(a4 & 1) )
        {
          v16 = __ROL2__(v16, 8);
          v15 = __ROL2__(v15, 8);
        }
        *(_WORD *)v10 = v16;
        *(_DWORD *)v6 = v10 + 4;
        *(_WORD *)(v10 + 2) = v15;
        goto LABEL_3;
      }
      if ( v11 == v10 )
        goto LABEL_14;
      v8 = *(_DWORD *)(v5 + 4);
      v12 = __ROL2__(v9, 8);
      v7 = *(_DWORD *)v5;
      if ( !(a4 & 1) )
        LOWORD(v9) = v12;
      *(_DWORD *)v6 = v10 + 2;
      *(_WORD *)v10 = v9;
      if ( v7 == v8 )
        return 0;
    }
  }
  return 0;
}
