void __stdcall GPUwriteDataMem(unsigned int *a1, int a2)
{
  unsigned int *v2; // ebx@2
  unsigned int *v3; // esi@2
  int v4; // edx@2
  unsigned int v5; // eax@10
  unsigned int v6; // edx@11
  unsigned int v7; // ecx@12
  unsigned int v8; // eax@13
  unsigned int v9; // edx@14
  unsigned int v10; // ecx@15
  unsigned int v11; // eax@16

  if ( a2 > 0 )
  {
    v2 = a1;
    v3 = &a1[a2];
    v4 = ((unsigned __int8)((unsigned int)(4 * a2 - 4) >> 2) + 1) & 7;
    if ( !(((unsigned __int8)((unsigned int)(4 * a2 - 4) >> 2) + 1) & 7) )
      goto LABEL_19;
    if ( v4 != 1 )
    {
      if ( v4 != 2 )
      {
        if ( v4 != 3 )
        {
          if ( v4 != 4 )
          {
            if ( v4 != 5 )
            {
              if ( v4 != 6 )
              {
                v2 = a1 + 1;
                sub_6F724020(*a1);
              }
              v5 = *v2;
              ++v2;
              sub_6F724020(v5);
            }
            v6 = *v2;
            ++v2;
            sub_6F724020(v6);
          }
          v7 = *v2;
          ++v2;
          sub_6F724020(v7);
        }
        v8 = *v2;
        ++v2;
        sub_6F724020(v8);
      }
      v9 = *v2;
      ++v2;
      sub_6F724020(v9);
    }
    v10 = *v2;
    ++v2;
    sub_6F724020(v10);
    if ( v3 != v2 )
    {
LABEL_19:
      do
      {
        v11 = *v2;
        v2 += 8;
        sub_6F724020(v11);
        sub_6F724020(*(v2 - 7));
        sub_6F724020(*(v2 - 6));
        sub_6F724020(*(v2 - 5));
        sub_6F724020(*(v2 - 4));
        sub_6F724020(*(v2 - 3));
        sub_6F724020(*(v2 - 2));
        sub_6F724020(*(v2 - 1));
      }
      while ( v3 != v2 );
    }
  }
}
