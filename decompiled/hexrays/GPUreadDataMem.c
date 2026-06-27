int __stdcall GPUreadDataMem(int *a1, int a2)
{
  int result; // eax@1
  int *v3; // ebx@2
  int *v4; // esi@2
  int v5; // edx@2

  result = a2;
  if ( a2 > 0 )
  {
    v3 = a1;
    v4 = &a1[a2];
    v5 = ((unsigned __int8)((unsigned int)(4 * a2 - 4) >> 2) + 1) & 7;
    if ( !(((unsigned __int8)((unsigned int)(4 * a2 - 4) >> 2) + 1) & 7) )
      goto LABEL_19;
    if ( v5 != 1 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 3 )
        {
          if ( v5 != 4 )
          {
            if ( v5 != 5 )
            {
              if ( v5 != 6 )
              {
                v3 = a1 + 1;
                *a1 = sub_6F71EB20();
              }
              ++v3;
              *(v3 - 1) = sub_6F71EB20();
            }
            ++v3;
            *(v3 - 1) = sub_6F71EB20();
          }
          ++v3;
          *(v3 - 1) = sub_6F71EB20();
        }
        ++v3;
        *(v3 - 1) = sub_6F71EB20();
      }
      ++v3;
      *(v3 - 1) = sub_6F71EB20();
    }
    ++v3;
    result = sub_6F71EB20();
    *(v3 - 1) = result;
    if ( v4 != v3 )
    {
LABEL_19:
      do
      {
        v3 += 8;
        *(v3 - 8) = sub_6F71EB20();
        *(v3 - 7) = sub_6F71EB20();
        *(v3 - 6) = sub_6F71EB20();
        *(v3 - 5) = sub_6F71EB20();
        *(v3 - 4) = sub_6F71EB20();
        *(v3 - 3) = sub_6F71EB20();
        *(v3 - 2) = sub_6F71EB20();
        result = sub_6F71EB20();
        *(v3 - 1) = result;
      }
      while ( v4 != v3 );
    }
  }
  return result;
}
