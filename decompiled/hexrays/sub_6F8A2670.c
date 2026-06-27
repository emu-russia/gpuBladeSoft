int __usercall sub_6F8A2670@<eax>(int a1@<ebp>, int a2, int a3)
{
  DWORD v3; // eax@2
  unsigned __int64 v4; // kr00_8@5
  __int64 v6; // [sp+18h] [bp-C4h]@5
  struct _TIME_ZONE_INFORMATION v7; // [sp+24h] [bp-B8h]@2

  if ( a3 )
  {
    v3 = GetTimeZoneInformation(&v7);
    if ( v3 == -1 )
    {
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
    }
    else
    {
      *(_DWORD *)a3 = v7.Bias;
      *(_DWORD *)(a3 + 4) = v3 == 2;
    }
  }
  if ( a2 )
  {
    GetSystemTimeAsFileTime((LPFILETIME)&v6);
    v4 = v6 - 116444736000000000i64;
    *(_DWORD *)a2 = sub_6F8A1530(
                      (unsigned __int64)(v6 - 116444736000000000i64) >> 32,
                      v6 - 116444736000000000i64,
                      0x989680u,
                      0);
    *(_DWORD *)(a2 + 4) = 100 * sub_6F8A1630(a1, v4, 10000000i64);
  }
  return 0;
}
