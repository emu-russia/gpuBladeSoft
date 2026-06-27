signed int __cdecl sub_6F789F20(int a1, int a2)
{
  signed int result; // eax@1
  int v3; // ebx@1
  int v4; // esi@4
  int v5; // edx@4
  signed int v6; // ebp@5
  unsigned int v7; // edx@7
  signed int v8; // eax@7
  int v9; // ebx@8
  int v10; // ecx@8
  int v11; // edx@8
  int v12; // ecx@8
  int v13; // [sp+18h] [bp-34h]@4
  int v14; // [sp+1Ch] [bp-30h]@8
  int v15; // [sp+20h] [bp-2Ch]@8
  int v16; // [sp+24h] [bp-28h]@5
  signed int v17; // [sp+28h] [bp-24h]@9
  __int16 v18; // [sp+2Ah] [bp-22h]@8
  int v19; // [sp+2Ch] [bp-20h]@7

  result = 0;
  v3 = *(_DWORD *)(a2 + 96);
  if ( v3 >= 0 && v3 < *(_DWORD *)(a1 + 300) )
  {
    v4 = *(_DWORD *)(a1 + 304);
    v5 = (*(int (__cdecl **)(int, signed int, int *, signed int))(a2 + 52))(a2, 6, &v13, 3);
    result = 3;
    if ( v5 > 5 )
    {
      v6 = ((v16 >> 31) ^ v16) - (v16 >> 31);
      if ( ((v16 >> 31) ^ v16) != v16 >> 31 )
      {
        *(_WORD *)(a1 + 68) = sub_6F7C9760(1000, v6);
        if ( v6 == 0x10000 )
        {
          v7 = v16;
          v8 = v19;
        }
        else
        {
          v13 = sub_6F7C9760(v13, v6);
          v14 = sub_6F7C9760(v14, v6);
          v15 = sub_6F7C9760(v15, v6);
          v17 = sub_6F7C9760(v17, v6);
          v8 = sub_6F7C9760(v19, v6);
          v7 = ((v16 >> 31) & 0xFFFE0000) + 0x10000;
        }
        v9 = v4 + 252 * v3;
        *(_DWORD *)(v9 + 216) = v13;
        v10 = v14;
        *(_DWORD *)(v9 + 228) = v7;
        v11 = v18;
        *(_DWORD *)(v9 + 236) = v8 >> 16;
        result = 0;
        *(_DWORD *)(v9 + 224) = v10;
        v12 = v15;
        *(_DWORD *)(v9 + 232) = v11;
        *(_DWORD *)(v9 + 220) = v12;
      }
    }
  }
  return result;
}
