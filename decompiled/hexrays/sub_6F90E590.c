__int64 __thiscall sub_6F90E590(void *this, int a2, int a3, int a4)
{
  FILE **v4; // eax@1
  __int64 v5; // rax@1
  int v7; // [sp+0h] [bp-60h]@1
  __int64 v8; // [sp+18h] [bp-48h]@1
  int v9; // [sp+20h] [bp-40h]@1
  int v10; // [sp+24h] [bp-3Ch]@1
  char v11; // [sp+2Ch] [bp-34h]@1
  int v12; // [sp+30h] [bp-30h]@1
  int (__cdecl *v13)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-1Ch]@1
  int *v14; // [sp+48h] [bp-18h]@1
  int *v15; // [sp+4Ch] [bp-14h]@1
  int (__cdecl *v16)(int, int, int, int, int, int, int, int, int, int, int, int, int, int); // [sp+50h] [bp-10h]@1
  int *v17; // [sp+54h] [bp-Ch]@1
  int v18; // [sp+60h] [bp+0h]@1

  LODWORD(v8) = this;
  v15 = &v18;
  v10 = a3;
  v9 = a2;
  v13 = sub_6F962A50;
  v14 = dword_6F96AA3C;
  v16 = sub_6F90E62C;
  v17 = &v7;
  sub_6F8A1A60((int *)&v11);
  v4 = sub_6F90E350((FILE **)v8);
  v12 = 1;
  LODWORD(v5) = j__lseeki64((int)v4, v9, v10, a4);
  v8 = v5;
  sub_6F8A1AD0((int *)&v11);
  return v8;
}
