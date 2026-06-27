signed int __usercall sub_6F8A2750@<eax>(int a1@<ebp>, int a2, int a3)
{
  signed int v3; // esi@2
  signed int v4; // ecx@2
  int v6; // [sp+18h] [bp-14h]@1
  int v7; // [sp+1Ch] [bp-10h]@2

  if ( sub_6F8A2670(a1, (int)&v6, a3) )
  {
    v4 = -1;
  }
  else
  {
    v3 = v7;
    v4 = 0;
    *(_DWORD *)a2 = v6;
    *(_DWORD *)(a2 + 4) = v3 / 1000;
  }
  return v4;
}
