int __usercall sub_6F7AB340@<eax>(__int64 a1@<edx:eax>, int a2@<ecx>)
{
  int v2; // ebp@1
  int v3; // ebx@1
  int v4; // edi@1
  signed int v5; // esi@5

  v2 = a2;
  v4 = HIDWORD(a1);
  v3 = a1;
  if ( (unsigned int)(a1 + 0x3FFF) > 0x7FFE || (unsigned int)(HIDWORD(a1) + 0x3FFF) > 0x7FFE )
    goto LABEL_5;
  if ( a1 )
  {
    v3 = (_DWORD)a1 << 14;
    v4 = HIDWORD(a1) << 14;
LABEL_5:
    v5 = 4 * sub_6F7C93F0(v3, v4);
    *(_WORD *)v2 = sub_6F7C9760(v3, v5);
    *(_WORD *)(v2 + 2) = sub_6F7C9760(v4, v5);
  }
  return 0;
}
