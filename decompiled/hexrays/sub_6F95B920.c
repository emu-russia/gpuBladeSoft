void __cdecl sub_6F95B920(_DWORD *a1, const char *a2)
{
  int v2; // ecx@1
  char v3; // [sp+1Ah] [bp-12h]@1
  char v4; // [sp+1Bh] [bp-11h]@2
  int v5; // [sp+1Ch] [bp-10h]@1

  sub_6F909D30(&v5, a2, (int)&v3);
  sub_6F956770(a1, &v5);
  v2 = v5;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v2 - 12), (int)&v4);
}
