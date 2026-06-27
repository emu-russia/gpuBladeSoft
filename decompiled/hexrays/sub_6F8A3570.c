double __cdecl sub_6F8A3570(const char *a1, _DWORD *a2)
{
  __int64 *v2; // eax@1
  _TBYTE v4; // [sp+14h] [bp-18h]@1

  *(_QWORD *)&v4 = 0i64;
  *((_DWORD *)&v4 + 2) = 0;
  v2 = sub_6F8A2BE0(a1, (double *)&v4);
  if ( a2 )
    *a2 = &a1[(_DWORD)v2];
  return *(double *)&v4;
}
