int __cdecl sub_6F959D50(int a1, float *a2, _DWORD *a3)
{
  const char *v3; // eax@1
  size_t v4; // eax@1
  double v5; // st7@1
  signed int v7; // eax@7
  int v8; // [sp+0h] [bp-6Ch]@1
  const char *v9; // [sp+4h] [bp-68h]@1
  void *v10; // [sp+10h] [bp-5Ch]@1
  const char *v11; // [sp+14h] [bp-58h]@1
  size_t v12; // [sp+18h] [bp-54h]@1
  char v13; // [sp+1Ch] [bp-50h]@1
  int v14; // [sp+20h] [bp-4Ch]@1
  int (__cdecl *v15)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v16; // [sp+38h] [bp-34h]@1
  char *v17; // [sp+3Ch] [bp-30h]@1
  int (__cdecl *v18)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-2Ch]@1
  int *v19; // [sp+44h] [bp-28h]@1
  _BYTE *v20; // [sp+5Ch] [bp-10h]@1
  char v21; // [sp+60h] [bp-Ch]@1

  v15 = sub_6F962A50;
  v17 = &v21;
  v16 = dword_6F96AB08;
  v18 = sub_6F959EB1;
  v19 = &v8;
  sub_6F8A1A60((int *)&v13);
  v9 = 0;
  v8 = 0;
  v3 = (const char *)setlocale();
  v11 = v3;
  v4 = strlen(v3);
  v14 = 1;
  v12 = v4 + 1;
  v10 = sub_6F961B40(v4 + 1);
  memcpy(v10, v11, v12);
  v9 = "C";
  v8 = 0;
  setlocale();
  v14 = -1;
  v5 = sub_6F8A2040(a1, (int)&v20);
  *a2 = v5;
  if ( v20 == (_BYTE *)a1 || *v20 )
  {
    *(_DWORD *)a2 = 0;
    *a3 = 4;
  }
  else if ( v5 < -3.4028235e38 || v5 > 3.4028235e38 )
  {
    v7 = -8388609;
    if ( v5 > 0.0 )
      v7 = 2139095039;
    *(_DWORD *)a2 = v7;
    *a3 = 4;
  }
  v8 = 0;
  v9 = (const char *)v10;
  setlocale();
  j_j_free_1(v10);
  return sub_6F8A1AD0((int *)&v13);
}
