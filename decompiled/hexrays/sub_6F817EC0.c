unsigned int __cdecl sub_6F817EC0(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebx@2
  signed int v6; // ebp@2
  signed int v7; // edi@2
  int v8; // edx@3
  int v9; // eax@3
  int v10; // esi@3
  int v11; // ebx@3
  unsigned int result; // eax@3
  int v13; // ecx@3
  int *v14; // ebx@3
  unsigned int v15; // ecx@4
  unsigned int v16; // eax@4
  int v17; // edx@4
  unsigned int v18; // esi@5
  unsigned int v19; // edi@5
  unsigned int v20; // ecx@21
  int v21; // edx@21
  unsigned int v22; // edi@21
  unsigned int v23; // esi@22
  unsigned int v24; // edi@22
  int v25; // [sp+0h] [bp-24h]@3
  int *v26; // [sp+4h] [bp-20h]@3
  signed int v27; // [sp+8h] [bp-1Ch]@2
  int v28; // [sp+Ch] [bp-18h]@3
  int *v29; // [sp+10h] [bp-14h]@3

  if ( a3 )
  {
    v5 = *(_DWORD *)(a1 + 48) & 1;
    v6 = v5 < 1 ? 8 : 16;
    v27 = v5 < 1 ? -8 : -16;
    v7 = v5 < 1 ? -8 : -16;
  }
  else
  {
    v27 = -16;
    v6 = 16;
    v7 = -16;
  }
  v8 = a1 + 48 * a2 + 288 + 16 * a3;
  v9 = *(_DWORD *)(v8 + 8);
  v10 = *(_DWORD *)(v8 + 12);
  v28 = v9;
  v11 = v10 + a5 * v9;
  result = v10 + a4 * v9;
  v13 = v11;
  v29 = (int *)v11;
  v14 = (int *)(result + v7);
  v26 = (int *)(result + *(_DWORD *)v8);
  v25 = -v7;
  if ( result != v13 )
  {
    do
    {
      v15 = (unsigned int)(v14 + 1) & 0xFFFFFFFC;
      v16 = ((unsigned int)v14 + v6 - v15) & 0xFFFFFFFC;
      v17 = 16843009 * *((_BYTE *)v14 + v25);
      *v14 = v17;
      *(int *)((char *)v14 + v6 - 4) = v17;
      if ( v16 >= 4 )
      {
        v18 = 4;
        *(_DWORD *)v15 = v17;
        v19 = ((v16 - 1) >> 2) & 7;
        if ( v16 > 4 )
        {
          if ( !v19 )
            goto LABEL_43;
          if ( v19 != 1 )
          {
            if ( v19 != 2 )
            {
              if ( v19 != 3 )
              {
                if ( v19 != 4 )
                {
                  if ( v19 != 5 )
                  {
                    if ( v19 != 6 )
                    {
                      *(_DWORD *)(v15 + 4) = v17;
                      v18 = 8;
                    }
                    *(_DWORD *)(v15 + v18) = v17;
                    v18 += 4;
                  }
                  *(_DWORD *)(v15 + v18) = v17;
                  v18 += 4;
                }
                *(_DWORD *)(v15 + v18) = v17;
                v18 += 4;
              }
              *(_DWORD *)(v15 + v18) = v17;
              v18 += 4;
            }
            *(_DWORD *)(v15 + v18) = v17;
            v18 += 4;
          }
          *(_DWORD *)(v15 + v18) = v17;
          v18 += 4;
          if ( v18 < v16 )
          {
LABEL_43:
            do
            {
              *(_DWORD *)(v15 + v18) = v17;
              *(_DWORD *)(v15 + v18 + 4) = v17;
              *(_DWORD *)(v15 + v18 + 8) = v17;
              *(_DWORD *)(v15 + v18 + 12) = v17;
              *(_DWORD *)(v15 + v18 + 16) = v17;
              *(_DWORD *)(v15 + v18 + 20) = v17;
              *(_DWORD *)(v15 + v18 + 24) = v17;
              *(_DWORD *)(v15 + v18 + 28) = v17;
              v18 += 32;
            }
            while ( v18 < v16 );
          }
        }
      }
      v20 = (unsigned int)(v26 + 1) & 0xFFFFFFFC;
      v21 = 16843009 * *((_BYTE *)v26 - 1);
      *v26 = v21;
      *(int *)((char *)v26 + v6 - 4) = v21;
      result = (unsigned int)v26 + v6 - v20;
      v22 = result & 0xFFFFFFFC;
      if ( (result & 0xFFFFFFFC) >= 4 )
      {
        result &= 0xFFFFFFFC;
        v23 = 4;
        *(_DWORD *)v20 = v21;
        v24 = ((v22 - 1) >> 2) & 7;
        if ( result > 4 )
        {
          if ( !v24 )
            goto LABEL_44;
          if ( v24 != 1 )
          {
            if ( v24 != 2 )
            {
              if ( v24 != 3 )
              {
                if ( v24 != 4 )
                {
                  if ( v24 != 5 )
                  {
                    if ( v24 != 6 )
                    {
                      *(_DWORD *)(v20 + 4) = v21;
                      v23 = 8;
                    }
                    *(_DWORD *)(v20 + v23) = v21;
                    v23 += 4;
                  }
                  *(_DWORD *)(v20 + v23) = v21;
                  v23 += 4;
                }
                *(_DWORD *)(v20 + v23) = v21;
                v23 += 4;
              }
              *(_DWORD *)(v20 + v23) = v21;
              v23 += 4;
            }
            *(_DWORD *)(v20 + v23) = v21;
            v23 += 4;
          }
          *(_DWORD *)(v20 + v23) = v21;
          v23 += 4;
          if ( v23 < result )
          {
LABEL_44:
            do
            {
              *(_DWORD *)(v20 + v23) = v21;
              *(_DWORD *)(v20 + v23 + 4) = v21;
              *(_DWORD *)(v20 + v23 + 8) = v21;
              *(_DWORD *)(v20 + v23 + 12) = v21;
              *(_DWORD *)(v20 + v23 + 16) = v21;
              *(_DWORD *)(v20 + v23 + 20) = v21;
              *(_DWORD *)(v20 + v23 + 24) = v21;
              *(_DWORD *)(v20 + v23 + 28) = v21;
              v23 += 32;
            }
            while ( v23 < result );
          }
        }
      }
      v26 = (int *)((char *)v26 + v28);
      v14 = (int *)((char *)v14 + v28);
    }
    while ( v29 != (int *)((char *)v14 - v27) );
  }
  return result;
}
