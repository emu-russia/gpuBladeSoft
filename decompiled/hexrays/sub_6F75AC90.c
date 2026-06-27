char __usercall sub_6F75AC90@<al>(int a1@<eax>)
{
  int v1; // edi@1
  int v2; // eax@1
  int v3; // edx@1
  int v4; // ebx@5
  unsigned int v5; // esi@5
  int *v6; // ecx@6
  int v7; // ebp@7
  int v8; // eax@7
  unsigned int v9; // ebp@7
  unsigned int v10; // edx@8
  bool v11; // zf@8
  int v12; // eax@8
  int v13; // edx@11
  int *v14; // eax@16
  int *v15; // ecx@16
  int v16; // ebp@17
  int v17; // eax@17
  unsigned int v18; // ebp@17
  unsigned int v19; // edx@18
  const char *v20; // eax@23
  int v21; // edx@24
  const char *v22; // eax@26
  int v23; // edx@27
  int *v24; // ebp@29
  const char *v25; // eax@29
  int v26; // ebx@30
  unsigned int v27; // ecx@30
  unsigned int v28; // edx@31
  bool v29; // zf@31
  int *v30; // eax@36
  int v31; // esi@37
  const char *v32; // eax@39
  int v33; // edx@40
  char v35; // [sp+10h] [bp-3Ch]@16

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 8);
  v3 = v2 & 0xF0;
  if ( v3 == 32 )
  {
    v24 = &dword_7025A120;
    sub_6F8B7410((int)&dword_7025A120, "Ms%i(", v2 & 0xF);
    v25 = (const char *)sub_6F75FD40(*(_DWORD *)v1);
    strcat((char *)&dword_7025A120, v25);
    do
    {
      v26 = *v24;
      ++v24;
      v2 = ~v26 & (v26 - 16843009);
      v27 = v2 & 0x80808080;
    }
    while ( !(v2 & 0x80808080) );
  }
  else if ( v3 == 48 )
  {
    v24 = &dword_7025A120;
    sub_6F8B7410((int)&dword_7025A120, "Js%i(", v2 & 0xF);
    v32 = (const char *)sub_6F7628A0(*(_DWORD *)v1);
    strcat((char *)&dword_7025A120, v32);
    do
    {
      v33 = *v24;
      ++v24;
      v2 = ~v33 & (v33 - 16843009);
      v27 = v2 & 0x80808080;
    }
    while ( !(v2 & 0x80808080) );
  }
  else
  {
    if ( v3 != 16 )
      goto LABEL_4;
    v24 = &dword_7025A120;
    sub_6F8B7410((int)&dword_7025A120, "Kb%i(", v2 & 0xF);
    v30 = sub_6F75E7F0(*(_DWORD *)v1);
    strcat((char *)&dword_7025A120, (const char *)v30);
    do
    {
      v31 = *v24;
      ++v24;
      v2 = ~v31 & (v31 - 16843009);
      v27 = v2 & 0x80808080;
    }
    while ( !(v2 & 0x80808080) );
  }
  v28 = v27 >> 16;
  v29 = (unsigned __int16)(v2 & 0x8080) == 0;
  LOBYTE(v2) = (_BYTE)v24 + 2;
  if ( !v29 )
    LOBYTE(v28) = v27;
  if ( v29 )
    v24 = (int *)((char *)v24 + 2);
  *(_WORD *)((char *)&dword_7025A120 + (char *)v24 - ((char *)&dword_7025A120 + __CFADD__((_BYTE)v28, (_BYTE)v28) + 3)) = 41;
LABEL_4:
  if ( *(_DWORD *)(v1 + 36) > 1u )
  {
    v4 = v1 + 12;
    v5 = 1;
    while ( 1 )
    {
      v6 = &dword_7025A120;
      do
      {
        v7 = *v6;
        ++v6;
        v8 = ~v7 & (v7 - 16843009);
        v9 = v8 & 0x80808080;
      }
      while ( !(v8 & 0x80808080) );
      v10 = v9 >> 16;
      v11 = (unsigned __int16)(v8 & 0x8080) == 0;
      v12 = (int)v6 + 2;
      if ( !v11 )
      {
        LOBYTE(v10) = v9;
        if ( !v11 )
          v12 = (int)v6;
      }
      v2 = v12 - ((_DWORD)&dword_7025A120 + __CFADD__((_BYTE)v10, (_BYTE)v10) + 3);
      *(int *)((char *)&dword_7025A120 + v2) = 2108192;
      v13 = *(_DWORD *)(v4 + 8) & 0xF0;
      if ( v13 == 32 )
      {
        sub_6F8B7410((int)&v35, "Ms%i(", *(_DWORD *)(v4 + 8) & 0xF);
        strcat((char *)&dword_7025A120, &v35);
        v22 = (const char *)sub_6F75FD40(*(_DWORD *)v4);
        strcat((char *)&dword_7025A120, v22);
        v15 = &dword_7025A120;
        do
        {
          v23 = *v15;
          ++v15;
          v17 = ~v23 & (v23 - 16843009);
          v18 = v17 & 0x80808080;
        }
        while ( !(v17 & 0x80808080) );
        goto LABEL_18;
      }
      if ( v13 == 48 )
        break;
      if ( v13 == 16 )
      {
        sub_6F8B7410((int)&v35, "Kb%i(", *(_DWORD *)(v4 + 8) & 0xF);
        strcat((char *)&dword_7025A120, &v35);
        v14 = sub_6F75E7F0(*(_DWORD *)v4);
        strcat((char *)&dword_7025A120, (const char *)v14);
        v15 = &dword_7025A120;
        do
        {
          v16 = *v15;
          ++v15;
          v17 = ~v16 & (v16 - 16843009);
          v18 = v17 & 0x80808080;
        }
        while ( !(v17 & 0x80808080) );
LABEL_18:
        v19 = v18 >> 16;
        if ( v17 & 0x8080 )
          LOBYTE(v19) = v18;
        if ( !(v17 & 0x8080) )
          v15 = (int *)((char *)v15 + 2);
        LOBYTE(v2) = 2 * v19;
        *(_WORD *)((char *)&dword_7025A120
                 + (char *)v15
                 - ((char *)&dword_7025A120
                  + __CFADD__((_BYTE)v19, (_BYTE)v19)
                  + 3)) = 41;
      }
      ++v5;
      v4 += 12;
      if ( *(_DWORD *)(v1 + 36) <= v5 )
        return v2;
    }
    sub_6F8B7410((int)&v35, "Js%i(", *(_DWORD *)(v4 + 8) & 0xF);
    strcat((char *)&dword_7025A120, &v35);
    v20 = (const char *)sub_6F7628A0(*(_DWORD *)v4);
    strcat((char *)&dword_7025A120, v20);
    v15 = &dword_7025A120;
    do
    {
      v21 = *v15;
      ++v15;
      v17 = ~v21 & (v21 - 16843009);
      v18 = v17 & 0x80808080;
    }
    while ( !(v17 & 0x80808080) );
    goto LABEL_18;
  }
  return v2;
}
