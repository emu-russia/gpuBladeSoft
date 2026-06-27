void __cdecl sub_6F78DDA0(int a1)
{
  int v1; // esi@2
  int v2; // edi@2
  int v3; // eax@2
  int v4; // eax@2
  int v5; // eax@2
  int v6; // eax@2
  int v7; // eax@2
  int v8; // eax@2
  int v9; // eax@2
  _DWORD *v10; // eax@2
  _DWORD *v11; // ebx@3
  int v12; // eax@4

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 100);
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 96) + 8);
    v3 = *(_DWORD *)(a1 + 368);
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    sub_6F773D90(v1, v3);
    v4 = *(_DWORD *)(a1 + 372);
    *(_DWORD *)(a1 + 368) = 0;
    sub_6F773D90(v1, v4);
    v5 = *(_DWORD *)(a1 + 376);
    *(_DWORD *)(a1 + 372) = 0;
    sub_6F773D90(v1, v5);
    v6 = *(_DWORD *)(a1 + 364);
    *(_DWORD *)(a1 + 376) = 0;
    sub_6F773D90(v1, v6);
    v7 = *(_DWORD *)(a1 + 388);
    *(_DWORD *)(a1 + 364) = 0;
    *(_DWORD *)(a1 + 360) = 0;
    *(_DWORD *)(a1 + 352) = 0;
    *(_DWORD *)(a1 + 348) = 0;
    sub_6F773D90(v1, v7);
    v8 = *(_DWORD *)(a1 + 416);
    *(_DWORD *)(a1 + 388) = 0;
    *(_DWORD *)(a1 + 380) = 0;
    *(_DWORD *)(a1 + 384) = 0;
    sub_6F773D90(v1, v8);
    v9 = *(_DWORD *)(a1 + 396);
    *(_DWORD *)(a1 + 416) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    *(_DWORD *)(a1 + 412) = 0;
    sub_6F773D90(v1, v9);
    v10 = *(_DWORD **)(a1 + 424);
    *(_DWORD *)(a1 + 396) = 0;
    *(_DWORD *)(a1 + 392) = 0;
    if ( v10 )
    {
      do
      {
        v11 = (_DWORD *)*v10;
        sub_6F773D90(v1, (int)v10);
        v10 = v11;
      }
      while ( v11 );
    }
    v12 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 424) = 0;
    *(_DWORD *)(a1 + 428) = 0;
    *(_DWORD *)(a1 + 420) = 0;
    sub_6F773D90(v2, v12);
    *(_DWORD *)(a1 + 32) = 0;
  }
}
