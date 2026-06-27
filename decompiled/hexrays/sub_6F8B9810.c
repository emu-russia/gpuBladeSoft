int __thiscall sub_6F8B9810(void *this, int a2, int a3, int a4)
{
  void *v4; // eax@1
  int result; // eax@2
  int v6; // edx@3
  _DWORD *v7; // edx@3
  int v8; // eax@3
  int v9; // [sp+0h] [bp-58h]@1
  void *v10; // [sp+14h] [bp-44h]@1
  _DWORD *v11; // [sp+18h] [bp-40h]@1
  char v12; // [sp+1Ch] [bp-3Ch]@1
  int v13; // [sp+20h] [bp-38h]@1
  int (__cdecl *v14)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-24h]@1
  __int16 *v15; // [sp+38h] [bp-20h]@1
  char *v16; // [sp+3Ch] [bp-1Ch]@1
  int (*v17)(); // [sp+40h] [bp-18h]@1
  int *v18; // [sp+44h] [bp-14h]@1
  char v19; // [sp+50h] [bp-8h]@1

  v11 = this;
  v16 = &v19;
  v14 = sub_6F962A50;
  v15 = &word_6F96CB06;
  v17 = sub_6F8B98EF;
  v18 = &v9;
  sub_6F8A1A60((int *)&v12);
  v13 = -1;
  sub_6F919130(v11);
  v4 = v11;
  *v11 = off_6FBAF544;
  v13 = 1;
  v10 = (char *)v4 + 36;
  sub_6F90E650((_BYTE *)v4 + 36, (FILE *)a2, a3);
  if ( sub_6F8BF810(v10) )
  {
    v6 = (int)v11;
    v11[11] = a3;
    *(_DWORD *)(v6 + 64) = a4;
    sub_6F9176A0(v6);
    v7 = v11;
    *(_WORD *)((char *)v11 + 69) = 0;
    v8 = v7[15];
    v7[5] = 0;
    v7[1] = v8;
    v7[2] = v8;
    v7[3] = v8;
    v7[4] = 0;
    v7[6] = 0;
    result = sub_6F8A1AD0((int *)&v12);
  }
  else
  {
    result = sub_6F8A1AD0((int *)&v12);
  }
  return result;
}
