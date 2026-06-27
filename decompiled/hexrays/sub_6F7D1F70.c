signed int __usercall sub_6F7D1F70@<eax>(int *a1@<eax>, int *a2@<edx>, int a3@<ecx>, unsigned int a4)
{
  int v4; // esi@1
  int v5; // ebx@2
  signed int v6; // edi@26
  signed int result; // eax@31

  v4 = *a2;
  if ( *a2 < a4 )
    return 0;
  v5 = *a1;
  if ( !*a1
    || *(_BYTE *)a3 != *(_BYTE *)v5
    || v5 == -1
    || a3 == -1
    || *(_BYTE *)(v5 + 1) != *(_BYTE *)(a3 + 1)
    || v5 == -2
    || a3 == -2
    || *(_BYTE *)(v5 + 2) != *(_BYTE *)(a3 + 2) )
  {
    return 0;
  }
  if ( a4 == 3 )
  {
    v6 = 3;
  }
  else
  {
    if ( v5 == -3 || a3 == -3 || *(_BYTE *)(v5 + 3) != *(_BYTE *)(a3 + 3) )
      return 0;
    if ( a4 == 4 )
    {
      v6 = 4;
    }
    else
    {
      if ( v5 == -4 || a3 == -4 || *(_BYTE *)(v5 + 4) != *(_BYTE *)(a3 + 4) )
        return 0;
      if ( a4 == 5 )
      {
        v6 = 5;
      }
      else
      {
        if ( v5 == -5 || a3 == -5 || *(_BYTE *)(v5 + 5) != *(_BYTE *)(a3 + 5) )
          return 0;
        if ( a4 == 6 )
        {
          v6 = 6;
        }
        else
        {
          if ( v5 == -6 )
            return 0;
          if ( a3 == -6 )
            return 0;
          if ( *(_BYTE *)(v5 + 6) != *(_BYTE *)(a3 + 6) )
            return 0;
          v6 = 7;
          if ( a4 == 8 )
          {
            if ( v5 == -7 )
              return 0;
            if ( a3 == -7 )
              return 0;
            v6 = 8;
            if ( *(_BYTE *)(v5 + 7) != *(_BYTE *)(a3 + 7) )
              return 0;
          }
        }
      }
    }
  }
  if ( v6 != a4 )
    return 0;
  *a1 = v6 + v5;
  result = 1;
  *a2 = v4 - v6;
  return result;
}
