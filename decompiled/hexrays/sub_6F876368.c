int __cdecl sub_6F876368(int a1, int a2, int a3)
{
  int v3; // ecx@1
  int v4; // eax@1
  int v5; // edi@1
  int v6; // ecx@1
  int v7; // eax@1
  int v8; // esi@1
  int v9; // ebx@1
  int v10; // esi@1
  int v11; // edi@1
  int v12; // ebx@1
  int result; // eax@1

  memset((void *)a1, 0, 0x100u);
  v3 = a3 + *(_DWORD *)a2;
  v4 = *(_BYTE *)v3;
  v5 = *(_BYTE *)(v3 + 1);
  v6 = v5 + v4;
  v7 = v4 - v5;
  v8 = *(_DWORD *)(a2 + 4) + a3;
  v9 = *(_BYTE *)v8;
  v10 = *(_BYTE *)(v8 + 1);
  v11 = v10 + v9;
  v12 = v9 - v10;
  *(_DWORD *)a1 = 16 * (v6 + v11 - 512);
  *(_DWORD *)(a1 + 32) = 16 * (v6 - v11);
  *(_DWORD *)(a1 + 4) = 16 * (v12 + v7);
  result = 16 * (v7 - v12);
  *(_DWORD *)(a1 + 36) = result;
  return result;
}
