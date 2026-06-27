void __thiscall sub_6F960C30(char *this)
{
  char *v1; // ebx@1

  v1 = &this[*(_DWORD *)(*(_DWORD *)this - 12)];
  *(_DWORD *)v1 = off_6FBB0138;
  *((_DWORD *)v1 + 1) = 0;
  *((_DWORD *)v1 + 2) = off_6FBB0FC0;
  sub_6F956920((_DWORD *)v1 + 2);
  j_free_1(v1);
}
