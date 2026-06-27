__int64 __thiscall sub_6F8D2FB0(void *this, __int64 a2, int a3, int *a4, int a5, int a6, _DWORD *a7, int a8)
{
  __int64 v8; // rax@2
  __int64 v10; // [sp+0h] [bp-88h]@1
  int v11; // [sp+8h] [bp-80h]@1
  int *v12; // [sp+Ch] [bp-7Ch]@1
  int v13; // [sp+10h] [bp-78h]@1
  _DWORD *v14; // [sp+14h] [bp-74h]@1
  int *v15; // [sp+18h] [bp-70h]@1
  int v16; // [sp+24h] [bp-64h]@1
  void *v17; // [sp+28h] [bp-60h]@1
  char v18; // [sp+2Ch] [bp-5Ch]@1
  int v19; // [sp+30h] [bp-58h]@1
  int (__cdecl *v20)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-44h]@1
  int *v21; // [sp+48h] [bp-40h]@1
  char *v22; // [sp+4Ch] [bp-3Ch]@1
  int (*v23)(); // [sp+50h] [bp-38h]@1
  __int64 *v24; // [sp+54h] [bp-34h]@1
  int v25; // [sp+64h] [bp-24h]@3
  const char *v26; // [sp+68h] [bp-20h]@1
  int v27; // [sp+6Ch] [bp-1Ch]@1
  char v28; // [sp+70h] [bp-18h]@1
  char v29; // [sp+80h] [bp-8h]@1
  __int64 v30; // [sp+90h] [bp+8h]@3

  v17 = this;
  v22 = &v29;
  v16 = a5;
  v20 = sub_6F962A50;
  v21 = &dword_6F96B874;
  v23 = sub_6F8D30A7;
  v24 = &v10;
  sub_6F8A1A60((int *)&v18);
  v28 = 0;
  v26 = &v28;
  v27 = 0;
  v15 = (int *)&v26;
  v14 = a7;
  v13 = a6;
  v11 = a3;
  v12 = a4;
  v10 = a2;
  v19 = 1;
  if ( (_BYTE)v16 )
    v8 = sub_6F8D1C10(v10, v11, (int)v12, v13, v14, (int)v15);
  else
    v8 = sub_6F8D0A60(v10, v11, (int)v12, v13, v14, (int)v15);
  v19 = 1;
  v30 = v8;
  v25 = sub_6F937FA0();
  v12 = &v25;
  sub_6F959BC0(v26, (double *)a8, a7);
  if ( v26 != &v28 )
    j_free_1((void *)v26);
  sub_6F8A1AD0((int *)&v18);
  return v30;
}
