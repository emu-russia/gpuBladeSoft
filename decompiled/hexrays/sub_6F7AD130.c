signed int __usercall sub_6F7AD130@<eax>(unsigned __int8 a1@<cf>, bool a2@<zf>, int a3, _BYTE *a4, _DWORD *a5)
{
  const char *v5; // edi@1
  _BYTE *v6; // esi@1
  signed int v7; // ecx@1
  signed int result; // eax@4

  v5 = "interpreter-version";
  v6 = a4;
  v7 = 20;
  do
  {
    if ( !v7 )
      break;
    a1 = *v6 < (const unsigned __int8)*v5;
    a2 = *v6++ == *v5++;
    --v7;
  }
  while ( a2 );
  result = (char)(!(a1 | a2) - a1);
  if ( !(a1 | a2) == a1 )
  {
    if ( *a5 == 35 )
      *(_DWORD *)(a3 + 64) = 35;
    else
      result = 7;
  }
  else
  {
    result = 12;
  }
  return result;
}
