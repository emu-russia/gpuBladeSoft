int __thiscall sub_6F8FA660(void *this, int a2, int a3, int a4, int *a5, int a6, int a7, _DWORD *a8, int a9)
{
  __int64 v9; // rax@2
  int v10; // ecx@3
  int v12; // [sp+0h] [bp-88h]@1
  int v13; // [sp+4h] [bp-84h]@2
  int *v14; // [sp+8h] [bp-80h]@1
  int *v15; // [sp+Ch] [bp-7Ch]@1
  int v16; // [sp+10h] [bp-78h]@1
  _DWORD *v17; // [sp+14h] [bp-74h]@1
  int *v18; // [sp+18h] [bp-70h]@1
  int v19; // [sp+24h] [bp-64h]@1
  void *v20; // [sp+28h] [bp-60h]@1
  int v21; // [sp+2Ch] [bp-5Ch]@1
  int v22; // [sp+30h] [bp-58h]@1
  char v23; // [sp+34h] [bp-54h]@1
  int v24; // [sp+38h] [bp-50h]@1
  int (__cdecl *v25)(int, int, __int64, void (**)(void), int *); // [sp+4Ch] [bp-3Ch]@1
  int *v26; // [sp+50h] [bp-38h]@1
  char *v27; // [sp+54h] [bp-34h]@1
  int (*v28)(); // [sp+58h] [bp-30h]@1
  int *v29; // [sp+5Ch] [bp-2Ch]@1
  int v30; // [sp+68h] [bp-20h]@3
  int v31; // [sp+6Ch] [bp-1Ch]@3
  const char *v32; // [sp+78h] [bp-10h]@1
  int v33; // [sp+7Ch] [bp-Ch]@1
  char v34; // [sp+80h] [bp-8h]@1

  v20 = this;
  v27 = &v34;
  v22 = a2;
  v21 = a3;
  v19 = a6;
  v25 = sub_6F962A50;
  v26 = &dword_6F96B1BC;
  v28 = sub_6F8FA7B3;
  v29 = &v12;
  sub_6F8A1A60((int *)&v23);
  v14 = &v33;
  v24 = -1;
  v32 = (const char *)sub_6F9081A0(0, 0);
  v18 = (int *)&v32;
  v17 = a8;
  v16 = a7;
  v14 = (int *)a4;
  v15 = a5;
  v12 = v22;
  if ( (_BYTE)v19 )
  {
    v13 = v21;
    v24 = 1;
    v9 = sub_6F8F9890(*(__int64 *)&v12, (int)v14, (__int16)v15, v16, v17, (int)v18);
  }
  else
  {
    v13 = v21;
    v24 = 1;
    v9 = sub_6F8F8CF0(*(__int64 *)&v12, (int)v14, (__int16)v15, v16, v17, (int)v18);
  }
  v31 = HIDWORD(v9);
  WORD3(v9) = HIWORD(v21);
  v30 = v9;
  v22 = v9;
  WORD2(v9) = 0;
  v24 = 1;
  v21 = (unsigned __int16)v31 | HIDWORD(v9);
  v33 = sub_6F937FA0();
  v15 = &v33;
  sub_6F959BC0(v32, (double *)a9, a8);
  v10 = (int)v32;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v32 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v10 - 12), (int)&v33);
  sub_6F8A1AD0((int *)&v23);
  return v22;
}
