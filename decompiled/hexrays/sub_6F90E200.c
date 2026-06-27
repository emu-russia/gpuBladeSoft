int __usercall sub_6F90E200@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, char a4)
{
  int v4; // ebp@1
  int v5; // edi@1
  unsigned int v6; // esi@1
  int v7; // ebx@4
  bool v8; // dl@5
  bool v9; // al@5

  v4 = a2;
  v5 = a1;
  v6 = a3;
  sub_6F90D9E0(a3, &a4, a1);
  if ( v6 >= 0xFFFF )
    v6 = 0xFFFF;
  if ( v4 )
  {
    v7 = v4 - 1;
    do
    {
      v8 = v6 >= sub_6F90DC70(v5, v6, a4);
      v9 = v7-- != 0;
    }
    while ( v9 && v8 );
  }
  return *(_DWORD *)v5;
}
