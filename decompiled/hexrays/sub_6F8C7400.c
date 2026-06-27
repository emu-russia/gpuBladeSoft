signed int __thiscall sub_6F8C7400(int this, const void *a2, unsigned int a3, size_t a4)
{
  signed int v4; // ebx@1
  size_t v5; // eax@1
  unsigned int v6; // edx@1
  unsigned int v7; // eax@2
  int v8; // ebp@2

  v4 = -1;
  v5 = *(_DWORD *)(this + 4);
  v6 = a3;
  if ( a4 <= v5 )
  {
    v7 = v5 - a4;
    v8 = *(_DWORD *)this;
    if ( v7 <= a3 )
      v6 = v7;
    v4 = v6;
    if ( a4 )
    {
      while ( memcmp((const void *)(v8 + v4), a2, a4) )
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
