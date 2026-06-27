unsigned int __cdecl sub_6F770690(int a1, int a2)
{
  signed __int64 v2; // rax@3
  unsigned int v3; // ebp@3
  signed __int64 v4; // rax@3
  unsigned int v5; // ST00_4@3
  signed __int64 v6; // rax@3
  unsigned int v7; // esi@3
  signed __int64 v8; // rax@3
  unsigned int result; // eax@3

  if ( a1 )
  {
    if ( a2 )
    {
      v2 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)a2 * (signed __int64)*(_DWORD *)a1) >> 32) >> 31)
                        + 0x8000)
         + *(_DWORD *)a2 * (signed __int64)*(_DWORD *)a1;
      v3 = (HIDWORD(v2) << 16) + ((unsigned int)v2 >> 16);
      v4 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(a2 + 4) * (signed __int64)*(_DWORD *)(a1 + 4)) >> 32) >> 31)
                        + 0x8000)
         + *(_DWORD *)(a2 + 4) * (signed __int64)*(_DWORD *)(a1 + 4);
      v5 = (HIDWORD(v4) << 16) + ((unsigned int)v4 >> 16);
      v6 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(a2 + 8) * (signed __int64)*(_DWORD *)a1) >> 32) >> 31)
                        + 0x8000)
         + *(_DWORD *)(a2 + 8) * (signed __int64)*(_DWORD *)a1;
      v7 = (HIDWORD(v6) << 16) + ((unsigned int)v6 >> 16);
      v8 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(a2 + 12) * (signed __int64)*(_DWORD *)(a1 + 4)) >> 32) >> 31)
                        + 0x8000)
         + *(_DWORD *)(a2 + 12) * (signed __int64)*(_DWORD *)(a1 + 4);
      result = v7 + (HIDWORD(v8) << 16) + ((unsigned int)v8 >> 16);
      *(_DWORD *)(a1 + 4) = result;
      *(_DWORD *)a1 = v5 + v3;
    }
  }
  return result;
}
