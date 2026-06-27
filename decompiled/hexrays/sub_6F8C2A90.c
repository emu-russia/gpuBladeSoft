int __thiscall sub_6F8C2A90(int this, int a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int v6; // ecx@1
  int v8; // [sp+Ch] [bp-Ch]@1
  int v9; // [sp+10h] [bp-8h]@1

  v5 = *(_DWORD *)(this + 16);
  v6 = *(_DWORD *)(this + 12);
  v9 = a4;
  v8 = a3;
  return sub_6F90E200((int)&v8, a5, v6, v5) - a3;
}
