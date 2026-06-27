int __thiscall sub_6F8BE970(_DWORD *this, char *a2, size_t a3, const char *a4, const struct tm *a5)
{
  const char *v5; // eax@1
  size_t v6; // eax@1
  char *v7; // eax@1
  char *v8; // edx@1
  char *v9; // eax@1
  size_t v10; // eax@1
  int v12; // [sp+0h] [bp-5Ch]@1
  char *v13; // [sp+4h] [bp-58h]@1
  char *v14; // [sp+10h] [bp-4Ch]@1
  size_t v15; // [sp+14h] [bp-48h]@1
  _DWORD *v16; // [sp+18h] [bp-44h]@1
  char v17; // [sp+1Ch] [bp-40h]@1
  int v18; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v19)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v20; // [sp+38h] [bp-24h]@1
  char *v21; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v22)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v23; // [sp+44h] [bp-18h]@1
  char v24; // [sp+50h] [bp-Ch]@1

  v16 = this;
  v21 = &v24;
  v19 = sub_6F962A50;
  v20 = dword_6F96CC10;
  v22 = sub_6F8BEA7C;
  v23 = &v12;
  sub_6F8A1A60((int *)&v17);
  v13 = 0;
  v12 = 0;
  v5 = (const char *)setlocale();
  v14 = (char *)v5;
  v6 = strlen(v5);
  v18 = 1;
  v15 = v6 + 1;
  v7 = (char *)sub_6F961B40(v6 + 1);
  v8 = v14;
  v14 = v7;
  memcpy(v7, v8, v15);
  v9 = (char *)v16[4];
  v12 = 0;
  v13 = v9;
  setlocale();
  v10 = strftime(a2, a3, a4, a5);
  v12 = 0;
  v15 = v10;
  v13 = v14;
  setlocale();
  j_j_free_1(v14);
  if ( !v15 )
    *a2 = 0;
  return sub_6F8A1AD0((int *)&v17);
}
