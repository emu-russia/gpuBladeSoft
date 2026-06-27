signed int __cdecl sub_6F75A7B0(int a1, _BYTE *a2, int a3)
{
  int *v3; // eax@2
  _BYTE *v4; // edx@3
  _BYTE *v5; // ebp@3
  int v6; // esi@4
  int v7; // ecx@4
  int v8; // ebx@4
  int v10; // esi@9
  int v11; // ecx@9
  int v12; // ebx@9
  int v13; // edi@12
  int v14; // esi@12
  int v15; // ebx@12

  if ( a3 > 0 )
  {
    v3 = &dword_70259320[7 * a1];
    if ( v3[2] >= v3[1] )
      goto LABEL_7;
    v4 = a2;
    v5 = &a2[a3 - 1];
    if ( ((_BYTE)a2 + (_BYTE)a3 - 1 - (_BYTE)a2) & 1 )
    {
      *(_BYTE *)(*v3 + v3[3]) = *a2;
      v6 = v3[1];
      v7 = v3[2];
      v8 = v3[3] + 1;
      v5 = &a2[a3 - 1];
      if ( v8 >= v6 )
        v8 = v3[3] + 1 - v6;
      v4 = a2 + 1;
      v3[3] = v8;
      v3[2] = v7 + 1;
      if ( v6 <= v7 + 1 )
      {
LABEL_7:
        dword_70259334[7 * a1] = 1;
        return -1;
      }
    }
    while ( 1 )
    {
      *(_BYTE *)(*v3 + v3[3]) = *v4;
      v13 = v3[1];
      v14 = v3[2];
      v15 = v3[3] + 1;
      if ( v15 >= v13 )
        v15 = v3[3] + 1 - v13;
      v3[2] = v14 + 1;
      v3[3] = v15;
      if ( v5 == v4 )
        break;
      if ( v13 > v14 + 1 )
      {
        *(_BYTE *)(*v3 + v15) = v4[1];
        v10 = v3[1];
        v11 = v3[3] + 1;
        v12 = v3[2];
        if ( v11 >= v10 )
          v11 = v3[3] + 1 - v10;
        v4 += 2;
        v3[3] = v11;
        v3[2] = v12 + 1;
        if ( v10 > v12 + 1 )
          continue;
      }
      goto LABEL_7;
    }
  }
  return 0;
}
