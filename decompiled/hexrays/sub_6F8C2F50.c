signed int __thiscall sub_6F8C2F50(int this, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int *a8)
{
  unsigned int v8; // edi@1
  int v9; // ebx@1
  unsigned int v10; // eax@3
  int v11; // eax@6
  signed int v12; // ebp@7
  unsigned int v13; // edx@7
  signed int result; // eax@13
  int v15; // ecx@15
  int v16; // [sp+8h] [bp-18h]@1
  int v17; // [sp+Ch] [bp-14h]@1

  v8 = *(_DWORD *)(this + 12);
  v9 = a3;
  v16 = a6;
  v17 = a7;
  if ( *(_BYTE *)(this + 16) & 2 && !(unsigned __int8)sub_6F90DA30((int)&v16) )
  {
LABEL_14:
    result = 1;
    goto LABEL_15;
  }
  v10 = (a4 - a3) >> 1;
  if ( a3 == a4 )
  {
LABEL_16:
    result = 0;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v13 = *(_WORD *)v9;
    if ( v13 - 55296 <= 0x3FF )
      break;
    if ( v13 - 56320 <= 0x3FF )
      goto LABEL_13;
    v12 = 1;
    if ( v8 < v13 )
      goto LABEL_13;
LABEL_8:
    if ( !(unsigned __int8)sub_6F90DD30((int)&v16, v13) )
      goto LABEL_14;
    v9 += 2 * v12;
    v10 = (a4 - v9) >> 1;
    if ( a4 == v9 )
      goto LABEL_16;
  }
  if ( v10 <= 1 )
    goto LABEL_16;
  v11 = *(_WORD *)(v9 + 2);
  if ( (unsigned int)(v11 - 56320) <= 0x3FF )
  {
    v12 = 2;
    v13 = v11 + (v13 << 10) - 56613888;
    if ( v8 >= v13 )
      goto LABEL_8;
  }
LABEL_13:
  result = 2;
LABEL_15:
  v15 = v16;
  *a5 = v9;
  *a8 = v15;
  return result;
}
