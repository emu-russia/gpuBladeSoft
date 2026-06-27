unsigned int __thiscall sub_6F8BD120(void *this, const void *a2, unsigned int a3, size_t a4)
{
  unsigned int v4; // ebx@1
  int v5; // edi@1
  int v6; // eax@1

  v4 = -1;
  v5 = *(_DWORD *)this;
  v6 = *(_DWORD *)(*(_DWORD *)this - 12);
  if ( v6 )
  {
    v4 = v6 - 1;
    if ( v6 - 1 > a3 )
      v4 = a3;
    do
    {
      if ( !a4 )
        break;
      if ( !memchr(a2, *(_BYTE *)(v5 + v4), a4) )
        break;
      --v4;
    }
    while ( v4 != -1 );
  }
  return v4;
}
