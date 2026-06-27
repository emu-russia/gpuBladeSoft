_BYTE *__usercall sub_6F8B8700@<eax>(int a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>)
{
  char *v3; // ebp@1
  int v4; // edi@1
  int v5; // eax@1
  int v6; // ebx@1
  char v7; // dl@3
  _DWORD **v8; // esi@3
  char v9; // al@4
  int v10; // edx@4
  int v11; // edi@5
  int v12; // ecx@5
  int v13; // eax@6
  _BYTE *result; // eax@8
  int v15; // edi@8
  int v16; // ecx@8
  int v17; // edx@9
  char v18; // bp@11
  _DWORD **v19; // eax@11
  char *v20; // eax@11
  char *v21; // esi@11

  v3 = a2;
  v4 = a1;
  v5 = 0;
  v6 = a3;
  if ( v4 )
    v5 = sub_6F8A1BC0();
  *(_DWORD *)v6 = v5;
  v7 = *v3;
  v8 = (_DWORD **)(v3 + 1);
  if ( *v3 == -1 )
  {
    *(_DWORD *)(v6 + 4) = v5;
    v9 = *(_BYTE *)v8;
    v10 = (int)(v3 + 2);
    *(_BYTE *)(v6 + 20) = *(_BYTE *)v8;
    if ( v9 != -1 )
      goto LABEL_5;
LABEL_12:
    *(_DWORD *)(v6 + 12) = 0;
    goto LABEL_8;
  }
  v18 = *v3;
  v19 = (_DWORD **)sub_6F8B8850(v7);
  v20 = sub_6F8B8900(v18, v19, v8, (char **)(v6 + 4));
  v21 = v20;
  LOBYTE(v20) = *v20;
  v10 = (int)(v21 + 1);
  *(_BYTE *)(v6 + 20) = (_BYTE)v20;
  if ( (_BYTE)v20 == -1 )
    goto LABEL_12;
LABEL_5:
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = (*(_BYTE *)(++v10 - 1) & 0x7F) << v12;
    v12 += 7;
    v11 |= v13;
  }
  while ( *(_BYTE *)(v10 - 1) < 0 );
  *(_DWORD *)(v6 + 12) = v10 + v11;
LABEL_8:
  result = (_BYTE *)(v10 + 1);
  v15 = 0;
  v16 = 0;
  *(_BYTE *)(v6 + 21) = *(_BYTE *)v10;
  do
  {
    v17 = (*(++result - 1) & 0x7F) << v16;
    v16 += 7;
    v15 |= v17;
  }
  while ( *(result - 1) < 0 );
  *(_DWORD *)(v6 + 16) = &result[v15];
  return result;
}
