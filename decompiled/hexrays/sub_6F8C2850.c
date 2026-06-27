signed int __thiscall sub_6F8C2850(int this, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8)
{
  int v8; // eax@1
  int v9; // ecx@1
  signed int result; // eax@1
  int v11; // edx@1
  int v12; // esi@1
  int v13; // [sp+4h] [bp-18h]@1
  int v14; // [sp+8h] [bp-14h]@1
  int v15; // [sp+Ch] [bp-10h]@1
  int v16; // [sp+10h] [bp-Ch]@1

  v8 = *(_DWORD *)(this + 12);
  v9 = *(_DWORD *)(this + 8);
  v13 = a3;
  v14 = a4;
  v15 = a6;
  v16 = a7;
  result = sub_6F90DE20((int)&v13, (int)&v15, v9, v8);
  v11 = v13;
  v12 = v15;
  *a5 = v13;
  *a8 = v12;
  if ( !result && v11 != a4 )
    result = 2;
  return result;
}
