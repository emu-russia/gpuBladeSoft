signed int __thiscall sub_6F8BD230(void *this, const void *a2, unsigned int a3, size_t a4)
{
  int v4; // ebx@1
  unsigned int v5; // ebp@1
  unsigned int v6; // edi@1
  signed int result; // eax@6

  v4 = *(_DWORD *)this;
  v5 = a3;
  v6 = *(_DWORD *)(*(_DWORD *)this - 12);
  if ( a3 >= v6 )
  {
LABEL_7:
    result = -1;
  }
  else
  {
    if ( a4 )
    {
      while ( memchr(a2, *(_BYTE *)(v4 + v5), a4) )
      {
        if ( ++v5 == v6 )
          goto LABEL_7;
      }
    }
    result = v5;
  }
  return result;
}
