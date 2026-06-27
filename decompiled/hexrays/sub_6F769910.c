signed int __cdecl sub_6F769910(int a1)
{
  int v1; // edi@2
  int v2; // edx@3
  int v3; // eax@3
  bool v4; // zf@3
  int v6; // ebp@6
  int v7; // eax@6
  int v8; // ST1C_4@7

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 96);
    if ( v1 )
    {
      v2 = *(_DWORD *)(a1 + 128);
      v3 = *(_DWORD *)(v2 + 56) - 1;
      v4 = *(_DWORD *)(v2 + 56) == 1;
      *(_DWORD *)(v2 + 56) = v3;
      if ( v3 >= 0 && !v4 )
        return 0;
      v6 = *(_DWORD *)(v1 + 8);
      v7 = sub_6F773F40((int *)(v1 + 16), a1);
      if ( v7 )
      {
        v8 = v7;
        sub_6F773FF0(v1 + 16, v7);
        sub_6F773D90(v6, v8);
        sub_6F768C90(v6, a1, v1);
        return 0;
      }
    }
  }
  return 35;
}
