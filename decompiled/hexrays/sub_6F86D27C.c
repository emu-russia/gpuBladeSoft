int __usercall sub_6F86D27C@<eax>(char *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edx@1
  int v4; // eax@1
  signed int v5; // edi@4
  signed int v6; // eax@4
  signed int v7; // ecx@5
  signed int v8; // edi@9
  signed int v9; // ecx@10
  _DWORD *v10; // eax@16
  signed int v11; // edi@16
  int v12; // eax@16
  int i; // eax@20
  int v14; // edi@23
  char *v15; // ecx@23
  int v16; // eax@26
  int v17; // edx@28
  int v18; // ST1C_4@28
  char *v19; // ST18_4@28
  signed int v20; // edx@29
  signed int v21; // eax@32
  char v22; // dl@36
  signed int j; // eax@36
  int v24; // ecx@38
  signed int v25; // edx@38
  int v26; // eax@39
  int result; // eax@44
  char *v28; // [sp+20h] [bp-858h]@1
  int v29; // [sp+24h] [bp-854h]@1
  int v30; // [sp+28h] [bp-850h]@9
  signed int v31; // [sp+2Ch] [bp-84Ch]@4
  int v32[257]; // [sp+34h] [bp-844h]@2
  int v33[257]; // [sp+438h] [bp-440h]@1
  char v34; // [sp+83Fh] [bp-39h]@1
  char v35[15]; // [sp+840h] [bp-38h]@34
  char v36; // [sp+84Fh] [bp-29h]@36

  v28 = a1;
  v29 = a2;
  v3 = a3;
  memset(&v34, 0, 0x21u);
  memset(v33, 0, sizeof(v33));
  v4 = 0;
  do
    v32[v4++] = -1;
  while ( v4 != 257 );
  *(_DWORD *)(a3 + 1024) = 1;
  while ( 1 )
  {
    v5 = 1000000000;
    v6 = 0;
    v31 = -1;
    do
    {
      v7 = *(_DWORD *)(v3 + 4 * v6);
      if ( v7 && v7 <= v5 )
      {
        v5 = *(_DWORD *)(v3 + 4 * v6);
        v31 = v6;
      }
      ++v6;
    }
    while ( v6 != 257 );
    v8 = 1000000000;
    LOWORD(v6) = 0;
    v30 = -1;
    do
    {
      v9 = *(_DWORD *)(v3 + 4 * v6);
      if ( v9 && v8 >= v9 && v31 != v6 )
      {
        v8 = *(_DWORD *)(v3 + 4 * v6);
        v30 = v6;
      }
      ++v6;
    }
    while ( v6 != 257 );
    if ( v30 < 0 )
      break;
    v10 = (_DWORD *)(v3 + 4 * v30);
    v11 = v31;
    *(_DWORD *)(v3 + 4 * v11) += *v10;
    *v10 = 0;
    ++v33[v11];
    v12 = v32[v31];
    if ( v12 >= 0 )
    {
      while ( 1 )
      {
        ++v33[v12];
        if ( v32[v12] < 0 )
          break;
        v12 = v32[v12];
      }
    }
    else
    {
      v12 = v31;
    }
    v32[v12] = v30;
    ++v33[v30];
    for ( i = v32[v30]; i >= 0; i = v32[i] )
      ++v33[i];
  }
  v14 = 0;
  v15 = v28;
  do
  {
    v16 = v33[v14];
    if ( v16 )
    {
      if ( v16 > 32 )
      {
        v17 = *(_DWORD *)v15;
        *(_DWORD *)(v17 + 20) = 40;
        v18 = v16;
        v19 = v15;
        (*(void (__cdecl **)(char *))v17)(v15);
        v15 = v19;
        v16 = v18;
      }
      ++*(&v34 + v16);
    }
    ++v14;
  }
  while ( v14 != 257 );
  v20 = 30;
  do
  {
    for ( LOBYTE(v15) = *(&v34 + v20 + 2); (_BYTE)v15; LOBYTE(v15) = *(&v34 + v20 + 2) )
    {
      if ( *(&v34 + v20) )
      {
        v21 = v20;
      }
      else
      {
        v21 = v20;
        do
          --v21;
        while ( !*(&v34 + v21) );
      }
      v15 -= 2;
      *(&v34 + v20 + 2) = (char)v15;
      ++*(&v34 + v20 + 1);
      v35[v21] += 2;
      --*(&v34 + v21);
    }
    --v20;
  }
  while ( v20 != 14 );
  v22 = v36;
  for ( j = 16; !v22; v22 = *(&v34 + j) )
    --j;
  *(&v34 + j) = v22 - 1;
  qmemcpy((void *)v29, &v34, 0x11u);
  v24 = 0;
  v25 = 1;
  do
  {
    v26 = 0;
    do
    {
      while ( v33[v26] != v25 )
      {
        if ( ++v26 == 256 )
          goto LABEL_43;
      }
      *(_BYTE *)(v29 + v24++ + 17) = v26++;
    }
    while ( v26 != 256 );
LABEL_43:
    ++v25;
  }
  while ( v25 != 33 );
  result = v29;
  *(_BYTE *)(v29 + 273) = 0;
  return result;
}
