unsigned int __thiscall sub_6F8BD2C0(void *this, char a2, unsigned int a3)
{
  int v3; // edx@1
  unsigned int result; // eax@1
  unsigned int v5; // ecx@1

  v3 = *(_DWORD *)this;
  result = a3;
  v5 = *(_DWORD *)(*(_DWORD *)this - 12);
  if ( a3 >= v5 )
    return -1;
  if ( a2 == *(_BYTE *)(v3 + a3) )
  {
    while ( ++result != v5 )
    {
      if ( *(_BYTE *)(v3 + result) != a2 )
        return result;
    }
    return -1;
  }
  return result;
}
