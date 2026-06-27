char __thiscall sub_6F917C10(void *this, int a2)
{
  void *v2; // ebx@1
  int v3; // esi@2
  int v4; // eax@3
  int v5; // ecx@5
  int v6; // edx@6
  int v7; // ecx@8
  int v8; // edi@20
  const void *v9; // eax@20
  int v10; // edi@20
  size_t v11; // edi@20
  int v12; // eax@22
  int v13; // edi@22
  int v14; // eax@22
  int v16; // [sp+30h] [bp-1Ch]@12
  int v17; // [sp+34h] [bp-18h]@12

  v2 = this;
  if ( sub_6F95CDD0(a2) )
    v3 = sub_6F95DD30(a2);
  else
    v3 = 0;
  LOBYTE(v4) = sub_6F8BF810((char *)v2 + 36);
  if ( !(_BYTE)v4 )
    goto LABEL_13;
  if ( !*((_BYTE *)v2 + 69) && !*((_BYTE *)v2 + 70) )
  {
    *((_DWORD *)v2 + 22) = v3;
    return v4;
  }
  v5 = *((_DWORD *)v2 + 22);
  if ( !v5 )
    goto LABEL_28;
  v4 = (*(int (**)(void))(*(_DWORD *)v5 + 20))();
  if ( v4 == -1 )
    goto LABEL_18;
  if ( !*((_BYTE *)v2 + 69) )
  {
    if ( !*((_BYTE *)v2 + 70) )
      goto LABEL_13;
    LOBYTE(v4) = sub_6F9173D0((int)v2, v6);
    if ( (_BYTE)v4 )
    {
      v4 = *((_DWORD *)v2 + 15);
      *((_DWORD *)v2 + 5) = 0;
      *((_DWORD *)v2 + 4) = 0;
      *((_DWORD *)v2 + 1) = v4;
      *((_DWORD *)v2 + 2) = v4;
      *((_DWORD *)v2 + 3) = v4;
      *((_DWORD *)v2 + 6) = 0;
      goto LABEL_13;
    }
LABEL_18:
    *((_DWORD *)v2 + 22) = 0;
    return v4;
  }
  v7 = *((_DWORD *)v2 + 22);
  if ( !v7 )
LABEL_28:
    sub_6F95AA30();
  LOBYTE(v4) = (*(int (**)(void))(*(_DWORD *)v7 + 24))();
  if ( !(_BYTE)v4 )
  {
    v8 = *((_DWORD *)v2 + 23);
    v9 = (const void *)(v8
                      + (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(**((_DWORD **)v2 + 22) + 28))(
                          (int)v2 + 56,
                          *((_DWORD *)v2 + 23),
                          *((_DWORD *)v2 + 25),
                          (*((_DWORD *)v2 + 2) - *((_DWORD *)v2 + 1)) >> 1));
    v10 = *((_DWORD *)v2 + 26);
    *((_DWORD *)v2 + 25) = v9;
    v11 = v10 - (_DWORD)v9;
    if ( v11 )
      memmove(*((void **)v2 + 23), v9, v11);
    v12 = *((_DWORD *)v2 + 23);
    *((_DWORD *)v2 + 5) = 0;
    *((_DWORD *)v2 + 4) = 0;
    v13 = v12 + v11;
    *((_DWORD *)v2 + 25) = v12;
    v14 = *((_DWORD *)v2 + 15);
    *((_DWORD *)v2 + 26) = v13;
    *((_DWORD *)v2 + 1) = v14;
    *((_DWORD *)v2 + 2) = v14;
    *((_DWORD *)v2 + 3) = v14;
    v4 = *((_DWORD *)v2 + 12);
    *((_DWORD *)v2 + 6) = 0;
    *((_DWORD *)v2 + 13) = v4;
    *((_DWORD *)v2 + 14) = v4;
    goto LABEL_13;
  }
  if ( !v3 )
    goto LABEL_18;
  LOBYTE(v4) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 24))(v3);
  if ( !(_BYTE)v4 )
  {
    (*(void (__thiscall **)(int *, void *, _DWORD, _DWORD, signed int, _DWORD))(*(_DWORD *)v2 + 16))(
      &v16,
      v2,
      0,
      0,
      1,
      *((_DWORD *)v2 + 11));
    LOBYTE(v4) = v16 & v17;
    if ( (v16 & v17) == -1 )
      goto LABEL_18;
  }
LABEL_13:
  *((_DWORD *)v2 + 22) = v3;
  return v4;
}
