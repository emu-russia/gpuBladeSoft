int __cdecl sub_6F7974E0(int a1)
{
  int v1; // ebx@1
  int v2; // esi@1
  unsigned int v3; // esi@1
  unsigned int v4; // ecx@1
  unsigned int v5; // esi@3
  unsigned int v6; // ecx@3
  int result; // eax@5

  v1 = a1 + 12;
  v2 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 96) = 0;
  memset((void *)((a1 + 16) & 0xFFFFFFFC), 0, 4 * ((a1 + 12 - ((a1 + 16) & 0xFFFFFFFC) + 88) >> 2));
  *(_DWORD *)(a1 + 12) = v2;
  *(_DWORD *)(a1 + 100) = sub_6F797670;
  *(_DWORD *)(a1 + 104) = sub_6F797100;
  v3 = 0;
  v4 = (a1 + 116) & 0xFFFFFFFC;
  *(_DWORD *)(a1 + 108) = sub_6F797610;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  do
  {
    *(_DWORD *)(v4 + v3) = 0;
    v3 += 4;
  }
  while ( v3 < ((a1 + 112 - v4 + 28) & 0xFFFFFFFC) );
  *(_DWORD *)(a1 + 116) = sub_6F796CB0;
  *(_DWORD *)(a1 + 120) = sub_6F798930;
  *(_DWORD *)(a1 + 124) = sub_6F79A980;
  v5 = 0;
  v6 = (a1 + 144) & 0xFFFFFFFC;
  *(_DWORD *)(a1 + 128) = sub_6F79AC00;
  *(_DWORD *)(a1 + 132) = sub_6F79A340;
  *(_DWORD *)(a1 + 136) = sub_6F798D80;
  *(_DWORD *)(a1 + 112) = v1;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  do
  {
    *(_DWORD *)(v6 + v5) = 0;
    v5 += 4;
  }
  while ( v5 < ((a1 + 140 - v6 + 28) & 0xFFFFFFFC) );
  *(_DWORD *)(a1 + 144) = sub_6F796CF0;
  *(_DWORD *)(a1 + 148) = sub_6F798930;
  result = 0;
  *(_DWORD *)(a1 + 152) = sub_6F79A9F0;
  *(_DWORD *)(a1 + 156) = sub_6F79B610;
  *(_DWORD *)(a1 + 160) = sub_6F79B350;
  *(_DWORD *)(a1 + 164) = sub_6F798D80;
  *(_DWORD *)(a1 + 140) = v1;
  return result;
}
