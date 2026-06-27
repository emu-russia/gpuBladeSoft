int __thiscall sub_6F915F10(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx@1
  int result; // eax@2
  __int64 v8; // rax@3
  int v9; // ecx@4
  int v10; // ecx@4

  v6 = this;
  *(_DWORD *)this = -1;
  *(_DWORD *)(this + 4) = -1;
  *(_DWORD *)(this + 8) = 0;
  if ( (unsigned __int8)sub_6F915190((_DWORD *)a2)
    && (v8 = sub_6F90E590((void *)(a2 + 36), a3, a4, a5), ((unsigned int)v8 & HIDWORD(v8)) != -1) )
  {
    *(_DWORD *)v6 = v8;
    result = v6;
    *(_WORD *)(a2 + 69) = 0;
    v9 = *(_DWORD *)(a2 + 88);
    *(_DWORD *)(a2 + 20) = 0;
    *(_DWORD *)(a2 + 100) = v9;
    *(_DWORD *)(a2 + 96) = v9;
    v10 = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a2 + 16) = 0;
    *(_DWORD *)(a2 + 4) = v10;
    *(_DWORD *)(a2 + 8) = v10;
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(a2 + 24) = 0;
    *(_DWORD *)(a2 + 52) = a6;
    *(_DWORD *)(v6 + 8) = a6;
    *(_DWORD *)(v6 + 4) = HIDWORD(v8);
  }
  else
  {
    result = v6;
  }
  return result;
}
