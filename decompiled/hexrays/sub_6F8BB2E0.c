char __thiscall sub_6F8BB2E0(_DWORD **this, int a2, int a3, int a4)
{
  _DWORD **v4; // ebp@1
  char result; // al@1

  v4 = this;
  result = sub_6F8BB190(this, a2, a3, a4);
  if ( !result )
    result = (*(int (__stdcall **)(int, int, int))(*v4[2] + 24))(a2, a3, a4);
  return result;
}
