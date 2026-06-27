signed int __cdecl sub_6F7A1440(int a1, int a2)
{
  int v2; // esi@1
  int v3; // edi@1
  signed int result; // eax@1
  int v5; // ebp@3
  signed int v6; // edx@4
  int v7; // esi@8
  signed int v8; // ebp@8
  int v9; // ecx@13
  unsigned int v10; // eax@14
  int v11; // edi@16
  int v12; // eax@16
  unsigned int v13; // [sp+20h] [bp-3Ch]@4
  unsigned int v14; // [sp+24h] [bp-38h]@4
  int v15; // [sp+24h] [bp-38h]@8
  unsigned int v16; // [sp+28h] [bp-34h]@4
  signed int v17; // [sp+2Ch] [bp-30h]@5
  int v18; // [sp+38h] [bp-24h]@1
  int v19; // [sp+3Ch] [bp-20h]@1

  v2 = a1;
  v3 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 360) = a2;
  result = (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, 1851878757, a2, &v19);
  v18 = result;
  if ( !result )
  {
    v5 = sub_6F7720A0(a2);
    result = sub_6F7728E0(a2, (int)&unk_6FB68B08, a1 + 344);
    v18 = result;
    if ( !result )
    {
      v6 = *(_DWORD *)(a1 + 348);
      v14 = 12 * v6;
      v13 = v5 + 12 * v6 + 6;
      v16 = v5 + v19;
      result = 145;
      if ( v13 <= v5 + v19 )
      {
        *(_DWORD *)(a1 + 348) = 0;
        v17 = v6;
        *(_DWORD *)(a1 + 356) = sub_6F773B30(v3, 20, 0, v6, 0, &v18);
        result = v18;
        if ( !v18 )
        {
          result = sub_6F772380(a2, v14);
          v18 = result;
          if ( !result )
          {
            if ( v17 )
            {
              v15 = v5;
              v7 = *(_DWORD *)(a1 + 356);
              v8 = v17;
              do
              {
                v18 = sub_6F7728E0(a2, (int)&unk_6FB68AEC, v7);
                if ( !v18 )
                {
                  v9 = *(_WORD *)(v7 + 8);
                  if ( (_WORD)v9 )
                  {
                    v10 = v15 + *(_DWORD *)(v7 + 12) + *(_DWORD *)(a1 + 352);
                    if ( v13 > v10 || v16 < v10 + v9 )
                    {
                      *(_DWORD *)(v7 + 12) = 0;
                      *(_WORD *)(v7 + 8) = 0;
                    }
                    else
                    {
                      *(_DWORD *)(v7 + 12) = v10;
                      v7 += 20;
                    }
                  }
                }
                --v8;
              }
              while ( v8 );
              v11 = v7;
              v2 = a1;
              v12 = -858993459 * ((v11 - *(_DWORD *)(a1 + 356)) >> 2);
            }
            else
            {
              v12 = 0;
            }
            *(_DWORD *)(v2 + 348) = v12;
            sub_6F772460(a2);
            *(_WORD *)(v2 + 340) = *(_DWORD *)(v2 + 348);
            result = v18;
          }
        }
      }
    }
  }
  return result;
}
