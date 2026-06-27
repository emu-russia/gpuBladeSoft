int __cdecl sub_6F90F9C0(int a1, int *a2, int a3, int a4, char *a5, int a6, int a7, int a8, _DWORD *a9, int *a10, int a11)
{
  int v11; // eax@2
  int (__thiscall *v12)(int *, int, int, char *, int, _DWORD, int, _DWORD *, int *); // eax@2
  int v13; // edx@2
  int v15; // eax@4
  int (__thiscall *v16)(int *, int, int, char *, int, int, int, _DWORD *, _DWORD **); // eax@4
  int v17; // edx@4
  _DWORD *v18; // ecx@5
  void (__cdecl *v19)(int); // eax@8
  int v20; // eax@10
  int v21; // [sp+20h] [bp-78h]@1
  int v22; // [sp+24h] [bp-74h]@2
  char *v23; // [sp+28h] [bp-70h]@2
  int v24; // [sp+2Ch] [bp-6Ch]@2
  int v25; // [sp+30h] [bp-68h]@2
  int v26; // [sp+34h] [bp-64h]@2
  _DWORD *v27; // [sp+38h] [bp-60h]@2
  int *v28; // [sp+3Ch] [bp-5Ch]@2
  int v29; // [sp+40h] [bp-58h]@1
  int v30; // [sp+44h] [bp-54h]@1
  int v31; // [sp+48h] [bp-50h]@1
  char v32; // [sp+4Ch] [bp-4Ch]@1
  int v33; // [sp+50h] [bp-48h]@2
  int (__cdecl *v34)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-34h]@1
  int *v35; // [sp+68h] [bp-30h]@1
  char *v36; // [sp+6Ch] [bp-2Ch]@1
  int (*v37)(); // [sp+70h] [bp-28h]@1
  int *v38; // [sp+74h] [bp-24h]@1
  char v39; // [sp+8Bh] [bp-Dh]@4
  _DWORD *v40; // [sp+8Ch] [bp-Ch]@4
  char v41; // [sp+90h] [bp-8h]@1

  v38 = &v21;
  v34 = sub_6F962A50;
  v30 = a3;
  v36 = &v41;
  v31 = a7;
  v29 = a4;
  v35 = &dword_6F96C414;
  v37 = sub_6F90FB66;
  sub_6F8A1A60((int *)&v32);
  v31 = (unsigned __int8)v31;
  if ( a10 )
  {
    v11 = *a2;
    v28 = a10;
    v27 = a9;
    v25 = (unsigned __int8)v31;
    v26 = a8;
    v23 = a5;
    v24 = a6;
    v21 = v30;
    v22 = v29;
    v12 = *(int (__thiscall **)(int *, int, int, char *, int, _DWORD, int, _DWORD *, int *))(v11 + 8);
    v33 = -1;
    v31 = v12(a2, v30, v29, a5, a6, (unsigned __int8)v31, a8, a9, a10);
    v30 = v13;
  }
  else
  {
    v23 = &v39;
    v33 = -1;
    v40 = sub_6F9081A0(0, 0);
    v15 = *a2;
    v28 = (int *)&v40;
    v27 = a9;
    v26 = a8;
    v25 = v31;
    v23 = a5;
    v24 = a6;
    v21 = v30;
    v22 = v29;
    v16 = *(int (__thiscall **)(int *, int, int, char *, int, int, int, _DWORD *, _DWORD **))(v15 + 12);
    v33 = 1;
    v31 = v16(a2, v30, v29, a5, a6, v31, a8, a9, &v40);
    v30 = v17;
    if ( *a9 )
    {
      v18 = v40;
    }
    else
    {
      v19 = *(void (__cdecl **)(int))(a11 + 24);
      if ( v19 )
      {
        v33 = 1;
        v19(a11);
      }
      v33 = 1;
      sub_6F909DF0((int *)a11, (int *)&v40);
      v18 = v40;
      v20 = *(v40 - 3);
      *(_DWORD *)(a11 + 24) = sub_6F911960;
      *(_DWORD *)(a11 + 4) = v20;
    }
    if ( _InterlockedExchangeAdd(v18 - 1, 0xFFFFFFFF) <= 0 )
      sub_6F9086D0(v18 - 3, (int)&v39);
  }
  sub_6F8A1AD0((int *)&v32);
  return v31;
}
