int __cdecl sub_6F722E40(int a1, int a2, unsigned __int16 a3)
{
  int v3; // ecx@1
  int result; // eax@1
  int v5; // ebx@1
  int v6; // ecx@1
  int v7; // ebx@1
  int v8; // ecx@1
  int v9; // ebx@1
  int v10; // ecx@1
  int v11; // ebx@1
  int v12; // ecx@1

  v3 = *(_DWORD *)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *(_WORD *)(v3 + 8) = a3;
  result = (a3 << 16) | a3;
  *(_DWORD *)v3 = result;
  v5 = dword_6FD40980;
  *(_DWORD *)(v3 + 4) = result;
  v6 = v3 + 2 * v5;
  *(_DWORD *)v6 = result;
  v7 = dword_6FD40980;
  *(_DWORD *)(v6 + 4) = result;
  *(_WORD *)(v6 + 8) = a3;
  v8 = v6 + 2 * v7;
  *(_DWORD *)v8 = result;
  v9 = dword_6FD40980;
  *(_DWORD *)(v8 + 4) = result;
  *(_WORD *)(v8 + 8) = a3;
  v10 = v8 + 2 * v9;
  *(_DWORD *)v10 = result;
  v11 = dword_6FD40980;
  *(_DWORD *)(v10 + 4) = result;
  *(_WORD *)(v10 + 8) = a3;
  v12 = v10 + 2 * v11;
  *(_DWORD *)v12 = result;
  *(_DWORD *)(v12 + 4) = result;
  *(_WORD *)(v12 + 8) = a3;
  return result;
}
