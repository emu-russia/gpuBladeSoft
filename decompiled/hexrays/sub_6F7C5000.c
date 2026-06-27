int __cdecl sub_6F7C5000(int a1, int a2)
{
  signed int v2; // ebx@1
  bool v3; // zf@1
  unsigned int v4; // edi@2
  _DWORD *v5; // esi@3
  unsigned int v6; // ebp@3
  signed int v7; // edi@3
  signed __int64 v8; // rax@5
  unsigned int v9; // ebx@5
  signed __int64 v10; // rax@5
  signed __int64 v11; // rax@5
  signed int v12; // ebx@6
  signed int v13; // eax@6
  signed int v14; // ebx@6
  signed __int64 v15; // rax@6
  signed int v16; // eax@6
  unsigned int v17; // edx@6
  int v18; // eax@10
  int v20; // [sp+10h] [bp-2Ch]@1
  unsigned int v21; // [sp+14h] [bp-28h]@2

  *(_DWORD *)(a1 + 4) = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 4);
  v2 = *(_DWORD *)(a2 + 4);
  v3 = v2 == *(_DWORD *)(a1 + 1608);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 24);
  v20 = *(_DWORD *)(a2 + 12);
  if ( !v3 || *(_DWORD *)(a2 + 12) != *(_DWORD *)(a1 + 1612) )
  {
    *(_DWORD *)(a1 + 1612) = v20;
    *(_DWORD *)(a1 + 48) = v20;
    v4 = *(_DWORD *)(a1 + 260);
    *(_DWORD *)(a1 + 1608) = v2;
    *(_DWORD *)(a1 + 44) = v2;
    v21 = v4;
    if ( v4 )
    {
      v5 = (_DWORD *)(a1 + 288);
      v6 = 0;
      v7 = v2;
      do
      {
        while ( 1 )
        {
          v8 = (unsigned int)(((signed int)((unsigned __int64)(v7 * (signed __int64)*(v5 - 6)) >> 32) >> 31) + 0x8000)
             + v7 * (signed __int64)*(v5 - 6);
          v9 = v20 + (HIDWORD(v8) << 16) + ((unsigned int)v8 >> 16);
          LODWORD(v8) = *(v5 - 3);
          *(v5 - 5) = v9;
          *(v5 - 4) = v9;
          v10 = (unsigned int)(((signed int)((unsigned __int64)(v7 * (signed __int64)(signed int)v8) >> 32) >> 31)
                             + 0x8000)
              + v7 * (signed __int64)(signed int)v8;
          LODWORD(v10) = v20 + (HIDWORD(v10) << 16) + ((unsigned int)v10 >> 16);
          *v5 &= 0xFFFFFFFE;
          *(v5 - 2) = v10;
          *(v5 - 1) = v10;
          v11 = (unsigned int)(((signed int)((unsigned __int64)(v7 * (signed __int64)(*(v5 - 6) - *(v5 - 3))) >> 32) >> 31)
                             + 0x8000)
              + v7 * (signed __int64)(*(v5 - 6) - *(v5 - 3));
          if ( (HIDWORD(v11) << 16) + ((unsigned int)v11 >> 16) + 48 <= 0x60 )
            break;
          ++v6;
          v5 += 7;
          if ( v21 <= v6 )
            return sub_6F7C2260(a1, a2, 1);
        }
        v12 = (v9 + 32) & 0xFFFFFFC0;
        *(v5 - 4) = v12;
        v13 = sub_6F7C9760(v12, v7) - *(v5 - 3);
        v14 = v13;
        v15 = v7 * (signed __int64)((v13 ^ (v13 >> 31)) - (v13 >> 31));
        v16 = (((unsigned __int64)(unsigned int)((SHIDWORD(v15) >> 31) + 0x8000) + v15) >> 32 << 16)
            + ((unsigned int)((SHIDWORD(v15) >> 31) + 0x8000 + v15) >> 16);
        v17 = 0;
        if ( v16 > 31 )
          v17 = (v16 + 32) & 0xFFFFFFC0;
        if ( v14 < 0 )
          v17 = -v17;
        v18 = *(v5 - 4);
        *v5 |= 1u;
        ++v6;
        v5 += 7;
        *(v5 - 8) = v18 - v17;
        v21 = *(_DWORD *)(a1 + 260);
      }
      while ( v21 > v6 );
    }
  }
  return sub_6F7C2260(a1, a2, 1);
}
