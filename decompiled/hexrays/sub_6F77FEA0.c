int __cdecl sub_6F77FEA0(int a1, int a2)
{
  int v2; // esi@1
  _DWORD *v3; // edx@2
  int result; // eax@2
  _DWORD *v5; // edi@6
  unsigned int v6; // eax@7
  unsigned int v7; // edx@9
  int v8; // eax@9
  unsigned int v9; // eax@11
  unsigned int v10; // edx@13
  int v11; // eax@13
  unsigned int v12; // eax@15
  unsigned int v13; // edx@17
  int v14; // eax@17
  unsigned int v15; // eax@19
  unsigned int v16; // edx@21
  int v17; // eax@21
  unsigned int v18; // eax@23
  unsigned int v19; // edx@25
  int v20; // eax@25
  int v21; // edx@28
  int v22; // edx@30
  int v23; // edx@32
  int v24; // edx@34
  int v25; // edx@36
  int v26; // [sp+1Ch] [bp-10h]@1

  v26 = 0;
  v2 = *(_DWORD *)(a1 + 656);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD **)(v2 + 2960);
  result = 0;
  if ( v3 )
    goto LABEL_3;
  v5 = sub_6F773A50(*(_DWORD *)(a1 + 100), 32, &v26);
  result = v26;
  if ( !v26 )
  {
    v6 = *(_DWORD *)(v2 + 1324);
    if ( v6 == 0xFFFF )
      goto LABEL_45;
    if ( v6 > 0x186 )
    {
      v7 = v6 - 391;
      v8 = 0;
      if ( v7 < *(_DWORD *)(v2 + 1312) )
        v8 = *(_DWORD *)(*(_DWORD *)(v2 + 1316) + 4 * v7);
      goto LABEL_11;
    }
    v25 = *(_DWORD *)(v2 + 2956);
    if ( v25 )
      v8 = (*(int (__cdecl **)(_DWORD))(v25 + 20))(*(_DWORD *)(v2 + 1324));
    else
LABEL_45:
      v8 = 0;
LABEL_11:
    *v5 = v8;
    v9 = *(_DWORD *)(v2 + 1328);
    if ( v9 == 0xFFFF )
      goto LABEL_46;
    if ( v9 > 0x186 )
    {
      v10 = v9 - 391;
      v11 = 0;
      if ( v10 < *(_DWORD *)(v2 + 1312) )
        v11 = *(_DWORD *)(*(_DWORD *)(v2 + 1316) + 4 * v10);
      goto LABEL_15;
    }
    v24 = *(_DWORD *)(v2 + 2956);
    if ( v24 )
      v11 = (*(int (__cdecl **)(_DWORD))(v24 + 20))(*(_DWORD *)(v2 + 1328));
    else
LABEL_46:
      v11 = 0;
LABEL_15:
    v5[1] = v11;
    v12 = *(_DWORD *)(v2 + 1336);
    if ( v12 == 0xFFFF )
      goto LABEL_47;
    if ( v12 > 0x186 )
    {
      v13 = v12 - 391;
      v14 = 0;
      if ( v13 < *(_DWORD *)(v2 + 1312) )
        v14 = *(_DWORD *)(*(_DWORD *)(v2 + 1316) + 4 * v13);
      goto LABEL_19;
    }
    v23 = *(_DWORD *)(v2 + 2956);
    if ( v23 )
      v14 = (*(int (__cdecl **)(_DWORD))(v23 + 20))(*(_DWORD *)(v2 + 1336));
    else
LABEL_47:
      v14 = 0;
LABEL_19:
    v5[2] = v14;
    v15 = *(_DWORD *)(v2 + 1340);
    if ( v15 == 0xFFFF )
      goto LABEL_48;
    if ( v15 > 0x186 )
    {
      v16 = v15 - 391;
      v17 = 0;
      if ( v16 < *(_DWORD *)(v2 + 1312) )
        v17 = *(_DWORD *)(*(_DWORD *)(v2 + 1316) + 4 * v16);
      goto LABEL_23;
    }
    v22 = *(_DWORD *)(v2 + 2956);
    if ( v22 )
      v17 = (*(int (__cdecl **)(_DWORD))(v22 + 20))(*(_DWORD *)(v2 + 1340));
    else
LABEL_48:
      v17 = 0;
LABEL_23:
    v5[3] = v17;
    v18 = *(_DWORD *)(v2 + 1344);
    if ( v18 == 0xFFFF )
      goto LABEL_49;
    if ( v18 > 0x186 )
    {
      v19 = v18 - 391;
      v20 = 0;
      if ( v19 < *(_DWORD *)(v2 + 1312) )
        v20 = *(_DWORD *)(*(_DWORD *)(v2 + 1316) + 4 * v19);
      goto LABEL_27;
    }
    v21 = *(_DWORD *)(v2 + 2956);
    if ( v21 )
      v20 = (*(int (__cdecl **)(_DWORD))(v21 + 20))(*(_DWORD *)(v2 + 1344));
    else
LABEL_49:
      v20 = 0;
LABEL_27:
    v5[4] = v20;
    v3 = v5;
    v5[5] = *(_DWORD *)(v2 + 1352);
    *((_BYTE *)v5 + 24) = *(_BYTE *)(v2 + 1348);
    *((_WORD *)v5 + 13) = *(_DWORD *)(v2 + 1356);
    *((_WORD *)v5 + 14) = *(_DWORD *)(v2 + 1360);
    *(_DWORD *)(v2 + 2960) = v5;
    result = v26;
LABEL_3:
    *(_DWORD *)a2 = *v3;
    *(_DWORD *)(a2 + 4) = v3[1];
    *(_DWORD *)(a2 + 8) = v3[2];
    *(_DWORD *)(a2 + 12) = v3[3];
    *(_DWORD *)(a2 + 16) = v3[4];
    *(_DWORD *)(a2 + 20) = v3[5];
    *(_DWORD *)(a2 + 24) = v3[6];
    *(_DWORD *)(a2 + 28) = v3[7];
  }
  return result;
}
