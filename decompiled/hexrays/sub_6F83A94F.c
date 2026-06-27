signed int __cdecl sub_6F83A94F(int a1, int a2, double *a3)
{
  signed int result; // eax@5

  if ( a1 && a2 && *(_WORD *)(a2 + 114) & 1 && a3 )
  {
    *a3 = (double)*(signed int *)(a2 + 40) * 0.00001;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
