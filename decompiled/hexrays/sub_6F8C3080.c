int *__thiscall sub_6F8C3080(void *this, _DWORD *a2, int a3)
{
  int v3; // eax@1
  void (__thiscall *v4)(char **, _DWORD *, int); // eax@1
  _DWORD *v6; // [sp+8h] [bp-78h]@1
  int v7; // [sp+Ch] [bp-74h]@1
  int *v8; // [sp+20h] [bp-60h]@1
  char v9; // [sp+24h] [bp-5Ch]@1
  int v10; // [sp+28h] [bp-58h]@1
  int (__cdecl *v11)(int, int, __int64, void (**)(void), int *); // [sp+3Ch] [bp-44h]@1
  int *v12; // [sp+40h] [bp-40h]@1
  char *v13; // [sp+44h] [bp-3Ch]@1
  int (*v14)(); // [sp+48h] [bp-38h]@1
  int *v15; // [sp+4Ch] [bp-34h]@1
  char *v16; // [sp+60h] [bp-20h]@1
  int v17; // [sp+64h] [bp-1Ch]@1
  char v18; // [sp+68h] [bp-18h]@1
  char v19; // [sp+78h] [bp-8h]@1

  v8 = (int *)this;
  v13 = &v19;
  v15 = (int *)&v6;
  v11 = sub_6F962A50;
  v12 = &dword_6F96CB1C;
  v14 = sub_6F8C311B;
  sub_6F8A1A60((int *)&v9);
  v3 = *a2;
  v7 = a3;
  v6 = a2;
  v4 = *(void (__thiscall **)(char **, _DWORD *, int))(v3 + 16);
  v10 = -1;
  v4(&v16, a2, a3);
  v10 = 1;
  sub_6F90E920(v8, v16, v17);
  if ( v16 != &v18 )
    j_free_1(v16);
  sub_6F8A1AD0((int *)&v9);
  return v8;
}
