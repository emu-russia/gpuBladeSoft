__int64 __thiscall sub_6F8F8BA0(void *this, __int64 a2, int a3, int *a4, int a5, int a6, _DWORD *a7, int a8)
{
  __int64 v8; // rax@2
  int v9; // ecx@3
  __int64 v11; // [sp+0h] [bp-78h]@1
  int *v12; // [sp+8h] [bp-70h]@1
  int *v13; // [sp+Ch] [bp-6Ch]@1
  int v14; // [sp+10h] [bp-68h]@1
  _DWORD *v15; // [sp+14h] [bp-64h]@1
  int *v16; // [sp+18h] [bp-60h]@1
  int v17; // [sp+24h] [bp-54h]@1
  void *v18; // [sp+28h] [bp-50h]@1
  char v19; // [sp+2Ch] [bp-4Ch]@1
  int v20; // [sp+30h] [bp-48h]@1
  int (__cdecl *v21)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-34h]@1
  int *v22; // [sp+48h] [bp-30h]@1
  char *v23; // [sp+4Ch] [bp-2Ch]@1
  int (*v24)(); // [sp+50h] [bp-28h]@1
  __int64 *v25; // [sp+54h] [bp-24h]@1
  const char *v26; // [sp+68h] [bp-10h]@1
  int v27; // [sp+6Ch] [bp-Ch]@1
  char v28; // [sp+70h] [bp-8h]@1
  __int64 v29; // [sp+80h] [bp+8h]@3

  v18 = this;
  v23 = &v28;
  v17 = a5;
  v21 = sub_6F962A50;
  v22 = &dword_6F96B65C;
  v24 = sub_6F8F8CC3;
  v25 = &v11;
  sub_6F8A1A60((int *)&v19);
  v12 = &v27;
  v20 = -1;
  v26 = (const char *)sub_6F9081A0(0, 0);
  v16 = (int *)&v26;
  v15 = a7;
  v14 = a6;
  v12 = (int *)a3;
  v13 = a4;
  v11 = a2;
  v20 = 1;
  if ( (_BYTE)v17 )
    v8 = sub_6F8F7E40(v11, (int)v12, (int)v13, v14, v15, (int)v16);
  else
    v8 = sub_6F8F7340(v11, (int)v12, (int)v13, v14, v15, (int)v16);
  v20 = 1;
  v29 = v8;
  v27 = sub_6F937FA0();
  v13 = &v27;
  sub_6F959BC0(v26, (double *)a8, a7);
  v9 = (int)v26;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v9 - 12), (int)&v27);
  sub_6F8A1AD0((int *)&v19);
  return v29;
}
