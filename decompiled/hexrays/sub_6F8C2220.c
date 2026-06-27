int __thiscall sub_6F8C2220(int this, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8)
{
  int v8; // eax@1
  unsigned int v9; // ecx@1
  int result; // eax@3
  int v11; // [sp+8h] [bp-10h]@1
  int v12; // [sp+Ch] [bp-Ch]@1
  int v13; // [sp+10h] [bp-8h]@1
  int v14; // [sp+14h] [bp-4h]@1

  v11 = a6;
  v12 = a7;
  v13 = a3;
  v14 = a4;
  v8 = *(_DWORD *)(this + 16);
  v9 = *(_DWORD *)(this + 12);
  if ( v9 >= 0xFFFF )
    v9 = 0xFFFF;
  result = sub_6F90E260(&v13, (int)&v11, v9, v8, 1);
  *a5 = v13;
  *a8 = v11;
  return result;
}
