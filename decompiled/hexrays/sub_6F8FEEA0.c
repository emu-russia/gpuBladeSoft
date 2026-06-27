int __thiscall sub_6F8FEEA0(int *this, const void *a2, int a3, int a4)
{
  int *v4; // ebx@1
  int result; // eax@1

  v4 = this;
  result = sub_6F8FD210(a2, (int)a2 + 2 * a3);
  *v4 = result;
  return result;
}
