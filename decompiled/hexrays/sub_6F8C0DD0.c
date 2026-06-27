__int64 __thiscall sub_6F8C0DD0(_DWORD *this, __int64 a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8)
{
  int *v8; // eax@1
  __int64 v9; // rax@1
  void (__cdecl *v10)(_DWORD); // eax@1
  int v12; // ecx@7
  int v13; // [sp+0h] [bp-A8h]@1
  __int64 v14; // [sp+8h] [bp-A0h]@1
  int v15; // [sp+10h] [bp-98h]@1
  int v16; // [sp+14h] [bp-94h]@1
  int v17; // [sp+18h] [bp-90h]@1
  int v18; // [sp+1Ch] [bp-8Ch]@1
  int *v19; // [sp+20h] [bp-88h]@1
  int v20; // [sp+24h] [bp-84h]@1
  int *v21; // [sp+28h] [bp-80h]@1
  int v22; // [sp+34h] [bp-74h]@1
  _DWORD *v23; // [sp+38h] [bp-70h]@1
  char v24; // [sp+3Ch] [bp-6Ch]@1
  int v25; // [sp+40h] [bp-68h]@1
  int (__cdecl *v26)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-54h]@1
  int *v27; // [sp+58h] [bp-50h]@1
  char *v28; // [sp+5Ch] [bp-4Ch]@1
  int (*v29)(); // [sp+60h] [bp-48h]@1
  int *v30; // [sp+64h] [bp-44h]@1
  char v31; // [sp+7Bh] [bp-2Dh]@7
  int v32; // [sp+7Ch] [bp-2Ch]@1
  int v33; // [sp+80h] [bp-28h]@7
  _BYTE *v34; // [sp+84h] [bp-24h]@1
  int v35; // [sp+88h] [bp-20h]@7
  void (__cdecl *v36)(_DWORD); // [sp+9Ch] [bp-Ch]@1
  char v37; // [sp+A0h] [bp-8h]@1
  __int64 v38; // [sp+B0h] [bp+8h]@1

  v23 = this;
  v28 = &v37;
  v22 = a5;
  v26 = sub_6F962A50;
  v27 = dword_6F96C3A0;
  v29 = sub_6F8C0F2F;
  v30 = &v13;
  sub_6F8A1A60((int *)&v24);
  v36 = 0;
  v32 = 0;
  v21 = (int *)&v34;
  v20 = 0;
  v19 = &v32;
  v18 = a6;
  v17 = (unsigned __int8)v22;
  v15 = a3;
  v16 = a4;
  v14 = a2;
  v8 = (int *)v23[2];
  LOBYTE(v13) = 0;
  v25 = 1;
  LODWORD(v9) = sub_6F90FBA0(v13, v8, a2, SHIDWORD(a2), a3, a4, (unsigned __int8)v22, a6, &v32, 0, (int)&v34);
  v38 = v9;
  v10 = v36;
  if ( v32 )
  {
    *a7 = v32;
  }
  else
  {
    if ( !v36 )
      sub_6F95AFD0("uninitialized __any_string");
    v25 = 1;
    sub_6F909D80(&v33, v34, v35, (int)&v31);
    v25 = 2;
    sub_6F908910((void *)a8, &v33);
    v12 = v33;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 - 4), 0xFFFFFFFF) <= 0 )
      sub_6F9086D0((void *)(v12 - 12), (int)&v31);
    v10 = v36;
  }
  if ( v10 )
  {
    v25 = 0;
    v10(&v34);
  }
  sub_6F8A1AD0((int *)&v24);
  return v38;
}
