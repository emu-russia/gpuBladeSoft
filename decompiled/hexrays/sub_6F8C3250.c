bool __thiscall sub_6F8C3250(void *this, int a2, int a3)
{
  int (__stdcall *v3)(int); // eax@1
  bool result; // al@3
  int v5; // eax@2
  void *v6; // edx@2

  v3 = *(int (__stdcall **)(int))(*(_DWORD *)this + 20);
  if ( v3 != sub_6F8C32A0 )
  {
    v5 = v3(a2);
    this = v6;
    a2 = v5;
  }
  result = 0;
  if ( *(void **)(a3 + 4) == this )
    result = *(_DWORD *)a3 == a2;
  return result;
}
