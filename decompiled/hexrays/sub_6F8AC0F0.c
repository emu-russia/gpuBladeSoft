int __usercall sub_6F8AC0F0@<eax>(unsigned int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebp@0
  unsigned __int64 v4; // rdi@1
  int v5; // ebx@1
  int v6; // eax@1
  int v7; // ecx@1
  int v8; // ecx@3
  int v9; // eax@6
  unsigned int v10; // eax@8
  void *v11; // esp@8
  _BYTE *v12; // ebx@12
  int v13; // eax@17
  int v14; // eax@18
  unsigned int v15; // edx@18
  _BYTE *v16; // esi@20
  int v17; // eax@21
  int v18; // edx@22
  int v19; // edi@26
  int v20; // eax@30
  int v21; // eax@31
  unsigned int v22; // edi@35
  unsigned int v23; // esi@36
  int result; // eax@38
  bool v25; // al@44
  int v26; // eax@52
  int v27; // eax@53
  char v28; // [sp+0h] [bp-48h]@0
  int v29; // [sp+14h] [bp-34h]@6
  int v30; // [sp+18h] [bp-30h]@1
  int v31; // [sp+1Ch] [bp-2Ch]@12
  int v32; // [sp+1Ch] [bp-2Ch]@15
  int v33; // [sp+1Ch] [bp-2Ch]@20
  int v34; // [sp+20h] [bp-28h]@3
  int v35; // [sp+24h] [bp-24h]@12
  unsigned int v36; // [sp+28h] [bp-20h]@8
  _BYTE *v37; // [sp+2Ch] [bp-1Ch]@13

  v4 = __PAIR__(a1, a2);
  v5 = a3;
  v6 = *(_DWORD *)(a3 + 12);
  v7 = 0;
  v30 = v6;
  if ( v6 >= 0 )
    v7 = v6;
  v8 = v7 + 23;
  v34 = *(_DWORD *)(v5 + 4);
  if ( BYTE1(v34) & 0x10 && *(_WORD *)(v5 + 28) )
    v8 += v8 / 3u;
  v9 = v8;
  v29 = *(_DWORD *)(v5 + 8);
  if ( *(_DWORD *)(v5 + 8) >= v8 )
    v9 = *(_DWORD *)(v5 + 8);
  v10 = 16 * ((unsigned int)(v9 + 27) >> 4);
  sub_6F8A13B0(v10, v28);
  v11 = alloca(v10);
  v36 = ((unsigned int)&v31 + 3) & 0xFFFFFFF0;
  if ( v34 & 0x80 )
  {
    if ( a2 < 0 )
    {
      HIDWORD(v4) = -HIDWORD(v4);
      LODWORD(v4) = (unsigned __int64)-__PAIR__(a2, HIDWORD(v4)) >> 32;
LABEL_12:
      v31 = v5;
      v12 = (_BYTE *)v36;
      v35 = v34 & 0x1000;
      while ( 1 )
      {
        v37 = v12 + 1;
        if ( (_BYTE *)v36 != v12
          && v35
          && *(_WORD *)(v32 + 28)
          && ((((unsigned int)((unsigned __int64)(signed int)&v12[-v36] >> 32) >> 30) + (_BYTE)v12 - (_BYTE)v36) & 3)
           - ((unsigned int)((unsigned __int64)(signed int)&v12[-v36] >> 32) >> 30) == 3 )
        {
          v13 = (int)(v12 + 2);
          *v12 = 44;
          v12 = v37;
          v37 = (_BYTE *)v13;
        }
        *v12 = sub_6F8A1630(v3, __PAIR__(v4, HIDWORD(v4)), 10i64) + 48;
        v14 = sub_6F8A1530(v4, __PAIR__(v4, HIDWORD(v4)), 0xAu, 0);
        v12 = v37;
        if ( __PAIR__(v4, HIDWORD(v4)) <= 9 )
          break;
        v4 = __PAIR__(v14, v15);
      }
      v5 = v33;
      v16 = v37;
      if ( v30 > 0 )
      {
        v17 = v30 - (_DWORD)&v37[-v36];
        if ( v17 <= 0 )
          goto LABEL_24;
        goto LABEL_22;
      }
      v25 = v36 == (_DWORD)v37;
      goto LABEL_45;
    }
    v34 &= 0xFFFFFF7F;
    *(_DWORD *)(v5 + 4) = v34;
  }
  if ( v4 )
    goto LABEL_12;
  v16 = (_BYTE *)v36;
  v37 = (_BYTE *)v36;
  v17 = v30;
  if ( v30 > 0 )
  {
LABEL_22:
    v16 = v37;
    v18 = (int)&v37[v17];
    do
      *(++v16 - 1) = 48;
    while ( v18 - (signed int)v16 > 0 );
LABEL_24:
    if ( (_BYTE *)v36 != v16 )
      goto LABEL_25;
LABEL_47:
    *v16++ = 48;
    goto LABEL_25;
  }
  v25 = 1;
LABEL_45:
  if ( v30 && v25 )
    goto LABEL_47;
LABEL_25:
  if ( v29 <= 0 )
    goto LABEL_33;
  v19 = v29 - (_DWORD)&v16[-v36];
  *(_DWORD *)(v5 + 8) = v19;
  if ( v19 <= 0 )
    goto LABEL_33;
  if ( v34 & 0x1C0 )
  {
    *(_DWORD *)(v5 + 8) = v19 - 1;
    if ( v30 >= 0 )
      goto LABEL_29;
  }
  else if ( v30 >= 0 )
  {
LABEL_29:
    if ( !(v34 & 0x400) )
    {
      v20 = *(_DWORD *)(v5 + 8);
      *(_DWORD *)(v5 + 8) = v20 - 1;
      if ( v20 > 0 )
      {
        do
        {
          sub_6F8AB850(32, v5);
          v21 = *(_DWORD *)(v5 + 8);
          *(_DWORD *)(v5 + 8) = v21 - 1;
        }
        while ( v21 > 0 );
        v34 = *(_DWORD *)(v5 + 4);
      }
    }
    goto LABEL_33;
  }
  if ( (v34 & 0x600) != 512 )
    goto LABEL_29;
  v26 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = v26 - 1;
  if ( v26 > 0 )
  {
    v27 = (int)&v16[v26];
    do
      *(++v16 - 1) = 48;
    while ( v16 != (_BYTE *)v27 );
    *(_DWORD *)(v5 + 8) = -1;
  }
LABEL_33:
  if ( v34 & 0x80 )
  {
    v22 = (unsigned int)(v16 + 1);
    *v16 = 45;
  }
  else if ( v34 & 0x100 )
  {
    *v16 = 43;
    v22 = (unsigned int)(v16 + 1);
  }
  else
  {
    v22 = (unsigned int)v16;
    if ( v34 & 0x40 )
    {
      v22 = (unsigned int)(v16 + 1);
      *v16 = 32;
    }
  }
  v23 = v36;
  if ( v36 >= v22 )
    goto LABEL_40;
  do
    sub_6F8AB850(*(_BYTE *)--v22, v5);
  while ( v23 != v22 );
  result = *(_DWORD *)(v5 + 8);
  for ( *(_DWORD *)(v5 + 8) = result - 1; result > 0; *(_DWORD *)(v5 + 8) = result - 1 )
  {
    sub_6F8AB850(32, v5);
LABEL_40:
    result = *(_DWORD *)(v5 + 8);
  }
  return result;
}
