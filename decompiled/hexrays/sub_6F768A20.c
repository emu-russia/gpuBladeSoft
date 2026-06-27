signed int __usercall sub_6F768A20@<eax>(int a1@<eax>, int **a2@<edx>)
{
  unsigned int v2; // ecx@1
  int v3; // edi@1
  unsigned int v4; // esi@1
  int **v6; // ebx@7
  int *v7; // esi@9
  int v8; // ebp@9
  int *v9; // edi@9
  int v10; // eax@12
  int v11; // eax@13
  int v12; // edx@13
  int v13; // ST1C_4@15
  int v14; // eax@15
  int v15; // edx@18
  void (__cdecl *v16)(int **); // eax@23
  int v17; // ST2C_4@29
  int v18; // [sp+20h] [bp-2Ch]@13

  v2 = a1 + 20;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = a1 + 20 + 4 * v3;
  if ( a1 + 20 >= v4 )
    return 34;
  if ( a2 != *(int ***)(a1 + 20) )
  {
    do
    {
      v2 += 4;
      if ( v4 <= v2 )
        return 34;
    }
    while ( *(int ***)v2 != a2 );
  }
  v6 = a2;
  *(_DWORD *)(a1 + 16) = v3 - 1;
  if ( v2 < v4 - 4 )
    memmove((void *)v2, (const void *)(v2 + 4), 4 * ((v4 - 5 - v2) >> 2) + 4);
  *(_DWORD *)(v4 - 4) = 0;
  v7 = v6[1];
  v8 = (int)v6[2];
  v9 = *v6;
  if ( v7 )
  {
    if ( v6 == (int **)v7[40] )
      v7[40] = 0;
    v10 = *v9;
    if ( *v9 & 2 )
    {
      v18 = *v7;
      v11 = sub_6F773F40(v7 + 37, (int)v6);
      v12 = (int)(v7 + 37);
      if ( v11 )
      {
        if ( (_UNKNOWN *)v6[3][9] == &loc_6F75746C && v6[13] )
        {
          v17 = v11;
          (*(void (__cdecl **)(int *))(v6[3][14] + 20))(v6[13]);
          v11 = v17;
          v12 = (int)(v7 + 37);
        }
        v13 = v11;
        sub_6F773FF0(v12, v11);
        sub_6F773D90(v18, v13);
        v14 = v7[37];
        if ( v14 )
        {
          while ( 1 )
          {
            v15 = *(_DWORD *)(v14 + 8);
            if ( *(_UNKNOWN **)(v15 + 16) == &loc_6F75746C )
              break;
            v14 = *(_DWORD *)(v14 + 4);
            if ( !v14 )
              goto LABEL_27;
          }
        }
        else
        {
LABEL_27:
          v15 = 0;
        }
        v7[39] = v15;
      }
      v10 = **v6;
    }
  }
  else
  {
    v10 = *v9;
  }
  if ( v10 & 1 )
    sub_6F7740D0(v6 + 4, (void (__cdecl *)(int, _DWORD, int))sub_6F768C90, (int)v6[2], (int)v6);
  v16 = (void (__cdecl *)(int **))v9[7];
  if ( v16 )
    v16(v6);
  sub_6F773D90(v8, (int)v6);
  return 0;
}
