int __usercall sub_6F8B3700@<eax>(unsigned int a1@<eax>)
{
  unsigned int v1; // edi@1
  unsigned int v2; // ebx@2
  unsigned int v3; // ecx@2
  unsigned int v4; // edx@6
  int v5; // esi@6
  int result; // eax@9

  v1 = a1;
  if ( dword_70373568 )
  {
    v2 = dword_70373568 - 1;
    v3 = 0;
    if ( dword_70373568 == 1 )
    {
      result = 0;
      if ( v1 == *(_DWORD *)(dword_7037356C + 4) )
        result = *(_DWORD *)dword_7037356C;
    }
    else
    {
      while ( 1 )
      {
        v4 = (v3 + v2) >> 1;
        v5 = dword_7037356C + 8 * v4;
        if ( *(_DWORD *)(v5 + 4) == a1 )
          break;
        if ( *(_DWORD *)(v5 + 4) > a1 )
        {
          if ( v4 == v3 )
            goto LABEL_9;
          v2 = v4 - 1;
          if ( v4 - 1 < v3 )
            goto LABEL_9;
        }
        else
        {
          v3 = v4 + 1;
          if ( v2 < v4 + 1 )
            goto LABEL_9;
        }
      }
      result = *(_DWORD *)v5;
    }
  }
  else
  {
LABEL_9:
    result = 0;
  }
  return result;
}
