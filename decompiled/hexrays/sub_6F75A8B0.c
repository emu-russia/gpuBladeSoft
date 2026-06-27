signed int __cdecl sub_6F75A8B0(int a1, _BYTE *a2, int a3)
{
  int *v3; // eax@2
  _BYTE *v4; // edx@3
  _BYTE *v5; // ecx@3
  int v6; // ebx@4
  int v7; // esi@4
  int v8; // ebp@4
  int v10; // edi@9
  int v11; // ebx@9
  int v12; // ebp@9
  int v13; // edi@12
  int v14; // ebx@12
  int v15; // esi@12
  bool v16; // sf@12
  unsigned __int8 v17; // of@12
  int v18; // edi@12

  if ( a3 > 0 )
  {
    v3 = &dword_70259320[7 * a1];
    if ( v3[2] <= 0 )
      goto LABEL_7;
    v4 = a2;
    v5 = &a2[a3 - 1];
    if ( ((_BYTE)v5 - (_BYTE)a2) & 1 )
    {
      *a2 = *(_BYTE *)(*v3 + v3[4]);
      v6 = v3[1];
      v7 = v3[4] + 1;
      v8 = v3[2];
      if ( v7 >= v6 )
        v7 = v3[4] + 1 - v6;
      v4 = a2 + 1;
      v3[4] = v7;
      v3[2] = v8 - 1;
      if ( v8 - 1 <= 0 )
      {
LABEL_7:
        dword_70259338[7 * a1] = 1;
        return -1;
      }
    }
    while ( 1 )
    {
      *v4 = *(_BYTE *)(*v3 + v3[4]);
      v13 = v3[1];
      v14 = v3[4] + 1;
      v15 = v14 - v13;
      v17 = __OFSUB__(v14, v13);
      v16 = v14 - v13 < 0;
      v18 = v3[2] - 1;
      if ( !(v16 ^ v17) )
        v14 = v15;
      v3[2] = v18;
      v3[4] = v14;
      if ( v5 == v4 )
        break;
      if ( v18 > 0 )
      {
        v4[1] = *(_BYTE *)(*v3 + v14);
        v10 = v3[1];
        v11 = v3[4] + 1;
        v12 = v3[2];
        if ( v11 >= v10 )
          v11 = v3[4] + 1 - v10;
        v4 += 2;
        v3[4] = v11;
        v3[2] = v12 - 1;
        if ( v12 - 1 > 0 )
          continue;
      }
      goto LABEL_7;
    }
  }
  return 0;
}
