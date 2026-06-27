int __thiscall sub_6F8C1EF0(int this, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8)
{
  int v8; // eax@1
  unsigned int v9; // ecx@1
  int v10; // eax@1
  int result; // eax@1
  int v12; // [sp+4h] [bp-10h]@1
  int v13; // [sp+8h] [bp-Ch]@1
  int v14; // [sp+Ch] [bp-8h]@1
  int v15; // [sp+10h] [bp-4h]@1

  v8 = this;
  v9 = *(_DWORD *)(this + 8);
  v10 = *(_DWORD *)(v8 + 12);
  v12 = a3;
  v13 = a4;
  v14 = a6;
  v15 = a7;
  result = sub_6F90DEB0((int)&v12, (int)&v14, v9, v10);
  *a5 = v12;
  *a8 = v14;
  return result;
}
