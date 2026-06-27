void **__thiscall sub_6F8BFB30(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // eax@1
  void **v5; // ebx@2
  const void *v6; // eax@2
  int v7; // edx@2
  int v9; // [sp+0h] [bp-88h]@1
  int *v10; // [sp+8h] [bp-80h]@1
  int v11; // [sp+Ch] [bp-7Ch]@1
  int v12; // [sp+10h] [bp-78h]@1
  void **v13; // [sp+28h] [bp-60h]@1
  char v14; // [sp+2Ch] [bp-5Ch]@1
  int v15; // [sp+30h] [bp-58h]@1
  int (__cdecl *v16)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-44h]@1
  int *v17; // [sp+48h] [bp-40h]@1
  char *v18; // [sp+4Ch] [bp-3Ch]@1
  int (*v19)(); // [sp+50h] [bp-38h]@1
  int *v20; // [sp+54h] [bp-34h]@1
  const void *v21; // [sp+64h] [bp-24h]@1
  int v22; // [sp+68h] [bp-20h]@2
  void (__cdecl *v23)(const void **); // [sp+7Ch] [bp-Ch]@1
  char v24; // [sp+80h] [bp-8h]@1

  v18 = &v24;
  v13 = (void **)this;
  v16 = sub_6F962A50;
  v17 = &dword_6F96B1E0;
  v19 = sub_6F8BFC08;
  v20 = &v9;
  sub_6F8A1A60((int *)&v14);
  v23 = 0;
  v12 = a4;
  v11 = a3;
  v10 = (int *)&v21;
  v4 = *(_DWORD **)(a2 + 12);
  LOBYTE(v9) = 0;
  v15 = 1;
  sub_6F912720(v9, v4, (int)&v21, a3, a4);
  if ( !v23 )
    sub_6F95AFD0("uninitialized __any_string");
  v5 = v13;
  v6 = v21;
  v7 = (int)v21 + 2 * v22;
  *v13 = v13 + 2;
  LOBYTE(v10) = 0;
  v15 = 1;
  sub_6F93D440(v5, v6, v7, (int)v10);
  if ( v23 )
  {
    v15 = 0;
    v23(&v21);
  }
  sub_6F8A1AD0((int *)&v14);
  return v13;
}
