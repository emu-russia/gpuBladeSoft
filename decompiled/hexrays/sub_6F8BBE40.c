char *__thiscall sub_6F8BBE40(char *this, int a2, int a3)
{
  char *v3; // eax@1
  int v4; // edx@1
  int v6; // [sp+0h] [bp-58h]@1
  const char *v7; // [sp+8h] [bp-50h]@2
  size_t v8; // [sp+Ch] [bp-4Ch]@2
  int v9; // [sp+14h] [bp-44h]@1
  char *v10; // [sp+18h] [bp-40h]@1
  char v11; // [sp+1Ch] [bp-3Ch]@1
  int v12; // [sp+20h] [bp-38h]@3
  int (__cdecl *v13)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-24h]@1
  int *v14; // [sp+38h] [bp-20h]@1
  char *v15; // [sp+3Ch] [bp-1Ch]@1
  int (*v16)(); // [sp+40h] [bp-18h]@1
  int *v17; // [sp+44h] [bp-14h]@1
  char v18; // [sp+50h] [bp-8h]@1

  v10 = this;
  v15 = &v18;
  v13 = sub_6F962A50;
  v14 = &dword_6F96C248;
  v16 = sub_6F8BBEE3;
  v17 = &v6;
  sub_6F8A1A60((int *)&v11);
  v3 = v10;
  v4 = (int)(v10 + 8);
  *((_DWORD *)v10 + 1) = 0;
  v9 = v4;
  *(_DWORD *)v3 = v4;
  v3[8] = 0;
  if ( a3 == 1 )
  {
    v8 = 14;
    v7 = "iostream error";
  }
  else
  {
    v8 = 13;
    v7 = "Unknown error";
  }
  v12 = 1;
  sub_6F93A0E0((int)v10, 0, 0, v7, v8);
  sub_6F8A1AD0((int *)&v11);
  return v10;
}
