void __usercall __spoils<edx,ecx> sub_6F90E190(int a1@<edx>, int a2@<ecx>, unsigned int a3, char a4)
{
  int v4; // ebp@1
  unsigned int v5; // esi@1
  int v6; // ebx@3
  bool v7; // dl@6
  bool v8; // al@6
  int v9; // [sp+8h] [bp-18h]@2
  int v10; // [sp+Ch] [bp-14h]@1

  v4 = a2;
  v5 = a3;
  v10 = a1;
  if ( a4 & 4 )
    sub_6F90DF70((int)&v9);
  v6 = v4 - 1;
  if ( a3 >= 0xFFFF )
    v5 = 0xFFFF;
  if ( v4 )
  {
    do
    {
      v7 = v5 >= sub_6F90DAC0((int)&v9, v5);
      v8 = v6-- != 0;
    }
    while ( v8 && v7 );
  }
}
