signed int __usercall sub_6F90DA30@<eax>(int a1@<eax>)
{
  int v1; // ecx@1
  signed int result; // eax@2

  v1 = *(_DWORD *)a1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) > 2 )
  {
    *(_WORD *)v1 = -17425;
    *(_BYTE *)(v1 + 2) = -65;
    *(_DWORD *)a1 += 3;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
