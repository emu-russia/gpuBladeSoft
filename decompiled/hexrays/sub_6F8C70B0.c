unsigned int __thiscall sub_6F8C70B0(int this, char a2, unsigned int a3)
{
  unsigned int result; // eax@1
  unsigned int v4; // edx@1
  int v5; // ecx@2

  result = a3;
  v4 = *(_DWORD *)(this + 4);
  if ( a3 >= v4 )
    return -1;
  v5 = *(_DWORD *)this;
  if ( a2 == *(_BYTE *)(v5 + a3) )
  {
    while ( ++result != v4 )
    {
      if ( *(_BYTE *)(v5 + result) != a2 )
        return result;
    }
    return -1;
  }
  return result;
}
