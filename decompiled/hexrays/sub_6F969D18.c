unsigned int __usercall sub_6F969D18@<eax>(int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  unsigned int result; // eax@1
  unsigned int v6; // ebx@1
  unsigned int v7; // esi@1
  signed __int64 v8; // rax@3
  signed __int64 v9; // rax@5

  result = 40 * a1;
  v6 = a2;
  v7 = a2 + result;
  if ( a3 )
  {
    while ( v7 > v6 )
    {
      v9 = (unsigned int)(((signed int)((unsigned __int64)(a4 * (signed __int64)*(_WORD *)(v6 + 14)) >> 32) >> 31)
                        + 0x8000)
         + a4 * (signed __int64)*(_WORD *)(v6 + 14);
      result = a5 + (HIDWORD(v9) << 16) + ((unsigned int)v9 >> 16);
      v6 += 40;
      *(_DWORD *)(v6 - 20) = result;
    }
  }
  else
  {
    while ( v6 < v7 )
    {
      v8 = (unsigned int)(((signed int)((unsigned __int64)(a4 * (signed __int64)*(_WORD *)(v6 + 12)) >> 32) >> 31)
                        + 0x8000)
         + a4 * (signed __int64)*(_WORD *)(v6 + 12);
      result = a5 + (HIDWORD(v8) << 16) + ((unsigned int)v8 >> 16);
      v6 += 40;
      *(_DWORD *)(v6 - 24) = result;
    }
  }
  return result;
}
