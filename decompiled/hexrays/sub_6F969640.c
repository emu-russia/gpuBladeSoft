int __usercall sub_6F969640@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebp@1
  int v4; // esi@1
  int v5; // edx@1
  int v6; // edi@3
  int v7; // eax@3
  unsigned int v8; // eax@6
  int v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@1

  v3 = 98;
  v4 = 0;
  v10 = a2;
  v11 = a1;
  v5 = a3;
  while ( v4 != v10 )
  {
    v6 = *(_DWORD *)(v11 + 12 * v4 + 4);
    v7 = (a3 - v6) >> 31;
    if ( v3 > (v7 ^ (a3 - v6)) - v7 )
    {
      v5 = *(_DWORD *)(v11 + 12 * v4 + 4);
      v3 = (v7 ^ (a3 - v6)) - v7;
    }
    ++v4;
  }
  v8 = (v5 + 32) & 0xFFFFFFC0;
  if ( v5 > a3 )
  {
    if ( a3 < (signed int)(v8 - 47) )
      v5 = a3;
  }
  else if ( a3 > (signed int)(v8 + 47) )
  {
    v5 = a3;
  }
  return v5;
}
