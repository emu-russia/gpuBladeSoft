void __cdecl sub_6F78B800(int a1)
{
  int v1; // ebp@2
  int v2; // eax@2
  int v3; // eax@2
  int v4; // ecx@3
  int v5; // ebx@4
  int v6; // esi@7
  bool v7; // zf@8
  int v8; // eax@11
  int v9; // eax@11
  int v10; // eax@11
  int v11; // eax@11
  int v12; // eax@11
  int v13; // eax@11

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 100);
    sub_6F773D90(*(_DWORD *)(a1 + 100), *(_DWORD *)(a1 + 300));
    v2 = *(_DWORD *)(a1 + 292);
    *(_DWORD *)(a1 + 300) = 0;
    sub_6F773D90(v1, v2);
    v3 = *(_DWORD *)(a1 + 284);
    *(_DWORD *)(a1 + 292) = 0;
    if ( v3 )
    {
      v4 = *(_DWORD *)(a1 + 280);
      if ( v4 > 0 )
      {
        v5 = 0;
        do
        {
          v6 = v3 + 12 * v5;
          if ( v6 )
          {
            sub_6F773D90(v1, *(_DWORD *)v6);
            v7 = *(_BYTE *)(v6 + 4) == 0;
            *(_DWORD *)v6 = 0;
            if ( !v7 )
            {
              sub_6F773D90(v1, *(_DWORD *)(v6 + 8));
              *(_DWORD *)(v6 + 8) = 0;
            }
            v3 = *(_DWORD *)(a1 + 284);
            v4 = *(_DWORD *)(a1 + 280);
          }
          ++v5;
        }
        while ( v5 < v4 );
      }
      sub_6F773D90(v1, v3);
      *(_DWORD *)(a1 + 284) = 0;
    }
    sub_6F773D90(v1, *(_DWORD *)(a1 + 192));
    v8 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 192) = 0;
    sub_6F773D90(v1, v8);
    v9 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 20) = 0;
    sub_6F773D90(v1, v9);
    v10 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 24) = 0;
    sub_6F773D90(v1, v10);
    v11 = *(_DWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 32) = 0;
    sub_6F773D90(v1, v11);
    v12 = *(_DWORD *)(a1 + 180);
    *(_DWORD *)(a1 + 176) = 0;
    sub_6F773D90(v1, v12);
    v13 = *(_DWORD *)(a1 + 104);
    *(_DWORD *)(a1 + 180) = 0;
    if ( v13 == a1 + 132 )
    {
      sub_6F771FD0(v13);
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 172);
    }
  }
}
