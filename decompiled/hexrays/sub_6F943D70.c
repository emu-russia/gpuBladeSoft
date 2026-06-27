int __thiscall sub_6F943D70(int this)
{
  unsigned int v1; // edx@2
  unsigned int v2; // eax@2
  int result; // eax@5

  if ( *(_BYTE *)(this + 32) & 8 )
  {
    v1 = *(_DWORD *)(this + 20);
    v2 = *(_DWORD *)(this + 12);
    if ( v1 )
    {
      if ( v1 > v2 )
      {
        *(_DWORD *)(this + 12) = v1;
        v2 = v1;
      }
    }
    result = (signed int)(v2 - *(_DWORD *)(this + 8)) >> 1;
  }
  else
  {
    result = -1;
  }
  return result;
}
