signed int __thiscall sub_6F8C28C0(int this, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8)
{
  int v8; // ebx@1
  unsigned int v9; // esi@1
  int v10; // edx@1
  char v11; // al@1
  signed int v12; // edx@1
  int v14; // [sp+4h] [bp-18h]@1
  int v15; // [sp+8h] [bp-14h]@1
  int v16; // [sp+Ch] [bp-10h]@1
  int v17; // [sp+10h] [bp-Ch]@1

  v8 = *(_DWORD *)(this + 12);
  v9 = *(_DWORD *)(this + 8);
  v10 = *(_DWORD *)(this + 12);
  v14 = a3;
  v15 = a4;
  v16 = a6;
  v17 = a7;
  v11 = sub_6F90DA60((int)&v16, v10);
  v12 = 1;
  if ( v11 )
    v12 = sub_6F90DFB0((int)&v14, (int)&v16, v9, v8);
  *a5 = v14;
  *a8 = v16;
  return v12;
}
