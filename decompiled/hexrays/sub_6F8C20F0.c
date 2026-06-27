int __thiscall sub_6F8C20F0(int this, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8)
{
  int v8; // eax@1
  unsigned int v9; // ecx@1
  int result; // eax@3
  int v11; // [sp+8h] [bp-10h]@1
  int v12; // [sp+Ch] [bp-Ch]@1
  int v13; // [sp+10h] [bp-8h]@1
  int v14; // [sp+14h] [bp-4h]@1

  v11 = a3;
  v12 = a4;
  v13 = a6;
  v14 = a7;
  v8 = *(_DWORD *)(this + 12);
  v9 = *(_DWORD *)(this + 8);
  if ( v9 >= 0xFFFF )
    v9 = 0xFFFF;
  result = sub_6F90E260(&v11, (int)&v13, v9, v8, 1);
  *a5 = v11;
  *a8 = v13;
  return result;
}
