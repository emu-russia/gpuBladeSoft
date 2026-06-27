int __stdcall sub_6F8CD660(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v7; // eax@1
  __int64 v8; // kr00_8@1
  int v9; // ebp@1
  __int16 v10; // si@1
  bool v11; // cl@2
  __int16 *v13; // eax@7
  __int16 v14; // ax@8
  __int16 *v15; // eax@10
  __int16 v16; // ax@11
  char v17; // [sp+30h] [bp-2Ch]@1

  v7 = sub_6F95DBB0(a5 + 108);
  v8 = sub_6F8CE530(__PAIR__(a2, a1), a3, a4, a5, a6, a7, (const wchar_t *)*(_DWORD *)(*(_DWORD *)(v7 + 8) + 8));
  v9 = v8;
  v10 = WORD2(v8) == -1;
  v17 = v10 & ((_DWORD)v8 != 0);
  if ( v17 )
  {
    v15 = *(__int16 **)(v8 + 8);
    if ( (unsigned int)v15 >= *(_DWORD *)(v8 + 12) )
      v16 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 36))(v8);
    else
      v16 = *v15;
    LOBYTE(v10) = 0;
    v9 = 0;
    if ( v16 != -1 )
      v9 = v8;
    if ( v16 == -1 )
      LOBYTE(v10) = v17;
  }
  v11 = (_WORD)a4 == -1;
  if ( a3 && (_WORD)a4 == -1 )
  {
    v13 = *(__int16 **)(a3 + 8);
    if ( (unsigned int)v13 >= *(_DWORD *)(a3 + 12) )
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 36))(a3);
    else
      v14 = *v13;
    v11 = v14 == -1;
  }
  if ( (_BYTE)v10 == v11 )
    *a6 |= 2u;
  return v9;
}
