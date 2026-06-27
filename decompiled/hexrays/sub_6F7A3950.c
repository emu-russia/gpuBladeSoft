_BYTE *__cdecl sub_6F7A3950(int a1)
{
  _BYTE *result; // eax@1
  int v2; // eax@3
  signed int v3; // ebp@3
  signed int v4; // edi@3
  signed int v5; // edx@3
  int v6; // esi@13
  int v7; // ebp@13
  unsigned __int16 v8; // ax@13
  int v9; // ST00_4@13
  _BYTE *v10; // edi@13
  int v11; // esi@16
  int v12; // ebp@16
  size_t v13; // eax@16
  int v14; // ST00_4@16
  int v15; // eax@26
  int v16; // edx@26
  _BYTE *i; // ebp@26
  char v18; // cl@28
  int v19; // ST04_4@32
  int v20; // eax@32
  int v21; // ST04_4@33
  int v22; // [sp+18h] [bp-34h]@3
  unsigned __int16 v23; // [sp+18h] [bp-34h]@13
  size_t v24; // [sp+18h] [bp-34h]@16
  int v25; // [sp+1Ch] [bp-30h]@17
  int v26; // [sp+1Ch] [bp-30h]@24
  int v27; // [sp+2Ch] [bp-20h]@13

  result = *(_BYTE **)(a1 + 664);
  if ( !result )
  {
    if ( *(_WORD *)(a1 + 340) )
    {
      v2 = *(_DWORD *)(a1 + 356);
      v3 = -1;
      v4 = -1;
      v5 = 0;
      v22 = *(_DWORD *)(a1 + 356);
      do
      {
        if ( *(_WORD *)(v2 + 6) == 6 && *(_WORD *)(v2 + 8) )
        {
          if ( *(_DWORD *)v2 == 65539 )
          {
            if ( *(_WORD *)(v2 + 4) == 1033 )
              v4 = v5;
          }
          else if ( *(_DWORD *)v2 == 1 && !*(_WORD *)(v2 + 4) )
          {
            v3 = v5;
          }
        }
        ++v5;
        v2 += 20;
      }
      while ( v5 != *(_WORD *)(a1 + 340) );
      if ( v4 == -1 )
      {
        v10 = 0;
        if ( v3 != -1 )
        {
          v11 = *(_DWORD *)(a1 + 100);
          v12 = v22 + 20 * v3;
          v13 = *(_WORD *)(v12 + 8);
          v14 = *(_DWORD *)(a1 + 100);
          v27 = 0;
          v24 = v13;
          v10 = sub_6F773A50(v14, v13 + 1, &v27);
          if ( !v27 )
          {
            v25 = *(_DWORD *)(a1 + 360);
            v27 = sub_6F771FF0(v25, *(_DWORD *)(v12 + 12));
            if ( v27 || (v27 = sub_6F7720B0(v25, v10, v24)) != 0 )
            {
              *(_DWORD *)(v12 + 12) = 0;
              *(_WORD *)(v12 + 8) = 0;
              sub_6F773D90(v11, *(_DWORD *)(v12 + 16));
              *(_DWORD *)(v12 + 16) = 0;
              v21 = (int)v10;
              v10 = 0;
              sub_6F773D90(v11, v21);
            }
            else
            {
              v10[v24] = 0;
            }
          }
        }
      }
      else
      {
        v6 = *(_DWORD *)(a1 + 100);
        v7 = v22 + 20 * v4;
        v8 = *(_WORD *)(v7 + 8);
        v9 = *(_DWORD *)(a1 + 100);
        v27 = 0;
        v23 = v8;
        v10 = sub_6F773A50(v9, v8 + 1, &v27);
        if ( !v27 )
        {
          v26 = *(_DWORD *)(a1 + 360);
          v27 = sub_6F771FF0(*(_DWORD *)(a1 + 360), *(_DWORD *)(v7 + 12));
          if ( v27 || (v27 = sub_6F772380(v26, *(_WORD *)(v7 + 8))) != 0 )
          {
            v19 = (int)v10;
            v10 = 0;
            sub_6F773D90(v6, v19);
            v20 = *(_DWORD *)(v7 + 16);
            *(_DWORD *)(v7 + 12) = 0;
            *(_WORD *)(v7 + 8) = 0;
            sub_6F773D90(v6, v20);
            *(_DWORD *)(v7 + 16) = 0;
          }
          else
          {
            v15 = *(_DWORD *)(v26 + 32);
            v16 = v23 >> 1;
            for ( i = v10; v16; --v16 )
            {
              if ( !*(_BYTE *)v15 )
              {
                v18 = *(_BYTE *)(v15 + 1);
                if ( v18 > 31 )
                  *i++ = v18;
              }
              v15 += 2;
            }
            *i = 0;
            sub_6F772460(v26);
          }
        }
      }
    }
    else
    {
      v10 = 0;
    }
    *(_DWORD *)(a1 + 664) = v10;
    result = v10;
  }
  return result;
}
