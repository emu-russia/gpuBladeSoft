char __thiscall sub_6F9159C0(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx@1
  int v3; // esi@2
  int v4; // eax@3
  int v5; // ecx@5
  int v6; // ecx@8
  int v7; // edi@20
  const void *v8; // eax@20
  int v9; // edi@20
  size_t v10; // edi@20
  int v11; // eax@22
  int v12; // edi@22
  int v13; // eax@22
  int v15; // [sp+30h] [bp-1Ch]@12
  int v16; // [sp+34h] [bp-18h]@12

  v2 = this;
  if ( sub_6F95CD80(a2) )
    v3 = sub_6F95DCD0(a2);
  else
    v3 = 0;
  LOBYTE(v4) = sub_6F8BF810(v2 + 9);
  if ( !(_BYTE)v4 )
    goto LABEL_13;
  if ( !*((_BYTE *)v2 + 69) && !*((_BYTE *)v2 + 70) )
  {
    v2[21] = v3;
    return v4;
  }
  v5 = v2[21];
  if ( !v5 )
    goto LABEL_28;
  v4 = (*(int (**)(void))(*(_DWORD *)v5 + 20))();
  if ( v4 == -1 )
    goto LABEL_18;
  if ( !*((_BYTE *)v2 + 69) )
  {
    if ( !*((_BYTE *)v2 + 70) )
      goto LABEL_13;
    LOBYTE(v4) = sub_6F915190(v2);
    if ( (_BYTE)v4 )
    {
      v4 = v2[15];
      v2[5] = 0;
      v2[4] = 0;
      v2[1] = v4;
      v2[2] = v4;
      v2[3] = v4;
      v2[6] = 0;
      goto LABEL_13;
    }
LABEL_18:
    v2[21] = 0;
    return v4;
  }
  v6 = v2[21];
  if ( !v6 )
LABEL_28:
    sub_6F95AA30();
  LOBYTE(v4) = (*(int (**)(void))(*(_DWORD *)v6 + 24))();
  if ( !(_BYTE)v4 )
  {
    v7 = v2[22];
    v8 = (const void *)(v7
                      + (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)v2[21] + 28))(
                          (int)(v2 + 14),
                          v2[22],
                          v2[24],
                          v2[2] - v2[1]));
    v9 = v2[25];
    v2[24] = v8;
    v10 = v9 - (_DWORD)v8;
    if ( v10 )
      memmove((void *)v2[22], v8, v10);
    v11 = v2[22];
    v2[5] = 0;
    v2[4] = 0;
    v12 = v11 + v10;
    v2[24] = v11;
    v13 = v2[15];
    v2[25] = v12;
    v2[1] = v13;
    v2[2] = v13;
    v2[3] = v13;
    v4 = v2[12];
    v2[6] = 0;
    v2[13] = v4;
    v2[14] = v4;
    goto LABEL_13;
  }
  if ( !v3 )
    goto LABEL_18;
  LOBYTE(v4) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 24))(v3);
  if ( !(_BYTE)v4 )
  {
    (*(void (__thiscall **)(int *, _DWORD *, _DWORD, _DWORD, signed int, _DWORD))(*v2 + 16))(&v15, v2, 0, 0, 1, v2[11]);
    LOBYTE(v4) = v15 & v16;
    if ( (v15 & v16) == -1 )
      goto LABEL_18;
  }
LABEL_13:
  v2[21] = v3;
  return v4;
}
