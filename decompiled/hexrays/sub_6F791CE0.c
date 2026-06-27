signed int __cdecl sub_6F791CE0(int a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8, int a9)
{
  int v9; // eax@1
  signed int v10; // edx@1
  int v11; // eax@3
  int v12; // eax@3
  int v13; // eax@5

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 1496) = 0;
  memset((void *)((a1 + 4) & 0xFFFFFFFC), 0, 4 * ((a1 - ((a1 + 4) & 0xFFFFFFFC) + 1500) >> 2));
  v9 = sub_6F76F110(*(_DWORD *)(a2 + 96), (int)"postscript-cmaps");
  v10 = 7;
  if ( v9 )
  {
    *(_DWORD *)(a1 + 1348) = v9;
    *(_BYTE *)(a1 + 68) = 1;
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 4) = a2;
    *(_DWORD *)(a1 + 8) = a4;
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 100);
    if ( a4 )
    {
      v11 = **(_DWORD **)(a4 + 156);
      *(_DWORD *)(a1 + 12) = v11;
      *(_DWORD *)(a1 + 16) = v11 + 20;
      *(_DWORD *)(a1 + 20) = v11 + 56;
      sub_6F7CA220(v11);
      v12 = *(_DWORD *)(a3 + 40);
      *(_DWORD *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 76) = v12;
      if ( a7 )
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_DWORD *)(a4 + 156) + 36);
    }
    v13 = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 24) = 0;
    v10 = 0;
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 1352) = v13;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 80) = sub_6F791840;
    *(_DWORD *)(a1 + 84) = sub_6F790F80;
    *(_DWORD *)(a1 + 88) = sub_6F791E70;
    *(_DWORD *)(a1 + 1356) = a5;
    *(_DWORD *)(a1 + 92) = sub_6F791740;
    *(_DWORD *)(a1 + 96) = sub_6F792F40;
    *(_DWORD *)(a1 + 100) = sub_6F7917B0;
    *(_DWORD *)(a1 + 104) = sub_6F7938A0;
    *(_DWORD *)(a1 + 1468) = a8;
    *(_DWORD *)(a1 + 108) = sub_6F790FB0;
    *(_DWORD *)(a1 + 1476) = sub_6F791CE0;
    *(_DWORD *)(a1 + 1480) = sub_6F791060;
    *(_DWORD *)(a1 + 1484) = sub_6F794AD0;
    *(_DWORD *)(a1 + 1464) = a6;
    *(_DWORD *)(a1 + 1472) = a9;
  }
  return v10;
}
