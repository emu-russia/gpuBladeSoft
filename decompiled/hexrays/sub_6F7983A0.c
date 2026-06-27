int __cdecl sub_6F7983A0(int a1)
{
  int v1; // ebp@1
  int v2; // esi@1
  int v3; // ebx@1
  int v4; // eax@2
  int v5; // ebp@4
  int v6; // ebx@4
  int v7; // eax@5
  int v8; // eax@7
  int v9; // ebp@7
  int v10; // ebx@7
  int v11; // eax@8
  int v12; // ebp@10
  int v13; // ebx@10
  int v14; // eax@11
  int v15; // eax@13
  int result; // eax@13

  v1 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a1 + 60);
  if ( v1 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      v3 += 16;
      sub_6F773D90(v2, v4);
      *(_DWORD *)(v3 - 8) = 0;
      *(_DWORD *)(v3 - 16) = 0;
      *(_DWORD *)(v3 - 12) = 0;
      *(_DWORD *)(v3 - 4) = 0;
      --v1;
    }
    while ( v1 );
    v3 = *(_DWORD *)(a1 + 60);
  }
  sub_6F773D90(v2, v3);
  v5 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  v6 = *(_DWORD *)(a1 + 48);
  if ( v5 )
  {
    do
    {
      v7 = *(_DWORD *)(v6 + 8);
      v6 += 16;
      sub_6F773D90(v2, v7);
      *(_DWORD *)(v6 - 8) = 0;
      *(_DWORD *)(v6 - 16) = 0;
      *(_DWORD *)(v6 - 12) = 0;
      *(_DWORD *)(v6 - 4) = 0;
      --v5;
    }
    while ( v5 );
    v6 = *(_DWORD *)(a1 + 48);
  }
  sub_6F773D90(v2, v6);
  v8 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  sub_6F773D90(v2, v8);
  v9 = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v10 = *(_DWORD *)(a1 + 96);
  if ( v9 )
  {
    do
    {
      v11 = *(_DWORD *)(v10 + 8);
      v10 += 16;
      sub_6F773D90(v2, v11);
      *(_DWORD *)(v10 - 8) = 0;
      *(_DWORD *)(v10 - 16) = 0;
      *(_DWORD *)(v10 - 12) = 0;
      *(_DWORD *)(v10 - 4) = 0;
      --v9;
    }
    while ( v9 );
    v10 = *(_DWORD *)(a1 + 96);
  }
  sub_6F773D90(v2, v10);
  v12 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  v13 = *(_DWORD *)(a1 + 84);
  if ( v12 )
  {
    do
    {
      v14 = *(_DWORD *)(v13 + 8);
      v13 += 16;
      sub_6F773D90(v2, v14);
      *(_DWORD *)(v13 - 8) = 0;
      *(_DWORD *)(v13 - 16) = 0;
      *(_DWORD *)(v13 - 12) = 0;
      *(_DWORD *)(v13 - 4) = 0;
      --v12;
    }
    while ( v12 );
    v13 = *(_DWORD *)(a1 + 84);
  }
  sub_6F773D90(v2, v13);
  v15 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  result = sub_6F773D90(v2, v15);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
