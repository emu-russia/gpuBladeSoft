bool __thiscall sub_6F8C3230(void *this, int a2, int a3)
{
  bool result; // al@1

  result = 0;
  if ( this == *(void **)(a2 + 4) )
    result = *(_DWORD *)a2 == a3;
  return result;
}
