unsigned int __cdecl sub_6F7C4D40(int a1, int a2)
{
  signed int v2; // ebx@1
  unsigned int result; // eax@1
  _DWORD *v4; // esi@3
  unsigned int v5; // ebp@3
  signed int v6; // edi@3
  signed __int64 v7; // rax@5
  unsigned int v8; // ebx@5
  signed __int64 v9; // rax@5
  signed __int64 v10; // rax@5
  signed int v11; // ebx@6
  signed int v12; // eax@6
  signed int v13; // ebx@6
  signed __int64 v14; // rax@6
  signed int v15; // eax@6
  unsigned int v16; // edx@6
  int v17; // eax@10
  int v18; // [sp+18h] [bp-24h]@1
  unsigned int v19; // [sp+1Ch] [bp-20h]@2

  *(_DWORD *)(a1 + 4) = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 24);
  sub_6F7C2260(a1, a2, 0);
  v2 = *(_DWORD *)(a2 + 8);
  v18 = *(_DWORD *)(a2 + 16);
  result = a1;
  if ( v2 != *(_DWORD *)(a1 + 3180) || v18 != *(_DWORD *)(a1 + 3184) )
  {
    *(_DWORD *)(a1 + 3180) = v2;
    *(_DWORD *)(a1 + 1616) = v2;
    *(_DWORD *)(a1 + 3184) = v18;
    *(_DWORD *)(a1 + 1620) = v18;
    result = *(_DWORD *)(a1 + 1832);
    v19 = *(_DWORD *)(a1 + 1832);
    if ( result )
    {
      v4 = (_DWORD *)(a1 + 1860);
      v5 = 0;
      v6 = v2;
      do
      {
        while ( 1 )
        {
          v7 = (unsigned int)(((signed int)((unsigned __int64)(v6 * (signed __int64)*(v4 - 6)) >> 32) >> 31) + 0x8000)
             + v6 * (signed __int64)*(v4 - 6);
          v8 = v18 + (HIDWORD(v7) << 16) + ((unsigned int)v7 >> 16);
          LODWORD(v7) = *(v4 - 3);
          *(v4 - 5) = v8;
          *(v4 - 4) = v8;
          v9 = (unsigned int)(((signed int)((unsigned __int64)(v6 * (signed __int64)(signed int)v7) >> 32) >> 31)
                            + 0x8000)
             + v6 * (signed __int64)(signed int)v7;
          LODWORD(v9) = v18 + (HIDWORD(v9) << 16) + ((unsigned int)v9 >> 16);
          *v4 &= 0xFFFFFFFE;
          *(v4 - 2) = v9;
          *(v4 - 1) = v9;
          v10 = (unsigned int)(((signed int)((unsigned __int64)(v6 * (signed __int64)(*(v4 - 6) - *(v4 - 3))) >> 32) >> 31)
                             + 0x8000)
              + v6 * (signed __int64)(*(v4 - 6) - *(v4 - 3));
          result = (HIDWORD(v10) << 16) + ((unsigned int)v10 >> 16) + 48;
          if ( result <= 0x60 )
            break;
          ++v5;
          v4 += 7;
          if ( v19 <= v5 )
            return result;
        }
        v11 = (v8 + 32) & 0xFFFFFFC0;
        *(v4 - 4) = v11;
        v12 = sub_6F7C9760(v11, v6) - *(v4 - 3);
        v13 = v12;
        v14 = v6 * (signed __int64)((v12 ^ (v12 >> 31)) - (v12 >> 31));
        v15 = (((unsigned __int64)(unsigned int)((SHIDWORD(v14) >> 31) + 0x8000) + v14) >> 32 << 16)
            + ((unsigned int)((SHIDWORD(v14) >> 31) + 0x8000 + v14) >> 16);
        v16 = 0;
        if ( v15 > 31 )
          v16 = (v15 + 32) & 0xFFFFFFC0;
        if ( v13 < 0 )
          v16 = -v16;
        v17 = *(v4 - 4);
        *v4 |= 1u;
        ++v5;
        v4 += 7;
        *(v4 - 8) = v17 - v16;
        result = *(_DWORD *)(a1 + 1832);
        v19 = *(_DWORD *)(a1 + 1832);
      }
      while ( v19 > v5 );
    }
  }
  return result;
}
