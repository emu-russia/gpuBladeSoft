int __cdecl sub_6F7221B0(int a1, int a2, unsigned __int16 a3)
{
  int v3; // ecx@1
  int result; // eax@1
  int v5; // ecx@1
  int v6; // ebx@1
  int v7; // ecx@1
  int v8; // ebx@1
  int v9; // ecx@1
  int v10; // ebx@1
  int v11; // ecx@1
  int v12; // ebx@1
  int v13; // ecx@1
  int v14; // ebx@1
  int v15; // ecx@1
  int v16; // ebx@1
  int v17; // ecx@1

  v3 = *(_DWORD *)(dword_6FD400FC + ((dword_6FD40984 & a2) << 12) + 4 * (dword_6FD40988 & a1));
  *(_WORD *)(v3 + 4) = a3;
  result = (a3 << 16) | a3;
  *(_DWORD *)v3 = result;
  v5 = v3 + 2 * dword_6FD40980;
  *(_DWORD *)v5 = result;
  v6 = dword_6FD40980;
  *(_WORD *)(v5 + 4) = a3;
  v7 = v5 + 2 * v6;
  *(_DWORD *)v7 = result;
  v8 = dword_6FD40980;
  *(_WORD *)(v7 + 4) = a3;
  v9 = v7 + 2 * v8;
  *(_DWORD *)v9 = result;
  v10 = dword_6FD40980;
  *(_WORD *)(v9 + 4) = a3;
  v11 = v9 + 2 * v10;
  *(_DWORD *)v11 = result;
  v12 = dword_6FD40980;
  *(_WORD *)(v11 + 4) = a3;
  v13 = v11 + 2 * v12;
  *(_DWORD *)v13 = result;
  v14 = dword_6FD40980;
  *(_WORD *)(v13 + 4) = a3;
  v15 = v13 + 2 * v14;
  *(_DWORD *)v15 = result;
  v16 = dword_6FD40980;
  *(_WORD *)(v15 + 4) = a3;
  v17 = v15 + 2 * v16;
  *(_DWORD *)v17 = result;
  *(_WORD *)(v17 + 4) = a3;
  return result;
}
