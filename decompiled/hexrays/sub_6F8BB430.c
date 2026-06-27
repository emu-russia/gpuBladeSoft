int __thiscall sub_6F8BB430(_DWORD **this, int a2, int a3, int a4, int a5)
{
  _DWORD **v5; // edx@1
  int result; // eax@2
  _DWORD **v7; // ST1C_4@3
  bool v8; // al@3

  v5 = this;
  if ( a5 == a3 && (v7 = this, v8 = sub_6F8FD070((int)this, a4), v5 = v7, v8) )
    result = 6;
  else
    result = (*(int (__stdcall **)(int, int, int, int))(*v5[2] + 32))(a2, a3, a4, a5);
  return result;
}
