int __cdecl sub_6F85D16C(int a1, int a2)
{
  int result; // eax@1
  int v3; // eax@5

  result = *(_DWORD *)(a1 + 376);
  if ( !*(_BYTE *)(a1 + 208) )
  {
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = 0;
    *(_BYTE *)(result + 16) = 0;
    *(_DWORD *)(result + 20) = a2;
    if ( a2 )
    {
      v3 = *(_DWORD *)a1;
      *(_DWORD *)(v3 + 20) = 3;
      result = (*(int (__cdecl **)(int))v3)(a1);
    }
    else
    {
      *(_DWORD *)(result + 4) = sub_6F85D1C0;
    }
  }
  return result;
}
