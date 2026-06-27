int __cdecl sub_6F85D688(int *a1, char a2, unsigned int a3)
{
  char v3; // dl@1
  int v4; // eax@2

  v3 = a2;
  if ( a3 > 0xFFFD )
  {
    v4 = *a1;
    *(_DWORD *)(v4 + 20) = 12;
    (*(void (__cdecl **)(int *))v4)(a1);
    v3 = a2;
  }
  sub_6F85D394((int)a1, v3);
  return sub_6F85D3B0((int)a1, a3 + 2);
}
