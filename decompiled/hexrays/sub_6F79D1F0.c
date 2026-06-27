int __cdecl sub_6F79D1F0(int a1, int *a2)
{
  int v2; // edx@1
  int v3; // ecx@1
  int result; // eax@2

  v2 = *a2;
  v3 = *(_DWORD *)(a1 + 16);
  while ( (unsigned int)++v2 <= 0xFF )
  {
    result = *(_BYTE *)(v3 + v2 + 6);
    if ( *(_BYTE *)(v3 + v2 + 6) )
      goto LABEL_5;
  }
  result = 0;
  v2 = 0;
LABEL_5:
  *a2 = v2;
  return result;
}
