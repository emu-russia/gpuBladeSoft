int __cdecl sub_6F7CA360(int a1)
{
  int v1; // esi@2
  int v2; // eax@2
  int v3; // eax@2
  int v4; // eax@2
  int v5; // eax@2
  int v6; // eax@2
  int v7; // eax@2
  int result; // eax@2

  if ( a1 )
  {
    v1 = *(_DWORD *)a1;
    sub_6F773D90(*(_DWORD *)a1, *(_DWORD *)(a1 + 24));
    v2 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 24) = 0;
    sub_6F773D90(v1, v2);
    v3 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 28) = 0;
    sub_6F773D90(v1, v3);
    v4 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 32) = 0;
    sub_6F773D90(v1, v4);
    v5 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 40) = 0;
    sub_6F773D90(v1, v5);
    *(_DWORD *)(a1 + 52) = 0;
    *(_WORD *)(a1 + 22) = 0;
    *(_WORD *)(a1 + 20) = 0;
    v6 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 56) = v6;
    v7 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 84) = 0;
    *(_DWORD *)(a1 + 88) = 0;
    *(_DWORD *)(a1 + 60) = v7;
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 76) = *(_DWORD *)(a1 + 40);
    result = sub_6F773D90(v1, a1);
  }
  return result;
}
