int __cdecl sub_6F85FC48(int a1)
{
  int v1; // eax@1
  int v2; // edx@2
  int v3; // eax@5

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 != 100 )
  {
    v2 = *(_DWORD *)a1;
    *(_DWORD *)(v2 + 20) = 21;
    *(_DWORD *)(v2 + 24) = v1;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  if ( !*(_DWORD *)(a1 + 84) )
    *(_DWORD *)(a1 + 84) = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 0, 880);
  *(_DWORD *)(a1 + 56) = 1;
  *(_DWORD *)(a1 + 60) = 1;
  *(_DWORD *)(a1 + 72) = 8;
  sub_6F85F780(a1, 75, 1);
  sub_6F85F520((int *)a1, (_DWORD *)(a1 + 120), &unk_6FB9C73C, &unk_6FB9C730);
  sub_6F85F520((int *)a1, (_DWORD *)(a1 + 136), &unk_6FB9C702, &unk_6FB9C660);
  sub_6F85F520((int *)a1, (_DWORD *)(a1 + 124), &unk_6FB9C71F, &unk_6FB9C713);
  sub_6F85F520((int *)a1, (_DWORD *)(a1 + 140), &unk_6FB9C642, &unk_6FB9C5A0);
  v3 = 0;
  do
  {
    *(_BYTE *)(a1 + v3 + 152) = 0;
    *(_BYTE *)(a1 + v3 + 168) = 1;
    *(_BYTE *)(a1 + v3++ + 184) = 5;
  }
  while ( v3 != 16 );
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_BYTE *)(a1 + 208) = 0;
  *(_BYTE *)(a1 + 209) = 0;
  *(_BYTE *)(a1 + 210) = 0;
  if ( *(_DWORD *)(a1 + 72) > 8 )
    *(_BYTE *)(a1 + 210) = 1;
  *(_BYTE *)(a1 + 211) = 0;
  *(_BYTE *)(a1 + 212) = 1;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 233) = 1;
  *(_BYTE *)(a1 + 234) = 1;
  *(_BYTE *)(a1 + 235) = 0;
  *(_WORD *)(a1 + 236) = 1;
  *(_WORD *)(a1 + 238) = 1;
  return sub_6F85FBB8(a1);
}
