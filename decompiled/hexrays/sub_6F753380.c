int __usercall sub_6F753380@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // ecx@1
  int result; // eax@1
  int v6; // esi@3
  int v7; // ebx@3
  int v8; // ST00_4@3
  int v9; // [sp+4h] [bp-18h]@1

  v4 = a4 * a3;
  v9 = a1;
  result = 3 * v4;
  if ( 3 * v4 > 0 )
  {
    result = 0;
    do
    {
      v6 = *(_BYTE *)(v9 + result + 1);
      v7 = *(_BYTE *)(v9 + result + 2);
      v8 = *(_BYTE *)(v9 + result);
      *(_BYTE *)(a2 + result) = (16842 * v8 + 33030 * v6 + 6422 * v7 + 0x100000) >> 16;
      *(_BYTE *)(a2 + result + 1) = (-9699 * v8 + -19070 * v6 + 28770 * v7 + 0x800000) >> 16;
      *(_BYTE *)(a2 + result + 2) = (-24117 * v6 + 28770 * v8 + -4653 * v7 + 0x800000) >> 16;
      result += 3;
    }
    while ( result < 3 * v4 );
  }
  return result;
}
