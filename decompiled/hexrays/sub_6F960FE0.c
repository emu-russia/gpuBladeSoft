void __thiscall sub_6F960FE0(char *this)
{
  char *v1; // ebx@1

  v1 = &this[*(_DWORD *)(*(_DWORD *)this - 12)];
  *(_DWORD *)v1 = off_6FBB04BC;
  *((_DWORD *)v1 + 1) = off_6FBB0FD0;
  sub_6F956920((_DWORD *)v1 + 1);
  j_free_1(v1);
}
