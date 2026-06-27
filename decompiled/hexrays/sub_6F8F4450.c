int __stdcall sub_6F8F4450(int a1, int a2, int a3, __int16 a4, int a5, _DWORD *a6, int a7)
{
  int v7; // eax@1
  int v8; // edx@1
  int v9; // edx@1
  __int16 v10; // dx@1
  int v11; // ebx@1
  int v12; // ebp@1
  bool v13; // si@3
  bool v14; // cl@4
  __int16 *v16; // eax@9
  __int16 v17; // ax@10
  __int16 *v18; // eax@13
  __int16 v19; // ax@14
  bool v20; // [sp+43h] [bp-99h]@3
  int v21; // [sp+58h] [bp-84h]@1
  int v22; // [sp+5Ch] [bp-80h]@1
  int v23; // [sp+60h] [bp-7Ch]@1
  int v24; // [sp+64h] [bp-78h]@1
  int v25; // [sp+68h] [bp-74h]@1
  int v26; // [sp+6Ch] [bp-70h]@1
  int v27; // [sp+70h] [bp-6Ch]@1
  int v28; // [sp+74h] [bp-68h]@1
  int v29; // [sp+78h] [bp-64h]@1
  int v30; // [sp+7Ch] [bp-60h]@1
  int v31; // [sp+80h] [bp-5Ch]@1
  int v32; // [sp+84h] [bp-58h]@1
  int v33; // [sp+88h] [bp-54h]@1
  int v34; // [sp+8Ch] [bp-50h]@1
  int v35; // [sp+90h] [bp-4Ch]@1
  int v36; // [sp+94h] [bp-48h]@1
  int v37; // [sp+98h] [bp-44h]@1
  int v38; // [sp+9Ch] [bp-40h]@1
  int v39; // [sp+A0h] [bp-3Ch]@1
  int v40; // [sp+A4h] [bp-38h]@1
  int v41; // [sp+A8h] [bp-34h]@1
  int v42; // [sp+ACh] [bp-30h]@1
  int v43; // [sp+B0h] [bp-2Ch]@1
  int v44; // [sp+B4h] [bp-28h]@1
  int v45; // [sp+B8h] [bp-24h]@1
  int v46; // [sp+BCh] [bp-20h]@1

  v7 = *(_DWORD *)(sub_6F95DBB0(a5 + 108) + 8);
  v23 = *(_DWORD *)(v7 + 148);
  v24 = *(_DWORD *)(v7 + 152);
  v25 = *(_DWORD *)(v7 + 156);
  v26 = *(_DWORD *)(v7 + 160);
  v27 = *(_DWORD *)(v7 + 164);
  v28 = *(_DWORD *)(v7 + 168);
  v29 = *(_DWORD *)(v7 + 172);
  v30 = *(_DWORD *)(v7 + 176);
  v31 = *(_DWORD *)(v7 + 180);
  v32 = *(_DWORD *)(v7 + 184);
  v33 = *(_DWORD *)(v7 + 188);
  v34 = *(_DWORD *)(v7 + 192);
  v35 = *(_DWORD *)(v7 + 100);
  v36 = *(_DWORD *)(v7 + 104);
  v37 = *(_DWORD *)(v7 + 108);
  v38 = *(_DWORD *)(v7 + 112);
  v8 = *(_DWORD *)(v7 + 116);
  v22 = 0;
  v39 = v8;
  v40 = *(_DWORD *)(v7 + 120);
  v41 = *(_DWORD *)(v7 + 124);
  v42 = *(_DWORD *)(v7 + 128);
  v43 = *(_DWORD *)(v7 + 132);
  v44 = *(_DWORD *)(v7 + 136);
  v9 = *(_DWORD *)(v7 + 140);
  v46 = *(_DWORD *)(v7 + 144);
  v45 = v9;
  v11 = sub_6F8F5BD0(__PAIR__(a2, a1), a3, a4, &v21, (int)&v23, 0xCu, a5, &v22);
  v12 = v11;
  if ( v22 )
    *a6 |= 4u;
  else
    *(_DWORD *)(a7 + 16) = v21;
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
  v14 = a4 == -1;
  if ( a3 && a4 == -1 )
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
