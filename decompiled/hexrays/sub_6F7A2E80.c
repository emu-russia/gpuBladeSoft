unsigned __int32 __cdecl sub_6F7A2E80(int a1, unsigned int *a2)
{
  int v2; // eax@1
  unsigned __int32 result; // eax@4
  unsigned __int32 v4; // ecx@8

  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 == -1 )
    goto LABEL_12;
  if ( !*(_BYTE *)(a1 + 24) || v2 != *a2 )
    return sub_6F79E430(a1, a2, 1u);
  sub_6F79E3B0(a1);
  if ( *(_BYTE *)(a1 + 24) )
  {
    v4 = *(_DWORD *)(a1 + 32);
    result = 0;
    if ( v4 )
    {
      *a2 = *(_DWORD *)(a1 + 28);
      result = v4;
    }
  }
  else
  {
LABEL_12:
    result = 0;
  }
  return result;
}
