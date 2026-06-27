int __thiscall sub_6F8C25B0(int this, int a2, int a3, int a4, int *a5, int a6, int a7, _DWORD *a8)
{
  unsigned int v8; // esi@1
  int v9; // ebx@1
  int v10; // eax@1
  int v11; // edx@1
  unsigned int v12; // eax@7
  int result; // eax@8
  int v14; // [sp+4h] [bp-1Ch]@1
  int v15; // [sp+8h] [bp-18h]@1
  int v16; // [sp+Ch] [bp-14h]@1

  v8 = *(_DWORD *)(this + 8);
  v9 = a6;
  v15 = a3;
  v10 = *(_DWORD *)(this + 12);
  v16 = a4;
  v14 = v10;
  sub_6F90D9E0(this, &v14, (int)&v15);
  v11 = v15;
  if ( (unsigned int)(v16 - v15) <= 1 )
  {
LABEL_10:
    *a5 = v11;
    *a8 = v9;
    result = 2 * (v11 != a4);
  }
  else if ( a6 == a7 )
  {
LABEL_11:
    *a5 = v11;
    *a8 = v9;
    result = 1;
  }
  else
  {
    while ( 1 )
    {
      v12 = sub_6F90DC70((int)&v15, v8, v14);
      v11 = v15;
      if ( v12 == -2 )
      {
        result = 1;
        goto LABEL_9;
      }
      if ( v8 < v12 )
        break;
      v9 += 4;
      *(_DWORD *)(v9 - 4) = v12;
      if ( (unsigned int)(v16 - v11) <= 1 )
        goto LABEL_10;
      if ( a7 == v9 )
        goto LABEL_11;
    }
    result = 2;
LABEL_9:
    *a5 = v15;
    *a8 = v9;
  }
  return result;
}
