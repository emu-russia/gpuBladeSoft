signed int __usercall sub_6F7BF860@<eax>(unsigned int *a1@<eax>, int a2@<edx>)
{
  unsigned int *v2; // ebx@1
  int v3; // esi@1
  signed int result; // eax@1
  __int16 v5; // ax@4
  __int16 v6; // dx@4

  v2 = a1;
  v3 = a2;
  result = sub_6F771FF0(a2, *a1);
  if ( !result )
  {
    result = sub_6F7728E0(v3, (int)&unk_6FB6ACA0, (int)(v2 + 1));
    if ( !result )
    {
      v5 = *((_WORD *)v2 + 2);
      v6 = *((_WORD *)v2 + 2);
      HIBYTE(v6) &= 0xFEu;
      if ( v6 != 512 )
        return 2;
      if ( v5 == 768 )
      {
        if ( v2[2] <= 0x93 )
          return 2;
      }
      else
      {
        if ( v2[2] <= 0x75 )
          return 2;
        if ( v5 == 512 )
        {
          *((_WORD *)v2 + 68) = 0;
          v2[33] = 0;
          *((_WORD *)v2 + 69) = 0;
          *((_WORD *)v2 + 70) = 0;
          *((_WORD *)v2 + 71) = 0;
        }
      }
      if ( *((_BYTE *)v2 + 72) & 1 )
        return 2;
      result = sub_6F771FF0(v3, *v2);
      if ( !result )
        result = sub_6F772240(v3, v2[2], (int *)v2 + 40);
    }
  }
  return result;
}
