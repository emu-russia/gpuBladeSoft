_DWORD *__cdecl sub_6F8B13D0(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // eax@1
  _DWORD *v4; // esi@1
  _DWORD *v5; // ecx@1
  unsigned int v6; // edx@1
  _DWORD *v7; // edi@2

  result = a1;
  v4 = (_DWORD *)(a3 + 20);
  v5 = &a1[((a2 - 1) >> 5) + 1];
  v6 = a3 + 20 + 4 * *(_DWORD *)(a3 + 16);
  if ( a3 + 20 >= v6 )
    goto LABEL_6;
  v7 = a1;
  do
  {
    *v7 = *v4;
    ++v4;
    ++v7;
  }
  while ( v6 > (unsigned int)v4 );
  result = &a1[((v6 - a3 - 21) >> 2) + 1];
  while ( v5 > result )
  {
    ++result;
    *(result - 1) = 0;
LABEL_6:
    ;
  }
  return result;
}
