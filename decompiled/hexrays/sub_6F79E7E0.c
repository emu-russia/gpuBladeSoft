int __cdecl sub_6F79E7E0(int a1, int a2)
{
  int result; // eax@1

  result = -(*(_DWORD *)(*(_DWORD *)a1 + 4) < *(_DWORD *)(*(_DWORD *)a2 + 4));
  if ( *(_DWORD *)(*(_DWORD *)a1 + 4) > *(_DWORD *)(*(_DWORD *)a2 + 4) )
    result = 1;
  return result;
}
