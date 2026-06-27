char *__thiscall sub_6F9072C0(char *this, int a2, int a3)
{
  int *v3; // eax@2
  signed int v4; // ecx@4
  int v5; // edx@5
  int v6; // ebx@5
  void (__thiscall *v7)(int *, int, int, char *, signed int, int, int); // eax@5
  char v8; // dl@5
  int v9; // ecx@6
  int v10; // ecx@9
  int (*v11)(void); // eax@10
  char v13; // al@15
  int v14; // esi@16
  char *v15; // edi@16
  int v16; // eax@16
  int (__stdcall *v17)(unsigned __int8); // edx@17
  int v18; // [sp+18h] [bp-98h]@1
  int v19; // [sp+1Ch] [bp-94h]@5
  char *v20; // [sp+20h] [bp-90h]@5
  int v21; // [sp+24h] [bp-8Ch]@5
  int v22; // [sp+28h] [bp-88h]@5
  int v23; // [sp+2Ch] [bp-84h]@5
  int v24; // [sp+38h] [bp-78h]@1
  int v25; // [sp+3Ch] [bp-74h]@1
  unsigned int v26; // [sp+40h] [bp-70h]@13
  int *v27; // [sp+44h] [bp-6Ch]@1
  int *v28; // [sp+48h] [bp-68h]@2
  char *v29; // [sp+4Ch] [bp-64h]@2
  char *v30; // [sp+50h] [bp-60h]@1
  char v31; // [sp+54h] [bp-5Ch]@1
  int v32; // [sp+58h] [bp-58h]@1
  int (__cdecl *v33)(int, int, __int64, void (**)(void), int *); // [sp+6Ch] [bp-44h]@1
  int *v34; // [sp+70h] [bp-40h]@1
  char *v35; // [sp+74h] [bp-3Ch]@1
  int (*v36)(); // [sp+78h] [bp-38h]@1
  int *v37; // [sp+7Ch] [bp-34h]@1
  char v38; // [sp+90h] [bp-20h]@1
  char *v39; // [sp+94h] [bp-1Ch]@7
  char v40; // [sp+98h] [bp-18h]@1

  v30 = this;
  v37 = &v18;
  v24 = a2;
  v25 = a3;
  v27 = (int *)&v31;
  v33 = sub_6F962A50;
  v34 = dword_6F96B9EC;
  v35 = &v40;
  v36 = sub_6F9074D6;
  sub_6F8A1A60((int *)&v31);
  v32 = -1;
  sub_6F906000((int)&v38, v30);
  if ( v38 )
  {
    v3 = *(int **)&v30[*(_DWORD *)(*(_DWORD *)v30 - 12) + 128];
    v29 = &v30[*(_DWORD *)(*(_DWORD *)v30 - 12)];
    v28 = v3;
    if ( !v3 )
    {
      v32 = 1;
      sub_6F95AA30();
    }
    if ( v29[117] )
    {
      v4 = v29[116];
    }
    else
    {
      v26 = *((_DWORD *)v29 + 31);
      if ( !v26 )
      {
        v32 = 1;
        sub_6F95AA30();
      }
      if ( *(_BYTE *)(v26 + 28) )
      {
        v4 = *(_BYTE *)(v26 + 61);
        v13 = *(_BYTE *)(v26 + 61);
      }
      else
      {
        v32 = 1;
        sub_6F8C33B0(v26);
        v4 = 32;
        v17 = *(int (__stdcall **)(unsigned __int8))(*(_DWORD *)v26 + 24);
        v13 = 32;
        if ( v17 != sub_6F8C3660 )
        {
          v13 = ((int (__thiscall *)(unsigned int, signed int))v17)(v26, 32);
          v4 = v13;
        }
      }
      v14 = (int)v29;
      v15 = v30;
      v29[116] = v13;
      v16 = *(_DWORD *)v15;
      *(_BYTE *)(v14 + 117) = 1;
      v29 = &v15[*(_DWORD *)(v16 - 12)];
    }
    v5 = *((_DWORD *)v29 + 30);
    v6 = *v28;
    v22 = v24;
    v21 = v4;
    v23 = v25;
    v18 = v5;
    v20 = v29;
    v19 = v5 == 0;
    v7 = *(void (__thiscall **)(int *, int, int, char *, signed int, int, int))(v6 + 20);
    v32 = 1;
    v7(v28, v5, v19, v29, v4, v24, v25);
    if ( v8 )
    {
      v9 = (int)&v30[*(_DWORD *)(*(_DWORD *)v30 - 12)];
      v18 = *(_DWORD *)(v9 + 20) | 1;
      v32 = 2;
      sub_6F9581E0(v9, v18);
    }
  }
  v29 = &v39[*(_DWORD *)(*(_DWORD *)v39 - 12)];
  if ( v29[13] & 0x20 )
  {
    if ( !sub_6F95AC80() )
    {
      v10 = *((_DWORD *)v29 + 30);
      if ( v10 )
      {
        v11 = *(int (**)(void))(*(_DWORD *)v10 + 24);
        v32 = 0;
        if ( v11() == -1 )
          sub_6F9581E0(
            (int)&v39[*(_DWORD *)(*(_DWORD *)v39 - 12)],
            *(_DWORD *)&v39[*(_DWORD *)(*(_DWORD *)v39 - 12) + 20] | 1);
      }
    }
  }
  sub_6F8A1AD0(v27);
  return v30;
}
