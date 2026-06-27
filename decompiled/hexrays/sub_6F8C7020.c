signed int __thiscall sub_6F8C7020(int this, const void *a2, unsigned int a3, size_t a4)
{
  unsigned int v4; // esi@1
  unsigned int v5; // edi@1
  int v6; // ebp@2
  signed int result; // eax@6

  v4 = *(_DWORD *)(this + 4);
  v5 = a3;
  if ( a3 >= v4 )
  {
LABEL_7:
    result = -1;
  }
  else
  {
    v6 = *(_DWORD *)this;
    if ( a4 )
    {
      while ( memchr(a2, *(_BYTE *)(v6 + v5), a4) )
      {
        if ( ++v5 == v4 )
          goto LABEL_7;
      }
    }
    result = v5;
  }
  return result;
}
