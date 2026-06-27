int __thiscall sub_6F8BA2C0(int this)
{
  int v1; // ebx@1
  int v2; // eax@1

  v1 = this;
  v2 = getc(*(FILE **)(this + 32));
  return ungetc(v2, *(FILE **)(v1 + 32));
}
