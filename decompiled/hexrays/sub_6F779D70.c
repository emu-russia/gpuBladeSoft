int __cdecl sub_6F779D70(int a1, unsigned int a2)
{
  int result; // eax@1

  result = 0;
  if ( a2 <= 0xFF )
    result = *(_WORD *)(*(_DWORD *)(a1 + 16) + 2 * a2);
  return result;
}
