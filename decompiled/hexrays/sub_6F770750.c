unsigned int __cdecl sub_6F770750(unsigned int a1, int a2)
{
  unsigned int result; // eax@1
  unsigned int v3; // ebx@3
  unsigned int i; // edi@3
  signed __int64 v5; // rax@7
  unsigned int v6; // ST00_4@7
  signed __int64 v7; // rax@7
  unsigned int v8; // ST04_4@7
  signed __int64 v9; // rax@7
  unsigned int v10; // ebp@7
  signed __int64 v11; // rax@7

  result = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *(_DWORD *)(a1 + 4);
      result = *(_WORD *)(a1 + 2);
      for ( i = v3 + 8 * result; i > v3; *(_DWORD *)(v3 - 8) = v8 + v6 )
      {
        while ( !v3 )
        {
          v3 = 8;
          if ( i <= 8 )
            return result;
        }
        v5 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)a2 * (signed __int64)*(_DWORD *)v3) >> 32) >> 31)
                          + 0x8000)
           + *(_DWORD *)a2 * (signed __int64)*(_DWORD *)v3;
        v6 = (HIDWORD(v5) << 16) + ((unsigned int)v5 >> 16);
        v7 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(a2 + 4) * (signed __int64)*(_DWORD *)(v3 + 4)) >> 32) >> 31)
                          + 0x8000)
           + *(_DWORD *)(a2 + 4) * (signed __int64)*(_DWORD *)(v3 + 4);
        v8 = (HIDWORD(v7) << 16) + ((unsigned int)v7 >> 16);
        v9 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(a2 + 8) * (signed __int64)*(_DWORD *)v3) >> 32) >> 31)
                          + 0x8000)
           + *(_DWORD *)(a2 + 8) * (signed __int64)*(_DWORD *)v3;
        v10 = (HIDWORD(v9) << 16) + ((unsigned int)v9 >> 16);
        v11 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(a2 + 12) * (signed __int64)*(_DWORD *)(v3 + 4)) >> 32) >> 31)
                           + 0x8000)
            + *(_DWORD *)(a2 + 12) * (signed __int64)*(_DWORD *)(v3 + 4);
        result = v10 + (HIDWORD(v11) << 16) + ((unsigned int)v11 >> 16);
        *(_DWORD *)(v3 + 4) = result;
        v3 += 8;
      }
    }
  }
  return result;
}
