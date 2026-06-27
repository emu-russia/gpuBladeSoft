int __cdecl sub_6F7B04B0(int a1, int a2)
{
  int v2; // eax@1
  int result; // eax@2
  int v4; // edx@5
  int v5; // eax@5
  int v6; // esi@5
  int v7; // edx@5
  signed int v8; // edx@5
  unsigned __int16 v9; // di@6
  int v10; // eax@10
  int v11; // ecx@12
  unsigned int v12; // eax@12
  unsigned int v13; // edi@8
  signed __int64 v14; // rax@8
  signed __int64 v15; // rax@8
  signed __int64 v16; // rax@8
  signed __int64 v17; // rax@8

  v2 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 112) = a2;
  if ( *(_BYTE *)(v2 + 8) & 1 )
  {
    sub_6F76C670(v2, a2);
    v4 = *(_DWORD *)(a1 + 16);
    v5 = *(_DWORD *)(a1 + 12);
    *(_BYTE *)(a1 + 108) = 0;
    v6 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 48) = v4;
    v7 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 44) = v5;
    *(_DWORD *)(a1 + 52) = v7;
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 36);
    v8 = (unsigned __int16)v5;
    result = 0;
    if ( (_WORD)v8 )
    {
      v9 = *(_WORD *)(a1 + 46);
      if ( v9 )
      {
        if ( *(_BYTE *)(v6 + 176) & 8 )
        {
          *(_DWORD *)(a1 + 48) = sub_6F7C9760((unsigned __int16)v8 << 6, *(_WORD *)(v6 + 68));
          v13 = sub_6F7C9760(*(_WORD *)(a1 + 46) << 6, *(_WORD *)(v6 + 68));
          *(_DWORD *)(a1 + 52) = v13;
          v14 = (signed int)v13 * (signed __int64)*(_WORD *)(v6 + 70);
          *(_DWORD *)(a1 + 56) = ((((unsigned __int64)(unsigned int)((SHIDWORD(v14) >> 31) + 0x8000) + v14) >> 32 << 16)
                                + ((unsigned int)((SHIDWORD(v14) >> 31) + 0x8000 + v14) >> 16)
                                + 32) & 0xFFFFFFC0;
          v15 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v13 * (signed __int64)*(_WORD *)(v6 + 72)) >> 32) >> 31)
                             + 0x8000)
              + (signed int)v13 * (signed __int64)*(_WORD *)(v6 + 72);
          *(_DWORD *)(a1 + 60) = ((HIDWORD(v15) << 16) + ((unsigned int)v15 >> 16) + 32) & 0xFFFFFFC0;
          v16 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v13 * (signed __int64)*(_WORD *)(v6 + 74)) >> 32) >> 31)
                             + 0x8000)
              + (signed int)v13 * (signed __int64)*(_WORD *)(v6 + 74);
          LODWORD(v16) = (HIDWORD(v16) << 16) + ((unsigned int)v16 >> 16) + 32;
          HIDWORD(v16) = *(_DWORD *)(a1 + 48);
          *(_DWORD *)(a1 + 64) = v16 & 0xFFFFFFC0;
          v17 = SHIDWORD(v16) * (signed __int64)*(_WORD *)(v6 + 76);
          LODWORD(v17) = (((unsigned __int64)(unsigned int)((SHIDWORD(v17) >> 31) + 0x8000) + v17) >> 32 << 16)
                       + ((unsigned int)((SHIDWORD(v17) >> 31) + 0x8000 + v17) >> 16)
                       + 32;
          v8 = *(_WORD *)(a1 + 44);
          v9 = *(_WORD *)(a1 + 46);
          *(_DWORD *)(a1 + 68) = v17 & 0xFFFFFFC0;
        }
        if ( v9 > (unsigned __int16)v8 )
        {
          v11 = *(_DWORD *)(a1 + 52);
          *(_WORD *)(a1 + 80) = v9;
          *(_DWORD *)(a1 + 88) = v11;
          v12 = sub_6F7C9760((unsigned __int16)v8, v9);
          *(_DWORD *)(a1 + 76) = 0x10000;
          *(_DWORD *)(a1 + 72) = v12;
        }
        else
        {
          v10 = *(_DWORD *)(a1 + 48);
          *(_WORD *)(a1 + 80) = v8;
          *(_DWORD *)(a1 + 72) = 0x10000;
          *(_DWORD *)(a1 + 88) = v10;
          *(_DWORD *)(a1 + 76) = sub_6F7C9760(v9, v8);
        }
        *(_DWORD *)(a1 + 300) = -1;
        *(_BYTE *)(a1 + 108) = 1;
        result = 0;
      }
    }
  }
  else
  {
    result = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)(v2 + 532) + 108))(v2, a2, a1 + 12);
    if ( result )
      *(_DWORD *)(a1 + 112) = -1;
  }
  return result;
}
