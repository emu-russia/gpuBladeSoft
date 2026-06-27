double __cdecl sub_6F761A30(int a1)
{
  int *v1; // ecx@1
  int v2; // esi@2
  int v3; // edx@3
  unsigned __int64 v4; // rcx@3
  bool v5; // cf@3
  signed __int64 v6; // rax@3
  double v7; // st6@3
  __int64 v9; // [sp+28h] [bp-14h]@2

  v1 = &dword_70364500[10 * a1];
  if ( v1[8] )
  {
    v2 = v1[7];
    v9 = *((_QWORD *)v1 + 3);
  }
  else
  {
    QueryPerformanceCounter((LARGE_INTEGER *)&v9);
  }
  v3 = 10 * a1;
  v4 = v9 - __PAIR__(dword_70364504[v3], dword_70364500[v3]);
  dword_7036450C[v3] = (v9 - __PAIR__(dword_70364504[v3], dword_70364500[v3])) >> 32;
  v5 = (unsigned int)v4 < dword_70364500[10 * a1 + 4];
  LODWORD(v6) = v4 - dword_70364500[10 * a1 + 4];
  dword_70364508[v3] = v4;
  HIDWORD(v6) = HIDWORD(v4) - (v5 + dword_70364500[10 * a1 + 5]);
  v7 = (double)qword_703634E0;
  *(_QWORD *)&dword_70364500[10 * a1 + 4] = v4;
  return (double)v6 / v7;
}
