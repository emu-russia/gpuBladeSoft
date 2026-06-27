void sub_6F7511F0()
{
  signed int v0; // ebx@1
  unsigned int *v1; // ecx@2
  int v2; // ebx@4
  _DWORD *v3; // eax@5
  unsigned int v4; // ecx@6
  int v5; // eax@30

  byte_70258AF8 = 0;
  v0 = 1;
  while ( dword_6FBB9584 > v0 )
  {
    v1 = (unsigned int *)(dword_70258AEC + 4 * v0++);
    sub_6F938660(v1);
  }
  if ( dword_70258AEC )
  {
    v2 = dword_70258AEC + 4 * *(_DWORD *)(dword_70258AEC - 4);
    if ( dword_70258AEC != v2 )
    {
      v3 = (_DWORD *)(v2 - 4);
      if ( *(_DWORD *)(v2 - 4)
        || (v4 = (((unsigned int)v3 - dword_70258AEC) >> 2) & 7) != 0
        && ((v3 = (_DWORD *)(v2 - 8), *(_DWORD *)(v2 - 8))
         || v4 != 1
         && (v4 != 2
          && (v4 != 3
           && (v4 != 4
            && (v4 != 5 && (v4 != 6 && (v3 = (_DWORD *)(v2 - 12), *(_DWORD *)(v2 - 12)) || (--v3, *v3)) || (--v3, *v3))
            || (--v3, *v3))
           || (--v3, *v3))
          || (--v3, *v3))) )
      {
LABEL_20:
        sub_6F95D3C0();
      }
      while ( (_DWORD *)dword_70258AEC != v3 )
      {
        if ( !*(v3 - 1) && !*(v3 - 2) && !*(v3 - 3) && !*(v3 - 4) && !*(v3 - 5) && !*(v3 - 6) && !*(v3 - 7) )
        {
          v3 -= 8;
          if ( !*v3 )
            continue;
        }
        goto LABEL_20;
      }
      v5 = *(_DWORD *)(dword_70258AEC - 4);
    }
    j_j_j_free_1((void *)(dword_70258AEC - 4));
  }
  if ( dword_70258AF4 )
    j_j_free_1((void *)dword_70258AF4);
}
