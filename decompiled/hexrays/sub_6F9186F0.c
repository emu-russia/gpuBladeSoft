signed int __thiscall sub_6F9186F0(_BYTE *this, int a2)
{
  _BYTE *v2; // ebx@2
  unsigned int v3; // eax@3
  char v4; // di@3
  int v5; // edx@4
  signed int result; // eax@5
  _WORD *v7; // eax@8
  int v8; // eax@9
  int v9; // eax@12
  int v10; // [sp+24h] [bp-1Ch]@13
  int v11; // [sp+28h] [bp-18h]@13

  if ( !(this[44] & 8) )
    return -1;
  v2 = this;
  if ( this[70] )
  {
    if ( (unsigned __int16)(*(int (__stdcall **)(signed int))(*(_DWORD *)this + 52))(0xFFFF) == -1 )
      return -1;
    v9 = *((_DWORD *)v2 + 15);
    *((_DWORD *)v2 + 5) = 0;
    *((_DWORD *)v2 + 4) = 0;
    v4 = v2[84];
    *((_DWORD *)v2 + 1) = v9;
    *((_DWORD *)v2 + 2) = v9;
    *((_DWORD *)v2 + 3) = v9;
    *((_DWORD *)v2 + 6) = 0;
    v2[70] = 0;
  }
  else
  {
    v3 = *((_DWORD *)this + 2);
    v4 = this[84];
    if ( v3 > *((_DWORD *)this + 1) )
    {
      *((_DWORD *)this + 2) = v3 - 2;
      v5 = *(_WORD *)(v3 - 2);
      goto LABEL_5;
    }
  }
  (*(void (__thiscall **)(int *, _BYTE *, signed int, signed int, signed int, signed int))(*(_DWORD *)v2 + 16))(
    &v10,
    v2,
    -1,
    -1,
    1,
    24);
  if ( (v10 & v11) == -1 )
    return -1;
  v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 36))(v2);
  if ( (_WORD)v5 == -1 )
    return -1;
LABEL_5:
  result = 0;
  if ( (_WORD)a2 == -1 )
    return result;
  result = v5;
  if ( (_WORD)v5 == (_WORD)a2 )
    return result;
  if ( v4 )
    return -1;
  v7 = (_WORD *)*((_DWORD *)v2 + 2);
  if ( !v2[84] )
  {
    *((_DWORD *)v2 + 19) = v7;
    v8 = *((_DWORD *)v2 + 3);
    *((_DWORD *)v2 + 3) = v2 + 74;
    *((_DWORD *)v2 + 20) = v8;
    v7 = v2 + 72;
    *((_DWORD *)v2 + 1) = v2 + 72;
    *((_DWORD *)v2 + 2) = v2 + 72;
    v2[84] = 1;
  }
  v2[69] = 1;
  *v7 = a2;
  return a2;
}
