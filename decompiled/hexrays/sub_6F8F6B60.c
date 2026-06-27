int __stdcall sub_6F8F6B60(int a1, char a2, int a3, int a4, const struct tm *a5, char a6, char a7)
{
  int v7; // ebp@1
  char v8; // cl@2
  char *v9; // kr00_4@5
  int (__stdcall *v11)(unsigned __int8); // eax@9
  _DWORD *v12; // [sp+18h] [bp-B4h]@1
  char v13; // [sp+2Ch] [bp-A0h]@3
  char v14; // [sp+2Dh] [bp-9Fh]@4
  char v15; // [sp+2Eh] [bp-9Eh]@4
  char v16; // [sp+2Fh] [bp-9Dh]@4
  char v17[156]; // [sp+30h] [bp-9Ch]@5

  v7 = sub_6F95DC10(a3 + 108);
  v12 = (_DWORD *)sub_6F95DB50(a3 + 108);
  if ( *(_BYTE *)(v7 + 28) )
  {
    v8 = *(_BYTE *)(v7 + 66);
  }
  else
  {
    sub_6F8C33B0(v7);
    v8 = 37;
    v11 = *(int (__stdcall **)(unsigned __int8))(*(_DWORD *)v7 + 24);
    if ( v11 != sub_6F8C3660 )
      v8 = ((int (__thiscall *)(int, signed int))v11)(v7, 37);
  }
  v13 = v8;
  if ( a7 )
  {
    v14 = a7;
    v16 = 0;
    v15 = a6;
  }
  else
  {
    v15 = 0;
    v14 = a6;
  }
  sub_6F8BE970(v12, v17, 0x80u, &v13, a5);
  v9 = &v17[strlen(v17)];
  if ( !a2 )
    (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a1 + 48))(a1, v17, v9 - v17);
  return a1;
}
