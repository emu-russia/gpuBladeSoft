int __cdecl sub_6F861534(int a1, char a2)
{
  int v2; // eax@1
  int v3; // edx@2
  int result; // eax@3
  int v5; // ST18_4@6
  int v6; // edx@5

  v2 = *(_DWORD *)(a1 + 20);
  if ( (unsigned int)(v2 - 200) > 1 )
  {
    v3 = *(_DWORD *)a1;
    *(_DWORD *)(v3 + 20) = 21;
    *(_DWORD *)(v3 + 24) = v2;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  result = sub_6F8612C0(a1);
  if ( result == 2 )
  {
    if ( a2 )
    {
      v6 = *(_DWORD *)a1;
      *(_DWORD *)(v6 + 20) = 53;
      (*(void (__cdecl **)(int))v6)(a1);
      result = 2;
    }
    v5 = result;
    sub_6F85F3E0(a1);
    result = v5;
  }
  return result;
}
