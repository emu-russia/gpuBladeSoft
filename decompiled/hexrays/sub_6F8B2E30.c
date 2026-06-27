__int64 __cdecl sub_6F8B2E30(int a1)
{
  signed __int64 v1; // kr00_8@1
  __int64 v2; // rax@1
  int v3; // edx@1
  __int64 v4; // rcx@1
  __int64 v5; // rax@2
  __int64 result; // rax@2
  unsigned int v7; // [sp+18h] [bp-14h]@1
  int v8; // [sp+1Ch] [bp-10h]@1

  v1 = 1000i64 * *(_DWORD *)a1 + *(_DWORD *)(a1 + 4) / 1000000;
  GetSystemTimeAsFileTime((LPFILETIME)&v7);
  HIDWORD(v2) = v8;
  LODWORD(v2) = 0;
  LODWORD(v4) = sub_6F8A1530(SHIDWORD(v1), v2 + v7 - 116444736000000000i64, 0x2710u, 0);
  if ( HIDWORD(v1) < (unsigned int)((unsigned int)v1 < (unsigned int)v4) + v3 )
  {
    result = 0i64;
  }
  else
  {
    LODWORD(v5) = v1;
    HIDWORD(v4) = v3;
    HIDWORD(v5) = HIDWORD(v1);
    result = v5 - v4;
  }
  return result;
}
