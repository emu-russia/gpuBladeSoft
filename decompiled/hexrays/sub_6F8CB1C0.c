int __stdcall sub_6F8CB1C0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v7; // eax@1
  int v8; // edx@1
  int v9; // edx@1
  int v10; // edx@1
  int v11; // ebx@1
  int v12; // ebp@1
  bool v13; // dl@3
  bool v14; // al@4
  bool v16; // ST38_1@10
  int v17; // eax@10
  int v18; // eax@13
  bool v19; // [sp+3Eh] [bp-8Eh]@3
  int v20; // [sp+48h] [bp-84h]@1
  int v21; // [sp+4Ch] [bp-80h]@1
  int v22; // [sp+50h] [bp-7Ch]@1
  int v23; // [sp+54h] [bp-78h]@1
  int v24; // [sp+58h] [bp-74h]@1
  int v25; // [sp+5Ch] [bp-70h]@1
  int v26; // [sp+60h] [bp-6Ch]@1
  int v27; // [sp+64h] [bp-68h]@1
  int v28; // [sp+68h] [bp-64h]@1
  int v29; // [sp+6Ch] [bp-60h]@1
  int v30; // [sp+70h] [bp-5Ch]@1
  int v31; // [sp+74h] [bp-58h]@1
  int v32; // [sp+78h] [bp-54h]@1
  int v33; // [sp+7Ch] [bp-50h]@1
  int v34; // [sp+80h] [bp-4Ch]@1
  int v35; // [sp+84h] [bp-48h]@1
  int v36; // [sp+88h] [bp-44h]@1
  int v37; // [sp+8Ch] [bp-40h]@1
  int v38; // [sp+90h] [bp-3Ch]@1
  int v39; // [sp+94h] [bp-38h]@1
  int v40; // [sp+98h] [bp-34h]@1
  int v41; // [sp+9Ch] [bp-30h]@1
  int v42; // [sp+A0h] [bp-2Ch]@1
  int v43; // [sp+A4h] [bp-28h]@1
  int v44; // [sp+A8h] [bp-24h]@1
  int v45; // [sp+ACh] [bp-20h]@1

  v7 = *(_DWORD *)(sub_6F95DB50(a5 + 108) + 8);
  v22 = *(_DWORD *)(v7 + 148);
  v23 = *(_DWORD *)(v7 + 152);
  v24 = *(_DWORD *)(v7 + 156);
  v25 = *(_DWORD *)(v7 + 160);
  v26 = *(_DWORD *)(v7 + 164);
  v27 = *(_DWORD *)(v7 + 168);
  v28 = *(_DWORD *)(v7 + 172);
  v29 = *(_DWORD *)(v7 + 176);
  v30 = *(_DWORD *)(v7 + 180);
  v31 = *(_DWORD *)(v7 + 184);
  v32 = *(_DWORD *)(v7 + 188);
  v33 = *(_DWORD *)(v7 + 192);
  v34 = *(_DWORD *)(v7 + 100);
  v35 = *(_DWORD *)(v7 + 104);
  v36 = *(_DWORD *)(v7 + 108);
  v37 = *(_DWORD *)(v7 + 112);
  v8 = *(_DWORD *)(v7 + 116);
  v21 = 0;
  v38 = v8;
  v39 = *(_DWORD *)(v7 + 120);
  v40 = *(_DWORD *)(v7 + 124);
  v41 = *(_DWORD *)(v7 + 128);
  v42 = *(_DWORD *)(v7 + 132);
  v43 = *(_DWORD *)(v7 + 136);
  v9 = *(_DWORD *)(v7 + 140);
  v45 = *(_DWORD *)(v7 + 144);
  v44 = v9;
  v11 = sub_6F8CC520(a1, a2, a3, a4, &v20, (int)&v22, 0xCu, a5, &v21);
  v12 = v11;
  if ( v21 )
    *a6 |= 4u;
  else
    *(_DWORD *)(a7 + 16) = v20;
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
