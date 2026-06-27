__int64 __thiscall sub_6F8C0BA0(int *this, __int64 a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8)
{
  int *v8; // eax@1
  __int64 v9; // rax@1
  void (__cdecl *v10)(_DWORD); // eax@1
  int *v12; // eax@7
  int v13; // esi@8
  int v14; // ebx@8
  int v15; // ecx@9
  int v16; // [sp+0h] [bp-C8h]@1
  __int64 v17; // [sp+8h] [bp-C0h]@1
  int v18; // [sp+10h] [bp-B8h]@1
  int v19; // [sp+14h] [bp-B4h]@1
  int v20; // [sp+18h] [bp-B0h]@1
  int v21; // [sp+1Ch] [bp-ACh]@1
  int *v22; // [sp+20h] [bp-A8h]@1
  int v23; // [sp+24h] [bp-A4h]@1
  int *v24; // [sp+28h] [bp-A0h]@1
  int v25; // [sp+34h] [bp-94h]@1
  int *v26; // [sp+38h] [bp-90h]@1
  char v27; // [sp+3Ch] [bp-8Ch]@1
  int v28; // [sp+40h] [bp-88h]@1
  int (__cdecl *v29)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-74h]@1
  int *v30; // [sp+58h] [bp-70h]@1
  char *v31; // [sp+5Ch] [bp-6Ch]@1
  int (*v32)(); // [sp+60h] [bp-68h]@1
  int *v33; // [sp+64h] [bp-64h]@1
  int v34; // [sp+78h] [bp-50h]@1
  int *v35; // [sp+7Ch] [bp-4Ch]@7
  int v36; // [sp+80h] [bp-48h]@8
  int v37; // [sp+84h] [bp-44h]@7
  _BYTE *v38; // [sp+94h] [bp-34h]@1
  int v39; // [sp+98h] [bp-30h]@7
  void (__cdecl *v40)(_DWORD); // [sp+ACh] [bp-1Ch]@1
  char v41; // [sp+B0h] [bp-18h]@1
  __int64 v42; // [sp+D0h] [bp+8h]@1

  v31 = &v41;
  v26 = this;
  v25 = a5;
  v29 = sub_6F962A50;
  v30 = &dword_6F96B1C8;
  v32 = sub_6F8C0D8C;
  v33 = &v16;
  sub_6F8A1A60((int *)&v27);
  v40 = 0;
  v34 = 0;
  v24 = (int *)&v38;
  v23 = 0;
  v22 = &v34;
  v21 = a6;
  v20 = (unsigned __int8)v25;
  v18 = a3;
  v19 = a4;
  v17 = a2;
  v8 = (int *)v26[2];
  LOBYTE(v16) = 0;
  v28 = 1;
  LODWORD(v9) = sub_6F90F9C0(v16, v8, a2, SHIDWORD(a2), (char *)a3, a4, (unsigned __int8)v25, a6, &v34, 0, (int)&v38);
  v42 = v9;
  v10 = v40;
  if ( v34 )
  {
    *a7 = v34;
    goto LABEL_3;
  }
  if ( !v40 )
    sub_6F95AFD0("uninitialized __any_string");
  v26 = &v37;
  v35 = &v37;
  LOBYTE(v17) = 0;
  v28 = 1;
  sub_6F93A600((int)&v35, v38, &v38[v39], v17);
  v12 = *(int **)a8;
  if ( v35 == v26 )
  {
    v28 = 0;
    sub_6F93C180(a8, (int)&v35);
    v12 = v35;
    goto LABEL_11;
  }
  v13 = v36;
  v14 = v37;
  if ( v12 == (int *)(a8 + 8) )
  {
    *(_DWORD *)a8 = v35;
    *(_DWORD *)(a8 + 4) = v13;
    *(_DWORD *)(a8 + 8) = v14;
    goto LABEL_15;
  }
  v15 = *(_DWORD *)(a8 + 8);
  *(_DWORD *)a8 = v35;
  *(_DWORD *)(a8 + 4) = v13;
  *(_DWORD *)(a8 + 8) = v14;
  if ( !v12 )
  {
LABEL_15:
    v35 = v26;
    v12 = &v37;
    v26 = &v37;
    goto LABEL_11;
  }
  v35 = v12;
  v37 = v15;
LABEL_11:
  v36 = 0;
  *(_BYTE *)v12 = 0;
  if ( v35 != v26 )
    j_free_1(v35);
  v10 = v40;
LABEL_3:
  if ( v10 )
  {
    v28 = 0;
    v10(&v38);
  }
  sub_6F8A1AD0((int *)&v27);
  return v42;
}
