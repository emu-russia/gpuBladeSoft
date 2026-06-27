int sub_6F751340()
{
  int v0; // ebx@1
  int v1; // eax@1
  void *v2; // eax@3
  int v3; // ecx@3
  _DWORD *v4; // ebp@4
  int v5; // esi@4
  signed int v6; // ebx@20
  int v7; // ebp@21
  _DWORD *v8; // eax@21
  _DWORD *v9; // ebp@23
  int v11; // [sp+18h] [bp-24h]@21
  _DWORD *v12; // [sp+1Ch] [bp-20h]@21

  v0 = dword_6FBB9584;
  v1 = 4 * dword_6FBB9584 + 4;
  if ( (unsigned int)dword_6FBB9584 >= 0x20000000 )
    v1 = -1;
  v2 = sub_6F961B40(v1);
  *(_DWORD *)v2 = v0;
  v3 = v0 - 1;
  if ( v0 - 1 >= 0 )
  {
    v4 = (char *)v2 + 4;
    v5 = v0 & 7;
    if ( !(v0 & 7) )
      goto LABEL_29;
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
                *((_DWORD *)v2 + 1) = 0;
                v3 = v0 - 2;
                v4 = (char *)v2 + 8;
              }
              *v4 = 0;
              --v3;
              ++v4;
            }
            *v4 = 0;
            --v3;
            ++v4;
          }
          *v4 = 0;
          --v3;
          ++v4;
        }
        *v4 = 0;
        --v3;
        ++v4;
      }
      *v4 = 0;
      --v3;
      ++v4;
    }
    --v3;
    *v4 = 0;
    ++v4;
    if ( v3 != -1 )
    {
LABEL_29:
      do
      {
        v3 -= 8;
        *v4 = 0;
        v4 += 8;
        *(v4 - 7) = 0;
        *(v4 - 6) = 0;
        *(v4 - 5) = 0;
        *(v4 - 4) = 0;
        *(v4 - 3) = 0;
        *(v4 - 2) = 0;
        *(v4 - 1) = 0;
      }
      while ( v3 != -1 );
    }
  }
  dword_70258AEC = (int)v2 + 4;
  dword_70258AF4 = (int)sub_6F961B40(dword_6FBB9584);
  byte_70258AF8 = 1;
  if ( dword_6FBB9584 > 1 )
  {
    v6 = 1;
    do
    {
      *(_BYTE *)(dword_70258AF4 + v6) = 0;
      v7 = dword_6FBB9584;
      v11 = 0;
      v8 = sub_6F961B60(0x10u);
      *v8 = off_6FB4E814;
      v8[1] = v6;
      v8[2] = v7;
      v8[3] = sub_6F751020;
      v12 = v8;
      sub_6F9385D0(&v11, (int *)&v12, 0);
      if ( v12 )
        (*(void (**)(void))(*v12 + 4))();
      v9 = (_DWORD *)(dword_70258AEC + 4 * v6);
      if ( *v9 )
        sub_6F95D3C0();
      ++v6;
      *v9 = v11;
    }
    while ( dword_6FBB9584 > v6 );
  }
  return 0;
}
