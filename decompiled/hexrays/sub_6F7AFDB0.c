signed int __usercall sub_6F7AFDB0@<eax>(int a1@<eax>, unsigned __int16 a2@<dx>, unsigned __int16 a3@<cx>, int a4)
{
  int v4; // ebx@1
  signed int result; // eax@3
  int v6; // eax@6
  int v7; // edx@6
  unsigned __int64 v8; // rdi@6
  int v9; // eax@6
  signed int v10; // ebx@13

  v4 = a1;
  if ( *(_WORD *)(a1 + 116) > a2 && *(_WORD *)(a1 + 80) > a3 )
  {
    v6 = *(_DWORD *)(a1 + 88) + 8 * a3;
    v7 = *(_DWORD *)(v4 + 124) + 8 * a2;
    HIDWORD(v8) = *(_DWORD *)v6 - *(_DWORD *)v7;
    v9 = *(_DWORD *)(v6 + 4) - *(_DWORD *)(v7 + 4);
    if ( v9 | HIDWORD(v8) )
    {
      if ( *(_BYTE *)(v4 + 368) & 1 )
        LODWORD(v8) = -v9;
      else
        v8 = __PAIR__(v9, HIDWORD(v8));
      if ( (unsigned int)(v8 + 0x3FFF) <= 0x7FFE && (unsigned int)(HIDWORD(v8) + 0x3FFF) <= 0x7FFE )
      {
        result = 0;
        if ( !v8 )
          return result;
        LODWORD(v8) = (_DWORD)v8 << 14;
        HIDWORD(v8) <<= 14;
      }
    }
    else
    {
      v8 = 0x4000i64;
    }
    v10 = 4 * sub_6F7C93F0(v8, SHIDWORD(v8));
    *(_WORD *)a4 = sub_6F7C9760(v8, v10);
    *(_WORD *)(a4 + 2) = sub_6F7C9760(SHIDWORD(v8), v10);
    return 0;
  }
  result = 1;
  if ( *(_BYTE *)(v4 + 561) )
    *(_DWORD *)(v4 + 12) = 134;
  return result;
}
