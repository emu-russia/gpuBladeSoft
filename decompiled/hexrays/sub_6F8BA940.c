wint_t __thiscall sub_6F8BA940(int this)
{
  int v1; // ebx@1
  wint_t v2; // ax@1

  v1 = this;
  v2 = getwc(*(FILE **)(this + 32));
  return ungetwc(v2, *(FILE **)(v1 + 32));
}
