signed int __thiscall sub_6F8C6DE0(int this, const void *a2, unsigned int a3, size_t a4)
{
  unsigned int v4; // edi@1
  unsigned int v5; // esi@2
  int v6; // ebp@3
  signed int result; // eax@6

  v4 = a3;
  if ( a4 && (v5 = *(_DWORD *)(this + 4), a3 < v5) )
  {
    v6 = *(_DWORD *)this;
    while ( !memchr(a2, *(_BYTE *)(v6 + v4), a4) )
    {
      if ( ++v4 == v5 )
        goto LABEL_7;
    }
    result = v4;
  }
  else
  {
LABEL_7:
    result = -1;
  }
  return result;
}
