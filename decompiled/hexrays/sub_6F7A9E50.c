int __usercall sub_6F7A9E50@<eax>(int result@<eax>, int a2@<edx>, char a3@<cl>)
{
  int v3; // ebx@1
  int v4; // esi@6
  bool v5; // zf@6
  bool v6; // sf@6
  unsigned __int8 v7; // of@6
  signed int v8; // ebx@10
  int v9; // ebx@12
  int v10; // ecx@13
  int v11; // ecx@14
  int v12; // ebx@17

  v3 = a3 & 0xC0;
  if ( v3 == 64 )
    goto LABEL_5;
  if ( v3 <= 64 )
  {
    if ( !(a3 & 0xC0) )
    {
      a2 = (signed __int16)a2 / 2;
      *(_DWORD *)(result + 476) = (signed __int16)a2;
      goto LABEL_6;
    }
LABEL_25:
    a2 = *(_DWORD *)(result + 476);
LABEL_6:
    v4 = a3 & 0x30;
    v7 = __OFSUB__(v4, 16);
    v5 = v4 == 16;
    v6 = v4 - 16 < 0;
    if ( v4 != 16 )
      goto LABEL_7;
LABEL_17:
    v12 = a2 + 3;
    if ( a2 >= 0 )
      v12 = a2;
    v9 = v12 >> 10;
    v10 = a3 & 0xF;
    if ( v10 )
      goto LABEL_14;
LABEL_20:
    v11 = a2 - 1;
    goto LABEL_15;
  }
  if ( v3 != 128 )
  {
    if ( v3 == 192 )
    {
LABEL_5:
      a2 = (signed __int16)a2;
      *(_DWORD *)(result + 476) = (signed __int16)a2;
      goto LABEL_6;
    }
    goto LABEL_25;
  }
  v4 = a3 & 0x30;
  a2 = 2 * (signed __int16)a2;
  v7 = __OFSUB__(v4, 16);
  v5 = v4 == 16;
  v6 = v4 - 16 < 0;
  *(_DWORD *)(result + 476) = a2;
  if ( v4 == 16 )
    goto LABEL_17;
LABEL_7:
  if ( (unsigned __int8)(v6 ^ v7) | v5 )
  {
    v9 = 0;
    if ( !v4 )
      goto LABEL_13;
    goto LABEL_22;
  }
  if ( v4 == 32 )
  {
    v9 = (signed int)(a2 + ((unsigned int)a2 >> 31)) >> 9;
    goto LABEL_13;
  }
  if ( v4 != 48 )
  {
LABEL_22:
    v9 = *(_DWORD *)(result + 480) >> 8;
    goto LABEL_13;
  }
  v8 = 3 * a2 + 3;
  if ( 3 * a2 >= 0 )
    v8 = 3 * a2;
  v9 = v8 >> 10;
LABEL_13:
  v10 = a3 & 0xF;
  if ( !v10 )
    goto LABEL_20;
LABEL_14:
  v11 = a2 * (v10 - 4) / 8;
LABEL_15:
  *(_DWORD *)(result + 480) = v9;
  *(_DWORD *)(result + 476) = a2 >> 8;
  *(_DWORD *)(result + 484) = v11 >> 8;
  return result;
}
