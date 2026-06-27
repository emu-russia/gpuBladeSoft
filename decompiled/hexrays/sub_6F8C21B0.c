int __thiscall sub_6F8C21B0(int this, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8)
{
  unsigned int v8; // ecx@1
  int result; // eax@3
  int v10; // [sp+8h] [bp-10h]@1
  int v11; // [sp+Ch] [bp-Ch]@1
  int v12; // [sp+10h] [bp-8h]@1
  int v13; // [sp+14h] [bp-4h]@1

  v8 = *(_DWORD *)(this + 12);
  v10 = a3;
  v11 = a4;
  v12 = a6;
  v13 = a7;
  if ( v8 >= 0xFFFF )
    v8 = 0xFFFF;
  result = sub_6F90E070((int)&v10, (int)&v12, v8, 1, 1);
  *a5 = v10;
  *a8 = v12;
  return result;
}
