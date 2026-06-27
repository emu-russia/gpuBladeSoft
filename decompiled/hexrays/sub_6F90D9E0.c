int __usercall sub_6F90D9E0@<eax>(int a1@<ecx>, _BYTE *a2@<edx>, int result@<eax>)
{
  int v3; // esi@2
  _BYTE *v4; // ebx@2

  if ( *a2 & 4 )
  {
    v3 = result;
    v4 = a2;
    result = sub_6F90DF30(result, &word_6FBAB834);
    if ( (_BYTE)result )
    {
      *(_DWORD *)v4 &= 0xFFFFFFFE;
    }
    else
    {
      result = sub_6F90DF30(v3, &word_6FBAB82C);
      if ( (_BYTE)result )
        *(_DWORD *)v4 |= 1u;
    }
  }
  return result;
}
