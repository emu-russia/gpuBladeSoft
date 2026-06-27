signed int __cdecl sub_6F809220(_DWORD *a1, _DWORD *a2)
{
  signed int result; // eax@1

  result = *a1 > *a2;
  if ( *a1 < *a2 )
    result = -1;
  return result;
}
