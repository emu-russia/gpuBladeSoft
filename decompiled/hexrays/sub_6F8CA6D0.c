int __stdcall sub_6F8CA6D0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v7; // eax@1
  int v8; // ebx@1
  __int64 v9; // rax@1
  char v11; // ST28_1@8
  char v12; // [sp+28h] [bp-24h]@1

  v7 = sub_6F95DB50(a5 + 108);
  v9 = sub_6F8CB420(__PAIR__(a2, a1), a3, a4, a5, a6, a7, (const char *)*(_DWORD *)(*(_DWORD *)(v7 + 8) + 16));
  v8 = v9;
  BYTE4(v9) = HIDWORD(v9) == -1;
  v12 = BYTE4(v9) & ((_DWORD)v9 != 0);
  if ( v12 )
  {
    BYTE4(v9) = 0;
    if ( *(_DWORD *)(v9 + 8) >= *(_DWORD *)(v9 + 12) )
    {
      LODWORD(v9) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 36))(v9);
      BYTE4(v9) = 0;
      if ( (_DWORD)v9 == -1 )
      {
        BYTE4(v9) = v12;
        v8 = 0;
      }
    }
  }
  LOBYTE(v9) = a4 == -1;
  if ( a3 )
  {
    if ( (_BYTE)v9 )
    {
      LOBYTE(v9) = 0;
      if ( *(_DWORD *)(a3 + 8) >= *(_DWORD *)(a3 + 12) )
      {
        v11 = BYTE4(v9);
        LODWORD(v9) = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 36))(a3);
        BYTE4(v9) = v11;
        LOBYTE(v9) = (_DWORD)v9 == -1;
      }
    }
  }
  if ( BYTE4(v9) == (_BYTE)v9 )
    *a6 |= 2u;
  return v8;
}
