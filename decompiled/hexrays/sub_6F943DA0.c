signed int __thiscall sub_6F943DA0(int this)
{
  unsigned int v1; // eax@2
  unsigned int v2; // edx@2
  _WORD *v3; // eax@5
  signed int result; // eax@6

  if ( !(*(_BYTE *)(this + 32) & 8) )
    goto LABEL_10;
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
  v3 = *(_WORD **)(this + 8);
  if ( v2 > (unsigned int)v3 )
    result = *v3;
  else
LABEL_10:
    result = -1;
  return result;
}
