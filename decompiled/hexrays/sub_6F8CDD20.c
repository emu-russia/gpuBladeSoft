int __stdcall sub_6F8CDD20(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v7; // eax@1
  int v8; // edx@1
  int v9; // eax@1
  __int16 v10; // dx@1
  int v11; // ebx@1
  int v12; // ebp@1
  bool v13; // si@3
  bool v14; // cl@4
  __int16 *v16; // eax@9
  __int16 v17; // ax@10
  __int16 *v18; // eax@13
  __int16 v19; // ax@14
  bool v20; // [sp+43h] [bp-69h]@3
  int v21; // [sp+50h] [bp-5Ch]@1
  int v22; // [sp+54h] [bp-58h]@1
  int v23; // [sp+58h] [bp-54h]@1
  int v24; // [sp+5Ch] [bp-50h]@1
  int v25; // [sp+60h] [bp-4Ch]@1
  int v26; // [sp+64h] [bp-48h]@1
  int v27; // [sp+68h] [bp-44h]@1
  int v28; // [sp+6Ch] [bp-40h]@1
  int v29; // [sp+70h] [bp-3Ch]@1
  int v30; // [sp+74h] [bp-38h]@1
  int v31; // [sp+78h] [bp-34h]@1
  int v32; // [sp+7Ch] [bp-30h]@1
  int v33; // [sp+80h] [bp-2Ch]@1
  int v34; // [sp+84h] [bp-28h]@1
  int v35; // [sp+88h] [bp-24h]@1
  int v36; // [sp+8Ch] [bp-20h]@1

  v22 = 0;
  v7 = *(_DWORD *)(sub_6F95DBB0(a5 + 108) + 8);
  v23 = *(_DWORD *)(v7 + 72);
  v24 = *(_DWORD *)(v7 + 76);
  v25 = *(_DWORD *)(v7 + 80);
  v26 = *(_DWORD *)(v7 + 84);
  v27 = *(_DWORD *)(v7 + 88);
  v28 = *(_DWORD *)(v7 + 92);
  v29 = *(_DWORD *)(v7 + 96);
  v30 = *(_DWORD *)(v7 + 44);
  v31 = *(_DWORD *)(v7 + 48);
  v32 = *(_DWORD *)(v7 + 52);
  v33 = *(_DWORD *)(v7 + 56);
  v34 = *(_DWORD *)(v7 + 60);
  v8 = *(_DWORD *)(v7 + 64);
  v9 = *(_DWORD *)(v7 + 68);
  v35 = v8;
  v36 = v9;
  v11 = sub_6F8CFA40(a1, a2, a3, a4, &v21, (int)&v23, 7u, a5, &v22);
  v12 = v11;
  if ( v22 )
    *a6 |= 4u;
  else
    *(_DWORD *)(a7 + 24) = v21;
  v13 = v10 == -1;
  v20 = v13 && v11 != 0;
  if ( v20 )
  {
    v18 = *(__int16 **)(v11 + 8);
    if ( (unsigned int)v18 >= *(_DWORD *)(v11 + 12) )
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 36))(v11);
    else
      v19 = *v18;
    v13 = 0;
    v12 = 0;
    if ( v19 != -1 )
      v12 = v11;
    if ( v19 == -1 )
      v13 = v20;
  }
  v14 = (_WORD)a4 == -1;
  if ( a3 && (_WORD)a4 == -1 )
  {
    v16 = *(__int16 **)(a3 + 8);
    if ( (unsigned int)v16 >= *(_DWORD *)(a3 + 12) )
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 36))(a3);
    else
      v17 = *v16;
    v14 = v17 == -1;
  }
  if ( v13 == v14 )
    *a6 |= 2u;
  return v12;
}
