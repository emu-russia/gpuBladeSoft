int sub_6F75F450()
{
  int result; // eax@1
  int *v1; // esi@4
  int v2; // eax@7
  int v3; // ebx@7
  int v4; // esi@9
  int v5; // esi@11
  int v6; // esi@13

  result = dword_7035D4C4;
  if ( dword_7035D4C4 )
  {
    if ( dword_7035CCC4[0] )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_7035CCC4[0] + 32))(dword_7035CCC4[0]);
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_7035CCC4[0] + 8))(dword_7035CCC4[0]);
      dword_7035CCC4[0] = 0;
    }
    v1 = &dword_7035CD4C;
    do
    {
      if ( *v1 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)*v1 + 32))(*v1);
        (*(void (__stdcall **)(int))(*(_DWORD *)*v1 + 8))(*v1);
        *v1 = 0;
      }
      v2 = v1[34];
      v3 = (int)(v1 + 34);
      if ( v2 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 32))(v1[34]);
        (*(void (__stdcall **)(int))(*(_DWORD *)v1[34] + 8))(v1[34]);
        v1[34] = 0;
      }
      v4 = v1[68];
      if ( v4 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 32))(*(_DWORD *)(v3 + 136));
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 136) + 8))(*(_DWORD *)(v3 + 136));
        *(_DWORD *)(v3 + 136) = 0;
      }
      v5 = *(_DWORD *)(v3 + 272);
      if ( v5 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 32))(*(_DWORD *)(v3 + 272));
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 272) + 8))(*(_DWORD *)(v3 + 272));
        *(_DWORD *)(v3 + 272) = 0;
      }
      v6 = *(_DWORD *)(v3 + 408);
      if ( v6 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 32))(*(_DWORD *)(v3 + 408));
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 408) + 8))(*(_DWORD *)(v3 + 408));
        *(_DWORD *)(v3 + 408) = 0;
      }
      v1 = (int *)(v3 + 544);
    }
    while ( (_UNKNOWN *)(v3 + 544) != &unk_7035D544 );
    result = (*(int (__stdcall **)(int))(*(_DWORD *)dword_7035D4C4 + 8))(dword_7035D4C4);
    dword_7035D4C4 = 0;
  }
  return result;
}
