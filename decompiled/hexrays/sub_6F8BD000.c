signed int __thiscall sub_6F8BD000(void *this, const void *a2, unsigned int a3, size_t a4)
{
  unsigned int v4; // ebp@1
  int v5; // esi@2
  unsigned int v6; // edi@2
  signed int result; // eax@6

  v4 = a3;
  if ( a4 && (v5 = *(_DWORD *)this, v6 = *(_DWORD *)(*(_DWORD *)this - 12), a3 < v6) )
  {
    while ( !memchr(a2, *(_BYTE *)(v5 + v4), a4) )
    {
      if ( ++v4 == v6 )
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
