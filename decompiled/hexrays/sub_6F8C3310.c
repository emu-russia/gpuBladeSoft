int __thiscall sub_6F8C3310(int this, int a2)
{
  int result; // eax@1

  result = a2;
  if ( *(_BYTE *)(*(_DWORD *)(this + 24) + 2 * (unsigned __int8)a2) & 1 )
    result = a2 + 32;
  return result;
}
