int __usercall sub_6F7C2260@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  signed int v3; // ebx@1
  int v4; // edi@1
  int v5; // edx@5
  int v6; // ecx@6
  int v7; // edx@6
  int v8; // esi@6
  _DWORD *v9; // esi@7
  unsigned int v10; // ebp@7
  signed __int64 v11; // rax@9
  unsigned int v12; // edi@9
  signed __int64 v13; // rax@9
  signed __int64 v14; // rax@9
  signed int v15; // edi@10
  signed int v16; // eax@10
  signed int v17; // edi@10
  signed __int64 v18; // rax@10
  signed int v19; // eax@10
  unsigned int v20; // edx@10
  int v21; // eax@14
  int v22; // [sp+18h] [bp-24h]@5
  int v23; // [sp+1Ch] [bp-20h]@7

  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 16);
  if ( !a3 )
    v3 = *(_DWORD *)(a2 + 4);
  if ( !a3 )
    v4 = *(_DWORD *)(a2 + 12);
  v5 = result + 1572 * a3;
  v22 = v4;
  if ( v3 != *(_DWORD *)(v5 + 1608) || v4 != *(_DWORD *)(v5 + 1612) )
  {
    v6 = 1572 * a3;
    v7 = result + v6;
    v8 = *(_DWORD *)(result + v6 + 260);
    *(_DWORD *)(v7 + 1608) = v3;
    *(_DWORD *)(v7 + 1612) = v4;
    *(_DWORD *)(v7 + 44) = v3;
    *(_DWORD *)(v7 + 48) = v4;
    if ( v8 )
    {
      v9 = (_DWORD *)(result + v6 + 288);
      v10 = 0;
      v23 = result + v6;
      do
      {
        v11 = (unsigned int)(((signed int)((unsigned __int64)(v3 * (signed __int64)*(v9 - 6)) >> 32) >> 31) + 0x8000)
            + v3 * (signed __int64)*(v9 - 6);
        v12 = v22 + (HIDWORD(v11) << 16) + ((unsigned int)v11 >> 16);
        LODWORD(v11) = *(v9 - 3);
        *(v9 - 5) = v12;
        *(v9 - 4) = v12;
        v13 = (unsigned int)(((signed int)((unsigned __int64)(v3 * (signed __int64)(signed int)v11) >> 32) >> 31)
                           + 0x8000)
            + v3 * (signed __int64)(signed int)v11;
        LODWORD(v13) = v22 + (HIDWORD(v13) << 16) + ((unsigned int)v13 >> 16);
        *v9 &= 0xFFFFFFFE;
        *(v9 - 2) = v13;
        *(v9 - 1) = v13;
        v14 = (unsigned int)(((signed int)((unsigned __int64)(v3 * (signed __int64)(*(v9 - 6) - *(v9 - 3))) >> 32) >> 31)
                           + 0x8000)
            + v3 * (signed __int64)(*(v9 - 6) - *(v9 - 3));
        if ( (HIDWORD(v14) << 16) + ((unsigned int)v14 >> 16) + 48 <= 0x60 )
        {
          v15 = (v12 + 32) & 0xFFFFFFC0;
          *(v9 - 4) = v15;
          v16 = sub_6F7C9760(v15, v3) - *(v9 - 3);
          v17 = v16;
          v18 = v3 * (signed __int64)((v16 ^ (v16 >> 31)) - (v16 >> 31));
          v19 = (((unsigned __int64)(unsigned int)((SHIDWORD(v18) >> 31) + 0x8000) + v18) >> 32 << 16)
              + ((unsigned int)((SHIDWORD(v18) >> 31) + 0x8000 + v18) >> 16);
          v20 = 0;
          if ( v19 > 31 )
            v20 = (v19 + 32) & 0xFFFFFFC0;
          if ( v17 < 0 )
            v20 = -v20;
          v21 = *(v9 - 4);
          *v9 |= 1u;
          *(v9 - 1) = v21 - v20;
        }
        result = v23;
        ++v10;
        v9 += 7;
      }
      while ( *(_DWORD *)(v23 + 260) > v10 );
    }
  }
  return result;
}
