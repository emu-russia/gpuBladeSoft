int __thiscall sub_6F8C1300(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, _DWORD *a8, int a9)
{
  int *v9; // eax@1
  int v10; // eax@1
  int v11; // edx@1
  void (__cdecl *v12)(const void **); // eax@1
  int v14; // ecx@7
  int v15; // [sp+0h] [bp-B8h]@1
  int v16; // [sp+8h] [bp-B0h]@1
  int v17; // [sp+Ch] [bp-ACh]@1
  int v18; // [sp+10h] [bp-A8h]@1
  int v19; // [sp+14h] [bp-A4h]@1
  int v20; // [sp+18h] [bp-A0h]@1
  int v21; // [sp+1Ch] [bp-9Ch]@1
  int *v22; // [sp+20h] [bp-98h]@1
  int v23; // [sp+24h] [bp-94h]@1
  int *v24; // [sp+28h] [bp-90h]@1
  int v25; // [sp+34h] [bp-84h]@1
  _DWORD *v26; // [sp+38h] [bp-80h]@1
  int v27; // [sp+3Ch] [bp-7Ch]@1
  int v28; // [sp+40h] [bp-78h]@1
  char v29; // [sp+44h] [bp-74h]@1
  int v30; // [sp+48h] [bp-70h]@1
  int (__cdecl *v31)(int, int, __int64, void (**)(void), int *); // [sp+5Ch] [bp-5Ch]@1
  int *v32; // [sp+60h] [bp-58h]@1
  char *v33; // [sp+64h] [bp-54h]@1
  int (*v34)(); // [sp+68h] [bp-50h]@1
  int *v35; // [sp+6Ch] [bp-4Ch]@1
  int v36; // [sp+78h] [bp-40h]@1
  int v37; // [sp+7Ch] [bp-3Ch]@1
  char v38; // [sp+8Bh] [bp-2Dh]@7
  int v39; // [sp+8Ch] [bp-2Ch]@1
  int v40; // [sp+90h] [bp-28h]@7
  const void *v41; // [sp+94h] [bp-24h]@1
  int v42; // [sp+98h] [bp-20h]@7
  void (__cdecl *v43)(const void **); // [sp+ACh] [bp-Ch]@1
  char v44; // [sp+B0h] [bp-8h]@1

  v26 = this;
  v33 = &v44;
  v28 = a2;
  v25 = a6;
  v27 = a3;
  v31 = sub_6F962A50;
  v32 = dword_6F96C398;
  v34 = sub_6F8C147F;
  v35 = &v15;
  sub_6F8A1A60((int *)&v29);
  v43 = 0;
  v39 = 0;
  v24 = (int *)&v41;
  v23 = 0;
  v22 = &v39;
  v21 = a7;
  v20 = (unsigned __int8)v25;
  v18 = a4;
  v19 = a5;
  v16 = v28;
  v17 = v27;
  v9 = (int *)v26[2];
  LOBYTE(v15) = 0;
  v30 = 1;
  v10 = sub_6F90FF70(v15, v9, v28, v27, a4, a5, (unsigned __int8)v25, a7, &v39, 0, (int)&v41);
  v36 = v10;
  v28 = v10;
  HIWORD(v10) = HIWORD(v27);
  v37 = v11;
  LOWORD(v10) = 0;
  v27 = (unsigned __int16)v11 | v10;
  v12 = v43;
  if ( v39 )
  {
    *a8 = v39;
  }
  else
  {
    if ( !v43 )
      sub_6F95AFD0("uninitialized __any_string");
    v30 = 1;
    sub_6F8FEEA0(&v40, v41, v42, (int)&v38);
    v30 = 2;
    sub_6F8FD900((void *)a9, &v40);
    v14 = v40;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40 - 4), 0xFFFFFFFF) <= 0 )
      sub_6F8FD6A0((void *)(v14 - 12), (int)&v38);
    v12 = v43;
  }
  if ( v12 )
  {
    v30 = 0;
    v12(&v41);
  }
  sub_6F8A1AD0((int *)&v29);
  return v28;
}
