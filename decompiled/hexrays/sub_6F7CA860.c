int __cdecl sub_6F7CA860(int a1)
{
  int result; // eax@1
  int v2; // edx@1
  int v3; // ebx@1
  int v4; // ecx@1
  int v5; // edx@1
  bool v6; // zf@1
  int v7; // ebx@1
  int v8; // edx@2
  int v9; // ecx@2

  result = a1;
  *(_WORD *)(a1 + 58) = 0;
  v2 = *(_WORD *)(a1 + 22);
  v3 = *(_DWORD *)(a1 + 24);
  *(_WORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  v4 = 8 * v2;
  v5 = *(_DWORD *)(a1 + 28) + v2;
  v6 = *(_BYTE *)(a1 + 16) == 0;
  *(_DWORD *)(a1 + 60) = v4 + v3;
  v7 = *(_WORD *)(a1 + 20);
  *(_DWORD *)(a1 + 64) = v5;
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 32) + 2 * v7;
  if ( !v6 )
  {
    v8 = v4 + *(_DWORD *)(a1 + 40);
    v9 = *(_DWORD *)(a1 + 44) + v4;
    *(_DWORD *)(a1 + 76) = v8;
    *(_DWORD *)(a1 + 80) = v9;
  }
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 52) + 32 * *(_DWORD *)(a1 + 48);
  return result;
}
