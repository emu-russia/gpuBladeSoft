void __cdecl sub_6F7AB8F0(int a1)
{
  int v1; // ebx@2
  int v2; // esi@2
  void (__cdecl *v3)(_DWORD); // eax@2
  int v4; // esi@6
  int v5; // eax@6
  int v6; // esi@6
  int v7; // eax@7
  int v8; // eax@7
  unsigned int v9; // ebx@9
  int v10; // ebp@10
  bool v11; // cf@10
  int v12; // eax@12
  int v13; // [sp+1Ch] [bp-20h]@2

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 104);
    v2 = *(_DWORD *)(a1 + 532);
    v13 = *(_DWORD *)(a1 + 100);
    v3 = *(void (__cdecl **)(_DWORD))(a1 + 660);
    if ( v3 )
      v3(*(_DWORD *)(a1 + 656));
    if ( v2 )
      (*(void (__cdecl **)(int))(v2 + 12))(a1);
    sub_6F772340(*(_DWORD *)(a1 + 104), (_DWORD *)(a1 + 700));
    v4 = *(_DWORD *)(a1 + 104);
    v5 = *(_DWORD *)(a1 + 720);
    *(_DWORD *)(a1 + 696) = 0;
    sub_6F773D90(*(_DWORD *)(v4 + 28), v5);
    *(_DWORD *)(a1 + 720) = 0;
    sub_6F772340(v4, (_DWORD *)(a1 + 704));
    sub_6F773D90(v13, *(_DWORD *)(a1 + 648));
    *(_DWORD *)(a1 + 648) = 0;
    *(_DWORD *)(a1 + 644) = 0;
    sub_6F772340(v1, (_DWORD *)(a1 + 632));
    sub_6F772340(v1, (_DWORD *)(a1 + 640));
    v6 = *(_DWORD *)(a1 + 676);
    *(_DWORD *)(a1 + 628) = 0;
    *(_DWORD *)(a1 + 636) = 0;
    if ( v6 )
    {
      sub_6F773D90(v13, *(_DWORD *)(v6 + 4));
      v7 = *(_DWORD *)(v6 + 8);
      *(_DWORD *)(v6 + 4) = 0;
      sub_6F773D90(v13, v7);
      v8 = *(_DWORD *)(v6 + 20);
      *(_DWORD *)(v6 + 8) = 0;
      if ( v8 )
      {
        if ( *(_DWORD *)v6 )
        {
          v9 = 0;
          do
          {
            v10 = 8 * v9++;
            sub_6F773D90(v13, *(_DWORD *)(v8 + v10 + 4));
            v11 = v9 < *(_DWORD *)v6;
            v8 = *(_DWORD *)(v6 + 20);
            *(_DWORD *)(v8 + v10 + 4) = 0;
          }
          while ( v11 );
        }
        sub_6F773D90(v13, v8);
        *(_DWORD *)(v6 + 20) = 0;
      }
      sub_6F773D90(v13, *(_DWORD *)(v6 + 28));
      v12 = *(_DWORD *)(v6 + 36);
      *(_DWORD *)(v6 + 28) = 0;
      sub_6F773D90(v13, v12);
      *(_DWORD *)(v6 + 36) = 0;
      sub_6F773D90(v13, v6);
    }
    *(_DWORD *)(a1 + 676) = 0;
  }
}
