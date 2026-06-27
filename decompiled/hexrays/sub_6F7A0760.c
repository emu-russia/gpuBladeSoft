void __cdecl sub_6F7A0760(int a1)
{
  int v1; // edi@2
  int v2; // esi@2
  void (__cdecl *v3)(int); // eax@3
  void (__cdecl *v4)(int); // eax@5
  int v5; // eax@7
  int v6; // eax@11
  int v7; // eax@11
  int v8; // ebp@11
  bool v9; // zf@11
  int v10; // eax@15
  int v11; // eax@15
  int v12; // eax@15
  int v13; // eax@12

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 532);
    v2 = *(_DWORD *)(a1 + 100);
    if ( v1 )
    {
      v3 = *(void (__cdecl **)(int))(v1 + 80);
      if ( v3 )
        v3(a1);
      v4 = *(void (__cdecl **)(int))(v1 + 100);
      if ( v4 )
        v4(a1);
    }
    v5 = *(_DWORD *)(a1 + 104);
    if ( *(_BYTE *)(a1 + 780) )
    {
      if ( *(_DWORD *)(a1 + 760) )
      {
        sub_6F772340(*(_DWORD *)(a1 + 104), (_DWORD *)(a1 + 760));
        v5 = *(_DWORD *)(a1 + 104);
      }
      *(_DWORD *)(a1 + 764) = 0;
      *(_DWORD *)(a1 + 768) = 0;
      *(_DWORD *)(a1 + 772) = 0;
    }
    sub_6F772340(v5, (_DWORD *)(a1 + 740));
    v6 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 744) = 0;
    *(_DWORD *)(a1 + 748) = 0;
    *(_DWORD *)(a1 + 752) = 0;
    *(_DWORD *)(a1 + 756) = 0;
    sub_6F773D90(v2, v6);
    v7 = *(_DWORD *)(a1 + 156);
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 140) = 0;
    sub_6F773D90(v2, v7);
    *(_DWORD *)(a1 + 156) = 0;
    *(_WORD *)(a1 + 152) = 0;
    sub_6F772340(*(_DWORD *)(a1 + 104), (_DWORD *)(a1 + 500));
    v8 = *(_DWORD *)(a1 + 104);
    *(_DWORD *)(a1 + 504) = 0;
    sub_6F772340(v8, (_DWORD *)(a1 + 680));
    sub_6F772340(v8, (_DWORD *)(a1 + 688));
    v9 = *(_BYTE *)(a1 + 292) == 0;
    *(_DWORD *)(a1 + 684) = 0;
    *(_DWORD *)(a1 + 692) = 0;
    if ( !v9 )
    {
      sub_6F773D90(v2, *(_DWORD *)(a1 + 332));
      v13 = *(_DWORD *)(a1 + 336);
      *(_DWORD *)(a1 + 332) = 0;
      sub_6F773D90(v2, v13);
      *(_DWORD *)(a1 + 336) = 0;
      *(_BYTE *)(a1 + 292) = 0;
    }
    sub_6F773D90(v2, *(_DWORD *)(a1 + 544));
    *(_DWORD *)(a1 + 544) = 0;
    *(_WORD *)(a1 + 542) = 0;
    if ( v1 )
      (*(void (__cdecl **)(int))(v1 + 52))(a1);
    sub_6F773D90(v2, *(_DWORD *)(a1 + 20));
    v10 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 20) = 0;
    sub_6F773D90(v2, v10);
    v11 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 24) = 0;
    sub_6F773D90(v2, v11);
    v12 = *(_DWORD *)(a1 + 664);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    sub_6F773D90(v2, v12);
    *(_DWORD *)(a1 + 664) = 0;
    *(_DWORD *)(a1 + 532) = 0;
  }
}
