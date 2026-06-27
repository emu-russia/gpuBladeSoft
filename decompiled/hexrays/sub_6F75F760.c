int sub_6F75F760()
{
  int *v0; // ebx@1
  signed int v1; // eax@4
  signed int v2; // eax@6
  bool v3; // zf@6
  bool v4; // zf@11
  int v5; // ebx@14
  int v6; // ecx@14
  int v7; // eax@17
  signed int v8; // ecx@17
  char v9; // cl@22
  bool v10; // zf@27
  int v11; // eax@31
  int v12; // ecx@34
  char v13; // cl@35
  int v14; // edx@35
  bool v15; // sf@35
  unsigned __int8 v16; // of@35
  char v17; // cl@38
  int v18; // edx@38
  int v19; // eax@38
  char v20; // al@42
  int v21; // edx@42
  int v22; // ecx@42
  int v24; // eax@47
  int v25; // [sp+38h] [bp+0h]@15
  int v26; // [sp+3Ch] [bp+4h]@6
  int v27; // [sp+40h] [bp+8h]@11
  int v28; // [sp+44h] [bp+Ch]@15
  int v29; // [sp+48h] [bp+10h]@15

  v0 = dword_7035CC40;
  do
  {
    while ( 1 )
    {
      v11 = v0[33];
      if ( !v11 )
        goto LABEL_14;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      if ( (*(int (__stdcall **)(int, signed int, int *))(*(_DWORD *)v11 + 36))(v11, 20, &v25) < 0 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v0[33] + 28))(v0[33]);
      v12 = v29;
      v1 = v25;
      *v0 = v28;
      v0[1] = v12;
      if ( v1 >= 0 )
      {
        if ( v1 )
        {
          if ( v1 > 127 )
            LOBYTE(v1) = 127;
          *((_BYTE *)v0 + 33) = v1;
        }
        v2 = v26;
        v3 = v26 == 0;
        if ( v26 < 0 )
        {
LABEL_38:
          v17 = 127;
          v18 = -v2;
          v16 = __OFSUB__(v2, -127);
          v3 = v2 == -127;
          v15 = v2 + 127 < 0;
          v19 = v27;
          if ( !((unsigned __int8)(v15 ^ v16) | v3) )
            v17 = v18;
          *((_BYTE *)v0 + 34) = v17;
          v4 = v19 == 0;
          if ( v19 < 0 )
            goto LABEL_41;
          goto LABEL_12;
        }
      }
      else
      {
        v13 = 127;
        v14 = -v1;
        v16 = __OFSUB__(v1, -127);
        v3 = v1 == -127;
        v15 = v1 + 127 < 0;
        v2 = v26;
        if ( !((unsigned __int8)(v15 ^ v16) | v3) )
          v13 = v14;
        *((_BYTE *)v0 + 32) = v13;
        v3 = v2 == 0;
        if ( v2 < 0 )
          goto LABEL_38;
      }
      if ( !v3 )
      {
        if ( v2 > 127 )
          LOBYTE(v2) = 127;
        *((_BYTE *)v0 + 35) = v2;
      }
      v4 = v27 == 0;
      if ( v27 < 0 )
      {
LABEL_41:
        *((_BYTE *)v0 + 36) = 80;
        goto LABEL_14;
      }
LABEL_12:
      if ( !v4 )
        *((_BYTE *)v0 + 37) = 80;
LABEL_14:
      v5 = (int)(v0 + 34);
      v6 = *(_DWORD *)(v5 + 132);
      if ( v6 )
        break;
LABEL_30:
      v0 = (int *)(v5 + 136);
      if ( &dword_7035D4C0 == v0 )
        return 0;
    }
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    if ( (*(int (__stdcall **)(int, signed int, int *))(*(_DWORD *)v6 + 36))(v6, 20, &v25) < 0 )
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v5 + 132) + 28))(*(_DWORD *)(v5 + 132));
    v7 = v29;
    v8 = v25;
    *(_DWORD *)v5 = v28;
    *(_DWORD *)(v5 + 4) = v7;
    if ( v8 < 0 )
    {
      LOBYTE(v24) = 127;
      if ( v8 > -127 )
        v24 = -v8;
      *(_BYTE *)(v5 + 32) = v24;
    }
    else if ( v8 )
    {
      if ( v8 > 127 )
        LOBYTE(v8) = 127;
      *(_BYTE *)(v5 + 33) = v8;
    }
    v9 = v26;
    if ( v26 < 0 )
    {
      v20 = 127;
      v21 = -v26;
      v22 = v27;
      if ( v26 > -127 )
        v20 = v21;
      *(_BYTE *)(v5 + 34) = v20;
      v10 = v22 == 0;
      if ( v22 >= 0 )
      {
LABEL_28:
        if ( !v10 )
          *(_BYTE *)(v5 + 37) = 80;
        goto LABEL_30;
      }
    }
    else
    {
      if ( v26 )
      {
        if ( v26 > 127 )
          v9 = 127;
        *(_BYTE *)(v5 + 35) = v9;
      }
      v10 = v27 == 0;
      if ( v27 >= 0 )
        goto LABEL_28;
    }
    *(_BYTE *)(v5 + 36) = 80;
    v0 = (int *)(v5 + 136);
  }
  while ( &dword_7035D4C0 != v0 );
  return 0;
}
