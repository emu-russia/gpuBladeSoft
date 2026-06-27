signed int __usercall sub_6F90DF30@<eax>(int a1@<eax>, _WORD *a2@<edx>)
{
  _WORD *v2; // esi@1
  _DWORD *v3; // ebx@2
  signed int result; // eax@2

  v2 = *(_WORD **)a1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) <= 1 )
  {
    result = 0;
  }
  else
  {
    v3 = (_DWORD *)a1;
    result = 0;
    if ( *a2 == *v2 )
    {
      result = 1;
      *v3 = v2 + 1;
    }
  }
  return result;
}
