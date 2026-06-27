int sub_6F75F5C0()
{
  int *v0; // ebx@1
  unsigned int v1; // eax@2
  unsigned int v2; // eax@4
  unsigned int v3; // ecx@4
  unsigned int v4; // edx@4
  unsigned int v5; // edi@4
  int v6; // eax@20
  _BYTE *v7; // edi@21
  int v8; // ecx@21
  int v10; // edi@23
  int v11; // ecx@23
  char v12; // [sp+1Ch] [bp-30h]@21

  v0 = dword_7035CC40;
  do
  {
    while ( 1 )
    {
      v1 = 0;
      do
      {
        v0[v1] = 0;
        ++v1;
      }
      while ( v1 < 8 );
      v2 = 4;
      v0[8] = 0;
      v3 = (unsigned int)(v0 + 9) & 0xFFFFFFFC;
      v0[15] = 0;
      *(_DWORD *)v3 = 0;
      v4 = ((unsigned int)v0 + -v3 + 64) & 0xFFFFFFFC;
      v5 = ((v4 - 1) >> 2) & 7;
      if ( v4 > 4 )
      {
        if ( !v5 )
          goto LABEL_27;
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
                    *(_DWORD *)(v3 + 4) = 0;
                    v2 = 8;
                  }
                  *(_DWORD *)(v3 + v2) = 0;
                  v2 += 4;
                }
                *(_DWORD *)(v3 + v2) = 0;
                v2 += 4;
              }
              *(_DWORD *)(v3 + v2) = 0;
              v2 += 4;
            }
            *(_DWORD *)(v3 + v2) = 0;
            v2 += 4;
          }
          *(_DWORD *)(v3 + v2) = 0;
          v2 += 4;
        }
        *(_DWORD *)(v3 + v2) = 0;
        v2 += 4;
        if ( v2 < v4 )
        {
LABEL_27:
          do
          {
            *(_DWORD *)(v3 + v2) = 0;
            *(_DWORD *)(v3 + v2 + 4) = 0;
            *(_DWORD *)(v3 + v2 + 8) = 0;
            *(_DWORD *)(v3 + v2 + 12) = 0;
            *(_DWORD *)(v3 + v2 + 16) = 0;
            *(_DWORD *)(v3 + v2 + 20) = 0;
            *(_DWORD *)(v3 + v2 + 24) = 0;
            *(_DWORD *)(v3 + v2 + 28) = 0;
            v2 += 32;
          }
          while ( v2 < v4 );
        }
      }
      v6 = v0[33];
      if ( !v6 )
        break;
      v7 = (_BYTE *)((unsigned int)(v0 + 17) & 0xFFFFFFFC);
      (*(void (__stdcall **)(int, signed int, char *))(*(_DWORD *)v6 + 36))(v0[33], 20, &v12);
      v0[16] = 0;
      v8 = (char *)(v0 + 16) - v7;
      v0[31] = 0;
      v0 += 34;
      *(v0 - 2) = 0;
      memset(v7, 0, 4 * ((unsigned int)(v8 + 64) >> 2));
      if ( &dword_7035D4C0 == v0 )
        return 0;
    }
    v10 = (int)(v0 + 17);
    v11 = (int)(v0 + 16);
    v0[32] = 0;
    v0 += 34;
    *(v0 - 18) = 0;
    *(v0 - 3) = 0;
    memset((void *)(v10 & 0xFFFFFFFC), 0, 4 * ((v11 - (v10 & 0xFFFFFFFC) + 64) >> 2));
  }
  while ( &dword_7035D4C0 != v0 );
  return 0;
}
