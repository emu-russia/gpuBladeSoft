int __stdcall ZN_GPUdmaSliceIn(int a1, int a2, int a3)
{
  unsigned int *v3; // ebx@2
  int v4; // esi@2
  int v5; // edx@2
  unsigned int v6; // eax@10
  unsigned int v7; // edx@11
  unsigned int v8; // ecx@12
  unsigned int v9; // eax@13
  unsigned int v10; // edx@14
  unsigned int v11; // ecx@15
  unsigned int v12; // eax@16
  unsigned int v14; // ecx@9

  if ( a3 )
  {
    v3 = (unsigned int *)(a1 + 4 * a2);
    v4 = a1 + 4 * (a2 + a3);
    v5 = ((unsigned __int8)((unsigned int)(v4 - (_DWORD)v3 - 4) >> 2) + 1) & 7;
    if ( !(((unsigned __int8)((unsigned int)(v4 - (_DWORD)v3 - 4) >> 2) + 1) & 7) )
      goto LABEL_20;
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
                v14 = *v3;
                ++v3;
                sub_6F724020(v14);
              }
              v6 = *v3;
              ++v3;
              sub_6F724020(v6);
            }
            v7 = *v3;
            ++v3;
            sub_6F724020(v7);
          }
          v8 = *v3;
          ++v3;
          sub_6F724020(v8);
        }
        v9 = *v3;
        ++v3;
        sub_6F724020(v9);
      }
      v10 = *v3;
      ++v3;
      sub_6F724020(v10);
    }
    v11 = *v3;
    ++v3;
    sub_6F724020(v11);
    if ( (unsigned int *)v4 != v3 )
    {
LABEL_20:
      do
      {
        v12 = *v3;
        v3 += 8;
        sub_6F724020(v12);
        sub_6F724020(*(v3 - 7));
        sub_6F724020(*(v3 - 6));
        sub_6F724020(*(v3 - 5));
        sub_6F724020(*(v3 - 4));
        sub_6F724020(*(v3 - 3));
        sub_6F724020(*(v3 - 2));
        sub_6F724020(*(v3 - 1));
      }
      while ( (unsigned int *)v4 != v3 );
    }
  }
  return 0;
}
