signed int __cdecl sub_6F7683C0(int *a1, int a2, int a3, char a4)
{
  int v4; // ebx@2
  int *v5; // ebp@3
  int v6; // esi@3
  _DWORD *v8; // edx@9
  int v9; // eax@11
  void (__cdecl *v10)(int, _DWORD, int); // eax@12
  _DWORD *v11; // ST14_4@13
  int v12; // edx@14
  int *v13; // ecx@17
  int v14; // ebx@18
  void (__cdecl *v15)(int); // eax@18
  int v16; // ST18_4@19
  int v17; // eax@22
  void (__cdecl *v18)(int, _DWORD, int *); // eax@23
  int v19; // ST1C_4@24
  int *v20; // ebp@26
  int v21; // eax@30
  char *v22; // eax@31
  int v23; // edi@33
  int v24; // ST18_4@34
  int v25; // esi@36
  signed int v26; // eax@36
  int v27; // [sp+14h] [bp-F8h]@1
  int v28; // [sp+1Ch] [bp-F0h]@14
  int v29; // [sp+1Ch] [bp-F0h]@29
  int **v30; // [sp+1Ch] [bp-F0h]@36
  int v31; // [sp+20h] [bp-ECh]@9
  int v32; // [sp+24h] [bp-E8h]@22
  char v33; // [sp+28h] [bp-E4h]@9
  int *v34; // [sp+50h] [bp-BCh]@9
  int v35; // [sp+98h] [bp-74h]@9
  int v36; // [sp+9Ch] [bp-70h]@32
  int v37; // [sp+A0h] [bp-6Ch]@32
  int v38; // [sp+A4h] [bp-68h]@32
  int v39; // [sp+A8h] [bp-64h]@32
  int v40; // [sp+ACh] [bp-60h]@32
  int v41; // [sp+B0h] [bp-5Ch]@32
  int v42; // [sp+B4h] [bp-58h]@31
  int v43; // [sp+B8h] [bp-54h]@31
  char *v44; // [sp+ECh] [bp-20h]@9

  v27 = 6;
  if ( !a1 )
    return v27;
  v4 = *a1;
  if ( !*a1 )
    return v27;
  v5 = *(int **)v4;
  v6 = *(_DWORD *)(v4 + 4);
  if ( !*(_DWORD *)v4 || !v6 )
    return 6;
  if ( (_UNKNOWN *)v6 == &unk_6FB55680 )
    return 0;
  if ( !*(_DWORD *)(v6 + 28) )
    return v27;
  memset(&v34, 0, 0xA0u);
  v44 = &v33;
  v34 = v5;
  memset(&v33, 0, 0x28u);
  v35 = *(_DWORD *)(v6 + 4);
  v8 = sub_6F773A50(*v5, 52, &v31);
  v27 = v31;
  if ( v31 )
    return v27;
  *v8 = v5;
  v8[1] = &unk_6FB55680;
  v8[2] = 1651078259;
  if ( a3 )
  {
    v9 = *(_DWORD *)(v4 + 4);
    if ( v9 )
    {
      v10 = *(void (__cdecl **)(int, _DWORD, int))(v9 + 20);
      if ( v10 )
      {
        v11 = v8;
        v10(v4, 0, a3);
        v8 = v11;
      }
    }
    v28 = (int)v8;
    v27 = (*(int (__cdecl **)(int, int *))(v6 + 28))(v4, (int *)&v34);
    v12 = v28;
    if ( !v27 )
    {
      v27 = sub_6F76DFA0(*(_DWORD *)v4, (int)&v34, a2);
      v12 = v28;
      if ( a4 )
        goto LABEL_25;
      goto LABEL_22;
    }
  }
  else
  {
    v29 = (int)v8;
    v27 = (*(int (__cdecl **)(int, int *))(v6 + 28))(v4, (int *)&v34);
    v12 = v29;
    if ( !v27 )
    {
      v21 = sub_6F76DFA0(*(_DWORD *)v4, (int)&v34, a2);
      v12 = v29;
      v27 = v21;
      goto LABEL_25;
    }
  }
  if ( a4 || !a3 )
    goto LABEL_17;
LABEL_22:
  v31 = -*(_DWORD *)a3;
  v32 = -*(_DWORD *)(a3 + 4);
  v17 = *(_DWORD *)(v4 + 4);
  if ( v17 )
  {
    v18 = *(void (__cdecl **)(int, _DWORD, int *))(v17 + 20);
    if ( v18 )
    {
      v19 = v12;
      v18(v4, 0, &v31);
      v12 = v19;
    }
  }
LABEL_25:
  if ( v27 )
  {
LABEL_17:
    v13 = *(int **)v12;
    goto LABEL_18;
  }
  v20 = *(int **)v12;
  if ( v35 == 1651078259 )
  {
    *(_DWORD *)(v12 + 20) = v42;
    *(_DWORD *)(v12 + 24) = v43;
    v22 = v44;
    if ( v44[4] & 1 )
    {
      *(_DWORD *)(v12 + 28) = v36;
      *(_DWORD *)(v12 + 32) = v37;
      *(_DWORD *)(v12 + 36) = v38;
      *(_DWORD *)(v12 + 40) = v39;
      *(_DWORD *)(v12 + 44) = v40;
      *(_DWORD *)(v12 + 48) = v41;
      *((_DWORD *)v22 + 1) &= 0xFFFFFFFE;
    }
    else
    {
      v25 = v12 + 28;
      v30 = (int **)v12;
      sub_6F7C8020(v12 + 28);
      v26 = sub_6F7C8060(v20, (int)&v36, v25);
      v12 = (int)v30;
      if ( v26 )
      {
        v13 = *v30;
        v27 = v26;
        goto LABEL_18;
      }
    }
    v23 = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(v12 + 12) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v12 + 16) = v23;
    if ( a4 )
    {
      v24 = v12;
      sub_6F768380(v4);
      v12 = v24;
    }
    *a1 = v12;
    return v27;
  }
  v13 = *(int **)v12;
  v27 = 18;
LABEL_18:
  v14 = *v13;
  v15 = *(void (__cdecl **)(int))(*(_DWORD *)(v12 + 4) + 12);
  if ( v15 )
  {
    v16 = v12;
    v15(v12);
    v12 = v16;
  }
  sub_6F773D90(v14, v12);
  return v27;
}
