int __cdecl sub_6F8669EC(int *a1, int a2)
{
  int result; // eax@1
  int v3; // ebx@1
  int v4; // eax@4

  result = a2;
  v3 = *a1;
  if ( a2 < 0 )
  {
    v4 = *(_DWORD *)(v3 + 108);
    if ( !v4 || *(_DWORD *)(v3 + 104) > 2 )
    {
      (*(void (__cdecl **)(int *))(v3 + 8))(a1);
      v4 = *(_DWORD *)(v3 + 108);
    }
    result = v4 + 1;
    *(_DWORD *)(v3 + 108) = result;
  }
  else if ( a2 <= *(_DWORD *)(v3 + 104) )
  {
    result = (*(int (**)(void))(v3 + 8))();
  }
  return result;
}
