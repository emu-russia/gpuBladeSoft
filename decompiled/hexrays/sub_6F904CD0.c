void __thiscall sub_6F904CD0(void *this)
{
  void *v1; // ebx@1
  char *v2; // ecx@1

  v1 = this;
  v2 = (char *)this + 8;
  *((_DWORD *)v2 - 2) = off_6FBB0138;
  *((_DWORD *)v2 - 1) = 0;
  *(_DWORD *)v2 = off_6FBB0FC0;
  sub_6F956920(v2);
  j_free_1(v1);
}
