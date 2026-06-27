int __thiscall sub_6F8BA160(int this, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // ebx@1
  int (__thiscall *v7)(int, int, __int64, int, int); // edi@1
  int result; // eax@3
  signed __int64 v9; // rax@4

  v6 = this;
  v7 = *(int (__thiscall **)(int, int, __int64, int, int))(*(_DWORD *)a2 + 16);
  if ( v7 == sub_6F8BA0D0 )
  {
    *(_DWORD *)this = -1;
    *(_DWORD *)(this + 4) = -1;
    *(_DWORD *)(this + 8) = 0;
    if ( sub_6F8A3B00(*(FILE **)(a2 + 32), a3, 0) )
    {
      result = v6;
    }
    else
    {
      v9 = sub_6F8A3F90((FILE *)*(_DWORD *)(a2 + 32));
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)v6 = v9;
      result = v6;
      *(_DWORD *)(v6 + 4) = HIDWORD(v9);
    }
  }
  else
  {
    ((void (__stdcall *)(int, _DWORD, _DWORD, _DWORD, int))v7)(a2, a3, HIDWORD(a3), 0, a6);
    result = v6;
  }
  return result;
}
