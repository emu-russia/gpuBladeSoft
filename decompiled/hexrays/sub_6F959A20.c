int __cdecl sub_6F959A20(int a1, double *a2, _DWORD *a3)
{
  const char *v3; // eax@1
  size_t v4; // eax@1
  double v5; // st7@1
  int v7; // [sp+0h] [bp-6Ch]@1
  const char *v8; // [sp+4h] [bp-68h]@1
  void *v9; // [sp+10h] [bp-5Ch]@1
  const char *v10; // [sp+14h] [bp-58h]@1
  size_t v11; // [sp+18h] [bp-54h]@1
  char v12; // [sp+1Ch] [bp-50h]@1
  int v13; // [sp+20h] [bp-4Ch]@1
  int (__cdecl *v14)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v15; // [sp+38h] [bp-34h]@1
  char *v16; // [sp+3Ch] [bp-30h]@1
  int (__cdecl *v17)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-2Ch]@1
  int *v18; // [sp+44h] [bp-28h]@1
  _BYTE *v19; // [sp+5Ch] [bp-10h]@1
  char v20; // [sp+60h] [bp-Ch]@1

  v14 = sub_6F962A50;
  v16 = &v20;
  v15 = dword_6F96AB18;
  v17 = sub_6F959B9D;
  v18 = &v7;
  sub_6F8A1A60((int *)&v12);
  v8 = 0;
  v7 = 0;
  v3 = (const char *)setlocale();
  v10 = v3;
  v4 = strlen(v3);
  v13 = 1;
  v11 = v4 + 1;
  v9 = sub_6F961B40(v4 + 1);
  memcpy(v9, v10, v11);
  v8 = "C";
  v7 = 0;
  setlocale();
  v13 = -1;
  v5 = sub_6F8A1F40(a1, (int)&v19);
  *a2 = v5;
  if ( v19 == (_BYTE *)a1 || *v19 )
  {
    *a2 = 0.0;
    *a3 = 4;
  }
  else if ( v5 < -1.797693134862316e308 || v5 > 1.797693134862316e308 )
  {
    if ( v5 <= 0.0 )
    {
      *a2 = -1.797693134862316e308;
      *a3 = 4;
    }
    else
    {
      *a2 = 1.797693134862316e308;
      *a3 = 4;
    }
  }
  v7 = 0;
  v8 = (const char *)v9;
  setlocale();
  j_j_free_1(v9);
  return sub_6F8A1AD0((int *)&v12);
}
