int __cdecl sub_6F772580(int a1)
{
  int result; // eax@1
  int *v2; // edx@1

  result = 0;
  v2 = *(int **)(a1 + 32);
  if ( *(_DWORD *)(a1 + 36) > (unsigned int)v2 + 3 )
  {
    result = *v2;
    ++v2;
  }
  *(_DWORD *)(a1 + 32) = v2;
  return result;
}
