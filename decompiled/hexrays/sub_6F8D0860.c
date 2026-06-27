int __stdcall sub_6F8D0860(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int a6, char a7, char a8)
{
  int *v8; // eax@1
  int v9; // edx@1
  __int64 v10; // kr00_8@3
  int v11; // ebp@3
  bool v12; // si@3
  bool v13; // di@3
  bool v14; // cl@4
  __int16 *v16; // eax@9
  __int16 v17; // ax@10
  __int16 *v18; // eax@13
  __int16 v19; // ax@14
  __int16 v20; // [sp+4Ch] [bp-24h]@1
  __int16 v21; // [sp+4Eh] [bp-22h]@2
  __int16 v22; // [sp+50h] [bp-20h]@2
  __int16 v23; // [sp+52h] [bp-1Eh]@12

  v8 = (int *)sub_6F95DC70(a4 + 108);
  v9 = *v8;
  *a5 = 0;
  v20 = (*(int (__thiscall **)(int *, signed int))(v9 + 40))(v8, 37);
  if ( a8 )
  {
    v22 = a7;
    v21 = a8;
    v23 = 0;
  }
  else
  {
    v21 = a7;
    v22 = 0;
  }
  v10 = sub_6F8CE530(a1, a2, a3, a4, a5, a6, (const wchar_t *)&v20);
  v11 = v10;
  v12 = WORD2(v10) == -1;
  v13 = v12 && (_DWORD)v10 != 0;
  if ( v13 )
  {
    v18 = *(__int16 **)(v10 + 8);
    if ( (unsigned int)v18 >= *(_DWORD *)(v10 + 12) )
      v19 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 36))(v10);
    else
      v19 = *v18;
    v12 = 0;
    v11 = 0;
    if ( v19 == -1 )
      v12 = v13;
    if ( v19 != -1 )
      v11 = v10;
  }
  v14 = (_WORD)a3 == -1;
  if ( a2 && (_WORD)a3 == -1 )
  {
    v16 = *(__int16 **)(a2 + 8);
    if ( (unsigned int)v16 >= *(_DWORD *)(a2 + 12) )
      v17 = (*(int (**)(void))(*(_DWORD *)a2 + 36))();
    else
      v17 = *v16;
    v14 = v17 == -1;
  }
  if ( v14 == v12 )
    *a5 |= 2u;
  return v11;
}
