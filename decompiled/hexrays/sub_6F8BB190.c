bool __thiscall sub_6F8BB190(void *this, int a1, int a2, int a3)
{
  bool result; // al@1

  result = sub_6F8FD070((int)this, a1);
  if ( result )
  {
    *(_DWORD *)(a3 + 12) = 8;
    *(_DWORD *)(a3 + 4) = 6;
    *(_DWORD *)a3 = a2;
  }
  return result;
}
