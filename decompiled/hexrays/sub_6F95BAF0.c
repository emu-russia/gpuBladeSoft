void __cdecl __noreturn sub_6F95BAF0(const char *a1, int a2)
{
  size_t v2; // eax@1
  int v3; // edx@1
  unsigned int v4; // eax@1
  void *v5; // esp@1
  char *v6; // eax@1
  const char *v7; // [sp+0h] [bp-58h]@1
  const char *v8; // [sp+18h] [bp-40h]@1
  char v9; // [sp+1Ch] [bp-3Ch]@1
  char v10; // [sp+1Fh] [bp-39h]@1
  int v11; // [sp+20h] [bp-38h]@1
  int (__cdecl *v12)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-24h]@1
  __int16 *v13; // [sp+38h] [bp-20h]@1
  char *v14; // [sp+3Ch] [bp-1Ch]@1
  void *v15; // [sp+40h] [bp-18h]@1
  int *v16; // [sp+44h] [bp-14h]@1
  char v17; // [sp+50h] [bp-8h]@1

  v12 = sub_6F962A50;
  v14 = &v17;
  v13 = &word_6F96B32A;
  v15 = &loc_6F95BBBA;
  v16 = (int *)&v7;
  sub_6F8A1A60((int *)&v9);
  v2 = strlen(a1);
  v3 = v2 + 512;
  v4 = 16 * ((v2 + 539) >> 4);
  sub_6F8A13B0(v4, (char)v7);
  v5 = alloca(v4);
  v16 = (int *)&v7;
  v8 = (const char *)((unsigned int)&v10 & 0xFFFFFFF0);
  v11 = -1;
  sub_6F8B9E50((char *)((unsigned int)&v10 & 0xFFFFFFF0), v3, (int)a1, (char **)&a2);
  v6 = (char *)sub_6F961D10(8);
  v7 = v8;
  v11 = 1;
  v8 = v6;
  sub_6F90F290(v6, v7);
  v11 = -1;
  sub_6F9628A0((int)v8, (int)&off_6FBAC740, (int)sub_6F90F340);
}
