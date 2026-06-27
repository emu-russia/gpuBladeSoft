int *__thiscall sub_6F8BF9B0(void *this, int a2, int a3, int a4)
{
  _DWORD *v4; // eax@1
  int v6; // [sp+0h] [bp-88h]@1
  int *v7; // [sp+8h] [bp-80h]@1
  int v8; // [sp+Ch] [bp-7Ch]@1
  int v9; // [sp+10h] [bp-78h]@1
  int *v10; // [sp+28h] [bp-60h]@1
  char v11; // [sp+2Ch] [bp-5Ch]@1
  int v12; // [sp+30h] [bp-58h]@1
  int (__cdecl *v13)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-44h]@1
  __int16 *v14; // [sp+48h] [bp-40h]@1
  char *v15; // [sp+4Ch] [bp-3Ch]@1
  int (*v16)(); // [sp+50h] [bp-38h]@1
  int *v17; // [sp+54h] [bp-34h]@1
  char v18; // [sp+63h] [bp-25h]@2
  _BYTE *v19; // [sp+64h] [bp-24h]@1
  int v20; // [sp+68h] [bp-20h]@2
  void (__cdecl *v21)(_DWORD); // [sp+7Ch] [bp-Ch]@1
  char v22; // [sp+80h] [bp-8h]@1

  v10 = (int *)this;
  v15 = &v22;
  v13 = sub_6F962A50;
  v14 = &word_6F96C376;
  v16 = sub_6F8BFA7C;
  v17 = &v6;
  sub_6F8A1A60((int *)&v11);
  v21 = 0;
  v9 = a4;
  v8 = a3;
  v7 = (int *)&v19;
  v4 = *(_DWORD **)(a2 + 12);
  LOBYTE(v6) = 0;
  v12 = 1;
  sub_6F912620(v6, v4, (int)&v19, a3, a4);
  if ( !v21 )
    sub_6F95AFD0("uninitialized __any_string");
  v12 = 1;
  sub_6F909D80(v10, v19, v20, (int)&v18);
  if ( v21 )
  {
    v12 = 0;
    v21(&v19);
  }
  sub_6F8A1AD0((int *)&v11);
  return v10;
}
