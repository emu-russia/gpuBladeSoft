bool __thiscall sub_6F8FD070(int this, int a2)
{
  bool result; // al@1
  const char *v3; // ecx@2

  result = 1;
  if ( a2 != this )
  {
    v3 = *(const char **)(this + 4);
    result = 0;
    if ( *v3 != 42 )
      result = strcmp(v3, (const char *)((**(_BYTE **)(a2 + 4) == 42) + *(_DWORD *)(a2 + 4))) == 0;
  }
  return result;
}
