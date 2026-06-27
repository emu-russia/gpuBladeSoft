int __usercall sub_6F8601B8@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // ebx@1
  int v5; // esi@1
  int v6; // edi@2
  int v7; // [sp+2Ch] [bp-1Ch]@2

  v4 = result;
  v5 = a2;
  if ( a3 < a4 )
  {
    v7 = a3 - 1;
    v6 = a3;
    do
      result = sub_6F868CF4(v4, v7, v4, v6++, 1, v5);
    while ( a4 > v6 );
  }
  return result;
}
