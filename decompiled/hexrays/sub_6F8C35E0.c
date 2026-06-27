int __thiscall sub_6F8C35E0(void *this, int a2)
{
  void *v2; // ebx@1
  int (__stdcall *v3)(unsigned __int8); // eax@1
  int result; // eax@2

  v2 = this;
  sub_6F8C33B0((unsigned int)this);
  v3 = *(int (__stdcall **)(unsigned __int8))(*(_DWORD *)v2 + 24);
  if ( v3 == sub_6F8C3660 )
    result = a2;
  else
    result = ((int (__thiscall *)(void *, _DWORD))v3)(v2, (char)a2);
  return result;
}
