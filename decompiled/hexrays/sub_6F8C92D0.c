int __thiscall sub_6F8C92D0(void *this, int a2, int a3, int a4, int a5)
{
  size_t v5; // eax@2
  size_t v6; // eax@2
  int v7; // eax@2
  int v9; // [sp+0h] [bp-98h]@1
  int v10[3]; // [sp+8h] [bp-90h]@1
  void *v11; // [sp+14h] [bp-84h]@1
  int v12; // [sp+18h] [bp-80h]@7
  char *v13; // [sp+1Ch] [bp-7Ch]@1
  const char *v14; // [sp+20h] [bp-78h]@1
  const char *v15; // [sp+24h] [bp-74h]@1
  const char *v16; // [sp+28h] [bp-70h]@1
  char v17; // [sp+2Ch] [bp-6Ch]@1
  int v18; // [sp+30h] [bp-68h]@1
  int (__cdecl *v19)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-54h]@1
  int *v20; // [sp+48h] [bp-50h]@1
  char *v21; // [sp+4Ch] [bp-4Ch]@1
  int (*v22)(); // [sp+50h] [bp-48h]@1
  int *v23; // [sp+54h] [bp-44h]@1
  char *v24; // [sp+60h] [bp-38h]@1
  int v25; // [sp+64h] [bp-34h]@1
  char v26; // [sp+68h] [bp-30h]@1
  char *v27; // [sp+78h] [bp-20h]@1
  int v28; // [sp+7Ch] [bp-1Ch]@1
  char v29; // [sp+80h] [bp-18h]@1
  char v30; // [sp+90h] [bp-8h]@1

  v21 = &v30;
  v11 = this;
  v23 = &v9;
  v19 = sub_6F962A50;
  v20 = dword_6F96B6A0;
  v22 = sub_6F8C9439;
  sub_6F8A1A60((int *)&v17);
  v24 = &v26;
  LOBYTE(v10[0]) = 0;
  v18 = -1;
  sub_6F93A600((int)&v24, (_BYTE *)a2, (_BYTE *)a3, v10[0]);
  v27 = &v29;
  LOBYTE(v10[0]) = 0;
  v18 = 1;
  sub_6F93A600((int)&v27, (_BYTE *)a4, (_BYTE *)a5, v10[0]);
  v16 = v24;
  v14 = &v24[v25];
  v15 = v27;
  v13 = &v27[v28];
  while ( 1 )
  {
    v12 = sub_6F8C92A0(v16, v15);
    if ( v12 )
      break;
    v5 = strlen(v16);
    v16 += v5;
    v6 = strlen(v15);
    v7 = (int)&v15[v6];
    if ( v14 == v16 && v13 == (char *)v7 )
      break;
    if ( v14 == v16 )
    {
      v12 = -1;
      break;
    }
    if ( v13 == (char *)v7 )
    {
      v12 = 1;
      break;
    }
    ++v16;
    v15 = (const char *)(v7 + 1);
  }
  if ( v27 != &v29 )
    j_free_1(v27);
  if ( v24 != &v26 )
    j_free_1(v24);
  sub_6F8A1AD0((int *)&v17);
  return v12;
}
