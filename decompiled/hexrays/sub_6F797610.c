int __cdecl sub_6F797610(int a1)
{
  int result; // eax@1
  int v2; // edx@2

  result = a1;
  if ( a1 )
  {
    v2 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 208) = 0;
    *(_DWORD *)(a1 + 412) = 0;
    *(_DWORD *)(a1 + 928) = 0;
    *(_DWORD *)(a1 + 1444) = 0;
    *(_DWORD *)(a1 + 1960) = 0;
    result = sub_6F773D90(v2, a1);
  }
  return result;
}
