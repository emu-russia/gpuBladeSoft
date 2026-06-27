int __stdcall sub_6F8F6EB0(int a1, char a2, int a3, int a4, const struct tm *a5, char a6, char a7)
{
  int v7; // ST1C_4@1
  _DWORD *v8; // ebp@1
  size_t v9; // edx@3
  __int16 v11; // [sp+2Ch] [bp-124h]@1
  __int16 v12; // [sp+2Eh] [bp-122h]@2
  __int16 v13; // [sp+30h] [bp-120h]@2
  __int16 v14; // [sp+32h] [bp-11Eh]@6
  wchar_t v15[142]; // [sp+34h] [bp-11Ch]@3

  v7 = sub_6F95DC70(a3 + 108);
  v8 = (_DWORD *)sub_6F95DBB0(a3 + 108);
  v11 = (*(int (__stdcall **)(signed int))(*(_DWORD *)v7 + 40))(37);
  if ( a7 )
  {
    v13 = a6;
    v12 = a7;
    v14 = 0;
  }
  else
  {
    v12 = a6;
    v13 = 0;
  }
  sub_6F8BEC90(v8, v15, 0x80u, (const wchar_t *)&v11, a5);
  v9 = wcslen(v15);
  if ( !a2 )
    (*(int (__thiscall **)(int, wchar_t *, size_t))(*(_DWORD *)a1 + 48))(a1, v15, v9);
  return a1;
}
