int __cdecl sub_6F861178(int a1, int a2, int a3)
{
  int v3; // edx@2
  int v4; // eax@4
  int v5; // edx@5
  int v6; // esi@5
  int result; // eax@5

  *(_DWORD *)(a1 + 4) = 0;
  if ( a2 != 80 )
  {
    v3 = *(_DWORD *)a1;
    *(_DWORD *)(v3 + 20) = 13;
    *(_DWORD *)(v3 + 24) = 80;
    *(_DWORD *)(*(_DWORD *)a1 + 28) = a2;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  if ( a3 != 448 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 22;
    *(_DWORD *)(v4 + 24) = 448;
    *(_DWORD *)(*(_DWORD *)a1 + 28) = a3;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  v5 = *(_DWORD *)a1;
  v6 = *(_DWORD *)(a1 + 12);
  memset((void *)a1, 0, 0x1C0u);
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v6;
  *(_BYTE *)(a1 + 16) = 1;
  sub_6F869B9C(a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  sub_6F8650B4(a1);
  result = sub_6F862F64(a1);
  *(_DWORD *)(a1 + 20) = 200;
  return result;
}
