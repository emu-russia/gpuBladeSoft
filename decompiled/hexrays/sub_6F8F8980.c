__int64 __thiscall sub_6F8F8980(void *this, __int64 a2, int a3, int a4, _DWORD *a5, int a6, _DWORD *a7, void **a8)
{
  __int64 v8; // rax@2
  _DWORD *v9; // ecx@3
  unsigned int v10; // eax@3
  char v11; // al@6
  int (__stdcall *v12)(const void *, int, void *); // edx@9
  __int64 v14; // [sp+0h] [bp-88h]@1
  char *v15; // [sp+8h] [bp-80h]@1
  int v16; // [sp+Ch] [bp-7Ch]@1
  int v17; // [sp+10h] [bp-78h]@1
  _DWORD *v18; // [sp+14h] [bp-74h]@1
  int *v19; // [sp+18h] [bp-70h]@1
  _DWORD *v20; // [sp+2Ch] [bp-5Ch]@6
  char *v21; // [sp+30h] [bp-58h]@1
  char *v22; // [sp+34h] [bp-54h]@1
  int v23; // [sp+38h] [bp-50h]@1
  char v24; // [sp+3Ch] [bp-4Ch]@1
  int v25; // [sp+40h] [bp-48h]@1
  int (__cdecl *v26)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-34h]@1
  __int16 *v27; // [sp+58h] [bp-30h]@1
  char *v28; // [sp+5Ch] [bp-2Ch]@1
  int (*v29)(); // [sp+60h] [bp-28h]@1
  __int64 *v30; // [sp+64h] [bp-24h]@1
  char v31; // [sp+7Bh] [bp-Dh]@1
  _DWORD *v32; // [sp+7Ch] [bp-Ch]@1
  char v33; // [sp+80h] [bp-8h]@1
  __int64 v34; // [sp+90h] [bp+8h]@3

  v22 = (char *)this;
  v28 = &v33;
  v21 = (char *)a5;
  v26 = sub_6F962A50;
  v27 = &word_6F96B662;
  v29 = sub_6F8F8B71;
  v30 = &v14;
  sub_6F8A1A60((int *)&v24);
  v25 = -1;
  v23 = sub_6F95DC10(a6 + 108);
  v15 = &v31;
  v32 = sub_6F9081A0(0, 0);
  v19 = (int *)&v32;
  v18 = a7;
  v17 = a6;
  v15 = (char *)a3;
  v16 = a4;
  v14 = a2;
  v25 = 1;
  if ( (_BYTE)v21 )
    v8 = sub_6F8F7E40(v14, (int)v15, v16, v17, v18, (int)v19);
  else
    v8 = sub_6F8F7340(v14, (int)v15, v16, v17, v18, (int)v19);
  v9 = v32;
  v34 = v8;
  v10 = *(v32 - 3);
  v22 = (char *)v10;
  if ( v10 )
  {
    v25 = 1;
    sub_6F9093F0((int *)a8, v10, 0);
    v21 = (char *)*a8;
    if ( *((_DWORD *)v21 - 1) >= 0 )
    {
      sub_6F908160((int *)a8);
      v21 = (char *)*a8;
    }
    v20 = v32;
    v11 = *(_BYTE *)(v23 + 28);
    if ( v11 == 1 )
      goto LABEL_18;
    if ( !v11 )
    {
      v25 = 1;
      sub_6F8C33B0(v23);
    }
    v12 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v23 + 28);
    if ( v12 != sub_6F8C3630 )
    {
      v15 = v21;
      LODWORD(v14) = v20;
      HIDWORD(v14) = &v22[(_DWORD)v20];
      v25 = 1;
      ((void (__thiscall *)(int))v12)(v23);
      v9 = v32;
    }
    else
    {
LABEL_18:
      memcpy(v21, v20, (size_t)v22);
      v9 = v32;
    }
  }
  if ( _InterlockedExchangeAdd(v9 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F9086D0(v9 - 3, (int)&v31);
  sub_6F8A1AD0((int *)&v24);
  return v34;
}
