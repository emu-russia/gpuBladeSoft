_BYTE *__cdecl sub_6F959760(_BYTE *a1, char a2, char *a3, int a4, _BYTE *a5, _BYTE *a6)
{
  unsigned int v6; // ebx@1
  _BYTE *v7; // edx@1
  int v8; // eax@1
  char v9; // bp@1
  _BYTE *v10; // esi@7
  _BYTE *v11; // edi@7
  _BYTE *result; // eax@9
  _BYTE *v13; // ebp@11
  char v14; // al@11
  _BYTE *v15; // esi@12
  _BYTE *v16; // edi@12
  int v17; // eax@14
  _BYTE *v18; // ebp@16
  char v19; // al@16
  _BYTE *v20; // esi@17
  _BYTE *v21; // edi@17
  int v22; // eax@19
  int v23; // [sp+0h] [bp-18h]@1

  v6 = 0;
  v23 = 0;
  v7 = a6;
  v8 = *a3;
  v9 = *a3;
LABEL_2:
  if ( v7 - a5 > v8 )
  {
    while ( (unsigned __int8)(v9 - 1) <= 0x7Du )
    {
      v7 -= v8;
      if ( a4 - 1 <= v6 )
      {
        ++v23;
        goto LABEL_2;
      }
      v9 = a3[++v6];
      v8 = a3[v6];
      if ( v7 - a5 <= v8 )
        break;
    }
  }
  if ( v7 == a5 )
  {
    result = a1;
  }
  else
  {
    v10 = a5;
    v11 = a1;
    do
      *v11++ = *v10++;
    while ( v7 != v10 );
    result = &a1[v7 - a5];
  }
  while ( --v23 != -1 )
  {
    while ( 1 )
    {
      v13 = result + 1;
      *result = a2;
      v14 = a3[v6];
      if ( v14 <= 0 )
        break;
      v15 = v7;
      v16 = v13;
      do
        *v16++ = *v15++;
      while ( v15 != &v7[(unsigned __int8)(v14 - 1) + 1] );
      --v23;
      v17 = (char)(v14 - 1) + 1;
      v7 += v17;
      result = &v13[v17];
      if ( v23 == -1 )
        goto LABEL_15;
    }
    result = v13;
  }
LABEL_15:
  while ( --v6 != -1 )
  {
    while ( 1 )
    {
      v18 = result + 1;
      *result = a2;
      v19 = a3[v6];
      if ( v19 <= 0 )
        break;
      v20 = v7;
      v21 = v18;
      do
        *v21++ = *v20++;
      while ( v20 != &v7[(unsigned __int8)(v19 - 1) + 1] );
      --v6;
      v22 = (char)(v19 - 1) + 1;
      v7 += v22;
      result = &v18[v22];
      if ( v6 == -1 )
        return result;
    }
    result = v18;
  }
  return result;
}
