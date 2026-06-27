char *__thiscall sub_6F923210(char *this, double a2)
{
  int *v2; // eax@2
  unsigned __int16 v3; // ax@4
  int v4; // ecx@5
  int v5; // ebx@5
  void (__thiscall *v6)(int *, int, int, char *, int, _DWORD, _DWORD); // eax@5
  char v7; // dl@5
  int v8; // ecx@6
  int v9; // ecx@9
  int (*v10)(void); // eax@10
  int *v12; // ecx@13
  int v13; // eax@14
  int (__stdcall *v14)(signed int); // eax@14
  char *v15; // edi@14
  int v16; // ebx@14
  int v17; // edx@14
  int v18; // [sp+18h] [bp-98h]@1
  int v19; // [sp+1Ch] [bp-94h]@5
  char *v20; // [sp+20h] [bp-90h]@5
  int v21; // [sp+24h] [bp-8Ch]@5
  double v22; // [sp+28h] [bp-88h]@5
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
  v34 = &v18;
  v25 = (int *)&v28;
  v24 = a2;
  v30 = sub_6F962A50;
  v31 = dword_6F96BC14;
  v32 = &v37;
  v33 = sub_6F9233C4;
  sub_6F8A1A60((int *)&v28);
  v29 = -1;
  sub_6F922AD0((int)&v35, v27);
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
    if ( v26[118] )
    {
      v3 = *((_WORD *)v26 + 58);
    }
    else
    {
      v12 = (int *)*((_DWORD *)v26 + 31);
      if ( !v12 )
      {
        v29 = 1;
        sub_6F95AA30();
      }
      v13 = *v12;
      v18 = 32;
      v14 = *(int (__stdcall **)(signed int))(v13 + 40);
      v29 = 1;
      v3 = v14(32);
      v15 = v27;
      v16 = (int)v26;
      v17 = *(_DWORD *)v27;
      *((_WORD *)v26 + 58) = v3;
      *(_BYTE *)(v16 + 118) = 1;
      v26 = &v15[*(_DWORD *)(v17 - 12)];
    }
    v4 = *((_DWORD *)v26 + 30);
    v5 = *v23;
    v21 = v3;
    v20 = v26;
    v18 = v4;
    v22 = v24;
    v19 = v4 == 0;
    v6 = *(void (__thiscall **)(int *, int, int, char *, int, _DWORD, _DWORD))(v5 + 28);
    v29 = 1;
    v6(v23, v4, v19, v26, v21, LODWORD(v24), HIDWORD(v24));
    if ( v7 )
    {
      v8 = (int)&v27[*(_DWORD *)(*(_DWORD *)v27 - 12)];
      v18 = *(_DWORD *)(v8 + 20) | 1;
      v29 = 2;
      sub_6F958B40(v8, v18);
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
          sub_6F958B40(
            (int)&v36[*(_DWORD *)(*(_DWORD *)v36 - 12)],
            *(_DWORD *)&v36[*(_DWORD *)(*(_DWORD *)v36 - 12) + 20] | 1);
      }
    }
  }
  sub_6F8A1AD0(v25);
  return v27;
}
