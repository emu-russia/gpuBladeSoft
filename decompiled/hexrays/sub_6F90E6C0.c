FILE **__thiscall sub_6F90E6C0(FILE **this, int a2, char a3)
{
  unsigned int v3; // eax@1
  const char *v4; // eax@2
  FILE *v6; // eax@6
  FILE **v7; // edx@6
  int v8; // [sp+0h] [bp-5Ch]@1
  FILE **v9; // [sp+18h] [bp-44h]@1
  char v10; // [sp+1Ch] [bp-40h]@1
  int v11; // [sp+20h] [bp-3Ch]@6
  int (__cdecl *v12)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v13; // [sp+38h] [bp-24h]@1
  char *v14; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v15)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v16; // [sp+44h] [bp-18h]@1
  char v17; // [sp+50h] [bp-Ch]@1

  v9 = this;
  v14 = &v17;
  v12 = sub_6F962A50;
  v13 = dword_6F96AA1C;
  v15 = sub_6F90E790;
  v16 = &v8;
  sub_6F8A1A60((int *)&v10);
  v3 = (a3 & 0x3D) - 1;
  if ( v3 <= 0x3B
    && (v4 = (const char *)*(&off_6FBA7760 + v3)) != 0
    && !*v9
    && (v11 = 1, v6 = fdopen(a2, v4), v7 = v9, (*v9 = v6) != 0) )
  {
    *((_BYTE *)v7 + 4) = 1;
    if ( !a2 )
      setvbuf(v6, 0, 4, 0);
  }
  else
  {
    v9 = 0;
  }
  sub_6F8A1AD0((int *)&v10);
  return v9;
}
