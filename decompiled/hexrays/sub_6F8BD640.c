signed int __thiscall sub_6F8BD640(void *this, const void *a2, unsigned int a3, size_t a4)
{
  signed int v4; // ebx@1
  int v5; // ebp@1
  size_t v6; // eax@1
  unsigned int v7; // edx@1
  unsigned int v8; // eax@2

  v4 = -1;
  v5 = *(_DWORD *)this;
  v6 = *(_DWORD *)(*(_DWORD *)this - 12);
  v7 = a3;
  if ( a4 <= v6 )
  {
    v8 = v6 - a4;
    if ( v8 <= a3 )
      v7 = v8;
    v4 = v7;
    if ( a4 )
    {
      while ( memcmp((const void *)(v5 + v4), a2, a4) )
      {
        if ( !v4 )
          return -1;
        --v4;
        if ( !a4 )
          return v4;
      }
    }
  }
  return v4;
}
