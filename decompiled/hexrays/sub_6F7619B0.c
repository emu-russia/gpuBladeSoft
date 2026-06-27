double __cdecl sub_6F7619B0(int a1)
{
  int *v1; // ecx@1
  int v2; // edx@2
  __int64 v4; // [sp+28h] [bp-14h]@2

  v1 = &dword_70364500[10 * a1];
  if ( v1[8] )
  {
    v2 = v1[7];
    v4 = *((_QWORD *)v1 + 3);
  }
  else
  {
    QueryPerformanceCounter((LARGE_INTEGER *)&v4);
  }
  return (double)(signed __int64)(v4 - __PAIR__(dword_70364504[10 * a1], dword_70364500[10 * a1]))
       / (double)qword_703634E0;
}
