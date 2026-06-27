int __cdecl sub_6F774030(int a1, int a2)
{
  int result; // eax@1
  int v3; // ecx@3
  _DWORD *v4; // ebx@3
  int *v5; // ecx@6

  result = a2;
  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *(_DWORD *)a2;
      v4 = *(_DWORD **)(a2 + 4);
      if ( *(_DWORD *)a2 )
      {
        *(_DWORD *)(v3 + 4) = v4;
        if ( v4 )
          *v4 = v3;
        else
          *(_DWORD *)(a1 + 4) = v3;
        v5 = *(int **)a1;
        *(_DWORD *)a2 = 0;
        *(_DWORD *)(a2 + 4) = v5;
        *v5 = a2;
        *(_DWORD *)a1 = a2;
      }
    }
  }
  return result;
}
