signed int __cdecl sub_6F770EB0(_WORD *a1, _WORD *a2)
{
  signed int result; // eax@1

  result = *a1 > *a2;
  if ( *a1 < *a2 )
    result = -1;
  return result;
}
