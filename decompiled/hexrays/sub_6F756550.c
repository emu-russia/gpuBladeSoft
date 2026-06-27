void sub_6F756550()
{
  int v0; // eax@1
  int v1; // esi@2
  int v2; // ebx@3
  int v3; // eax@4
  int v4; // edi@9

  v0 = dword_6FBBFE00;
  if ( dword_6FBBFE00 != dword_6FBBFE04 )
  {
    v1 = (dword_6FBBFE04 - dword_6FBBFE00) >> 3;
    dword_6FD400D0 = 1;
    if ( dword_6FBBFE04 - dword_6FBBFE00 > 0 )
    {
      v2 = 0;
      while ( 1 )
      {
        v3 = v0 + 8 * v2;
        if ( *(_DWORD *)v3 > 7u )
        {
          nullsub_10();
        }
        else
        {
          switch ( *(_DWORD *)v3 )
          {
            case 0:
              dword_6FBB97A0 = *(_DWORD *)(v3 + 4);
              break;
            case 1:
              sub_6F71EB20();
              break;
            case 2:
              sub_6F724020(*(_DWORD *)(v3 + 4));
              break;
            case 3:
              *(_DWORD *)&word_6FBB979C = *(_DWORD *)(v3 + 4);
              break;
            case 4:
              sub_6F728FF0();
              break;
            case 5:
              sub_6F71F240(*(_DWORD *)(v3 + 4));
              break;
            case 6:
              v4 = *(_DWORD *)(v3 + 4);
              if ( *(_DWORD *)(v4 + 4) == 1 )
              {
                sub_6F69C440(*(_DWORD *)(v3 + 4));
                free((void *)v4);
              }
              else
              {
                free(*(void **)(v3 + 4));
              }
              if ( v1 <= ++v2 )
                goto LABEL_12;
              goto LABEL_8;
            case 7:
              break;
          }
        }
        if ( v1 <= ++v2 )
          break;
LABEL_8:
        v0 = dword_6FBBFE00;
      }
    }
LABEL_12:
    dword_6FD400D0 = 0;
  }
}
