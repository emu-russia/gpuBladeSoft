int __stdcall sub_6F8CAC10(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v7; // eax@1
  int v8; // edx@1
  int v9; // eax@1
  int v10; // edx@1
  int v11; // ebx@1
  int v12; // ebp@1
  bool v13; // dl@3
  bool v14; // al@4
  bool v16; // ST38_1@10
  int v17; // eax@10
  int v18; // eax@13
  bool v19; // [sp+3Eh] [bp-5Eh]@3
  int v20; // [sp+40h] [bp-5Ch]@1
  int v21; // [sp+44h] [bp-58h]@1
  int v22; // [sp+48h] [bp-54h]@1
  int v23; // [sp+4Ch] [bp-50h]@1
  int v24; // [sp+50h] [bp-4Ch]@1
  int v25; // [sp+54h] [bp-48h]@1
  int v26; // [sp+58h] [bp-44h]@1
  int v27; // [sp+5Ch] [bp-40h]@1
  int v28; // [sp+60h] [bp-3Ch]@1
  int v29; // [sp+64h] [bp-38h]@1
  int v30; // [sp+68h] [bp-34h]@1
  int v31; // [sp+6Ch] [bp-30h]@1
  int v32; // [sp+70h] [bp-2Ch]@1
  int v33; // [sp+74h] [bp-28h]@1
  int v34; // [sp+78h] [bp-24h]@1
  int v35; // [sp+7Ch] [bp-20h]@1

  v21 = 0;
  v7 = *(_DWORD *)(sub_6F95DB50(a5 + 108) + 8);
  v22 = *(_DWORD *)(v7 + 72);
  v23 = *(_DWORD *)(v7 + 76);
  v24 = *(_DWORD *)(v7 + 80);
  v25 = *(_DWORD *)(v7 + 84);
  v26 = *(_DWORD *)(v7 + 88);
  v27 = *(_DWORD *)(v7 + 92);
  v28 = *(_DWORD *)(v7 + 96);
  v29 = *(_DWORD *)(v7 + 44);
  v30 = *(_DWORD *)(v7 + 48);
  v31 = *(_DWORD *)(v7 + 52);
  v32 = *(_DWORD *)(v7 + 56);
  v33 = *(_DWORD *)(v7 + 60);
  v8 = *(_DWORD *)(v7 + 64);
  v9 = *(_DWORD *)(v7 + 68);
  v34 = v8;
  v35 = v9;
  v11 = sub_6F8CC520(a1, a2, a3, a4, &v20, (int)&v22, 7u, a5, &v21);
  v12 = v11;
  if ( v21 )
    *a6 |= 4u;
  else
    *(_DWORD *)(a7 + 24) = v20;
  v13 = v10 == -1;
  v19 = v13 && v11 != 0;
  if ( v13 && v11 != 0 )
  {
    v13 = 0;
    if ( *(_DWORD *)(v11 + 8) >= *(_DWORD *)(v11 + 12) )
    {
      v12 = 0;
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 36))(v11);
      v13 = 0;
      if ( v18 == -1 )
        v13 = v19;
      if ( v18 != -1 )
        v12 = v11;
    }
  }
  v14 = a4 == -1;
  if ( a3 )
  {
    if ( v14 )
    {
      v14 = 0;
      if ( *(_DWORD *)(a3 + 8) >= *(_DWORD *)(a3 + 12) )
      {
        v16 = v13;
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 36))(a3);
        v13 = v16;
        v14 = v17 == -1;
      }
    }
  }
  if ( v13 == v14 )
    *a6 |= 2u;
  return v12;
}
