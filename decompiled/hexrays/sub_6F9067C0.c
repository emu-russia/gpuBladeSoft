char *__thiscall sub_6F9067C0(char *this, double a2)
{
  int *v2; // eax@2
  signed int v3; // ecx@4
  int v4; // edx@5
  int v5; // ebx@5
  void (__thiscall *v6)(int *, int, int, char *, signed int, _DWORD, _DWORD); // eax@5
  char v7; // dl@5
  int v8; // ecx@6
  int v9; // ecx@9
  int (*v10)(void); // eax@10
  char v12; // al@15
  int v13; // ebx@16
  char *v14; // edi@16
  int v15; // eax@16
  int (__stdcall *v16)(unsigned __int8); // edx@17
  int v17; // [sp+18h] [bp-98h]@1
  int v18; // [sp+1Ch] [bp-94h]@5
  char *v19; // [sp+20h] [bp-90h]@5
  int v20; // [sp+24h] [bp-8Ch]@5
  double v21; // [sp+28h] [bp-88h]@5
  unsigned int v22; // [sp+38h] [bp-78h]@13
  int *v23; // [sp+3Ch] [bp-74h]@2
  double v24; // [sp+40h] [bp-70h]@1
  int *v25; // [sp+48h] [bp-68h]@1
  char *v26; // [sp+4Ch] [bp-64h]@2
  char *v27; // [sp+50h] [bp-60h]@1
  char v28; // [sp+54h] [bp-5Ch]@1
  int v29; // [sp+58h] [bp-58h]@1
  int (__cdecl *v30)(int, int, __int64, void (**)(void), int *); // [sp+6Ch] [bp-44h]@1
  int *v31; // [sp+70h] [bp-40h]@1
  char *v32; // [sp+74h] [bp-3Ch]@1
  int (*v33)(); // [sp+78h] [bp-38h]@1
  int *v34; // [sp+7Ch] [bp-34h]@1
  char v35; // [sp+90h] [bp-20h]@1
  char *v36; // [sp+94h] [bp-1Ch]@7
  char v37; // [sp+98h] [bp-18h]@1

  v27 = this;
  v34 = &v17;
  v25 = (int *)&v28;
  v24 = a2;
  v30 = sub_6F962A50;
  v31 = dword_6F96BA24;
  v32 = &v37;
  v33 = sub_6F9069B6;
  sub_6F8A1A60((int *)&v28);
  v29 = -1;
  sub_6F906000((int)&v35, v27);
  if ( v35 )
  {
    v2 = *(int **)&v27[*(_DWORD *)(*(_DWORD *)v27 - 12) + 128];
    v26 = &v27[*(_DWORD *)(*(_DWORD *)v27 - 12)];
    v23 = v2;
    if ( !v2 )
    {
      v29 = 1;
      sub_6F95AA30();
    }
    if ( v26[117] )
    {
      v3 = v26[116];
    }
    else
    {
      v22 = *((_DWORD *)v26 + 31);
      if ( !v22 )
      {
        v29 = 1;
        sub_6F95AA30();
      }
      if ( *(_BYTE *)(v22 + 28) )
      {
        v3 = *(_BYTE *)(v22 + 61);
        v12 = *(_BYTE *)(v22 + 61);
      }
      else
      {
        v29 = 1;
        sub_6F8C33B0(v22);
        v3 = 32;
        v16 = *(int (__stdcall **)(unsigned __int8))(*(_DWORD *)v22 + 24);
        v12 = 32;
        if ( v16 != sub_6F8C3660 )
        {
          v12 = ((int (__thiscall *)(unsigned int, signed int))v16)(v22, 32);
          v3 = v12;
        }
      }
      v13 = (int)v26;
      v14 = v27;
      v26[116] = v12;
      v15 = *(_DWORD *)v14;
      *(_BYTE *)(v13 + 117) = 1;
      v26 = &v14[*(_DWORD *)(v15 - 12)];
    }
    v4 = *((_DWORD *)v26 + 30);
    v5 = *v23;
    v20 = v3;
    v19 = v26;
    v21 = v24;
    v17 = v4;
    v18 = v4 == 0;
    v6 = *(void (__thiscall **)(int *, int, int, char *, signed int, _DWORD, _DWORD))(v5 + 28);
    v29 = 1;
    v6(v23, v4, v18, v26, v3, LODWORD(v24), HIDWORD(v24));
    if ( v7 )
    {
      v8 = (int)&v27[*(_DWORD *)(*(_DWORD *)v27 - 12)];
      v17 = *(_DWORD *)(v8 + 20) | 1;
      v29 = 2;
      sub_6F9581E0(v8, v17);
    }
  }
  v26 = &v36[*(_DWORD *)(*(_DWORD *)v36 - 12)];
  if ( v26[13] & 0x20 )
  {
    if ( !sub_6F95AC80() )
    {
      v9 = *((_DWORD *)v26 + 30);
      if ( v9 )
      {
        v10 = *(int (**)(void))(*(_DWORD *)v9 + 24);
        v29 = 0;
        if ( v10() == -1 )
          sub_6F9581E0(
            (int)&v36[*(_DWORD *)(*(_DWORD *)v36 - 12)],
            *(_DWORD *)&v36[*(_DWORD *)(*(_DWORD *)v36 - 12) + 20] | 1);
      }
    }
  }
  sub_6F8A1AD0(v25);
  return v27;
}
