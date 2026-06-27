int __thiscall sub_6F909D80(int *this, _BYTE *a2, int a3, int a4)
{
  int *v4; // ebx@1
  int result; // eax@1

  v4 = this;
  result = sub_6F908280(a2, &a2[a3]);
  *v4 = result;
  return result;
}
