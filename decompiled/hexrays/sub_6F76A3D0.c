signed int __cdecl sub_6F76A3D0(int a1, int a2, int a3, int a4, const char *a5, int *a6)
{
  int v6; // eax@3
  unsigned int v7; // edi@5
  unsigned int v8; // esi@5
  int v9; // ebp@8
  signed int v10; // ebx@10
  signed int result; // eax@11
  signed int v12; // [sp+14h] [bp-48h]@2
  _DWORD *v13; // [sp+18h] [bp-44h]@2
  int v14; // [sp+1Ch] [bp-40h]@1
  int v15; // [sp+20h] [bp-3Ch]@2
  _DWORD *v16; // [sp+30h] [bp-2Ch]@4
  int v17; // [sp+34h] [bp-28h]@9

  v14 = *(_DWORD *)a1;
  if ( !a2 )
  {
    v12 = 6;
LABEL_13:
    sub_6F773D90(v14, a2);
    return v12;
  }
  v13 = sub_6F773A50(*(_DWORD *)a1, 40, &v15);
  v12 = v15;
  if ( v15 )
    goto LABEL_13;
  sub_6F771FA0((int)v13, a2, a3);
  v6 = v15;
  v13[6] = sub_6F768800;
  v12 = v6;
  if ( v6 )
    goto LABEL_13;
  v15 = 2;
  v16 = v13;
  if ( a5 )
  {
    v15 = 10;
    v7 = a1 + 20;
    v8 = a1 + 20 + 4 * *(_DWORD *)(a1 + 16);
    if ( a1 + 20 < v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)v7;
        if ( !strcmp(*(const char **)(**(_DWORD **)v7 + 8), a5) )
          break;
        v7 += 4;
        if ( v8 <= v7 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v9 = 0;
    }
    v17 = v9;
  }
  v10 = sub_6F7699B0(a1, (int)&v15, a4, a6);
  if ( v10 )
  {
    sub_6F771FD0((int)v13);
    sub_6F773D90(v14, (int)v13);
    result = v10;
  }
  else
  {
    *(_DWORD *)(*a6 + 8) &= 0xFFFFFBFF;
    result = v12;
  }
  return result;
}
