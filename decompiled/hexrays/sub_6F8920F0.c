signed int __cdecl sub_6F8920F0(int a1)
{
  int v1; // edx@1
  int v2; // eax@1
  signed int result; // eax@7

  v1 = a1;
  *(_DWORD *)(a1 + 2840) = a1 + 148;
  *(_DWORD *)(v1 + 2852) = v1 + 2440;
  *(_DWORD *)(v1 + 2864) = v1 + 2684;
  *(_WORD *)(a1 + 5816) = 0;
  v2 = 0;
  *(_DWORD *)(a1 + 2848) = &off_6FB48A20;
  *(_DWORD *)(a1 + 2860) = &off_6FB48A0C;
  *(_DWORD *)(a1 + 2872) = &unk_6FB489F8;
  *(_DWORD *)(a1 + 5820) = 0;
  do
    *(_WORD *)(a1 + 4 * v2++ + 148) = 0;
  while ( v2 != 286 );
  LOWORD(v2) = 0;
  do
    *(_WORD *)(a1 + 4 * v2++ + 2440) = 0;
  while ( v2 != 30 );
  LOBYTE(v2) = 0;
  do
    *(_WORD *)(a1 + 4 * v2++ + 2684) = 0;
  while ( v2 != 19 );
  result = 1;
  *(_WORD *)(a1 + 1172) = 1;
  *(_DWORD *)(a1 + 5804) = 0;
  *(_DWORD *)(a1 + 5800) = 0;
  *(_DWORD *)(a1 + 5808) = 0;
  *(_DWORD *)(a1 + 5792) = 0;
  return result;
}
