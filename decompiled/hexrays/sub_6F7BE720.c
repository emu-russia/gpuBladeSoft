int __cdecl sub_6F7BE720(int a1, int a2, int a3, int a4)
{
  int v4; // edi@1
  int v5; // esi@1
  unsigned int v6; // ecx@1
  unsigned int v7; // edx@1
  unsigned int v8; // ecx@3
  unsigned int v9; // edx@3
  int result; // eax@5
  int v11; // edx@6
  int v12; // ecx@6
  int v13; // edx@6

  v4 = *(_DWORD *)(a1 + 160);
  v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 96) + 28);
  sub_6F7692B0(*(_DWORD *)(a1 + 160));
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 52) = 0;
  v6 = 0;
  v7 = (v4 + 28) & 0xFFFFFFFC;
  do
  {
    *(_DWORD *)(v7 + v6) = 0;
    v6 += 4;
  }
  while ( v6 < ((v4 + 24 - v7 + 32) & 0xFFFFFFFC) );
  *(_DWORD *)(v4 + 108) = 0;
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 116) = 0;
  v8 = 0;
  v9 = (v4 + 80) & 0xFFFFFFFC;
  *(_DWORD *)(v4 + 120) = 0;
  *(_DWORD *)(v4 + 124) = 0;
  *(_DWORD *)(v4 + 76) = 0;
  *(_DWORD *)(v4 + 96) = 0;
  do
  {
    *(_DWORD *)(v9 + v8) = 0;
    v8 += 4;
  }
  while ( v8 < ((v4 + 76 - v9 + 24) & 0xFFFFFFFC) );
  *(_DWORD *)(v4 + 100) = 0;
  *(_DWORD *)(v4 + 104) = 0;
  *(_DWORD *)(v4 + 128) = 0;
  *(_DWORD *)(v4 + 132) = 0;
  *(_DWORD *)(v4 + 136) = 0;
  *(_DWORD *)(v4 + 140) = 0;
  *(_DWORD *)(v4 + 152) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 60) = 0;
  result = (*(int (__cdecl **)(_DWORD, _DWORD, int, int))(v5 + 72))(
             *(_DWORD *)(a1 + 160),
             *(_DWORD *)(a2 + 44),
             a3,
             a4 | 8);
  if ( !result )
  {
    v11 = *(_DWORD *)(a1 + 160);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v11 + 24);
    *(_DWORD *)(a1 + 28) = *(_DWORD *)(v11 + 28);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(v11 + 32);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(v11 + 36);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(v11 + 40);
    *(_DWORD *)(a1 + 44) = *(_DWORD *)(v11 + 44);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(v11 + 48);
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(v11 + 52);
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(v11 + 56);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(v11 + 60);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(v11 + 72);
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(v11 + 108);
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(v11 + 112);
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(v11 + 116);
    *(_DWORD *)(a1 + 120) = *(_DWORD *)(v11 + 120);
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(v11 + 124);
    *(_DWORD *)(a1 + 76) = *(_DWORD *)(v11 + 76);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v11 + 80);
    *(_DWORD *)(a1 + 84) = *(_DWORD *)(v11 + 84);
    *(_DWORD *)(a1 + 88) = *(_DWORD *)(v11 + 88);
    *(_DWORD *)(a1 + 92) = *(_DWORD *)(v11 + 92);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(v11 + 96);
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(v11 + 100);
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(v11 + 104);
    *(_DWORD *)(a1 + 128) = *(_DWORD *)(v11 + 128);
    *(_DWORD *)(a1 + 132) = *(_DWORD *)(v11 + 132);
    v12 = *(_DWORD *)(v11 + 136);
    v13 = *(_DWORD *)(v11 + 140);
    *(_DWORD *)(a1 + 136) = v12;
    *(_DWORD *)(a1 + 140) = v13;
  }
  return result;
}
