wint_t __thiscall sub_6F8BA8D0(int this, wint_t a2)
{
  int v2; // ebx@1
  wint_t result; // ax@1

  v2 = this;
  result = a2;
  if ( a2 == -1 )
  {
    if ( *(_WORD *)(this + 36) != -1 )
      result = ungetwc(*(_WORD *)(this + 36), *(FILE **)(this + 32));
    *(_WORD *)(v2 + 36) = -1;
  }
  else
  {
    result = ungetwc(a2, *(FILE **)(this + 32));
    *(_WORD *)(v2 + 36) = -1;
  }
  return result;
}
