int __stdcall sub_6F8D8A10(int a1, int a2, int a3, _DWORD *a4, int a5, int a6, _DWORD *a7)
{
  int result; // eax@1
  int v8; // [sp+8h] [bp-10h]@1
  int v9; // [sp+Ch] [bp-Ch]@1
  int v10; // [sp+10h] [bp-8h]@1
  int v11; // [sp+14h] [bp-4h]@1

  v8 = a2;
  v9 = a3;
  v10 = a5;
  v11 = a6;
  result = sub_6F90E070((int)&v8, (int)&v10, 0x10FFFFu, 1, 0);
  *a4 = v8;
  *a7 = v10;
  return result;
}
