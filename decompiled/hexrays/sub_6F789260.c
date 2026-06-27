int __cdecl sub_6F789260(int a1, int a2)
{
  int v2; // eax@1
  int result; // eax@3
  int v4; // ebx@4
  int v5; // eax@4

  v2 = *(_DWORD *)(a2 + 96);
  if ( v2 >= 0 && v2 < *(_DWORD *)(a1 + 300) )
  {
    v4 = *(_DWORD *)(a1 + 304) + 252 * v2;
    v5 = (*(int (__cdecl **)(int, _DWORD))(a2 + 40))(a2, 0);
    *(_DWORD *)(v4 + 208) = v5;
    *(_DWORD *)(v4 + 180) = v5;
    result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
