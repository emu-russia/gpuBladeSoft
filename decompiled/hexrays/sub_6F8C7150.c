signed int __thiscall sub_6F8C7150(int this, void *a2, size_t a3, unsigned int a4)
{
  unsigned int v4; // ebx@1
  unsigned int v5; // ebx@2
  const void *v6; // eax@5

  v4 = *(_DWORD *)(this + 4);
  if ( a4 > v4 )
    sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::copy");
  v5 = v4 - a4;
  if ( v5 > a3 )
    v5 = a3;
  if ( !v5 )
    return v5;
  v6 = (const void *)(*(_DWORD *)this + a4);
  if ( v5 != 1 )
  {
    memcpy(a2, v6, v5);
    return v5;
  }
  *(_BYTE *)a2 = *(_BYTE *)v6;
  return 1;
}
