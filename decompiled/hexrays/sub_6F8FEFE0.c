int __thiscall sub_6F8FEFE0(int *this, int *a2, unsigned int a3, unsigned int a4)
{
  int *v4; // esi@1
  int v5; // ebx@1
  unsigned int v6; // eax@1
  int v7; // eax@3
  int result; // eax@4

  v4 = this;
  v5 = *a2;
  v6 = *(_DWORD *)(*a2 - 12) - a3;
  if ( v6 > a4 )
    v6 = a4;
  v7 = v5 + 2 * (a3 + v6);
  if ( a3 > *(_DWORD *)(*a2 - 12) )
    sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::basic_string");
  result = sub_6F8FD2B0((const void *)(v5 + 2 * a3), v7);
  *v4 = result;
  return result;
}
