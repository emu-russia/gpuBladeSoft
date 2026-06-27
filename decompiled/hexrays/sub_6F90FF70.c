int __cdecl sub_6F90FF70(int a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, _DWORD *a9, int *a10, int a11)
{
  int v11; // edx@1
  int (__thiscall *v12)(int *, int, int, int, int, _DWORD, int, _DWORD *, int *); // eax@2
  int v13; // edx@2
  int (__thiscall *v15)(int *, int, int, int, int, _DWORD, int, _DWORD *, __int16 **); // eax@4
  unsigned __int16 v16; // dx@4
  int v17; // eax@4
  void (__cdecl *v18)(int); // eax@7
  int v19; // [sp+20h] [bp-98h]@1
  int v20; // [sp+24h] [bp-94h]@2
  int v21; // [sp+28h] [bp-90h]@2
  int v22; // [sp+2Ch] [bp-8Ch]@2
  int v23; // [sp+30h] [bp-88h]@2
  int v24; // [sp+34h] [bp-84h]@2
  _DWORD *v25; // [sp+38h] [bp-80h]@2
  int *v26; // [sp+3Ch] [bp-7Ch]@2
  int v27; // [sp+48h] [bp-70h]@1
  int v28; // [sp+4Ch] [bp-6Ch]@1
  int v29; // [sp+50h] [bp-68h]@1
  char v30; // [sp+54h] [bp-64h]@1
  int v31; // [sp+58h] [bp-60h]@2
  int (__cdecl *v32)(int, int, __int64, void (**)(void), int *); // [sp+6Ch] [bp-4Ch]@1
  __int16 *v33; // [sp+70h] [bp-48h]@1
  char *v34; // [sp+74h] [bp-44h]@1
  int (*v35)(); // [sp+78h] [bp-40h]@1
  int *v36; // [sp+7Ch] [bp-3Ch]@1
  int v37; // [sp+88h] [bp-30h]@4
  int v38; // [sp+8Ch] [bp-2Ch]@4
  __int16 *v39; // [sp+98h] [bp-20h]@4
  int v40; // [sp+9Ch] [bp-1Ch]@4
  __int16 v41; // [sp+A0h] [bp-18h]@4
  char v42; // [sp+B0h] [bp-8h]@1

  v34 = &v42;
  v32 = sub_6F962A50;
  v27 = a3;
  v28 = a7;
  v29 = a4;
  v33 = &word_6F96B27A;
  v35 = sub_6F910121;
  v36 = &v19;
  sub_6F8A1A60((int *)&v30);
  v11 = *a2;
  if ( a10 )
  {
    v26 = a10;
    v25 = a9;
    v23 = (unsigned __int8)v28;
    v24 = a8;
    v21 = a5;
    v22 = a6;
    v19 = v27;
    v20 = v29;
    v12 = *(int (__thiscall **)(int *, int, int, int, int, _DWORD, int, _DWORD *, int *))(v11 + 8);
    v31 = -1;
    v29 = v12(a2, v27, v29, a5, a6, (unsigned __int8)v28, a8, a9, a10);
    v28 = v13;
  }
  else
  {
    v40 = 0;
    v39 = &v41;
    v41 = 0;
    v26 = (int *)&v39;
    v25 = a9;
    v23 = (unsigned __int8)v28;
    v24 = a8;
    v21 = a5;
    v22 = a6;
    v19 = v27;
    v20 = v29;
    v15 = *(int (__thiscall **)(int *, int, int, int, int, _DWORD, int, _DWORD *, __int16 **))(v11 + 12);
    v31 = 1;
    v27 = v15(a2, v27, v29, a5, a6, (unsigned __int8)v28, a8, a9, &v39);
    v37 = v27;
    v38 = v16;
    HIWORD(v17) = HIWORD(v29);
    LOWORD(v17) = 0;
    v28 = v16 | v17;
    if ( !*a9 )
    {
      v18 = *(void (__cdecl **)(int))(a11 + 24);
      if ( v18 )
        v18(a11);
      *(_DWORD *)a11 = a11 + 8;
      LOBYTE(v21) = 0;
      v31 = 1;
      sub_6F93D4F0((void **)a11, v39, (int)&v39[v40], v21);
      *(_DWORD *)(a11 + 24) = sub_6F9119A0;
    }
    v29 = v27;
    if ( v39 != &v41 )
      j_free_1(v39);
  }
  sub_6F8A1AD0((int *)&v30);
  return v29;
}
