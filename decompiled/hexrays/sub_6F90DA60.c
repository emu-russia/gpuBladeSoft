signed int __usercall sub_6F90DA60@<eax>(int a1@<eax>, char a2@<dl>)
{
  _DWORD *v2; // ecx@2
  _WORD *v3; // esi@2
  int v4; // ebx@2
  signed int result; // eax@2
  unsigned int v6; // ebx@2

  if ( a2 & 2 )
  {
    v2 = (_DWORD *)a1;
    v3 = *(_WORD **)a1;
    v4 = *(_DWORD *)(a1 + 4);
    result = 0;
    v6 = v4 - (_DWORD)v3;
    if ( a2 & 1 )
    {
      if ( v6 > 1 )
      {
        *v3 = -257;
        result = 1;
        *v2 += 2;
      }
    }
    else if ( v6 > 1 )
    {
      *v3 = -2;
      result = 1;
      *v2 += 2;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}
