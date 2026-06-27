void **__thiscall sub_6F8C0070(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // eax@1
  void **v7; // ebx@2
  const void *v8; // eax@2
  int v9; // edx@2
  int v11; // [sp+0h] [bp-88h]@1
  int *v12; // [sp+8h] [bp-80h]@1
  int v13; // [sp+Ch] [bp-7Ch]@1
  int v14; // [sp+10h] [bp-78h]@1
  int v15; // [sp+14h] [bp-74h]@1
  const void *v16; // [sp+18h] [bp-70h]@1
  int v17; // [sp+1Ch] [bp-6Ch]@1
  void **v18; // [sp+28h] [bp-60h]@1
  char v19; // [sp+2Ch] [bp-5Ch]@1
  int v20; // [sp+30h] [bp-58h]@1
  int (__cdecl *v21)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-44h]@1
  __int16 *v22; // [sp+48h] [bp-40h]@1
  char *v23; // [sp+4Ch] [bp-3Ch]@1
  int (*v24)(); // [sp+50h] [bp-38h]@1
  int *v25; // [sp+54h] [bp-34h]@1
  const void *v26; // [sp+64h] [bp-24h]@1
  int v27; // [sp+68h] [bp-20h]@2
  void (__cdecl *v28)(const void **); // [sp+7Ch] [bp-Ch]@1
  char v29; // [sp+80h] [bp-8h]@1

  v23 = &v29;
  v18 = (void **)this;
  v21 = sub_6F962A50;
  v22 = &word_6F96B1E6;
  v24 = sub_6F8C0162;
  v25 = &v11;
  sub_6F8A1A60((int *)&v19);
  v28 = 0;
  v17 = *(_DWORD *)(a6 + 4);
  v16 = *(const void **)a6;
  v15 = a5;
  v14 = a4;
  v13 = a3;
  v12 = (int *)&v26;
  v6 = *(_DWORD **)(a2 + 16);
  LOBYTE(v11) = 0;
  v20 = 1;
  sub_6F911D00(v11, v6, (int)&v26, a3, a4, a5, v16, v17);
  if ( !v28 )
    sub_6F95AFD0("uninitialized __any_string");
  v7 = v18;
  v8 = v26;
  v9 = (int)v26 + 2 * v27;
  *v18 = v18 + 2;
  LOBYTE(v12) = 0;
  v20 = 1;
  sub_6F93D440(v7, v8, v9, (int)v12);
  if ( v28 )
  {
    v20 = 0;
    v28(&v26);
  }
  sub_6F8A1AD0((int *)&v19);
  return v18;
}
