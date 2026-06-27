__int64 __thiscall sub_6F8D2DE0(void *this, __int64 a2, int a3, int a4, char *a5, int a6, _DWORD *a7, void **a8)
{
  int v8; // eax@1
  __int64 v9; // rax@2
  char v11; // al@8
  int (__stdcall *v12)(const void *, int, void *); // edx@11
  __int64 v13; // [sp+0h] [bp-98h]@1
  int v14; // [sp+8h] [bp-90h]@1
  int v15; // [sp+Ch] [bp-8Ch]@1
  int v16; // [sp+10h] [bp-88h]@1
  _DWORD *v17; // [sp+14h] [bp-84h]@1
  int *v18; // [sp+18h] [bp-80h]@1
  void *v19; // [sp+2Ch] [bp-6Ch]@8
  unsigned int v20; // [sp+30h] [bp-68h]@1
  char *v21; // [sp+34h] [bp-64h]@1
  char *v22; // [sp+38h] [bp-60h]@1
  char v23; // [sp+3Ch] [bp-5Ch]@1
  int v24; // [sp+40h] [bp-58h]@1
  int (__cdecl *v25)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-44h]@1
  __int16 *v26; // [sp+58h] [bp-40h]@1
  char *v27; // [sp+5Ch] [bp-3Ch]@1
  int (*v28)(); // [sp+60h] [bp-38h]@1
  __int64 *v29; // [sp+64h] [bp-34h]@1
  char *v30; // [sp+78h] [bp-20h]@1
  char *v31; // [sp+7Ch] [bp-1Ch]@1
  char v32; // [sp+80h] [bp-18h]@1
  char v33; // [sp+90h] [bp-8h]@1
  __int64 v34; // [sp+A0h] [bp+8h]@3

  v22 = (char *)this;
  v27 = &v33;
  v21 = a5;
  v25 = sub_6F962A50;
  v26 = &word_6F96B87A;
  v28 = sub_6F8D2F7B;
  v29 = &v13;
  sub_6F8A1A60((int *)&v23);
  v24 = -1;
  v8 = sub_6F95DC10(a6 + 108);
  v32 = 0;
  v20 = v8;
  v30 = &v32;
  v31 = 0;
  v18 = (int *)&v30;
  v17 = a7;
  v16 = a6;
  v14 = a3;
  v15 = a4;
  v13 = a2;
  v24 = 1;
  if ( (_BYTE)v21 )
    v9 = sub_6F8D1C10(v13, v14, v15, v16, v17, (int)v18);
  else
    v9 = sub_6F8D0A60(v13, v14, v15, v16, v17, (int)v18);
  v34 = v9;
  v22 = v31;
  if ( v31 )
  {
    v24 = 1;
    sub_6F93B5B0((int)a8, (unsigned int)v22, 0);
    v19 = *a8;
    v21 = v30;
    v11 = *(_BYTE *)(v20 + 28);
    if ( v11 == 1 )
      goto LABEL_16;
    if ( !v11 )
    {
      v24 = 1;
      sub_6F8C33B0(v20);
    }
    v12 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v20 + 28);
    if ( v12 != sub_6F8C3630 )
    {
      v14 = (int)v19;
      LODWORD(v13) = v21;
      HIDWORD(v13) = &v22[(_DWORD)v21];
      v24 = 1;
      ((void (__thiscall *)(unsigned int))v12)(v20);
    }
    else
    {
LABEL_16:
      memcpy(v19, v21, (size_t)v22);
    }
  }
  if ( v30 != &v32 )
    j_free_1(v30);
  sub_6F8A1AD0((int *)&v23);
  return v34;
}
