int __stdcall sub_6F8CD8E0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  __int16 v7; // dx@1
  int v8; // ebx@1
  int v9; // ecx@2
  bool v10; // si@5
  __int16 *v12; // eax@11
  __int16 v13; // ax@12
  __int16 *v14; // eax@16
  __int16 v15; // ax@17
  bool v16; // zf@18
  int v17; // eax@18
  int v18; // [sp+30h] [bp-3Ch]@1
  bool v19; // [sp+34h] [bp-38h]@5
  int v20; // [sp+48h] [bp-24h]@1
  int v21; // [sp+4Ch] [bp-20h]@1

  v21 = 0;
  v8 = sub_6F8CDAA0(a1, a2, a3, a4, &v20, 0, 9999, 4u, a5, &v21);
  v18 = v8;
  if ( v21 )
  {
    *a6 |= 4u;
  }
  else
  {
    v9 = v20 - 1900;
    if ( v20 < 0 )
      v9 = v20 + 100;
    *(_DWORD *)(a7 + 20) = v9;
  }
  v10 = v7 == -1;
  v19 = v10 && v8 != 0;
  if ( v19 )
  {
    v14 = *(__int16 **)(v8 + 8);
    if ( (unsigned int)v14 >= *(_DWORD *)(v8 + 12) )
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 36))(v8);
    else
      v15 = *v14;
    v16 = v15 == -1;
    v17 = 0;
    v10 = 0;
    if ( !v16 )
      v17 = v8;
    if ( v16 )
      v10 = v19;
    v18 = v17;
  }
  if ( a3 && (_WORD)a4 == -1 )
  {
    v12 = *(__int16 **)(a3 + 8);
    if ( (unsigned int)v12 >= *(_DWORD *)(a3 + 12) )
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 36))(a3);
    else
      v13 = *v12;
    if ( v10 == (v13 == -1) )
      goto LABEL_9;
  }
  else if ( v10 == ((_WORD)a4 == -1) )
  {
LABEL_9:
    *a6 |= 2u;
    return v18;
  }
  return v18;
}
