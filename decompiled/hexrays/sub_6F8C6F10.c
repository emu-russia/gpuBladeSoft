unsigned int __thiscall sub_6F8C6F10(int this, const void *a2, unsigned int a3, size_t a4)
{
  unsigned int v4; // ebx@1
  int v5; // eax@1
  int v6; // ebp@2

  v4 = -1;
  v5 = *(_DWORD *)(this + 4);
  if ( v5 )
  {
    v4 = v5 - 1;
    v6 = *(_DWORD *)this;
    if ( v5 - 1 > a3 )
      v4 = a3;
    do
    {
      if ( !a4 )
        break;
      if ( !memchr(a2, *(_BYTE *)(v6 + v4), a4) )
        break;
      --v4;
    }
    while ( v4 != -1 );
  }
  return v4;
}
