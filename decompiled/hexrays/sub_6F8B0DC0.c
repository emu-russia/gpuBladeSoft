int *__cdecl sub_6F8B0DC0(int a1, int a2)
{
  int v2; // esi@1
  int v3; // ebx@1
  int v4; // eax@1
  int v5; // edi@1
  int v6; // edx@2
  _DWORD *v7; // eax@2
  _DWORD *v8; // edx@2
  int *v9; // eax@6
  int *v10; // ecx@6
  int v11; // eax@7
  int v12; // ebp@7
  unsigned int v13; // esi@7
  unsigned int v14; // ebp@7
  unsigned __int64 v15; // rcx@9
  int v16; // edx@9
  int v17; // ebx@9
  unsigned int v18; // eax@11
  int v19; // ecx@12
  int v20; // eax@15
  int *result; // eax@19
  unsigned int v22; // [sp+18h] [bp-44h]@7
  char *i; // [sp+24h] [bp-38h]@7
  unsigned int v24; // [sp+30h] [bp-2Ch]@7
  int *v25; // [sp+34h] [bp-28h]@6
  int v26; // [sp+38h] [bp-24h]@7
  unsigned int v27; // [sp+3Ch] [bp-20h]@7

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a1 + 16) - v4;
  if ( *(_DWORD *)(a1 + 16) == v4 )
  {
    v6 = 4 * v4;
    v7 = (_DWORD *)(a1 + 20 + 4 * v4);
    v8 = (_DWORD *)(a2 + v6 + 20);
    do
    {
      --v8;
      --v7;
      if ( *v7 != *v8 )
      {
        if ( *v7 < *v8 )
          goto LABEL_21;
        goto LABEL_6;
      }
    }
    while ( a1 + 20 < (unsigned int)v7 );
    v25 = sub_6F8B0700(0);
    if ( !v25 )
      goto LABEL_19;
    v25[4] = 1;
    v25[5] = 0;
    result = v25;
  }
  else
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 16) - v4 < 0 )
    {
LABEL_21:
      v5 = 1;
      v2 = a2;
      v3 = a1;
    }
LABEL_6:
    v9 = sub_6F8B0700(*(_DWORD *)(v2 + 4));
    v10 = v9;
    v25 = v9;
    if ( v9 )
    {
      v9[3] = v5;
      v11 = *(_DWORD *)(v2 + 16);
      v12 = v2 + 20;
      v22 = v12;
      v13 = 0;
      v26 = v11;
      v27 = v12 + 4 * v11;
      v14 = v3 + 20;
      v24 = v3 + 20 + 4 * *(_DWORD *)(v3 + 16);
      for ( i = (char *)(v10 + 5); ; i += 4 )
      {
        v22 += 4;
        v14 += 4;
        v15 = *(_DWORD *)(v22 - 4) - (unsigned __int64)v13 - *(_DWORD *)(v14 - 4);
        v13 = BYTE4(v15) & 1;
        v16 = (int)(i + 4);
        v17 = v15;
        *(_DWORD *)i = v15;
        if ( v24 <= v14 )
          break;
      }
      if ( v27 > v22 )
      {
        v18 = v22;
        do
        {
          v18 += 4;
          v19 = *(_DWORD *)(v18 - 4) - v13;
          v16 += 4;
          v13 = ((*(_DWORD *)(v18 - 4) - (unsigned __int64)v13) >> 32) & 1;
          v17 = v19;
          *(_DWORD *)(v16 - 4) = v19;
        }
        while ( v27 > v18 );
        i += ((v27 - 1 - v22) & 0xFFFFFFFC) + 4;
      }
      if ( !v17 )
      {
        v20 = v26;
        do
          --v20;
        while ( !*((_DWORD *)&i[4 * v20] - v26) );
        v26 = v20;
      }
      v25[4] = v26;
    }
LABEL_19:
    result = v25;
  }
  return result;
}
