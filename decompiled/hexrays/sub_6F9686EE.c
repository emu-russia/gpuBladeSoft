char __usercall sub_6F9686EE@<al>(int a1@<eax>, int a2@<edx>, signed int a3@<ecx>)
{
  int v3; // edi@1
  int v4; // ebx@1
  signed int v5; // esi@1
  unsigned int v6; // eax@1
  signed int v7; // edx@5
  char result; // al@7
  int v9; // edx@9
  bool v10; // sf@9
  unsigned __int8 v11; // of@9
  signed int v12; // eax@10
  int v13; // eax@12
  signed int v14; // edx@15
  int v15; // eax@18
  char v16; // bp@23
  char v17; // al@23

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 100);
  if ( v6 == 1 )
  {
    v12 = *(_DWORD *)(v4 + 72);
    if ( a3 >= v12 )
      goto LABEL_21;
    if ( sub_6F967F5A(v4, ((*(_DWORD *)(v4 + 4) - 1) & v12) >= *(_DWORD *)(v4 + 8)) )
      return 1;
    v13 = *(_DWORD *)(v4 + 72) & (*(_DWORD *)(v4 + 4) - 1);
    v11 = __OFSUB__(v13, *(_DWORD *)(v4 + 8));
    v10 = v13 - *(_DWORD *)(v4 + 8) < 0;
    goto LABEL_13;
  }
  if ( v6 >= 1 )
  {
    if ( v6 != 2 )
      goto LABEL_18;
    v14 = *(_DWORD *)(v4 + 72);
    if ( a3 <= v14 )
      goto LABEL_23;
    if ( sub_6F967F5A(v4, ((v14 + *(_DWORD *)(v4 + 4) - 1) & -*(_DWORD *)(v4 + 4)) - v14 >= *(_DWORD *)(v4 + 8)) )
      return 1;
    v7 = *(_DWORD *)(v4 + 72);
    goto LABEL_6;
  }
  v7 = *(_DWORD *)(v4 + 72);
  if ( v7 >= a3 )
  {
    if ( v7 <= a3 )
      goto LABEL_27;
    v9 = (*(_DWORD *)(v4 + 4) - 1) & v7;
    v11 = __OFSUB__(v9, *(_DWORD *)(v4 + 8));
    v10 = v9 - *(_DWORD *)(v4 + 8) < 0;
LABEL_13:
    if ( sub_6F967E9C(v4, 2, !(v10 ^ v11)) )
      return 1;
    goto LABEL_18;
  }
LABEL_6:
  if ( sub_6F967E9C(v4, 1, ((v7 + *(_DWORD *)(v4 + 4) - 1) & -*(_DWORD *)(v4 + 4)) - v7 >= *(_DWORD *)(v4 + 8)) )
    return 1;
LABEL_18:
  v15 = *(_DWORD *)(v4 + 100);
  if ( v15 == 1 )
  {
LABEL_21:
    if ( sub_6F968544(
           v4,
           *(_DWORD *)(v4 + 68),
           *(_DWORD *)(v4 + 72),
           v3,
           v5,
           *(_DWORD *)(v4 + 76),
           *(_DWORD *)(v4 + 80)) )
    {
      return 1;
    }
    goto LABEL_27;
  }
  if ( v15 == 2 )
  {
LABEL_23:
    v16 = *(_BYTE *)(v4 + 86);
    v17 = sub_6F968544(
            v4,
            *(_DWORD *)(v4 + 68),
            -*(_DWORD *)(v4 + 72),
            v3,
            -v5,
            -*(_DWORD *)(v4 + 80),
            -*(_DWORD *)(v4 + 76));
    if ( v16 )
    {
      if ( !*(_BYTE *)(v4 + 86) )
        *(_DWORD *)(*(_DWORD *)(v4 + 88) + 20) = -*(_DWORD *)(*(_DWORD *)(v4 + 88) + 20);
    }
    if ( !v17 )
      goto LABEL_27;
    return 1;
  }
LABEL_27:
  *(_DWORD *)(v4 + 68) = v3;
  result = 0;
  *(_DWORD *)(v4 + 72) = v5;
  return result;
}
