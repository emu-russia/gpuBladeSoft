int __thiscall sub_6F8BA720(int this, int a2, __int64 a3, int a4, int a5)
{
  int v5; // ebx@1
  int v6; // ecx@1
  int result; // eax@4
  signed __int64 v8; // rax@5

  v5 = this;
  *(_DWORD *)this = -1;
  *(_DWORD *)(this + 4) = -1;
  *(_DWORD *)(this + 8) = 0;
  v6 = 0;
  if ( a4 )
    v6 = (a4 != 1) + 1;
  if ( sub_6F8A3B00(*(FILE **)(a2 + 32), a3, v6) )
  {
    result = v5;
  }
  else
  {
    v8 = sub_6F8A3F90((FILE *)*(_DWORD *)(a2 + 32));
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)v5 = v8;
    result = v5;
    *(_DWORD *)(v5 + 4) = HIDWORD(v8);
  }
  return result;
}
