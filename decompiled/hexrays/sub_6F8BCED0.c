signed int __thiscall sub_6F8BCED0(void *this, const void *a2, unsigned int a3, size_t a4)
{
  int v4; // esi@1
  unsigned int v5; // ebx@1
  int v6; // eax@1
  unsigned int v7; // eax@3
  signed int result; // eax@8

  v4 = *(_DWORD *)this;
  v5 = a3;
  v6 = *(_DWORD *)(*(_DWORD *)this - 12);
  if ( v6 && a4 )
  {
    v7 = v6 - 1;
    if ( v7 <= a3 )
      v5 = v7;
    do
    {
      if ( memchr(a2, *(_BYTE *)(v4 + v5), a4) )
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
