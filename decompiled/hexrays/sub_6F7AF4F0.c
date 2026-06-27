int __cdecl sub_6F7AF4F0(int a1)
{
  int v1; // esi@1
  int v2; // edi@1
  int v3; // ebp@2
  int v4; // eax@2
  int v5; // eax@2
  int v6; // eax@3
  int v7; // esi@3
  int v8; // eax@4
  int v9; // eax@4
  int v10; // eax@4
  int v11; // eax@4
  int v12; // eax@5
  int result; // eax@5

  v1 = *(_DWORD *)(a1 + 292);
  v2 = *(_DWORD *)(*(_DWORD *)a1 + 100);
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 8);
    *(_WORD *)(v1 + 440) = 0;
    *(_WORD *)(v1 + 442) = 0;
    sub_6F773D90(v3, *(_DWORD *)(v1 + 24));
    v4 = *(_DWORD *)(v1 + 436);
    *(_DWORD *)(v1 + 24) = 0;
    *(_DWORD *)(v1 + 20) = 0;
    sub_6F773D90(v3, v4);
    v5 = *(_DWORD *)(v1 + 392);
    *(_DWORD *)(v1 + 436) = 0;
    *(_DWORD *)(v1 + 432) = 0;
    *(_DWORD *)(v1 + 428) = 0;
    sub_6F773D90(v3, v5);
    *(_DWORD *)(v1 + 392) = 0;
    *(_DWORD *)(v1 + 388) = 0;
    *(_DWORD *)(v1 + 4) = 0;
    *(_DWORD *)v1 = 0;
    sub_6F773D90(v3, v1);
    *(_DWORD *)(a1 + 292) = 0;
  }
  sub_6F773D90(v2, *(_DWORD *)(a1 + 244));
  v6 = *(_DWORD *)(a1 + 252);
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  sub_6F773D90(v2, v6);
  v7 = *(_DWORD *)(a1 + 256);
  *(_DWORD *)(a1 + 252) = 0;
  *(_WORD *)(a1 + 248) = 0;
  if ( v7 )
  {
    sub_6F773D90(v7, *(_DWORD *)(a1 + 284));
    v8 = *(_DWORD *)(a1 + 280);
    *(_DWORD *)(a1 + 284) = 0;
    sub_6F773D90(v7, v8);
    v9 = *(_DWORD *)(a1 + 272);
    *(_DWORD *)(a1 + 280) = 0;
    sub_6F773D90(v7, v9);
    v10 = *(_DWORD *)(a1 + 268);
    *(_DWORD *)(a1 + 272) = 0;
    sub_6F773D90(v7, v10);
    v11 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(a1 + 268) = 0;
    sub_6F773D90(v7, v11);
    *(_DWORD *)(a1 + 276) = 0;
    *(_WORD *)(a1 + 264) = 0;
    *(_WORD *)(a1 + 260) = 0;
    *(_WORD *)(a1 + 266) = 0;
    *(_WORD *)(a1 + 262) = 0;
    *(_DWORD *)(a1 + 256) = 0;
  }
  sub_6F773D90(v2, *(_DWORD *)(a1 + 124));
  v12 = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 124) = 0;
  result = sub_6F773D90(v2, v12);
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 296) = -1;
  *(_DWORD *)(a1 + 300) = -1;
  *(_BYTE *)(a1 + 108) = 0;
  return result;
}
