signed int __cdecl sub_6F791E70(int a1, int a2)
{
  signed int result; // eax@1

  result = 0;
  if ( a2 )
  {
    if ( (unsigned int)(a2 + *(_WORD *)(*(_DWORD *)(a1 + 12) + 22) + *(_WORD *)(*(_DWORD *)(a1 + 12) + 58)) > *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4) )
      result = sub_6F7CA4F0(*(_DWORD *)(a1 + 12), a2, 0);
  }
  return result;
}
