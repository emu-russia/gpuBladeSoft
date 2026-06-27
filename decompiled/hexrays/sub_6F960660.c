void __thiscall sub_6F960660(void *this)
{
  char *v1; // ebx@1
  char *v2; // ecx@1

  v1 = (char *)this;
  v2 = (char *)this + 4;
  *((_DWORD *)v2 - 1) = &unk_6FBABC88;
  *((_DWORD *)v2 - 3) = &unk_6FBABC60;
  *((_DWORD *)v2 - 2) = 0;
  *(_DWORD *)v2 = off_6FBB0FC0;
  sub_6F956920(v2);
  j_free_1(v1 - 8);
}
