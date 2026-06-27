int __stdcall sub_6F8CD450(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int a6, char a7, char a8)
{
  int v8; // eax@1
  char v9; // cl@2
  int v10; // ebx@5
  __int64 v11; // rax@5
  int (__stdcall *v13)(unsigned __int8); // edx@12
  char v14; // ST20_1@20
  char v15; // [sp+20h] [bp-3Ch]@5
  int v16; // [sp+2Ch] [bp-30h]@12
  char v17; // [sp+3Ch] [bp-20h]@3
  char v18; // [sp+3Dh] [bp-1Fh]@4
  char v19; // [sp+3Eh] [bp-1Eh]@4
  char v20; // [sp+3Fh] [bp-1Dh]@4

  v8 = sub_6F95DC10(a4 + 108);
  *a5 = 0;
  if ( *(_BYTE *)(v8 + 28) )
  {
    v9 = *(_BYTE *)(v8 + 66);
  }
  else
  {
    v16 = v8;
    sub_6F8C33B0(v8);
    v9 = 37;
    v13 = *(int (__stdcall **)(unsigned __int8))(*(_DWORD *)v16 + 24);
    if ( v13 != sub_6F8C3660 )
      v9 = ((int (__thiscall *)(int, signed int))v13)(v16, 37);
  }
  v17 = v9;
  if ( a8 )
  {
    v20 = 0;
    v18 = a8;
    v19 = a7;
  }
  else
  {
    v19 = 0;
    v18 = a7;
  }
  v11 = sub_6F8CB420(a1, a2, a3, a4, a5, a6, &v17);
  v10 = v11;
  BYTE4(v11) = HIDWORD(v11) == -1;
  v15 = BYTE4(v11) & ((_DWORD)v11 != 0);
  if ( v15 )
  {
    BYTE4(v11) = 0;
    if ( *(_DWORD *)(v11 + 8) >= *(_DWORD *)(v11 + 12) )
    {
      LODWORD(v11) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v11 + 36))(v11);
      BYTE4(v11) = 0;
      if ( (_DWORD)v11 == -1 )
      {
        BYTE4(v11) = v15;
        v10 = 0;
      }
    }
  }
  LOBYTE(v11) = a3 == -1;
  if ( a2 )
  {
    if ( (_BYTE)v11 )
    {
      LOBYTE(v11) = 0;
      if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
      {
        v14 = BYTE4(v11);
        LODWORD(v11) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
        BYTE4(v11) = v14;
        LOBYTE(v11) = (_DWORD)v11 == -1;
      }
    }
  }
  if ( BYTE4(v11) == (_BYTE)v11 )
    *a5 |= 2u;
  return v10;
}
