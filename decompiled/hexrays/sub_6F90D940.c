void __usercall __spoils<edx,ecx> sub_6F90D940(int a1@<edx>, unsigned int a2@<ecx>, unsigned int a3, char a4)
{
  unsigned int v4; // edi@1
  signed int v5; // ebx@1
  int v6; // esi@4
  unsigned int v7; // ebp@4
  unsigned int v8; // eax@8
  int v9; // [sp+Ch] [bp-18h]@2
  int v10; // [sp+10h] [bp-14h]@1

  v4 = a2;
  v5 = a3;
  v10 = a1;
  if ( a4 & 4 )
    sub_6F90DF70((int)&v9);
  if ( v4 <= 1 )
  {
    v7 = 1;
LABEL_11:
    if ( v4 == v7 )
    {
      if ( a3 >= 0xFFFF )
        v5 = 0xFFFF;
      sub_6F90DAC0((int)&v9, v5);
    }
  }
  else
  {
    v6 = 0;
    v7 = 1;
    while ( 1 )
    {
      v8 = sub_6F90DAC0((int)&v9, a3);
      if ( a3 < v8 )
        break;
      if ( v8 <= 0xFFFF )
        v7 = v6;
      v6 = v7 + 1;
      v7 += 2;
      if ( v7 >= v4 )
        goto LABEL_11;
    }
  }
}
