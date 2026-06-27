signed int __usercall sub_6F8B20F0@<eax>(_DWORD *a1@<eax>)
{
  _DWORD *v1; // ebx@1
  signed int v2; // esi@2

  v1 = a1;
  sub_6F8B35C0(&dword_6FB48ACC);
  if ( v1 )
  {
    v2 = 0;
    if ( *v1 == -1 )
      v2 = sub_6F8B1F70(v1, 0);
  }
  else
  {
    v2 = 22;
  }
  sub_6F8B3600(&dword_6FB48ACC);
  return v2;
}
