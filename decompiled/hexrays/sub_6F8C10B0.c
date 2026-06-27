int __thiscall sub_6F8C10B0(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, _DWORD *a8, int a9)
{
  int *v9; // eax@1
  int v10; // eax@1
  int v11; // edx@1
  void (__cdecl *v12)(const void **); // eax@1
  int *v14; // eax@7
  int v15; // ebx@8
  int v16; // esi@8
  int v17; // ecx@9
  int v18; // [sp+0h] [bp-D8h]@1
  int v19; // [sp+8h] [bp-D0h]@1
  int v20; // [sp+Ch] [bp-CCh]@1
  int v21; // [sp+10h] [bp-C8h]@1
  int v22; // [sp+14h] [bp-C4h]@1
  int v23; // [sp+18h] [bp-C0h]@1
  int v24; // [sp+1Ch] [bp-BCh]@1
  int *v25; // [sp+20h] [bp-B8h]@1
  int v26; // [sp+24h] [bp-B4h]@1
  int *v27; // [sp+28h] [bp-B0h]@1
  int v28; // [sp+34h] [bp-A4h]@1
  _DWORD *v29; // [sp+38h] [bp-A0h]@1
  int v30; // [sp+3Ch] [bp-9Ch]@1
  int v31; // [sp+40h] [bp-98h]@1
  char v32; // [sp+44h] [bp-94h]@1
  int v33; // [sp+48h] [bp-90h]@1
  int (__cdecl *v34)(int, int, __int64, void (**)(void), int *); // [sp+5Ch] [bp-7Ch]@1
  __int16 *v35; // [sp+60h] [bp-78h]@1
  char *v36; // [sp+64h] [bp-74h]@1
  int (*v37)(); // [sp+68h] [bp-70h]@1
  int *v38; // [sp+6Ch] [bp-6Ch]@1
  int v39; // [sp+78h] [bp-60h]@1
  int v40; // [sp+7Ch] [bp-5Ch]@1
  int v41; // [sp+88h] [bp-50h]@1
  int *v42; // [sp+8Ch] [bp-4Ch]@7
  int v43; // [sp+90h] [bp-48h]@8
  int v44; // [sp+94h] [bp-44h]@7
  const void *v45; // [sp+A4h] [bp-34h]@1
  int v46; // [sp+A8h] [bp-30h]@7
  void (__cdecl *v47)(const void **); // [sp+BCh] [bp-1Ch]@1
  char v48; // [sp+C0h] [bp-18h]@1

  v36 = &v48;
  v29 = this;
  v31 = a2;
  v28 = a6;
  v30 = a3;
  v34 = sub_6F962A50;
  v35 = &word_6F96B1CE;
  v37 = sub_6F8C12BC;
  v38 = &v18;
  sub_6F8A1A60((int *)&v32);
  v47 = 0;
  v41 = 0;
  v27 = (int *)&v45;
  v26 = 0;
  v25 = &v41;
  v24 = a7;
  v23 = (unsigned __int8)v28;
  v21 = a4;
  v22 = a5;
  v19 = v31;
  v20 = v30;
  v9 = (int *)v29[2];
  LOBYTE(v18) = 0;
  v33 = 1;
  v10 = sub_6F90FD60(v18, v9, v31, v30, (char *)a4, a5, (unsigned __int8)v28, a7, &v41, 0, (int)&v45);
  v39 = v10;
  v31 = v10;
  HIWORD(v10) = HIWORD(v30);
  v40 = v11;
  LOWORD(v10) = 0;
  v30 = (unsigned __int16)v11 | v10;
  v12 = v47;
  if ( v41 )
  {
    *a8 = v41;
    goto LABEL_3;
  }
  if ( !v47 )
    sub_6F95AFD0("uninitialized __any_string");
  v42 = &v44;
  LOBYTE(v19) = 0;
  v33 = 1;
  sub_6F93D440((void **)&v42, v45, (int)v45 + 2 * v46, v19);
  v14 = *(int **)a9;
  if ( v42 == &v44 )
  {
    v33 = 0;
    sub_6F93F0C0(a9, (int)&v42);
    v14 = v42;
LABEL_11:
    v43 = 0;
    *(_WORD *)v14 = 0;
    if ( v14 != &v44 )
      j_free_1(v14);
    goto LABEL_13;
  }
  v15 = v44;
  v16 = v43;
  if ( v14 == (int *)(a9 + 8) )
  {
    *(_DWORD *)a9 = v42;
    *(_DWORD *)(a9 + 4) = v16;
    *(_DWORD *)(a9 + 8) = v15;
  }
  else
  {
    v17 = *(_DWORD *)(a9 + 8);
    *(_DWORD *)a9 = v42;
    *(_DWORD *)(a9 + 4) = v16;
    *(_DWORD *)(a9 + 8) = v15;
    if ( v14 )
    {
      v42 = v14;
      v44 = v17;
      goto LABEL_11;
    }
  }
LABEL_13:
  v12 = v47;
LABEL_3:
  if ( v12 )
  {
    v33 = 0;
    v12(&v45);
  }
  sub_6F8A1AD0((int *)&v32);
  return v31;
}
