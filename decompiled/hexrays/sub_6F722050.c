int __cdecl sub_6F722050(int a1, int a2, unsigned __int16 a3)
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
  int v13; // ebx@1
  int v14; // ecx@1
  int v15; // ebx@1
  int v16; // ecx@1
  int v17; // ebx@1
  int v18; // ecx@1

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
  v13 = dword_6FD40980;
  *(_DWORD *)(v12 + 4) = result;
  *(_WORD *)(v12 + 8) = a3;
  v14 = v12 + 2 * v13;
  *(_DWORD *)v14 = result;
  v15 = dword_6FD40980;
  *(_DWORD *)(v14 + 4) = result;
  *(_WORD *)(v14 + 8) = a3;
  v16 = v14 + 2 * v15;
  *(_DWORD *)v16 = result;
  v17 = dword_6FD40980;
  *(_DWORD *)(v16 + 4) = result;
  *(_WORD *)(v16 + 8) = a3;
  v18 = v16 + 2 * v17;
  *(_DWORD *)v18 = result;
  *(_DWORD *)(v18 + 4) = result;
  *(_WORD *)(v18 + 8) = a3;
  return result;
}
