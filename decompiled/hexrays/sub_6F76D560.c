int __cdecl sub_6F76D560(int a1)
{
  int v1; // eax@2
  int result; // eax@3

  if ( a1 && (v1 = *(_DWORD *)(a1 + 92)) != 0 )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)(v1 + 12) + 12))(v1);
  else
    result = 0;
  return result;
}
