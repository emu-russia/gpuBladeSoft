int __cdecl sub_6F79C4D0(int a1)
{
  int result; // eax@1
  int v2; // ecx@1
  int v3; // esi@1
  int v4; // ebx@1
  int v5; // edx@1
  int v6; // esi@1
  int v7; // edx@1
  int v8; // ebx@1
  signed int v9; // ecx@1
  signed int v10; // edx@1
  int v11; // esi@1
  int v12; // ebx@1
  signed int v13; // edx@1
  int v14; // ecx@1
  int v15; // edx@1
  int v16; // esi@1
  int v17; // edx@1
  int v18; // ebx@1
  int v19; // ecx@1
  int v20; // edx@1

  result = a1;
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 48) = v3;
  v6 = (v3 + v2 + 1) >> 1;
  v7 = (v4 + v5 + 1) >> 1;
  v8 = (v4 + v2 + 1) >> 1;
  *(_DWORD *)(a1 + 40) = v6;
  *(_DWORD *)(a1 + 8) = v7;
  v9 = v7 + v8 + 1;
  v10 = v6 + v8 + 1;
  v11 = *(_DWORD *)(a1 + 28);
  v12 = *(_DWORD *)(a1 + 12);
  v9 >>= 1;
  v10 >>= 1;
  *(_DWORD *)(a1 + 32) = v10;
  v13 = v9 + v10 + 1;
  *(_DWORD *)(a1 + 16) = v9;
  v14 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 52) = v11;
  *(_DWORD *)(a1 + 24) = v13 >> 1;
  v15 = v12 + *(_DWORD *)(a1 + 4);
  v16 = (v11 + v14 + 1) >> 1;
  *(_DWORD *)(a1 + 44) = v16;
  v17 = (v15 + 1) >> 1;
  v18 = (v12 + v14 + 1) >> 1;
  *(_DWORD *)(a1 + 12) = v17;
  v19 = (v17 + v18 + 1) >> 1;
  v20 = (v16 + v18 + 1) >> 1;
  *(_DWORD *)(a1 + 36) = v20;
  *(_DWORD *)(a1 + 20) = v19;
  *(_DWORD *)(a1 + 28) = (v19 + v20 + 1) >> 1;
  return result;
}
