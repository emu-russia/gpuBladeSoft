char __thiscall sub_6F8BB150(void *this, int a2, int a3, unsigned int a4)
{
  void *v4; // esi@1
  char result; // al@1

  v4 = this;
  result = sub_6F8FD070((int)this, a2);
  if ( !result && a4 <= 3 )
    result = (*(int (__thiscall **)(int, void *, int))(*(_DWORD *)a2 + 20))(a2, v4, a3);
  return result;
}
