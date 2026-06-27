int sub_6F75B000()
{
  int result; // eax@1
  int *v1; // esi@4
  int v2; // eax@7
  int v3; // ebx@7
  int v4; // esi@9
  int v5; // esi@11
  int v6; // esi@13

  nullsub_7();
  sub_6F75F450();
  result = dword_7036F388;
  if ( dword_7036F388 )
  {
    if ( dword_7036E7C4[0] )
    {
      (*(void (__cdecl **)(int))(*(_DWORD *)dword_7036E7C4[0] + 32))(dword_7036E7C4[0]);
      (*(void (__cdecl **)(int))(*(_DWORD *)dword_7036E7C4[0] + 8))(dword_7036E7C4[0]);
      dword_7036E7C4[0] = 0;
    }
    v1 = &dword_7036E88C;
    do
    {
      if ( *v1 )
      {
        (*(void (__cdecl **)(int))(*(_DWORD *)*v1 + 32))(*v1);
        (*(void (__cdecl **)(int))(*(_DWORD *)*v1 + 8))(*v1);
        *v1 = 0;
      }
      v2 = v1[50];
      v3 = (int)(v1 + 50);
      if ( v2 )
      {
        (*(void (__cdecl **)(int))(*(_DWORD *)v2 + 32))(v1[50]);
        (*(void (__cdecl **)(int))(*(_DWORD *)v1[50] + 8))(v1[50]);
        v1[50] = 0;
      }
      v4 = v1[100];
      if ( v4 )
      {
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v4 + 32))(*(_DWORD *)(v3 + 200));
        (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v3 + 200) + 8))(*(_DWORD *)(v3 + 200));
        *(_DWORD *)(v3 + 200) = 0;
      }
      v5 = *(_DWORD *)(v3 + 400);
      if ( v5 )
      {
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v5 + 32))(*(_DWORD *)(v3 + 400));
        (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v3 + 400) + 8))(*(_DWORD *)(v3 + 400));
        *(_DWORD *)(v3 + 400) = 0;
      }
      v6 = *(_DWORD *)(v3 + 600);
      if ( v6 )
      {
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v6 + 32))(*(_DWORD *)(v3 + 600));
        (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v3 + 600) + 8))(*(_DWORD *)(v3 + 600));
        *(_DWORD *)(v3 + 600) = 0;
      }
      v1 = (int *)(v3 + 800);
    }
    while ( (int *)(v3 + 800) != &dword_7036F444 );
    result = (*(int (__cdecl **)(int))(*(_DWORD *)dword_7036F388 + 8))(dword_7036F388);
    dword_7036F388 = 0;
  }
  return result;
}
