void *__thiscall sub_6F908A30(void *this, unsigned int a2, unsigned int a3)
{
  void *v3; // ebx@1
  unsigned int v4; // eax@1
  int v5; // edx@1

  v3 = this;
  v4 = *(_DWORD *)(*(_DWORD *)this - 12);
  v5 = v4 - a2;
  if ( v4 - a2 > a3 )
    v5 = a3;
  if ( a2 > v4 )
    sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase");
  sub_6F909B10((const void **)this, a2, v5, 0);
  return v3;
}
