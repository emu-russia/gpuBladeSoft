char *__cdecl sub_6F8696EC(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx@1
  int v4; // edi@1
  int v5; // eax@6
  _DWORD *v6; // eax@7
  int v8; // eax@2
  int v9; // edx@8

  v3 = a3;
  v4 = *(_DWORD *)(a1 + 4);
  if ( a3 > 0x3B9AC9F0 )
  {
    v8 = *(_DWORD *)a1;
    *(_DWORD *)(v8 + 20) = 56;
    *(_DWORD *)(v8 + 24) = 3;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  if ( a3 & 7 )
    v3 = a3 + 8 - (a3 & 7);
  if ( a2 > 1 )
  {
    v5 = *(_DWORD *)a1;
    *(_DWORD *)(v5 + 20) = 15;
    *(_DWORD *)(v5 + 24) = a2;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  v6 = sub_6F869D1C(a1, v3 + 16);
  if ( !v6 )
  {
    v9 = *(_DWORD *)a1;
    *(_DWORD *)(v9 + 20) = 56;
    *(_DWORD *)(v9 + 24) = 4;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    v6 = 0;
  }
  *(_DWORD *)(v4 + 76) += v3 + 16;
  *v6 = *(_DWORD *)(v4 + 4 * (a2 + 12) + 12);
  v6[1] = v3;
  v6[2] = 0;
  *(_DWORD *)(v4 + 4 * (a2 + 12) + 12) = v6;
  return (char *)(v6 + 4);
}
