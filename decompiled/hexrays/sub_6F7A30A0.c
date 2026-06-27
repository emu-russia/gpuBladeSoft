signed int __cdecl sub_6F7A30A0(int a1, unsigned int a2, int a3)
{
  signed int v3; // esi@1
  unsigned int v5; // edx@3
  int v6; // edi@6
  unsigned __int32 v7; // ebp@6
  int v8; // eax@8
  unsigned __int16 v9; // bp@10
  signed int v10; // edi@10
  int v11; // ecx@10
  int v12; // eax@10
  int v13; // ebp@10
  int v14; // ST1C_4@10
  unsigned int v15; // eax@11
  int v16; // edx@11
  int v17; // ecx@11
  unsigned int v18; // [sp+2Ch] [bp-20h]@6

  v3 = 6;
  if ( *(_DWORD *)(a1 + 736) <= a2 )
    return v3;
  v5 = *(_DWORD *)(a1 + 732);
  if ( v5 >= 1 )
  {
    if ( v5 <= 2 )
    {
      v15 = *(_DWORD *)(a1 + 724) + 48 * a2 + 8;
      *(_WORD *)a3 = *(_BYTE *)(*(_DWORD *)(a1 + 724) + 48 * a2 + 52);
      *(_WORD *)(a3 + 2) = *(_BYTE *)(v15 + 45);
      v16 = *(_BYTE *)(v15 + 16) << 6;
      *(_DWORD *)(a3 + 12) = v16;
      v17 = *(_BYTE *)(v15 + 17) << 6;
      *(_DWORD *)(a3 + 16) = v17;
      *(_DWORD *)(a3 + 20) = v16 - v17;
      *(_DWORD *)(a3 + 24) = (*(_BYTE *)(v15 + 22) + *(_BYTE *)(v15 + 18) + *(_BYTE *)(v15 + 23)) << 6;
      return 0;
    }
    if ( v5 == 3 )
    {
      v6 = *(_DWORD *)(a1 + 104);
      v7 = _byteswap_ulong(*(_DWORD *)(*(_DWORD *)(a1 + 724) + 4 * a2 + 8));
      v3 = (*(int (__cdecl **)(int, signed int, _DWORD, int *))(a1 + 508))(
             a1,
             1935829368,
             *(_DWORD *)(a1 + 104),
             (int *)&v18);
      if ( !v3 )
      {
        v3 = 3;
        if ( v7 + 4 <= v18 )
        {
          v8 = sub_6F7720A0(v6);
          v3 = sub_6F771FF0(v6, v8 + v7);
          if ( !v3 )
          {
            v3 = sub_6F772380(v6, 4u);
            if ( !v3 )
            {
              v9 = sub_6F7724C0(v6);
              sub_6F7724C0(v6);
              sub_6F772460(v6);
              v10 = *(_WORD *)(a1 + 178);
              v11 = v9;
              *(_WORD *)a3 = v9;
              *(_WORD *)(a3 + 2) = v9;
              v12 = v9;
              v13 = *(_WORD *)(a1 + 220);
              *(_DWORD *)(a3 + 12) = (v13 * v12 << 6) / v10;
              v14 = *(_WORD *)(a1 + 222);
              *(_DWORD *)(a3 + 16) = (v11 * v14 << 6) / v10;
              *(_DWORD *)(a3 + 20) = (v11 * (v13 - v14 + *(_WORD *)(a1 + 224)) << 6) / v10;
              *(_DWORD *)(a3 + 24) = (v11 * *(_WORD *)(a1 + 226) << 6) / v10;
            }
          }
        }
      }
      return v3;
    }
  }
  return 2;
}
