int (__cdecl *sub_6F9620D0())(signed int, int)
{
  int (__cdecl *result)(signed int, int); // eax@1
  int v1; // edx@1
  int v2; // ecx@3
  int v3; // ecx@4

  result = (int (__cdecl *)(signed int, int))sub_6F962300();
  v1 = *(_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    if ( (unsigned __int64)(*(_QWORD *)(v1 + 48) - 5138137972254386944i64) > 1 )
    {
      *(_DWORD *)result = 0;
      return sub_6F8A1E60(v1 + 48);
    }
    v2 = *(_DWORD *)(v1 + 20);
    if ( v2 < 0 )
    {
      v3 = v2 + 1;
      if ( !v3 )
        *(_DWORD *)result = *(_DWORD *)(v1 + 16);
      goto LABEL_6;
    }
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 < 0 )
        sub_6F95D3C0();
LABEL_6:
      *(_DWORD *)(v1 + 20) = v3;
      return result;
    }
    *(_DWORD *)result = *(_DWORD *)(v1 + 16);
    result = sub_6F8A1E60(v1 + 48);
  }
  return result;
}
