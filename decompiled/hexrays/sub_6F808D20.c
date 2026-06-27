unsigned int __cdecl sub_6F808D20(int a1, int a2, int a3)
{
  int v3; // edi@1
  signed int v4; // edi@3
  signed int v5; // edx@4
  int v6; // eax@4
  int v7; // esi@19
  unsigned int v8; // ebp@19
  __int16 v9; // ax@19
  int v10; // ecx@19
  int v11; // ST1C_4@19
  unsigned int v12; // ebp@19
  __int16 v13; // ax@19
  signed int v14; // ebx@19
  int v15; // ebp@20
  unsigned int v16; // ST1C_4@20
  __int16 v17; // ax@20
  unsigned __int16 v18; // dx@20
  int v19; // ebp@20
  unsigned int v20; // ST1C_4@20
  __int16 v21; // ax@20
  unsigned int result; // eax@20
  signed int v23; // ebx@26
  signed int v24; // ebp@26
  int v25; // [sp+14h] [bp-38h]@2
  int v26; // [sp+18h] [bp-34h]@2
  int v27; // [sp+20h] [bp-2Ch]@1
  signed int v28; // [sp+24h] [bp-28h]@2
  int v29; // [sp+28h] [bp-24h]@1

  sub_6F815330(a1, 0, a3);
  v29 = a1;
  v3 = a1;
  v27 = a2;
  do
  {
    v26 = v3;
    v28 = 0;
    v25 = v27;
    while ( 2 )
    {
      v4 = 0;
      do
      {
        while ( 1 )
        {
          v5 = 3;
          v6 = *(_DWORD *)(v26 + 8 * v4);
          if ( v28 <= 0 )
            v5 = v4;
          if ( v5 )
          {
            if ( *(_DWORD *)v29 == v6 )
            {
              v23 = 0;
              v24 = 0;
              goto LABEL_27;
            }
            if ( v5 != 1 )
            {
              if ( *(_DWORD *)(v29 + 8) == v6 )
              {
                v23 = 0;
                v24 = 1;
                goto LABEL_27;
              }
              if ( v5 == 3 && *(_DWORD *)(v29 + 16) == v6 )
              {
                v23 = 0;
                v24 = 2;
                goto LABEL_27;
              }
            }
          }
          if ( v28 != 1 || !v4 )
            break;
          if ( *(_DWORD *)(v29 + 4) == v6 )
          {
            v23 = 1;
            v24 = 0;
          }
          else
          {
            if ( v4 == 1 )
              break;
            if ( *(_DWORD *)(v29 + 12) == v6 )
            {
              v23 = 1;
              v24 = 1;
            }
            else
            {
              if ( v4 != 3 || *(_DWORD *)(v29 + 20) != v6 )
                break;
              v23 = 1;
              v24 = 2;
            }
          }
LABEL_27:
          result = *(_DWORD *)(v27 + 4 * (v23 + 2 * v24));
          *(_DWORD *)(v25 + 8 * v4++) = result;
          if ( v4 == 3 )
            goto LABEL_22;
        }
        v7 = *(_DWORD *)(v25 + 8 * v4);
        v8 = (unsigned __int16)(2 * **(_WORD **)(v26 + 8 * v4));
        v9 = sub_6F8095C0(v8);
        *(_WORD *)(v7 + 2) = v9 - 1;
        v10 = *(_DWORD *)(v26 + 8 * v4);
        *(_WORD *)v7 = (1 << (v9 + 15)) / v8 + 1;
        v11 = *(_DWORD *)(v25 + 8 * v4) + 4;
        v12 = (unsigned __int16)(2 * *(_WORD *)(v10 + 2));
        v13 = sub_6F8095C0(v12);
        *(_WORD *)v11 = (1 << (v13 + 15)) / v12 + 1;
        *(_WORD *)(v11 + 2) = v13 - 1;
        v14 = 4;
        do
        {
          v15 = *(_DWORD *)(v25 + 8 * v4) + 2 * v14;
          v16 = (unsigned __int16)(2 * *(_WORD *)(*(_DWORD *)(v26 + 8 * v4) + v14));
          v17 = sub_6F8095C0(v16);
          *(_WORD *)(v15 + 2) = v17 - 1;
          *(_WORD *)v15 = (1 << (v17 + 15)) / v16 + 1;
          v18 = 2 * *(_WORD *)(*(_DWORD *)(v26 + 8 * v4) + v14 + 2);
          v19 = *(_DWORD *)(v25 + 8 * v4) + 2 * v14 + 4;
          v14 += 4;
          v20 = v18;
          v21 = sub_6F8095C0(v18);
          *(_WORD *)(v19 + 2) = v21 - 1;
          result = (1 << (v21 + 15)) / v20 + 1;
          *(_WORD *)v19 = result;
        }
        while ( v14 != 128 );
        ++v4;
      }
      while ( v4 != 3 );
LABEL_22:
      v25 += 4;
      v26 += 4;
      if ( v28 != 1 )
      {
        v28 = 1;
        continue;
      }
      break;
    }
    v29 += 24;
    v27 += 24;
    v3 = v29;
  }
  while ( v29 != a1 + 1536 );
  return result;
}
