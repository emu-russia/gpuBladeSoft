int __usercall sub_6F8B9100@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebp@1
  int v4; // edi@1
  int v5; // esi@1
  int v6; // ebx@1
  int v7; // eax@4

  v3 = a2;
  v4 = a3;
  v5 = a3;
  v6 = a1;
  do
  {
    while ( 1 )
    {
      v7 = write_0(v6, v3, v4);
      if ( v7 == -1 )
        break;
      v4 -= v7;
      if ( !v4 )
        return v5;
      v3 += v7;
    }
  }
  while ( *_errno() == 4 );
  v5 -= v4;
  return v5;
}
