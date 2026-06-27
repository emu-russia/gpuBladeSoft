int __thiscall sub_6F8D5570(void *this, int a2, int a3, int a4, int *a5, int a6, int a7, _DWORD *a8, int a9)
{
  __int64 v9; // rax@2
  int v11; // [sp+0h] [bp-98h]@1
  int v12; // [sp+4h] [bp-94h]@2
  int v13; // [sp+8h] [bp-90h]@1
  int *v14; // [sp+Ch] [bp-8Ch]@1
  int v15; // [sp+10h] [bp-88h]@1
  _DWORD *v16; // [sp+14h] [bp-84h]@1
  int *v17; // [sp+18h] [bp-80h]@1
  int v18; // [sp+24h] [bp-74h]@1
  void *v19; // [sp+28h] [bp-70h]@1
  int v20; // [sp+2Ch] [bp-6Ch]@1
  int v21; // [sp+30h] [bp-68h]@1
  char v22; // [sp+34h] [bp-64h]@1
  int v23; // [sp+38h] [bp-60h]@2
  int (__cdecl *v24)(int, int, __int64, void (**)(void), int *); // [sp+4Ch] [bp-4Ch]@1
  int *v25; // [sp+50h] [bp-48h]@1
  char *v26; // [sp+54h] [bp-44h]@1
  int (*v27)(); // [sp+58h] [bp-40h]@1
  int *v28; // [sp+5Ch] [bp-3Ch]@1
  int v29; // [sp+68h] [bp-30h]@3
  int v30; // [sp+6Ch] [bp-2Ch]@3
  int v31; // [sp+74h] [bp-24h]@3
  const char *v32; // [sp+78h] [bp-20h]@1
  int v33; // [sp+7Ch] [bp-1Ch]@1
  char v34; // [sp+80h] [bp-18h]@1
  char v35; // [sp+90h] [bp-8h]@1

  v19 = this;
  v26 = &v35;
  v21 = a2;
  v20 = a3;
  v18 = a6;
  v24 = sub_6F962A50;
  v25 = &dword_6F96C210;
  v27 = sub_6F8D569D;
  v28 = &v11;
  sub_6F8A1A60((int *)&v22);
  v34 = 0;
  v32 = &v34;
  v33 = 0;
  v17 = (int *)&v32;
  v16 = a8;
  v15 = a7;
  v13 = a4;
  v14 = a5;
  v11 = v21;
  if ( (_BYTE)v18 )
  {
    v12 = v20;
    v23 = 1;
    v9 = sub_6F8D4230(*(__int64 *)&v11, v13, (__int16)v14, v15, v16, (int)v17);
  }
  else
  {
    v12 = v20;
    v23 = 1;
    v9 = sub_6F8D30E0(*(__int64 *)&v11, v13, (__int16)v14, v15, v16, (int)v17);
  }
  v30 = HIDWORD(v9);
  WORD3(v9) = HIWORD(v20);
  v29 = v9;
  v21 = v9;
  WORD2(v9) = 0;
  v23 = 1;
  v20 = (unsigned __int16)v30 | HIDWORD(v9);
  v31 = sub_6F937FA0();
  v14 = &v31;
  sub_6F959BC0(v32, (double *)a9, a8);
  if ( v32 != &v34 )
    j_free_1((void *)v32);
  sub_6F8A1AD0((int *)&v22);
  return v21;
}
