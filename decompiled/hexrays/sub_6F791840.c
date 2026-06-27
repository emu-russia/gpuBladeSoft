int __cdecl sub_6F791840(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax@1
  int v6; // eax@2
  int v7; // eax@2

  *(_BYTE *)(a1 + 68) = 1;
  *(_DWORD *)(a1 + 4) = a2;
  result = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 8) = a4;
  *(_DWORD *)a1 = result;
  if ( a4 )
  {
    v6 = **(_DWORD **)(a4 + 156);
    *(_DWORD *)(a1 + 12) = v6;
    *(_DWORD *)(a1 + 16) = v6 + 20;
    *(_DWORD *)(a1 + 20) = v6 + 56;
    sub_6F7CA220(v6);
    v7 = *(_DWORD *)(a3 + 40);
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 76) = v7;
    result = a5;
    if ( (_BYTE)a5 )
    {
      result = *(_DWORD *)(*(_DWORD *)(a4 + 156) + 36);
      *(_DWORD *)(a1 + 72) = result;
    }
  }
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 80) = sub_6F791840;
  *(_DWORD *)(a1 + 84) = sub_6F790F80;
  *(_DWORD *)(a1 + 88) = sub_6F791E70;
  *(_DWORD *)(a1 + 92) = sub_6F791740;
  *(_DWORD *)(a1 + 96) = sub_6F792F40;
  *(_DWORD *)(a1 + 100) = sub_6F7917B0;
  *(_DWORD *)(a1 + 104) = sub_6F7938A0;
  *(_DWORD *)(a1 + 108) = sub_6F790FB0;
  return result;
}
