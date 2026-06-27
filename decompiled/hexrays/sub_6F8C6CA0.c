signed int __thiscall sub_6F8C6CA0(int this, const void *a2, unsigned int a3, size_t a4)
{
  int v4; // eax@1
  unsigned int v5; // ebx@1
  unsigned int v6; // eax@3
  int v7; // ebp@3
  signed int result; // eax@8

  v4 = *(_DWORD *)(this + 4);
  v5 = a3;
  if ( v4 && a4 )
  {
    v6 = v4 - 1;
    v7 = *(_DWORD *)this;
    if ( v6 <= a3 )
      v5 = v6;
    do
    {
      if ( memchr(a2, *(_BYTE *)(v7 + v5), a4) )
        break;
      --v5;
    }
    while ( v5 != -1 );
    result = v5;
  }
  else
  {
    result = -1;
  }
  return result;
}
