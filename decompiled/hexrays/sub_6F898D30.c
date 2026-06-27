int __usercall sub_6F898D30@<eax>(int a1@<eax>)
{
  int v1; // edi@1
  int v2; // eax@1
  char v3; // si@2
  char v4; // cl@3
  int v5; // edx@4
  char v6; // di@4
  int v7; // ecx@5
  char *v8; // ebp@5
  int v9; // ecx@5
  bool v10; // zf@5
  bool v11; // sf@5
  unsigned __int8 v12; // of@5
  int result; // eax@9
  int v14; // edx@12
  char v15; // al@16
  char v16; // bp@17
  int v17; // eax@18
  int v18; // edx@18
  int v19; // ecx@18
  int v20; // esi@23
  int v21; // ecx@23
  int v22; // [sp+18h] [bp-24h]@4
  int v23; // [sp+1Ch] [bp-20h]@4

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  if ( !*(_BYTE *)v2 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  *(_DWORD *)(v1 + 12) = v2 + 1;
  v3 = *(_BYTE *)v2;
  if ( !*(_BYTE *)(v2 + 1) )
  {
LABEL_3:
    v4 = 0;
LABEL_4:
    v23 = v1;
    v5 = 0;
    v6 = v4;
    v22 = 67;
    while ( 1 )
    {
      v7 = 16 * (v5 + (v22 - v5) / 2);
      v8 = (char *)&off_6FBA5560 + v7;
      v9 = *(int *)((char *)&off_6FBA5560 + v7);
      v12 = __OFSUB__(*(_BYTE *)v9, v3);
      v10 = *(_BYTE *)v9 == v3;
      v11 = (char)(*(_BYTE *)v9 - v3) < 0;
      if ( *(_BYTE *)v9 == v3 )
      {
        v12 = __OFSUB__(*(_BYTE *)(v9 + 1), v6);
        v10 = *(_BYTE *)(v9 + 1) == v6;
        v11 = (char)(*(_BYTE *)(v9 + 1) - v6) < 0;
        if ( *(_BYTE *)(v9 + 1) == v6 )
          break;
      }
      if ( (unsigned __int8)(v11 ^ v12) | v10 )
        v5 += (v22 - v5) / 2 + 1;
      else
        v22 = v5 + (v22 - v5) / 2;
      if ( v5 == v22 )
        return 0;
    }
    v14 = *(_DWORD *)(v23 + 20);
    if ( v14 < *(_DWORD *)(v23 + 24) )
    {
      result = *(_DWORD *)(v23 + 16) + 16 * *(_DWORD *)(v23 + 20);
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(v23 + 20) = v14 + 1;
      *(_DWORD *)result = 49;
      *(_DWORD *)(result + 8) = v8;
      return result;
    }
    return 0;
  }
  *(_DWORD *)(v1 + 12) = v2 + 2;
  v15 = *(_BYTE *)(v2 + 1);
  v4 = v15;
  if ( v3 == 118 )
  {
    v16 = v15;
    if ( (unsigned __int8)(v15 - 48) > 9u )
      goto LABEL_4;
    v17 = sub_6F896ED0(v1);
    v18 = *(_DWORD *)(v1 + 20);
    v19 = v17;
    if ( v18 >= *(_DWORD *)(v1 + 24) )
      return 0;
    result = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(v1 + 20) = v18 + 1;
    if ( !v19 )
      return 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)result = 50;
    *(_DWORD *)(result + 12) = v19;
    *(_DWORD *)(result + 8) = v16 - 48;
  }
  else
  {
    if ( v3 != 99 || v15 != 118 )
      goto LABEL_4;
    v20 = *(_DWORD *)(v1 + 52);
    *(_DWORD *)(v1 + 52) = *(_DWORD *)(v1 + 48) == 0;
    v21 = sub_6F898420(v1);
    if ( *(_DWORD *)(v1 + 52) )
      result = sub_6F896B60(v1, 52, v21, 0);
    else
      result = sub_6F896B60(v1, 51, v21, 0);
    *(_DWORD *)(v1 + 52) = v20;
  }
  return result;
}
