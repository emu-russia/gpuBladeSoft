int __thiscall sub_6F8BA240(int this, int a2)
{
  int result; // eax@2

  if ( a2 == -1 )
    result = -(fflush(*(FILE **)(this + 32)) != 0);
  else
    result = putc(a2, *(FILE **)(this + 32));
  return result;
}
