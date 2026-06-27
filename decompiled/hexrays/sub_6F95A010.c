char *__cdecl sub_6F95A010(char *a1, int a2, int a3)
{
  int v3; // eax@2
  char *v4; // esi@2
  int v5; // edi@2
  bool v6; // zf@4
  int v7; // ecx@9
  _BYTE *v8; // eax@9
  int v9; // eax@10
  int (__stdcall *v10)(char *); // eax@10
  int v11; // ecx@15
  int (*v12)(void); // eax@16
  int v14; // eax@19
  int (__stdcall *v15)(int, int); // eax@19
  int v16; // eax@19
  char *v17; // ecx@19
  int v18; // eax@22
  int (__stdcall *v19)(int, int); // eax@22
  int v20; // eax@22
  int v21; // edx@22
  char *v22; // ecx@22
  int v23; // ecx@31
  _BYTE *v24; // eax@31
  int v25; // eax@32
  int (__stdcall *v26)(char *); // eax@32
  char *v27; // edx@37
  int (__stdcall *v28)(unsigned __int8); // eax@40
  char *v29; // ebx@45
  int (__stdcall *v30)(unsigned __int8); // eax@47
  char *v31; // [sp+Ch] [bp-88h]@1
  int v32; // [sp+10h] [bp-84h]@19
  unsigned int v33; // [sp+1Ch] [bp-78h]@34
  int v34; // [sp+20h] [bp-74h]@3
  unsigned int v35; // [sp+24h] [bp-70h]@2
  int v36; // [sp+28h] [bp-6Ch]@4
  int v37; // [sp+2Ch] [bp-68h]@3
  int *v38; // [sp+30h] [bp-64h]@1
  char *v39; // [sp+34h] [bp-60h]@2
  char v40; // [sp+38h] [bp-5Ch]@1
  int v41; // [sp+3Ch] [bp-58h]@1
  int (__cdecl *v42)(int, int, __int64, void (**)(void), int *); // [sp+50h] [bp-44h]@1
  int *v43; // [sp+54h] [bp-40h]@1
  char *v44; // [sp+58h] [bp-3Ch]@1
  int (*v45)(); // [sp+5Ch] [bp-38h]@1
  int *v46; // [sp+60h] [bp-34h]@1
  char v47; // [sp+74h] [bp-20h]@1
  char *v48; // [sp+78h] [bp-1Ch]@13
  char v49; // [sp+7Ch] [bp-18h]@1

  v44 = &v49;
  v46 = (int *)&v31;
  v38 = (int *)&v40;
  v42 = sub_6F962A50;
  v43 = dword_6F96B97C;
  v45 = sub_6F95A489;
  sub_6F8A1A60((int *)&v40);
  v41 = -1;
  sub_6F906000((int)&v47, a1);
  if ( v47 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)a1 - 12);
    v4 = &a1[v3];
    v5 = *(_DWORD *)&a1[v3 + 8];
    v39 = &a1[v3];
    v35 = v5;
    if ( a3 >= v5 )
    {
      v14 = **((_DWORD **)v39 + 30);
      v32 = a3;
      v31 = (char *)a2;
      v15 = *(int (__stdcall **)(int, int))(v14 + 48);
      v41 = 2;
      v16 = v15(a2, a3);
      v17 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
      v39 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
      if ( a3 != v16 )
      {
        v39 = (char *)*((_DWORD *)v17 + 5);
        sub_6F9581E0((int)v17, (unsigned int)v39 | 1);
        v39 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
        *((_DWORD *)v39 + 2) = 0;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    v37 = *((_DWORD *)v4 + 3);
    v34 = v37 & 0xB0;
    if ( v34 == 32 )
    {
      if ( *((_DWORD *)v39 + 5) )
      {
LABEL_12:
        *((_DWORD *)v39 + 2) = 0;
        goto LABEL_13;
      }
    }
    else
    {
      v6 = v4[117] == 0;
      v36 = v5 - a3;
      if ( v6 )
      {
        v33 = *((_DWORD *)v39 + 31);
        if ( !v33 )
        {
          v41 = 2;
          sub_6F95AA30();
        }
        if ( *(_BYTE *)(v33 + 28) )
        {
          LOBYTE(v37) = *(_BYTE *)(v33 + 61);
        }
        else
        {
          v41 = 2;
          sub_6F8C33B0(v33);
          LOBYTE(v37) = 32;
          v28 = *(int (__stdcall **)(unsigned __int8))(*(_DWORD *)v33 + 24);
          if ( v28 != sub_6F8C3660 )
            LOBYTE(v37) = ((int (__thiscall *)(unsigned int, signed int))v28)(v33, 32);
        }
        v27 = v39;
        v39[116] = v37;
        v27[117] = 1;
        v3 = *(_DWORD *)(*(_DWORD *)a1 - 12);
      }
      else
      {
        LOBYTE(v37) = v4[116];
      }
      v39 = (char *)(unsigned __int8)v37;
      do
      {
        v7 = *(_DWORD *)&a1[v3 + 120];
        v8 = *(_BYTE **)(v7 + 20);
        if ( (unsigned int)v8 < *(_DWORD *)(v7 + 24) )
        {
          *v8 = v37;
          ++*(_DWORD *)(v7 + 20);
        }
        else
        {
          v9 = *(_DWORD *)v7;
          v31 = v39;
          v10 = *(int (__stdcall **)(char *))(v9 + 52);
          v41 = 2;
          if ( v10(v39) == -1 )
          {
            sub_6F9581E0(
              (int)&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)],
              *(_DWORD *)&a1[*(_DWORD *)(*(_DWORD *)a1 - 12) + 20] | 1);
            v39 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
            if ( !*((_DWORD *)v39 + 5) )
              goto LABEL_22;
            goto LABEL_12;
          }
        }
        v6 = v36-- == 1;
        v3 = *(_DWORD *)(*(_DWORD *)a1 - 12);
      }
      while ( !v6 );
      v39 = &a1[v3];
      if ( *(_DWORD *)&a1[v3 + 20] )
        goto LABEL_12;
    }
LABEL_22:
    v18 = **((_DWORD **)v39 + 30);
    v32 = a3;
    v31 = (char *)a2;
    v19 = *(int (__stdcall **)(int, int))(v18 + 48);
    v41 = 2;
    v20 = v19(a2, a3);
    v21 = *(_DWORD *)(*(_DWORD *)a1 - 12);
    v22 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
    v39 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
    if ( a3 != v20 )
    {
      v39 = (char *)*((_DWORD *)v22 + 5);
      sub_6F9581E0((int)v22, (unsigned int)v39 | 1);
      v21 = *(_DWORD *)(*(_DWORD *)a1 - 12);
      v39 = &a1[v21];
    }
    if ( v34 == 32 && !*((_DWORD *)v39 + 5) )
    {
      v6 = v39[117] == 0;
      v36 = v35 - a3;
      if ( v6 )
      {
        v35 = *((_DWORD *)v39 + 31);
        if ( !v35 )
        {
          v41 = 2;
          sub_6F95AA30();
        }
        if ( *(_BYTE *)(v35 + 28) )
        {
          LOBYTE(v37) = *(_BYTE *)(v35 + 61);
        }
        else
        {
          v41 = 2;
          sub_6F8C33B0(v35);
          LOBYTE(v37) = 32;
          v30 = *(int (__stdcall **)(unsigned __int8))(*(_DWORD *)v35 + 24);
          if ( v30 != sub_6F8C3660 )
            LOBYTE(v37) = ((int (__thiscall *)(unsigned int, signed int))v30)(v35, 32);
        }
        v29 = v39;
        v39[116] = v37;
        v29[117] = 1;
        v21 = *(_DWORD *)(*(_DWORD *)a1 - 12);
      }
      else
      {
        LOBYTE(v37) = v39[116];
      }
      v39 = (char *)(unsigned __int8)v37;
      do
      {
        v23 = *(_DWORD *)&a1[v21 + 120];
        v24 = *(_BYTE **)(v23 + 20);
        if ( (unsigned int)v24 < *(_DWORD *)(v23 + 24) )
        {
          *v24 = v37;
          ++*(_DWORD *)(v23 + 20);
        }
        else
        {
          v25 = *(_DWORD *)v23;
          v31 = v39;
          v26 = *(int (__stdcall **)(char *))(v25 + 52);
          v41 = 2;
          if ( v26(v39) == -1 )
          {
            sub_6F9581E0(
              (int)&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)],
              *(_DWORD *)&a1[*(_DWORD *)(*(_DWORD *)a1 - 12) + 20] | 1);
            v39 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
            goto LABEL_12;
          }
        }
        v6 = v36-- == 1;
        v21 = *(_DWORD *)(*(_DWORD *)a1 - 12);
      }
      while ( !v6 );
      v39 = &a1[v21];
    }
    goto LABEL_12;
  }
LABEL_13:
  v39 = &v48[*(_DWORD *)(*(_DWORD *)v48 - 12)];
  if ( v39[13] & 0x20 )
  {
    if ( !sub_6F95AC80() )
    {
      v11 = *((_DWORD *)v39 + 30);
      if ( v11 )
      {
        v12 = *(int (**)(void))(*(_DWORD *)v11 + 24);
        v41 = 0;
        if ( v12() == -1 )
          sub_6F9581E0(
            (int)&v48[*(_DWORD *)(*(_DWORD *)v48 - 12)],
            *(_DWORD *)&v48[*(_DWORD *)(*(_DWORD *)v48 - 12) + 20] | 1);
      }
    }
  }
  sub_6F8A1AD0(v38);
  return a1;
}
