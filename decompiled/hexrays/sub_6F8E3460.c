__int64 __thiscall sub_6F8E3460(void *this, __int64 a2, char a3, int a4, int a5, _DWORD *a6, int a7)
{
  _DWORD *v7; // ecx@3
  __int64 v9; // [sp+0h] [bp-78h]@1
  int *v10; // [sp+8h] [bp-70h]@1
  int *v11; // [sp+Ch] [bp-6Ch]@1
  __int64 v12; // [sp+20h] [bp-58h]@1
  char v13; // [sp+2Ch] [bp-4Ch]@1
  int v14; // [sp+30h] [bp-48h]@1
  int (__cdecl *v15)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-34h]@1
  int *v16; // [sp+48h] [bp-30h]@1
  char *v17; // [sp+4Ch] [bp-2Ch]@1
  int (*v18)(); // [sp+50h] [bp-28h]@1
  __int64 *v19; // [sp+54h] [bp-24h]@1
  _DWORD *v20; // [sp+68h] [bp-10h]@1
  int v21; // [sp+6Ch] [bp-Ch]@1
  char v22; // [sp+70h] [bp-8h]@1

  LODWORD(v12) = this;
  v17 = &v22;
  v15 = sub_6F962A50;
  v16 = &dword_6F96B61C;
  v18 = sub_6F8E35A3;
  v19 = &v9;
  sub_6F8A1A60((int *)&v13);
  v10 = &v21;
  v14 = -1;
  v20 = sub_6F9081A0(0, 0);
  v14 = 1;
  sub_6F909A00((int *)&v20, 0x20u);
  a2 = sub_6F8E2270(a2, a3, a4, a5, a6, &v20);
  v21 = sub_6F937FA0();
  v11 = &v21;
  sub_6F959D50((int)v20, (float *)a7, a6);
  if ( sub_6F8C2310(&a2, (int)&a3) )
    *a6 |= 2u;
  v7 = v20;
  v12 = a2;
  if ( _InterlockedExchangeAdd(v20 - 1, 0xFFFFFFFF) <= 0 )
    sub_6F9086D0(v7 - 3, (int)&v21);
  sub_6F8A1AD0((int *)&v13);
  return v12;
}
