signed int __usercall sub_6F7C0D20@<eax>(int a1@<eax>, signed int a2@<edx>, int a3@<ecx>)
{
  int v3; // eax@1
  unsigned int v4; // ebp@1
  int v5; // eax@1
  unsigned int v6; // edi@1
  signed int v7; // eax@1
  int v8; // edx@1
  unsigned int v9; // eax@1
  signed int result; // eax@1
  signed int v11; // edx@1
  int v12; // esi@5
  int v13; // ebx@6
  int v14; // esi@6
  unsigned int v15; // eax@7
  int v16; // edi@7
  int v17; // ecx@9
  int v18; // eax@9
  int v19; // ecx@9
  signed __int64 v20; // rax@11
  signed int v21; // eax@11
  signed int v22; // [sp+0h] [bp-3Ch]@6
  int v23; // [sp+8h] [bp-34h]@1
  signed int v24; // [sp+Ch] [bp-30h]@6
  signed int v25; // [sp+10h] [bp-2Ch]@1
  unsigned int v26; // [sp+14h] [bp-28h]@1
  int v27; // [sp+18h] [bp-24h]@4
  signed int v28; // [sp+1Ch] [bp-20h]@3
  int v29; // [sp+20h] [bp-1Ch]@1
  int v30; // [sp+24h] [bp-18h]@4
  int v31; // [sp+28h] [bp-14h]@4

  v29 = a1;
  v25 = a2;
  v3 = 1468 * a3 + a1;
  v4 = *(_DWORD *)(v3 + 64);
  v5 = v4 + 48 * *(_DWORD *)(v3 + 56);
  v6 = v5;
  v26 = v5;
  v7 = a2;
  v8 = *(_DWORD *)(a2 + 1572 * a3 + 44);
  v9 = *(_DWORD *)(v7 + 40);
  v23 = v8;
  result = (((unsigned __int64)(unsigned int)(((signed int)((unsigned __int64)(v8 * (signed __int64)(v9 / 0x28)) >> 32) >> 31)
                                            + 0x8000)
           + v8 * (signed __int64)(v9 / 0x28)) >> 32 << 16)
         + ((((signed int)((unsigned __int64)(v8 * (signed __int64)(v9 / 0x28)) >> 32) >> 31) + 0x8000 + v8 * (v9 / 0x28)) >> 16);
  v11 = 32;
  if ( result <= 32 )
    v11 = result;
  v28 = v11;
  if ( v4 < v6 )
  {
    v27 = 1572 * a3;
    v31 = 1468 * a3;
    v30 = v25 + 1572 * a3 + 264;
    do
    {
      result = v25;
      v12 = *(_DWORD *)(v25 + v27 + 260);
      if ( v12 )
      {
        v24 = 0;
        v13 = v30;
        v14 = v30 + 28 * v12;
        v22 = v28;
        do
        {
          v15 = *(_DWORD *)(v13 + 24);
          v16 = v13;
          if ( v15 & 1 && ((v15 >> 1) & 1) != (*(_BYTE *)(v4 + 13) == *(_DWORD *)(v31 + v29 + 68)) )
          {
            v17 = ((signed int)*(_WORD *)v4 - *(_DWORD *)v13) >> 31;
            v18 = (v17 ^ (*(_WORD *)v4 - *(_DWORD *)v13)) - v17;
            v19 = ((signed int)*(_WORD *)v4 - *(_DWORD *)(v13 + 12)) >> 31;
            if ( v18 > (v19 ^ ((signed int)*(_WORD *)v4 - *(_DWORD *)(v13 + 12))) - v19 )
            {
              v16 = v13 + 12;
              v18 = (v19 ^ (*(_WORD *)v4 - *(_DWORD *)(v13 + 12))) - v19;
            }
            v20 = (unsigned int)(((signed int)((unsigned __int64)(v23 * (signed __int64)v18) >> 32) >> 31) + 0x8000)
                + v23 * (signed __int64)v18;
            v21 = (HIDWORD(v20) << 16) + ((unsigned int)v20 >> 16);
            if ( v21 < v22 )
            {
              v22 = v21;
              v24 = v16;
            }
          }
          v13 += 28;
        }
        while ( v14 != v13 );
        result = v24;
        if ( v24 )
          *(_DWORD *)(v4 + 20) = v24;
      }
      v4 += 48;
    }
    while ( v26 > v4 );
  }
  return result;
}
