int __thiscall sub_6F8C27C0(int this, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebp@1
  int v6; // eax@1
  int v7; // ebx@2
  unsigned int v8; // eax@3
  bool v9; // dl@3
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1
  int v13; // [sp+Ch] [bp-14h]@1

  v5 = *(_DWORD *)(this + 8);
  v13 = a4;
  v6 = *(_DWORD *)(this + 12);
  v12 = a3;
  v11 = v6;
  sub_6F90D9E0(this, &v11, (int)&v12);
  if ( a5 )
  {
    v7 = a5 - 1;
    do
    {
      v8 = sub_6F90DC70((int)&v12, v5, v11);
      v9 = v7-- != 0;
    }
    while ( v5 >= v8 && v9 );
  }
  return v12 - a3;
}
