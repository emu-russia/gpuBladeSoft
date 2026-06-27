int __cdecl sub_6F90FBA0(int a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9, int *a10, int a11)
{
  int v11; // edx@1
  int (__thiscall *v12)(int *, int, int, int, int, _DWORD, int, _DWORD *, int *); // eax@2
  int v13; // edx@2
  int (__thiscall *v15)(int *, int, int, int, int, _DWORD, int, _DWORD *, char **); // eax@4
  int v16; // edx@4
  void (__cdecl *v17)(int); // eax@7
  int v18; // [sp+20h] [bp-88h]@1
  int v19; // [sp+24h] [bp-84h]@2
  int v20; // [sp+28h] [bp-80h]@2
  int v21; // [sp+2Ch] [bp-7Ch]@2
  int v22; // [sp+30h] [bp-78h]@2
  int v23; // [sp+34h] [bp-74h]@2
  _DWORD *v24; // [sp+38h] [bp-70h]@2
  int *v25; // [sp+3Ch] [bp-6Ch]@2
  int v26; // [sp+40h] [bp-68h]@1
  int v27; // [sp+44h] [bp-64h]@1
  int v28; // [sp+48h] [bp-60h]@1
  char v29; // [sp+4Ch] [bp-5Ch]@1
  int v30; // [sp+50h] [bp-58h]@2
  int (__cdecl *v31)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-44h]@1
  int *v32; // [sp+68h] [bp-40h]@1
  char *v33; // [sp+6Ch] [bp-3Ch]@1
  int (*v34)(); // [sp+70h] [bp-38h]@1
  int *v35; // [sp+74h] [bp-34h]@1
  char *v36; // [sp+88h] [bp-20h]@4
  int v37; // [sp+8Ch] [bp-1Ch]@4
  char v38; // [sp+90h] [bp-18h]@4
  char v39; // [sp+A0h] [bp-8h]@1

  v33 = &v39;
  v31 = sub_6F962A50;
  v27 = a3;
  v28 = a7;
  v26 = a4;
  v32 = &dword_6F96B274;
  v34 = sub_6F90FD30;
  v35 = &v18;
  sub_6F8A1A60((int *)&v29);
  v11 = *a2;
  if ( a10 )
  {
    v25 = a10;
    v24 = a9;
    v22 = (unsigned __int8)v28;
    v23 = a8;
    v20 = a5;
    v21 = a6;
    v18 = v27;
    v19 = v26;
    v12 = *(int (__thiscall **)(int *, int, int, int, int, _DWORD, int, _DWORD *, int *))(v11 + 8);
    v30 = -1;
    v28 = v12(a2, v27, v26, a5, a6, (unsigned __int8)v28, a8, a9, a10);
    v27 = v13;
  }
  else
  {
    v37 = 0;
    v36 = &v38;
    v38 = 0;
    v25 = (int *)&v36;
    v24 = a9;
    v22 = (unsigned __int8)v28;
    v23 = a8;
    v20 = a5;
    v21 = a6;
    v18 = v27;
    v19 = v26;
    v15 = *(int (__thiscall **)(int *, int, int, int, int, _DWORD, int, _DWORD *, char **))(v11 + 12);
    v30 = 1;
    v28 = v15(a2, v27, v26, a5, a6, (unsigned __int8)v28, a8, a9, &v36);
    v27 = v16;
    if ( !*a9 )
    {
      v17 = *(void (__cdecl **)(int))(a11 + 24);
      if ( v17 )
        v17(a11);
      *(_DWORD *)a11 = a11 + 8;
      LOBYTE(v20) = 0;
      v30 = 1;
      sub_6F93A6C0(a11, v36, &v36[v37], v20);
      *(_DWORD *)(a11 + 24) = sub_6F911930;
    }
    if ( v36 != &v38 )
      j_free_1(v36);
  }
  sub_6F8A1AD0((int *)&v29);
  return v28;
}
