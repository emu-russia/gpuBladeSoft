int __thiscall sub_6F8C1FF0(int this, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // edi@1
  int v6; // ebx@3
  bool v7; // dl@4
  bool v8; // al@4
  int v10; // [sp+8h] [bp-18h]@1
  int v11; // [sp+Ch] [bp-14h]@1

  v5 = *(_DWORD *)(this + 8);
  v10 = a3;
  v11 = a4;
  if ( *(_BYTE *)(this + 12) & 4 )
    sub_6F90DF70((int)&v10);
  v6 = a5 - 1;
  if ( a5 )
  {
    do
    {
      v7 = v5 >= sub_6F90DAC0((int)&v10, v5);
      v8 = v6-- != 0;
    }
    while ( v8 && v7 );
  }
  return v10 - a3;
}
