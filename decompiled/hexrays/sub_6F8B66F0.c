signed int __usercall sub_6F8B66F0@<eax>(_DWORD *a1@<eax>)
{
  _DWORD *v1; // ebx@1
  signed int v2; // ebx@2
  signed int result; // eax@2

  v1 = a1;
  sub_6F8B35C0(&dword_6FB48AE0);
  if ( *v1 == -1 )
  {
    v2 = sub_6F8B65B0(v1);
    sub_6F8B3600(&dword_6FB48AE0);
    result = v2;
  }
  else
  {
    sub_6F8B3600(&dword_6FB48AE0);
    result = 22;
  }
  return result;
}
