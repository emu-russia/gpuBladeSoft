int __thiscall sub_6F90E520(FILE **this, int a2, int a3)
{
  FILE **v3; // edi@1
  FILE **v4; // eax@3
  int v5; // ebp@3

  v3 = this;
  do
  {
    v4 = sub_6F90E350(v3);
    v5 = read((int)v4, a2, a3);
  }
  while ( v5 == -1 && *_errno() == 4 );
  return v5;
}
