int *__thiscall sub_6F8C01A0(void *this, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // edx@1
  _DWORD *v7; // eax@1
  int v9; // [sp+0h] [bp-88h]@1
  int *v10; // [sp+8h] [bp-80h]@1
  int v11; // [sp+Ch] [bp-7Ch]@1
  int v12; // [sp+10h] [bp-78h]@1
  int v13; // [sp+14h] [bp-74h]@1
  int v14; // [sp+18h] [bp-70h]@1
  int v15; // [sp+1Ch] [bp-6Ch]@1
  int *v16; // [sp+28h] [bp-60h]@1
  char v17; // [sp+2Ch] [bp-5Ch]@1
  int v18; // [sp+30h] [bp-58h]@1
  int (__cdecl *v19)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-44h]@1
  int *v20; // [sp+48h] [bp-40h]@1
  char *v21; // [sp+4Ch] [bp-3Ch]@1
  int (*v22)(); // [sp+50h] [bp-38h]@1
  int *v23; // [sp+54h] [bp-34h]@1
  char v24; // [sp+63h] [bp-25h]@2
  const void *v25; // [sp+64h] [bp-24h]@1
  int v26; // [sp+68h] [bp-20h]@2
  void (__cdecl *v27)(const void **); // [sp+7Ch] [bp-Ch]@1
  char v28; // [sp+80h] [bp-8h]@1

  v16 = (int *)this;
  v21 = &v28;
  v19 = sub_6F962A50;
  v20 = &dword_6F96C37C;
  v22 = sub_6F8C0283;
  v23 = &v9;
  sub_6F8A1A60((int *)&v17);
  v27 = 0;
  v6 = *(_DWORD *)(*a6 - 12);
  v14 = *a6;
  v15 = v6;
  v13 = a5;
  v12 = a4;
  v11 = a3;
  v10 = (int *)&v25;
  v7 = *(_DWORD **)(a2 + 16);
  LOBYTE(v9) = 0;
  v18 = 1;
  sub_6F911E80(v9, v7, (int)&v25, a3, a4, a5, v14, v6);
  if ( !v27 )
    sub_6F95AFD0("uninitialized __any_string");
  v18 = 1;
  sub_6F8FEEA0(v16, v25, v26, (int)&v24);
  if ( v27 )
  {
    v18 = 0;
    v27(&v25);
  }
  sub_6F8A1AD0((int *)&v17);
  return v16;
}
