unsigned int __cdecl sub_6F7BF580(int a1, unsigned int *a2)
{
  unsigned int v2; // ecx@1
  unsigned int v3; // edx@1
  unsigned int result; // eax@1

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *a2 + 1;
  result = 1;
  if ( v3 <= v2 )
    goto LABEL_4;
  if ( v3 - v2 < *(_DWORD *)(a1 + 20) )
  {
    result = v3 - v2 + 1;
    v2 = *a2 + 1;
LABEL_4:
    *a2 = v2;
    return result;
  }
  result = 0;
  *a2 = 0;
  return result;
}
