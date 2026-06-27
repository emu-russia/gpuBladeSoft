int __usercall sub_6F8AC740@<eax>(int a1@<eax>, unsigned int a2@<edx>, unsigned int a3@<ecx>, int a4)
{
  unsigned __int64 v4; // rdi@1
  int v5; // ecx@2
  int v6; // ecx@4
  int v7; // eax@5
  unsigned int v8; // eax@7
  char v9; // cl@7
  void *v10; // esp@7
  _BYTE *v11; // ebx@9
  unsigned __int8 v12; // cl@10
  unsigned __int8 v13; // al@10
  unsigned __int8 v14; // dl@10
  bool v15; // cf@10
  char v16; // cl@10
  int v17; // eax@19
  int v18; // eax@21
  int result; // eax@22
  bool v20; // zf@22
  int v21; // edi@25
  int v22; // esi@27
  int v23; // edi@28
  _BYTE *v24; // esi@28
  unsigned int v25; // ebx@28
  int v26; // esi@30
  int v27; // eax@38
  int v28; // edx@39
  int v29; // ecx@60
  int v30; // eax@63
  unsigned int v31; // eax@65
  void *v32; // esp@65
  int v33; // eax@77
  unsigned int v34; // edx@77
  bool v35; // sf@77
  unsigned __int8 v36; // of@77
  unsigned int v37; // eax@77
  unsigned int v38; // eax@79
  void *v39; // esp@79
  _BYTE *v40; // eax@85
  int v41; // eax@95
  unsigned int v42; // eax@97
  void *v43; // esp@97
  int v44; // [sp+0h] [bp-38h]@5
  int v45; // [sp+0h] [bp-38h]@7
  int v46; // [sp+4h] [bp-34h]@2
  int v47; // [sp+8h] [bp-30h]@4
  int v48; // [sp+Ch] [bp-2Ch]@1
  unsigned int v49; // [sp+10h] [bp-28h]@7
  char v50; // [sp+17h] [bp-21h]@9
  int v51; // [sp+18h] [bp-20h]@9
  int v52; // [sp+1Ch] [bp-1Ch]@7

  v4 = __PAIR__(a2, a3);
  v48 = a1;
  if ( a1 == 111 )
  {
    v29 = 0;
    v46 = *(_DWORD *)(a4 + 12);
    if ( v46 >= 0 )
      v29 = *(_DWORD *)(a4 + 12);
    v6 = v29 + 24;
    v47 = *(_DWORD *)(a4 + 4);
    if ( !(BYTE1(v47) & 0x10) )
    {
      v30 = v6;
      if ( *(_DWORD *)(a4 + 8) >= v6 )
        v30 = *(_DWORD *)(a4 + 8);
      v31 = 16 * ((unsigned int)(v30 + 27) >> 4);
      sub_6F8A13B0(v31, *(_DWORD *)(a4 + 8));
      v9 = 7;
      v32 = alloca(v31);
      v52 = 3;
      v49 = ((unsigned int)&v48 + 3) & 0xFFFFFFF0;
      goto LABEL_8;
    }
    if ( !*(_WORD *)(a4 + 28) )
    {
      v41 = v6;
      if ( v6 < *(_DWORD *)(a4 + 8) )
        v41 = *(_DWORD *)(a4 + 8);
      v42 = 16 * ((unsigned int)(v41 + 27) >> 4);
      sub_6F8A13B0(v42, *(_DWORD *)(a4 + 8));
      v43 = alloca(v42);
      v52 = 3;
      v49 = ((unsigned int)&v48 + 3) & 0xFFFFFFF0;
      goto LABEL_80;
    }
    v52 = 3;
  }
  else
  {
    v5 = 0;
    v46 = *(_DWORD *)(a4 + 12);
    if ( v46 >= 0 )
      v5 = *(_DWORD *)(a4 + 12);
    v6 = v5 + 18;
    v47 = *(_DWORD *)(a4 + 4);
    if ( !(BYTE1(v47) & 0x10) )
    {
      v7 = v6;
      v44 = *(_DWORD *)(a4 + 8);
      if ( *(_DWORD *)(a4 + 8) >= v6 )
        v7 = *(_DWORD *)(a4 + 8);
LABEL_7:
      v8 = 16 * ((unsigned int)(v7 + 27) >> 4);
      sub_6F8A13B0(v8, v44);
      v9 = 15;
      v10 = alloca(v8);
      v52 = 4;
      v49 = ((unsigned int)&v48 + 3) & 0xFFFFFFF0;
      goto LABEL_8;
    }
    if ( !*(_WORD *)(a4 + 28) )
    {
      v7 = v6;
      v44 = *(_DWORD *)(a4 + 8);
      if ( v6 < *(_DWORD *)(a4 + 8) )
        v7 = *(_DWORD *)(a4 + 8);
      goto LABEL_7;
    }
    v52 = 4;
  }
  v33 = *(_DWORD *)(a4 + 8);
  v34 = v6 + v6 / 3u;
  v36 = __OFSUB__(v34, v33);
  v35 = ((v34 - v33) & 0x80000000) != 0;
  v37 = v6 + v6 / 3u;
  if ( v35 ^ v36 )
    v37 = *(_DWORD *)(a4 + 8);
  v38 = 16 * ((v37 + 27) >> 4);
  sub_6F8A13B0(v38, *(_DWORD *)(a4 + 8));
  v9 = 15;
  v39 = alloca(v38);
  v49 = ((unsigned int)&v48 + 3) & 0xFFFFFFF0;
  if ( v48 == 111 )
LABEL_80:
    v9 = 7;
LABEL_8:
  if ( !v4 )
  {
    v11 = (_BYTE *)v49;
    goto LABEL_38;
  }
  v11 = (_BYTE *)v49;
  LOBYTE(v51) = v9;
  v50 = v48 & 0x20;
  do
  {
    ++v11;
    v12 = (BYTE4(v4) & v51) + 48;
    v13 = v50 | ((BYTE4(v4) & v51) + 55);
    v14 = v12;
    v15 = v12 < 0x3Au;
    v16 = v52;
    if ( v15 )
      v13 = v14;
    HIDWORD(v4) = __PAIR__(v4, HIDWORD(v4)) >> v52;
    *(v11 - 1) = v13;
    LODWORD(v4) = (unsigned int)v4 >> v16;
    if ( v16 & 0x20 )
      HIDWORD(v4) = v4;
    if ( v16 & 0x20 )
      LODWORD(v4) = 0;
  }
  while ( v4 );
  if ( v11 == (_BYTE *)v49 )
  {
LABEL_38:
    v27 = v47;
    BYTE1(v27) &= 0xF7u;
    *(_DWORD *)(a4 + 4) = v27;
    v17 = v46 - (_DWORD)&v11[-v49];
    if ( v46 <= 0 )
      goto LABEL_68;
LABEL_39:
    v28 = (int)&v11[v17];
    do
      *(++v11 - 1) = 48;
    while ( v28 - (signed int)v11 > 0 );
    if ( v11 == (_BYTE *)v49 )
      goto LABEL_70;
    goto LABEL_42;
  }
  if ( v46 > 0 )
  {
    v17 = v46 - (_DWORD)&v11[-v49];
    if ( v17 > 0 )
      goto LABEL_39;
  }
  if ( v48 == 111 )
  {
    if ( !(v47 & 0x800) )
      goto LABEL_42;
    *v11++ = 48;
LABEL_68:
    if ( v46 && v11 == (_BYTE *)v49 )
LABEL_70:
      *v11++ = 48;
LABEL_42:
    if ( (signed int)&v11[-v49] >= v45 )
      goto LABEL_22;
    v21 = v45 - (_DWORD)&v11[-v49];
    v20 = v48 == 111;
    *(_DWORD *)(a4 + 8) = v21;
    v47 = *(_DWORD *)(a4 + 4);
    if ( v20 )
    {
      if ( *(_DWORD *)(a4 + 12) >= 0 || (*(_DWORD *)(a4 + 4) & 0x600) != 512 )
      {
        v26 = v21 - 1;
        if ( !(v47 & 0x400) )
          goto LABEL_57;
        if ( (unsigned int)v11 > v49 )
          goto LABEL_74;
LABEL_33:
        while ( 1 )
        {
          sub_6F8AB850(32, a4);
          result = v26 - 1;
          if ( v26 <= 0 )
            break;
          --v26;
        }
        return result;
      }
      goto LABEL_85;
    }
LABEL_49:
    if ( v47 & 0x800 )
    {
      v21 -= 2;
      if ( v21 <= 0 || *(_DWORD *)(a4 + 12) >= 0 )
        goto LABEL_52;
    }
    else if ( *(_DWORD *)(a4 + 12) >= 0 )
    {
      goto LABEL_72;
    }
    if ( (v47 & 0x600) != 512 )
    {
      if ( !(v47 & 0x800) )
      {
LABEL_72:
        v26 = v21 - 1;
        if ( !(v47 & 0x400) )
          goto LABEL_57;
LABEL_73:
        if ( v49 < (unsigned int)v11 )
          goto LABEL_74;
        goto LABEL_33;
      }
LABEL_52:
      v11[1] = 48;
      v11 += 2;
      *(v11 - 2) = v48;
      goto LABEL_53;
    }
LABEL_85:
    v40 = v11;
    v11 += v21;
    do
      *(++v40 - 1) = 48;
    while ( v40 != v11 );
    v21 = v21 - 1 - v21;
    if ( v48 == 111 || !(v47 & 0x800) )
    {
LABEL_53:
      if ( v21 <= 0 )
      {
LABEL_26:
        result = v49;
        if ( v49 >= (unsigned int)v11 )
          return result;
        v22 = v21 - 1;
LABEL_28:
        v52 = v21;
        v23 = a4;
        v51 = v22;
        v24 = v11;
        v25 = result;
        goto LABEL_29;
      }
      v26 = v21 - 1;
      if ( !(v47 & 0x400) )
      {
LABEL_57:
        while ( 1 )
        {
          sub_6F8AB850(32, a4);
          if ( v26 <= 0 )
            break;
          --v26;
        }
        result = v49;
        if ( (unsigned int)v11 <= v49 )
          return result;
        v22 = -2;
        v21 = -1;
        goto LABEL_28;
      }
      goto LABEL_73;
    }
    goto LABEL_52;
  }
  v18 = (int)&v11[-v49];
  if ( v45 > (signed int)&v11[-v49] )
  {
    v21 = v45 - v18;
    *(_DWORD *)(a4 + 8) = v45 - v18;
    goto LABEL_49;
  }
LABEL_22:
  result = a4;
  v20 = v48 == 111;
  *(_DWORD *)(a4 + 8) = -1;
  if ( !v20 )
  {
    if ( *(_BYTE *)(a4 + 5) & 8 )
    {
      v11[1] = 48;
      v11 += 2;
      *(v11 - 2) = v48;
    }
    v21 = -1;
    goto LABEL_26;
  }
  v26 = -2;
  v21 = -1;
  if ( v49 >= (unsigned int)v11 )
    return result;
LABEL_74:
  v52 = v21;
  v23 = a4;
  v51 = v26;
  v24 = v11;
  v25 = v49;
  do
LABEL_29:
    result = sub_6F8AB850(*--v24, v23);
  while ( (unsigned int)v24 > v25 );
  v26 = v51;
  if ( v52 > 0 )
    goto LABEL_33;
  return result;
}
