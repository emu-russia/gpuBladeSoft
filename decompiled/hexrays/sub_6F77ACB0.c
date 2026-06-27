int __usercall sub_6F77ACB0@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  int *v2; // edx@2
  int result; // eax@3
  unsigned int v4; // eax@6
  int v5; // edx@6
  int v6; // edx@10

  if ( a2 < (*(_DWORD *)(a1 + 392) - (a1 + 8)) >> 3 )
  {
    v4 = a1 + 8 * a2;
    v5 = *(_DWORD *)(v4 + 12);
    if ( v5 == 1 )
    {
      v6 = *(_DWORD *)(v4 + 8);
      result = (v6 + 0x2000) >> 14;
      if ( v6 < 0 )
        result = -((0x2000 - v6) >> 14);
    }
    else
    {
      result = *(_DWORD *)(v4 + 8);
      if ( v5 == 2 )
        result <<= 16;
    }
  }
  else
  {
    v2 = *(int **)(a1 + 4);
    if ( !v2 || (result = *v2) != 0 )
      result = 0;
    else
      *v2 = 130;
  }
  return result;
}
