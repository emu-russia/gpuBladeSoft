int __cdecl sub_6F7AE420(int a1, int a2, int a3)
{
  int result; // eax@2
  int v4; // ebx@5
  int v5; // ebx@5

  if ( a2 < 0 )
  {
    v4 = *(_DWORD *)(a1 + 480);
    result = -(*(_DWORD *)(a1 + 476) * ((*(_DWORD *)(a1 + 484) - v4 - a2 + a3) / *(_DWORD *)(a1 + 476))) - v4;
    v5 = -v4;
    if ( result > 0 )
      result = v5;
  }
  else
  {
    result = *(_DWORD *)(a1 + 480)
           + *(_DWORD *)(a1 + 476) * ((a3 + *(_DWORD *)(a1 + 484) + a2 - *(_DWORD *)(a1 + 480)) / *(_DWORD *)(a1 + 476));
    if ( result < 0 )
      result = *(_DWORD *)(a1 + 480);
  }
  return result;
}
