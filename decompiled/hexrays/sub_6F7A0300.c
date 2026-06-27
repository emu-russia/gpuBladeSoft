void __cdecl sub_6F7A0300(int a1)
{
  int v1; // eax@2
  int v2; // ebp@2
  unsigned __int16 v3; // si@6
  bool v4; // zf@6
  int v5; // edi@7
  bool v6; // cf@7

  if ( !*(_BYTE *)(a1 + 612) )
    goto LABEL_4;
  v1 = *(_DWORD *)(a1 + 468);
  v2 = *(_DWORD *)(a1 + 100);
  if ( v1 == 0x20000 )
  {
    v3 = 0;
    sub_6F773D90(*(_DWORD *)(a1 + 100), *(_DWORD *)(a1 + 620));
    v4 = *(_WORD *)(a1 + 618) == 0;
    *(_DWORD *)(a1 + 620) = 0;
    *(_WORD *)(a1 + 616) = 0;
    if ( !v4 )
    {
      do
      {
        v5 = v3++;
        sub_6F773D90(v2, *(_DWORD *)(*(_DWORD *)(a1 + 624) + 4 * v5));
        v6 = *(_WORD *)(a1 + 618) < v3;
        v4 = *(_WORD *)(a1 + 618) == v3;
        *(_DWORD *)(*(_DWORD *)(a1 + 624) + 4 * v5) = 0;
      }
      while ( !v6 && !v4 );
    }
    sub_6F773D90(v2, *(_DWORD *)(a1 + 624));
    *(_DWORD *)(a1 + 624) = 0;
    *(_WORD *)(a1 + 618) = 0;
    goto LABEL_4;
  }
  if ( v1 != 163840 )
  {
LABEL_4:
    *(_BYTE *)(a1 + 612) = 0;
    return;
  }
  sub_6F773D90(*(_DWORD *)(a1 + 100), *(_DWORD *)(a1 + 620));
  *(_DWORD *)(a1 + 620) = 0;
  *(_BYTE *)(a1 + 612) = 0;
  *(_WORD *)(a1 + 616) = 0;
}
