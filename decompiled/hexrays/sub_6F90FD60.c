int __cdecl sub_6F90FD60(int a1, int *a2, int a3, int a4, char *a5, int a6, int a7, int a8, _DWORD *a9, int *a10, int a11)
{
  int v11; // eax@2
  int (__thiscall *v12)(int *, int, int, char *, int, _DWORD, int, _DWORD *, int *); // eax@2
  int v13; // edx@2
  int v15; // eax@4
  int (__thiscall *v16)(int *, int, int, char *, int, int, int, _DWORD *, _DWORD **); // eax@4
  unsigned __int16 v17; // dx@4
  int v18; // eax@4
  _DWORD *v19; // ecx@5
  void (__cdecl *v20)(int); // eax@8
  int v21; // eax@10
  int v22; // [sp+20h] [bp-88h]@1
  int v23; // [sp+24h] [bp-84h]@2
  char *v24; // [sp+28h] [bp-80h]@2
  int v25; // [sp+2Ch] [bp-7Ch]@2
  int v26; // [sp+30h] [bp-78h]@2
  int v27; // [sp+34h] [bp-74h]@2
  _DWORD *v28; // [sp+38h] [bp-70h]@2
  int *v29; // [sp+3Ch] [bp-6Ch]@2
  int v30; // [sp+48h] [bp-60h]@1
  int v31; // [sp+4Ch] [bp-5Ch]@1
  int v32; // [sp+50h] [bp-58h]@1
  char v33; // [sp+54h] [bp-54h]@1
  int v34; // [sp+58h] [bp-50h]@2
  int (__cdecl *v35)(int, int, __int64, void (**)(void), int *); // [sp+6Ch] [bp-3Ch]@1
  __int16 *v36; // [sp+70h] [bp-38h]@1
  char *v37; // [sp+74h] [bp-34h]@1
  int (*v38)(); // [sp+78h] [bp-30h]@1
  int *v39; // [sp+7Ch] [bp-2Ch]@1
  int v40; // [sp+88h] [bp-20h]@4
  int v41; // [sp+8Ch] [bp-1Ch]@4
  char v42; // [sp+9Bh] [bp-Dh]@4
  _DWORD *v43; // [sp+9Ch] [bp-Ch]@4
  char v44; // [sp+A0h] [bp-8h]@1

  v39 = &v22;
  v35 = sub_6F962A50;
  v30 = a3;
  v37 = &v44;
  v31 = a7;
  v32 = a4;
  v36 = &word_6F96C41A;
  v38 = sub_6F90FF36;
  sub_6F8A1A60((int *)&v33);
  v31 = (unsigned __int8)v31;
  if ( a10 )
  {
    v11 = *a2;
    v29 = a10;
    v28 = a9;
    v26 = (unsigned __int8)v31;
    v27 = a8;
    v24 = a5;
    v25 = a6;
    v22 = v30;
    v23 = v32;
    v12 = *(int (__thiscall **)(int *, int, int, char *, int, _DWORD, int, _DWORD *, int *))(v11 + 8);
    v34 = -1;
    v32 = v12(a2, v30, v32, a5, a6, (unsigned __int8)v31, a8, a9, a10);
    v31 = v13;
  }
  else
  {
    v24 = &v42;
    v34 = -1;
    v43 = sub_6F8FD120(0, 0);
    v15 = *a2;
    v29 = (int *)&v43;
    v28 = a9;
    v27 = a8;
    v26 = v31;
    v24 = a5;
    v25 = a6;
    v22 = v30;
    v23 = v32;
    v16 = *(int (__thiscall **)(int *, int, int, char *, int, int, int, _DWORD *, _DWORD **))(v15 + 12);
    v34 = 1;
    v30 = v16(a2, v30, v32, a5, a6, v31, a8, a9, &v43);
    v40 = v30;
    v41 = v17;
    HIWORD(v18) = HIWORD(v32);
    LOWORD(v18) = 0;
    v31 = v17 | v18;
    if ( *a9 )
    {
      v19 = v43;
    }
    else
    {
      v20 = *(void (__cdecl **)(int))(a11 + 24);
      if ( v20 )
      {
        v34 = 1;
        v20(a11);
      }
      v34 = 1;
      sub_6F8FEF30((int *)a11, (int *)&v43);
      v19 = v43;
      v21 = *(v43 - 3);
      *(_DWORD *)(a11 + 24) = sub_6F9119D0;
      *(_DWORD *)(a11 + 4) = v21;
    }
    v32 = v30;
    if ( _InterlockedExchangeAdd(v19 - 1, 0xFFFFFFFF) <= 0 )
      sub_6F8FD6A0(v19 - 3, (int)&v42);
  }
  sub_6F8A1AD0((int *)&v33);
  return v32;
}
