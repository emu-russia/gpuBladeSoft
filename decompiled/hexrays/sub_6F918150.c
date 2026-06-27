int __fastcall sub_6F918150(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // ebx@1
  int result; // eax@2
  __int64 v9; // rax@3
  int v10; // ecx@4
  int v11; // ecx@4

  v7 = a1;
  *(_DWORD *)a1 = -1;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = 0;
  if ( (unsigned __int8)sub_6F9173D0(a3, a2)
    && (v9 = sub_6F90E590((void *)(a3 + 36), a4, a5, a6), ((unsigned int)v9 & HIDWORD(v9)) != -1) )
  {
    *(_DWORD *)v7 = v9;
    result = v7;
    *(_WORD *)(a3 + 69) = 0;
    v10 = *(_DWORD *)(a3 + 92);
    *(_DWORD *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 104) = v10;
    *(_DWORD *)(a3 + 100) = v10;
    v11 = *(_DWORD *)(a3 + 60);
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 4) = v11;
    *(_DWORD *)(a3 + 8) = v11;
    *(_DWORD *)(a3 + 12) = v11;
    *(_DWORD *)(a3 + 24) = 0;
    *(_DWORD *)(a3 + 52) = a7;
    *(_DWORD *)(v7 + 8) = a7;
    *(_DWORD *)(v7 + 4) = HIDWORD(v9);
  }
  else
  {
    result = v7;
  }
  return result;
}
