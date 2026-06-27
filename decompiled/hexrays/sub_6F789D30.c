void __cdecl sub_6F789D30(int a1)
{
  int v1; // edx@2
  int v2; // ebp@2
  int v3; // ecx@3
  int v4; // edi@4
  int v5; // esi@5
  int *v6; // eax@5
  int v7; // eax@9
  int v8; // eax@9
  int v9; // eax@9
  int v10; // eax@9
  int v11; // eax@9
  int v12; // eax@9
  int v13; // eax@9
  int v14; // eax@9
  int v15; // eax@9
  int v16; // eax@9

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 316);
    v2 = *(_DWORD *)(a1 + 100);
    if ( v1 )
    {
      v3 = *(_DWORD *)(a1 + 300);
      if ( v3 > 0 )
      {
        v4 = 0;
        do
        {
          v5 = v1 + 8 * v4;
          v6 = *(int **)(v5 + 4);
          if ( v6 )
          {
            sub_6F773D90(v2, *v6);
            **(_DWORD **)(v5 + 4) = 0;
            sub_6F773D90(v2, *(_DWORD *)(v5 + 4));
            v1 = *(_DWORD *)(a1 + 316);
            v3 = *(_DWORD *)(a1 + 300);
            *(_DWORD *)(v5 + 4) = 0;
          }
          ++v4;
        }
        while ( v4 < v3 );
      }
      sub_6F773D90(v2, v1);
      *(_DWORD *)(a1 + 316) = 0;
    }
    sub_6F773D90(v2, *(_DWORD *)(a1 + 164));
    v7 = *(_DWORD *)(a1 + 168);
    *(_DWORD *)(a1 + 164) = 0;
    sub_6F773D90(v2, v7);
    v8 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 168) = 0;
    sub_6F773D90(v2, v8);
    v9 = *(_DWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 172) = 0;
    sub_6F773D90(v2, v9);
    v10 = *(_DWORD *)(a1 + 180);
    *(_DWORD *)(a1 + 176) = 0;
    sub_6F773D90(v2, v10);
    v11 = *(_DWORD *)(a1 + 304);
    *(_DWORD *)(a1 + 180) = 0;
    sub_6F773D90(v2, v11);
    v12 = *(_DWORD *)(a1 + 140);
    *(_DWORD *)(a1 + 304) = 0;
    *(_DWORD *)(a1 + 300) = 0;
    sub_6F773D90(v2, v12);
    v13 = *(_DWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 140) = 0;
    sub_6F773D90(v2, v13);
    v14 = *(_DWORD *)(a1 + 156);
    *(_DWORD *)(a1 + 152) = 0;
    sub_6F773D90(v2, v14);
    v15 = *(_DWORD *)(a1 + 324);
    *(_DWORD *)(a1 + 156) = 0;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    sub_6F773D90(v2, v15);
    v16 = *(_DWORD *)(a1 + 328);
    *(_DWORD *)(a1 + 324) = 0;
    sub_6F773D90(v2, v16);
    *(_DWORD *)(a1 + 328) = 0;
  }
}
