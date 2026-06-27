_DWORD *__cdecl sub_6F773FF0(int a1, int a2)
{
  _DWORD *result; // eax@1
  int v3; // edx@3

  result = (_DWORD *)a2;
  if ( a1 && a2 )
  {
    v3 = *(_DWORD *)a2;
    result = *(_DWORD **)(a2 + 4);
    if ( *(_DWORD *)a2 )
      *(_DWORD *)(v3 + 4) = result;
    else
      *(_DWORD *)a1 = result;
    if ( result )
      *result = v3;
    else
      *(_DWORD *)(a1 + 4) = v3;
  }
  return result;
}
