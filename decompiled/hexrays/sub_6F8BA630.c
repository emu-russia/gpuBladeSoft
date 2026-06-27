wint_t __thiscall sub_6F8BA630(int this)
{
  int v1; // ebx@1
  wint_t result; // ax@1

  v1 = this;
  result = getwc(*(FILE **)(this + 32));
  *(_WORD *)(v1 + 36) = result;
  return result;
}
