signed int __thiscall sub_6F8BC4A0(void *this, void *a2, unsigned int a3, unsigned int a4)
{
  int v4; // ecx@1
  unsigned int v5; // ebx@1
  unsigned int v6; // ebx@2
  const void *v7; // eax@5

  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)(v4 - 12);
  if ( a4 > v5 )
    sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::copy");
  v6 = v5 - a4;
  if ( v6 > a3 )
    v6 = a3;
  if ( !v6 )
    return v6;
  v7 = (const void *)(v4 + 2 * a4);
  if ( v6 != 1 )
  {
    memcpy(a2, v7, 2 * v6);
    return v6;
  }
  *(_WORD *)a2 = *(_WORD *)v7;
  return 1;
}
