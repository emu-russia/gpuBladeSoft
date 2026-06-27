void __thiscall sub_6F924560(void *this)
{
  void *v1; // ebx@1
  char *v2; // ecx@1

  v1 = this;
  v2 = (char *)this + 4;
  *((_DWORD *)v2 - 1) = off_6FBB04BC;
  *(_DWORD *)v2 = off_6FBB0FD0;
  sub_6F956920(v2);
  j_free_1(v1);
}
