int *__cdecl sub_6F75E7F0(__int16 a1)
{
  int *v2; // ebx@11
  int v3; // esi@12
  int v4; // edx@12
  unsigned int v5; // esi@12
  unsigned int v6; // ecx@13
  int v7; // edx@13
  int v8; // ebx@17
  int *v9; // ebx@18
  int v10; // esi@19
  int v11; // edx@19
  unsigned int v12; // esi@19
  unsigned int v13; // ecx@20
  int v14; // edx@20
  int v15; // ebx@24
  int *v16; // ebx@25
  int v17; // esi@26
  int v18; // edx@26
  unsigned int v19; // esi@26
  unsigned int v20; // ecx@27
  int v21; // edx@27
  int v22; // ebx@31
  int *v23; // ebx@32
  int v24; // esi@33
  int v25; // edx@33
  unsigned int v26; // esi@33
  unsigned int v27; // ecx@34
  int v28; // edx@34
  int v29; // ebx@38
  int *v30; // ebx@39
  int v31; // ecx@40
  int v32; // edx@40
  unsigned int v33; // esi@40
  unsigned int v34; // ecx@41
  int v35; // edx@41
  int v36; // ebx@45
  int *v37; // ebx@46
  int v38; // esi@47
  int v39; // edx@47
  unsigned int v40; // esi@47
  unsigned int v41; // ecx@48
  int v42; // edx@48
  int v43; // ebx@52
  int *v44; // ebx@53
  int v45; // esi@54
  int v46; // edx@54
  unsigned int v47; // esi@54
  unsigned int v48; // ecx@55
  int v49; // edx@55
  int v50; // ebx@59

  LOBYTE(dword_7025A360) = 0;
  if ( HIBYTE(a1) & 1 )
  {
    dword_7025A360 = 1718184019;
    dword_7025A364 = 1699503988;
    LOWORD(dword_7025A368) = 29798;
    *(int *)((char *)&dword_7025A368 + 2) = 2108192;
    if ( !(HIBYTE(a1) & 2) )
    {
LABEL_3:
      if ( !(HIBYTE(a1) & 4) )
        goto LABEL_4;
      goto LABEL_18;
    }
  }
  else if ( !(HIBYTE(a1) & 2) )
  {
    goto LABEL_3;
  }
  v2 = &dword_7025A360;
  do
  {
    v3 = *v2;
    ++v2;
    v4 = ~v3 & (v3 - 16843009);
    v5 = v4 & 0x80808080;
  }
  while ( !(v4 & 0x80808080) );
  v6 = v5 >> 16;
  v7 = v4 & 0x8080;
  if ( v7 )
    LOBYTE(v6) = v5;
  if ( !v7 )
    v2 = (int *)((char *)v2 + 2);
  v8 = (char *)v2 - ((char *)&dword_7025A360 + __CFADD__((_BYTE)v6, (_BYTE)v6) + 3);
  *(int *)((char *)&dword_7025A368 + v8) = 7628903;
  *(int *)((char *)&dword_7025A360 + v8) = 1718184019;
  *(int *)((char *)&dword_7025A364 + v8) = 1767006068;
  *(int *)((char *)&dword_7025A368 + v8 + 3) = 2108192;
  if ( !(HIBYTE(a1) & 4) )
  {
LABEL_4:
    if ( !(HIBYTE(a1) & 8) )
      goto LABEL_5;
    goto LABEL_25;
  }
LABEL_18:
  v9 = &dword_7025A360;
  do
  {
    v10 = *v9;
    ++v9;
    v11 = ~v10 & (v10 - 16843009);
    v12 = v11 & 0x80808080;
  }
  while ( !(v11 & 0x80808080) );
  v13 = v12 >> 16;
  v14 = v11 & 0x8080;
  if ( v14 )
    LOBYTE(v13) = v12;
  if ( !v14 )
    v9 = (int *)((char *)v9 + 2);
  v15 = (char *)v9 - ((char *)&dword_7025A360 + __CFADD__((_BYTE)v13, (_BYTE)v13) + 3);
  *(int *)((char *)&dword_7025A360 + v15) = 1953394499;
  *(int *)((char *)&dword_7025A364 + v15) = 1600941938;
  *(int *)((char *)&dword_7025A368 + v15) = 1952867660;
  *(int *)((char *)&dword_7025A36C + v15) = 2108192;
  if ( !(HIBYTE(a1) & 8) )
  {
LABEL_5:
    if ( !(HIBYTE(a1) & 0x10) )
      goto LABEL_6;
    goto LABEL_32;
  }
LABEL_25:
  v16 = &dword_7025A360;
  do
  {
    v17 = *v16;
    ++v16;
    v18 = ~v17 & (v17 - 16843009);
    v19 = v18 & 0x80808080;
  }
  while ( !(v18 & 0x80808080) );
  v20 = v19 >> 16;
  v21 = v18 & 0x8080;
  if ( v21 )
    LOBYTE(v20) = v19;
  if ( !v21 )
    v16 = (int *)((char *)v16 + 2);
  v22 = (char *)v16 - ((char *)&dword_7025A360 + __CFADD__((_BYTE)v20, (_BYTE)v20) + 3);
  *(int *)((char *)&dword_7025A360 + v22) = 1953394499;
  *(int *)((char *)&dword_7025A364 + v22) = 1600941938;
  *(int *)((char *)&dword_7025A368 + v22) = 1751607634;
  *((_BYTE *)&dword_7025A36C + v22) = 116;
  *(int *)((char *)&dword_7025A36C + v22 + 1) = 2108192;
  if ( !(HIBYTE(a1) & 0x10) )
  {
LABEL_6:
    if ( !(HIBYTE(a1) & 0x20) )
      goto LABEL_7;
    goto LABEL_39;
  }
LABEL_32:
  v23 = &dword_7025A360;
  do
  {
    v24 = *v23;
    ++v23;
    v25 = ~v24 & (v24 - 16843009);
    v26 = v25 & 0x80808080;
  }
  while ( !(v25 & 0x80808080) );
  v27 = v26 >> 16;
  v28 = v25 & 0x8080;
  if ( v28 )
    LOBYTE(v27) = v26;
  if ( !v28 )
    v23 = (int *)((char *)v23 + 2);
  v29 = (char *)v23 - ((char *)&dword_7025A360 + __CFADD__((_BYTE)v27, (_BYTE)v27) + 3);
  *(int *)((char *)&dword_7025A360 + v29) = 1701868883;
  *(int *)((char *)&dword_7025A364 + v29) = 1699503986;
  *(_WORD *)((char *)&dword_7025A368 + v29) = 29798;
  *(int *)((char *)&dword_7025A368 + v29 + 2) = 2108192;
  if ( !(HIBYTE(a1) & 0x20) )
  {
LABEL_7:
    if ( !(HIBYTE(a1) & 0x40) )
      goto LABEL_8;
    goto LABEL_46;
  }
LABEL_39:
  v30 = &dword_7025A360;
  do
  {
    v31 = *v30;
    ++v30;
    v32 = ~v31 & (v31 - 16843009);
    v33 = v32 & 0x80808080;
  }
  while ( !(v32 & 0x80808080) );
  v34 = v33 >> 16;
  v35 = v32 & 0x8080;
  if ( v35 )
    LOBYTE(v34) = v33;
  if ( !v35 )
    v30 = (int *)((char *)v30 + 2);
  v36 = (char *)v30 - ((char *)&dword_7025A360 + __CFADD__((_BYTE)v34, (_BYTE)v34) + 3);
  *(int *)((char *)&dword_7025A368 + v36) = 7628903;
  *(int *)((char *)&dword_7025A360 + v36) = 1701868883;
  *(int *)((char *)&dword_7025A364 + v36) = 1767006066;
  *(int *)((char *)&dword_7025A368 + v36 + 3) = 2108192;
  if ( !(HIBYTE(a1) & 0x40) )
  {
LABEL_8:
    if ( !(HIBYTE(a1) & 0x80) )
      goto LABEL_9;
    goto LABEL_53;
  }
LABEL_46:
  v37 = &dword_7025A360;
  do
  {
    v38 = *v37;
    ++v37;
    v39 = ~v38 & (v38 - 16843009);
    v40 = v39 & 0x80808080;
  }
  while ( !(v39 & 0x80808080) );
  v41 = v40 >> 16;
  v42 = v39 & 0x8080;
  if ( v42 )
    LOBYTE(v41) = v40;
  if ( !v42 )
    v37 = (int *)((char *)v37 + 2);
  v43 = (char *)v37 - ((char *)&dword_7025A360 + __CFADD__((_BYTE)v41, (_BYTE)v41) + 3);
  *(int *)((char *)&dword_7025A360 + v43) = 1601465409;
  *(int *)((char *)&dword_7025A364 + v43) = 1952867660;
  *(int *)((char *)&dword_7025A368 + v43) = 2108192;
  if ( HIBYTE(a1) & 0x80 )
  {
LABEL_53:
    v44 = &dword_7025A360;
    do
    {
      v45 = *v44;
      ++v44;
      v46 = ~v45 & (v45 - 16843009);
      v47 = v46 & 0x80808080;
    }
    while ( !(v46 & 0x80808080) );
    v48 = v47 >> 16;
    v49 = v46 & 0x8080;
    if ( v49 )
      LOBYTE(v48) = v47;
    if ( !v49 )
      v44 = (int *)((char *)v44 + 2);
    v50 = (char *)v44 - ((char *)&dword_7025A360 + __CFADD__((_BYTE)v48, (_BYTE)v48) + 3);
    *(int *)((char *)&dword_7025A360 + v50) = 1601465409;
    *(int *)((char *)&dword_7025A364 + v50) = 1751607634;
    *((_BYTE *)&dword_7025A368 + v50) = 116;
    *(int *)((char *)&dword_7025A368 + v50 + 1) = 2108192;
  }
LABEL_9:
  strcat((char *)&dword_7025A360, off_6FB54A20[(unsigned __int8)a1]);
  return &dword_7025A360;
}
