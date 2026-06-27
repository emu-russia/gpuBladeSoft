void __thiscall sub_6F9612D0(char *this)
{
  char *v1; // ecx@1

  v1 = &this[*(_DWORD *)(*(_DWORD *)this - 12)];
  *((_DWORD *)v1 + 2) = &unk_6FBABE40;
  v1 += 12;
  *((_DWORD *)v1 - 3) = &unk_6FBABE18;
  *((_DWORD *)v1 - 2) = 0;
  *(_DWORD *)v1 = off_6FBB0FD0;
  sub_6F956920(v1);
}
