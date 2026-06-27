int *__cdecl sub_6F8A7E80(int a1, signed int a2)
{
  int *result; // eax@1
  int v3; // esi@1
  int *v4; // edx@3
  signed int v5; // ecx@3
  int v6; // ecx@4
  unsigned int v7; // ecx@4

  result = (int *)a1;
  v3 = (a2 + 31) >> 5;
  if ( *(_DWORD *)(a1 + 4) < v3 )
  {
    sub_6F8B07F0((void *)a1);
    result = sub_6F8B0700(v3);
  }
  v4 = result + 5;
  v5 = a2 >> 5;
  if ( a2 & 0x1F )
  {
    v6 = v5 + 1;
    result[4] = v6;
    v7 = (unsigned int)&v4[v6];
    if ( v7 <= (unsigned int)v4 )
      goto LABEL_11;
    do
    {
LABEL_5:
      ++v4;
      *(v4 - 1) = -1;
    }
    while ( v7 > (unsigned int)v4 );
LABEL_6:
    if ( !(a2 & 0x1F) )
      return result;
LABEL_11:
    *(v4 - 1) = (unsigned int)*(v4 - 1) >> (32 - (a2 & 0x1F));
    return result;
  }
  result[4] = v5;
  v7 = (unsigned int)&v4[v5];
  if ( v7 > (unsigned int)v4 )
  {
    v4 = result + 6;
    result[5] = -1;
    if ( v7 <= (unsigned int)(result + 6) )
      goto LABEL_6;
    goto LABEL_5;
  }
  return result;
}
