int __cdecl sub_6F86016C(int a1, int a2)
{
  int v2; // ebx@1
  int v3; // eax@2
  int result; // eax@3

  v2 = *(_DWORD *)(a1 + 380);
  if ( a2 )
  {
    v3 = *(_DWORD *)a1;
    *(_DWORD *)(v3 + 20) = 3;
    (*(void (__cdecl **)(int))v3)(a1);
  }
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  result = 2 * *(_DWORD *)(a1 + 256);
  *(_DWORD *)(v2 + 60) = result;
  return result;
}
