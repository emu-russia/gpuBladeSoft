int __cdecl sub_6F8A1B70(int a1, _DWORD *a2)
{
  int result; // eax@1

  *a2 = 0;
  result = 0;
  if ( *(_DWORD *)a1 )
    result = *(_DWORD *)(*(_DWORD *)a1 + 4) + 1;
  return result;
}
