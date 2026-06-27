int __cdecl sub_6F815230(int a1, int a2)
{
  int result; // eax@1
  int v3; // ebx@1
  int v4; // esi@1
  int v5; // esi@1
  int v6; // ebx@1
  int v7; // esi@1
  int v8; // ebx@1
  int v9; // esi@1
  int v10; // edi@1
  int v11; // ebx@1
  int v12; // esi@1
  int v13; // ebx@1
  int v14; // ecx@1

  result = a1;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = v3;
  v5 = -v4;
  *(_DWORD *)(a1 + 8) = v5;
  v6 = *(_DWORD *)(a2 + 12) + v5 * (1 - v3);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  v7 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 12) = v6;
  v8 = *(_DWORD *)(a2 + 20);
  v9 = -v7;
  *(_DWORD *)(a1 + 20) = v8;
  *(_DWORD *)(a1 + 24) = v9;
  v10 = *(_DWORD *)(a2 + 36);
  v11 = *(_DWORD *)(a2 + 28) + v9 * (1 - v8);
  v12 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = v10;
  *(_DWORD *)(a1 + 32) = v12;
  *(_DWORD *)(a1 + 28) = v11;
  v13 = -*(_DWORD *)(a2 + 40);
  v14 = *(_DWORD *)(a2 + 44) + v13 * (1 - v10);
  *(_DWORD *)(a1 + 40) = v13;
  *(_DWORD *)(a1 + 44) = v14;
  return result;
}
