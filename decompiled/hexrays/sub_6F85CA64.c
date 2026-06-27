const char *__cdecl sub_6F85CA64(int a1, int a2, int a3)
{
  int v3; // edx@2
  int v4; // eax@4
  int v5; // edx@5
  int v6; // esi@5
  const char *result; // eax@5

  *(_DWORD *)(a1 + 4) = 0;
  if ( a2 != 80 )
  {
    v3 = *(_DWORD *)a1;
    *(_DWORD *)(v3 + 20) = 13;
    *(_DWORD *)(v3 + 24) = 80;
    *(_DWORD *)(*(_DWORD *)a1 + 28) = a2;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  if ( a3 != 416 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 22;
    *(_DWORD *)(v4 + 24) = 416;
    *(_DWORD *)(*(_DWORD *)a1 + 28) = a3;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  v5 = *(_DWORD *)a1;
  v6 = *(_DWORD *)(a1 + 12);
  memset((void *)a1, 0, 0x1A0u);
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v6;
  result = sub_6F869B9C(a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 104) = 100;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 108) = 100;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 112) = 100;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 116) = 100;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 360) = 8;
  *(_DWORD *)(a1 + 364) = dword_6FB9E080;
  *(_DWORD *)(a1 + 368) = 63;
  *(_DWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 1072693248;
  *(_DWORD *)(a1 + 20) = 100;
  return result;
}
