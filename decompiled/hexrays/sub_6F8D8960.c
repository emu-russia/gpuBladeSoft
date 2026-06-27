int __stdcall sub_6F8D8960(int a2, int a3, int a4, int a5)
{
  int v4; // ebx@2
  bool v5; // dl@3
  bool v6; // al@3
  int result; // eax@4
  int v8; // [sp+8h] [bp-10h]@1
  int v9; // [sp+Ch] [bp-Ch]@1

  v8 = a3;
  v9 = a4;
  if ( a5 )
  {
    v4 = a5 - 1;
    do
    {
      v5 = sub_6F90DAC0((int)&v8, 0x10FFFFu) <= 0x10FFFF;
      v6 = v4-- != 0;
    }
    while ( v6 && v5 );
    result = v8 - a3;
  }
  else
  {
    result = 0;
  }
  return result;
}
