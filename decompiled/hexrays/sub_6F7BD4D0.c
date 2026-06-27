int __cdecl sub_6F7BD4D0(int a1)
{
  int result; // eax@1

  result = sub_6F773F40((int *)(*(_DWORD *)(*(_DWORD *)a1 + 500) + 108), *(_DWORD *)(a1 + 44));
  if ( result )
  {
    result = sub_6F76C3D0(*(_DWORD *)(a1 + 44));
    *(_DWORD *)(a1 + 44) = 0;
  }
  return result;
}
