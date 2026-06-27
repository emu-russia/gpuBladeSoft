int __cdecl sub_6F814A20(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // ecx@1
  int v5; // eax@1
  int v6; // ebx@1
  int v7; // ecx@1
  int v8; // eax@1
  int v9; // ebx@1
  int v10; // ecx@1
  int v11; // eax@1
  int v12; // ebx@1
  int v13; // ecx@1
  int v14; // eax@1
  int v15; // ebx@1
  int v16; // ecx@1
  int v17; // eax@1
  int result; // eax@1

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  v3 = a3 + a1;
  *(_DWORD *)v3 = *(_DWORD *)(a3 + a2);
  v4 = a3 + a3 + a2;
  *(_DWORD *)(v3 + 4) = *(_DWORD *)(a3 + a2 + 4);
  v5 = a3 + a3 + a1;
  *(_DWORD *)v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(v4 + 4);
  v7 = a3 + v4;
  *(_DWORD *)(v5 + 4) = v6;
  v8 = a3 + v5;
  *(_DWORD *)v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(v7 + 4);
  v10 = a3 + v7;
  *(_DWORD *)(v8 + 4) = v9;
  v11 = a3 + v8;
  *(_DWORD *)v11 = *(_DWORD *)v10;
  v12 = *(_DWORD *)(v10 + 4);
  v13 = a3 + v10;
  *(_DWORD *)(v11 + 4) = v12;
  v14 = a3 + v11;
  *(_DWORD *)v14 = *(_DWORD *)v13;
  v15 = *(_DWORD *)(v13 + 4);
  v16 = a3 + v13;
  *(_DWORD *)(v14 + 4) = v15;
  v17 = a3 + v14;
  *(_DWORD *)v17 = *(_DWORD *)v16;
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(v16 + 4);
  result = a3 + v17;
  *(_DWORD *)result = *(_DWORD *)(v16 + a3);
  *(_DWORD *)(result + 4) = *(_DWORD *)(v16 + a3 + 4);
  return result;
}
