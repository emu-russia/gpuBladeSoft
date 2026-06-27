int __cdecl sub_6F79C450(int a1)
{
  int v1; // eax@1
  int v2; // edx@1
  signed int v3; // eax@1
  signed int v4; // edx@1
  signed int v5; // kr00_4@1
  int v6; // edx@1
  int v7; // eax@1
  signed int v8; // eax@1
  signed int v9; // edx@1
  int result; // eax@1

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 32) = v1;
  v3 = v2 + v1;
  v4 = *(_DWORD *)a1 + v2;
  v3 /= 2;
  *(_DWORD *)(a1 + 24) = v3;
  *(_DWORD *)(a1 + 8) = v4 / 2;
  v5 = v3 + v4 / 2;
  v6 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 16) = v5 / 2;
  v7 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 36) = v7;
  v8 = v6 + v7;
  v9 = *(_DWORD *)(a1 + 4) + v6;
  v8 /= 2;
  *(_DWORD *)(a1 + 28) = v8;
  *(_DWORD *)(a1 + 12) = v9 / 2;
  result = (v8 + v9 / 2) / 2;
  *(_DWORD *)(a1 + 20) = result;
  return result;
}
