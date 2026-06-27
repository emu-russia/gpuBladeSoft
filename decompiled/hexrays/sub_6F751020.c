int __usercall sub_6F751020@<eax>(_DWORD *a1@<ebp>, unsigned int a2@<edi>, int a3, unsigned int a4)
{
  int result; // eax@4

  while ( 1 )
  {
    result = (unsigned __int8)byte_70258AF8;
    if ( !byte_70258AF8 )
      break;
    if ( *(_BYTE *)(dword_70258AF4 + a4) )
    {
      sub_6F74E900(__PAIR__(dword_6FBB9584, dword_70258AF0), a4, a4, a1, a2, 0);
      *(_BYTE *)(dword_70258AF4 + a4) = 0;
    }
  }
  return result;
}
