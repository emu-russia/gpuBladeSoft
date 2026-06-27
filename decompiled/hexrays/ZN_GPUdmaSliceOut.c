int __stdcall ZN_GPUdmaSliceOut(int a1, int a2, int a3)
{
  int v3; // ebx@2
  int v4; // esi@2
  int v5; // edx@2

  if ( a3 )
  {
    v3 = a1 + 4 * a2;
    v4 = a1 + 4 * (a2 + a3);
    v5 = ((unsigned __int8)((unsigned int)(v4 - v3 - 4) >> 2) + 1) & 7;
    if ( !(((unsigned __int8)((unsigned int)(v4 - v3 - 4) >> 2) + 1) & 7) )
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
                v3 += 4;
                *(_DWORD *)(v3 - 4) = sub_6F71EB20();
              }
              v3 += 4;
              *(_DWORD *)(v3 - 4) = sub_6F71EB20();
            }
            v3 += 4;
            *(_DWORD *)(v3 - 4) = sub_6F71EB20();
          }
          v3 += 4;
          *(_DWORD *)(v3 - 4) = sub_6F71EB20();
        }
        v3 += 4;
        *(_DWORD *)(v3 - 4) = sub_6F71EB20();
      }
      v3 += 4;
      *(_DWORD *)(v3 - 4) = sub_6F71EB20();
    }
    v3 += 4;
    *(_DWORD *)(v3 - 4) = sub_6F71EB20();
    if ( v3 != v4 )
    {
LABEL_20:
      do
      {
        v3 += 32;
        *(_DWORD *)(v3 - 32) = sub_6F71EB20();
        *(_DWORD *)(v3 - 28) = sub_6F71EB20();
        *(_DWORD *)(v3 - 24) = sub_6F71EB20();
        *(_DWORD *)(v3 - 20) = sub_6F71EB20();
        *(_DWORD *)(v3 - 16) = sub_6F71EB20();
        *(_DWORD *)(v3 - 12) = sub_6F71EB20();
        *(_DWORD *)(v3 - 8) = sub_6F71EB20();
        *(_DWORD *)(v3 - 4) = sub_6F71EB20();
      }
      while ( v3 != v4 );
    }
  }
  return 0;
}
