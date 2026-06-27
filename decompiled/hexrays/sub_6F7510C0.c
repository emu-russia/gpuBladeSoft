int __usercall sub_6F7510C0@<eax>(signed __int32 a1@<eax>, unsigned int a2@<ebx>, _DWORD *a3@<ebp>)
{
  signed int v3; // edi@1
  signed __int32 v4; // esi@1
  __int64 v5; // rax@5
  int result; // eax@8

  v3 = dword_6FBB9558;
  v4 = a1;
  _InterlockedExchange((volatile signed __int32 *)&dword_70258AF0, a1);
  if ( (unsigned int)dword_6FBB9558 <= 7 )
  {
    if ( (1 << dword_6FBB9558) & 0xC1 )
    {
      dword_6FBB9558 = 0;
    }
    else if ( (1 << dword_6FBB9558) & 0x38 )
    {
      dword_6FBB9558 = 3;
    }
  }
  sub_6F71ED80();
  HIDWORD(v5) = dword_6FBB9584;
  if ( dword_6FBB9584 > 1 )
  {
    LODWORD(v5) = 1;
    do
    {
      a2 = 1;
      LOBYTE(a2) = *(_BYTE *)(dword_70258AF4 + v5);
      *(_BYTE *)(dword_70258AF4 + v5) = 1;
      HIDWORD(v5) = dword_6FBB9584;
      LODWORD(v5) = v5 + 1;
    }
    while ( dword_6FBB9584 > (signed int)v5 );
  }
  LODWORD(v5) = v4;
  result = sub_6F74E900(v5, 0, a2, a3, v3, v4);
  if ( dword_6FBB9584 > 1 )
  {
    result = 1;
    do
    {
      while ( !*(_BYTE *)(dword_70258AF4 + result) )
      {
        if ( ++result >= dword_6FBB9584 )
          goto LABEL_12;
      }
    }
    while ( dword_6FBB9584 > result );
  }
LABEL_12:
  if ( dword_6FBB9558 != v3 )
  {
    if ( v3 == 5 )
      goto LABEL_23;
    if ( v3 <= 5 )
    {
      if ( v3 != 4 )
        goto LABEL_17;
    }
    else if ( v3 != 6 )
    {
      if ( v3 != 7 )
      {
LABEL_17:
        sub_6F71ED80();
        result = sub_6F74E900(__PAIR__(dword_6FBB9584, v4), 0, a2, a3, v3, v4);
        goto LABEL_18;
      }
LABEL_23:
      dword_6FBB9558 = 2;
      goto LABEL_17;
    }
    dword_6FBB9558 = 1;
    goto LABEL_17;
  }
LABEL_18:
  dword_6FBB9558 = v3;
  return result;
}
