signed int __thiscall sub_6F8C1F50(int this, int a2, unsigned int *a3, unsigned int *a4, unsigned int **a5, int a6, int a7, int *a8)
{
  unsigned int v8; // edi@1
  unsigned int *v9; // ebx@1
  unsigned int v10; // edx@4
  signed int result; // eax@9
  int v12; // ecx@10
  int v13; // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@1

  v8 = *(_DWORD *)(this + 8);
  v9 = a3;
  v13 = a6;
  v14 = a7;
  if ( !(*(_BYTE *)(this + 12) & 2) || (unsigned __int8)sub_6F90DA30((int)&v13) )
  {
    if ( a3 == a4 )
    {
LABEL_11:
      result = 0;
      goto LABEL_10;
    }
    v10 = *a3;
    if ( v8 < *a3 )
    {
LABEL_12:
      result = 2;
      goto LABEL_10;
    }
    while ( (unsigned __int8)sub_6F90DD30((int)&v13, v10) )
    {
      ++v9;
      if ( a4 == v9 )
        goto LABEL_11;
      v10 = *v9;
      if ( v8 < *v9 )
        goto LABEL_12;
    }
  }
  result = 1;
LABEL_10:
  v12 = v13;
  *a5 = v9;
  *a8 = v12;
  return result;
}
