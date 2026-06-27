int __thiscall sub_6F8C1020(int this, int a2, int a3, int a4, int a5, char a6, int a7, _DWORD *a8, double *a9)
{
  int *v9; // ST04_4@1
  int result; // eax@1
  int v11; // [sp+0h] [bp-5Ch]@0
  int v12; // [sp+3Ch] [bp-20h]@1
  double v13[3]; // [sp+40h] [bp-1Ch]@1

  LOBYTE(v11) = 0;
  v9 = *(int **)(this + 8);
  v12 = 0;
  result = sub_6F90FBA0(v11, v9, a2, a3, a4, a5, (unsigned __int8)a6, a7, &v12, (int *)v13, 0);
  if ( v12 )
    *a8 = v12;
  else
    *a9 = v13[0];
  return result;
}
