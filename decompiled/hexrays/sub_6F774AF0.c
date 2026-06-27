int __cdecl sub_6F774AF0(int a1)
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
    v1 = *(_DWORD *)(a1 + 100);
    sub_6F7747D0(*(_DWORD *)(a1 + 140));
    sub_6F773D90(v1, *(_DWORD *)(a1 + 144));
    v2 = *(_DWORD *)(a1 + 132);
    *(_DWORD *)(a1 + 144) = 0;
    sub_6F773D90(v1, v2);
    v3 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 132) = 0;
    sub_6F773D90(v1, v3);
    v4 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 136) = 0;
    sub_6F773D90(v1, v4);
    v5 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 20) = 0;
    sub_6F773D90(v1, v5);
    v6 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 24) = 0;
    sub_6F773D90(v1, v6);
    v7 = *(_DWORD *)(a1 + 140);
    *(_DWORD *)(a1 + 32) = 0;
    result = sub_6F773D90(v1, v7);
    *(_DWORD *)(a1 + 140) = 0;
  }
  return result;
}
