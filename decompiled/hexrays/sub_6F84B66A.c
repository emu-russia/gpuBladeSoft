signed int __cdecl sub_6F84B66A(int a1, int a2, unsigned int a3)
{
  signed int result; // eax@4

  if ( !(*(_DWORD *)(a1 + 116) & 1) || !(*(_DWORD *)(a1 + 116) & 4) )
    sub_6F83979A(a1, (int)"out of place");
  *(_DWORD *)(a1 + 116) |= 0x18u;
  result = sub_6F84A77C(a1, a3);
  if ( a3 )
    result = sub_6F839842(a1, "invalid");
  return result;
}
