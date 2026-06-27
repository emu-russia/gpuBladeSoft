int __usercall sub_6F860764@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // esi@1
  int v5; // edi@3
  int v6; // ecx@4
  char v7; // bl@4
  int v8; // edx@4
  int v9; // [sp+0h] [bp-14h]@1
  int v10; // [sp+4h] [bp-10h]@1

  v9 = a2;
  v10 = a3;
  v4 = a4 - a3;
  if ( a4 - a3 > 0 && a2 > 0 )
  {
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(result + 4 * v5) + v10;
      v7 = *(_BYTE *)(v6 - 1);
      v8 = 0;
      do
        *(_BYTE *)(v6 + v8++) = v7;
      while ( v8 != v4 );
      ++v5;
    }
    while ( v5 != v9 );
  }
  return result;
}
