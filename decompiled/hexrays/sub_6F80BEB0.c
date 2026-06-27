signed int __usercall sub_6F80BEB0@<eax>(int a1@<eax>, signed int a2@<edx>)
{
  int v2; // edi@1
  signed int v3; // eax@1
  signed int v4; // edx@1
  unsigned __int64 v5; // rax@3
  int v6; // esi@3
  signed __int64 v7; // rax@3
  signed __int64 v8; // ST18_8@3
  int v9; // ebp@3
  unsigned __int64 v10; // rax@3
  int v11; // ebp@3
  __int64 v12; // ST10_8@3
  __int64 v13; // rcx@3
  unsigned __int64 v14; // rax@3
  int v15; // esi@3
  unsigned __int64 v16; // ST18_8@3
  signed __int64 v17; // rax@3
  unsigned __int64 v18; // rax@3
  unsigned __int64 v19; // kr00_8@3
  signed int result; // eax@3

  v2 = a1;
  v3 = 16;
  v4 = 36 * (0x1000000 / a2);
  if ( v4 >> 24 <= 16 )
    v3 = v4 >> 24;
  v5 = __PAIR__((unsigned __int16)word_6FB8E6C0[v3], 0)
     + (v4 - (v3 << 24))
     * (signed __int64)(((unsigned __int16)word_6FB8E6C2[v3] - (unsigned __int16)word_6FB8E6C0[v3]) << 8);
  v6 = HIDWORD(v5) - (SHIDWORD(v5) <= 0 ? HIDWORD(v5) - 1 : 0);
  v7 = 3i64 * (HIDWORD(v5) - (SHIDWORD(v5) <= 0 ? HIDWORD(v5) - 1 : 0));
  v8 = v7;
  v9 = HIDWORD(v7);
  v10 = (unsigned int)v7 * (unsigned __int64)(unsigned int)v6;
  v11 = v6 * v9;
  HIDWORD(v12) = v11 + v8 * (v6 >> 31) + HIDWORD(v10);
  LODWORD(v12) = v10;
  HIDWORD(v13) = v11 + v8 * (v6 >> 31) + HIDWORD(v10);
  LODWORD(v13) = v10;
  v14 = sub_6F8A13E0(v6, v13 << 23, (v12 + ((v8 + 4096) << 12) + 256) >> 9);
  v15 = v14 >> 31;
  HIDWORD(v13) = 2 * v14;
  v16 = v14;
  v17 = sub_6F8A13E0(v15, 0x1000000000000i64, v12) - 0x1000000;
  LODWORD(v13) = HIDWORD(v13) * (HIDWORD(v17) - 1) + v17 * v15;
  v18 = HIDWORD(v13) * (unsigned __int64)(unsigned int)v17;
  HIDWORD(v18) += v13;
  *(_DWORD *)v2 = __CFADD__((_DWORD)v18, 2147483648) + HIDWORD(v18);
  v19 = __PAIR__(0x1000000 - (unsigned int)(v16 >> 6), -67108864 * (signed int)v16) - v18;
  *(_DWORD *)(v2 + 4) = __CFADD__((_DWORD)v19, 2147483648) + HIDWORD(v19);
  LODWORD(v18) = (v16 + 128) >> 8;
  *(_DWORD *)(v2 + 8) = v18;
  result = (signed int)v18 >> 31;
  *(_DWORD *)(v2 + 12) = result;
  return result;
}
