void __cdecl sub_6F7CC0B0(int a1)
{
  int v1; // ebx@1
  int v2; // eax@2
  int v3; // ebp@2
  void (__cdecl *v4)(_DWORD, int); // edx@3
  int v5; // esi@4
  int v6; // eax@5
  int (__cdecl *v7)(_DWORD, _DWORD, _DWORD); // edx@9
  int v8; // eax@9
  int v9; // eax@10

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 40);
    v3 = *(_DWORD *)(a1 + 28);
    if ( v2 )
    {
      v4 = *(void (__cdecl **)(_DWORD, int))(v1 + 48);
      if ( v4 )
      {
        v5 = *(_DWORD *)(v2 + 20);
        if ( v5 )
        {
          v6 = *(_DWORD *)v5;
          if ( (unsigned int)(*(_DWORD *)v5 - 4) <= 1 )
          {
            v4(*(_DWORD *)(v1 + 52), *(_DWORD *)(v5 + 12));
            v6 = *(_DWORD *)v5;
          }
          if ( v6 == 6 )
            (*(void (__cdecl **)(_DWORD, _DWORD))(v1 + 48))(*(_DWORD *)(v1 + 52), *(_DWORD *)(v5 + 4));
          v7 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD))(v5 + 56);
          v8 = *(_DWORD *)(v5 + 40);
          *(_DWORD *)v5 = 0;
          *(_DWORD *)(v5 + 28) = 0;
          *(_DWORD *)(v5 + 32) = 0;
          *(_DWORD *)(v5 + 52) = v8;
          *(_DWORD *)(v5 + 48) = v8;
          if ( v7 )
          {
            v9 = v7(0, 0, 0);
            *(_DWORD *)(v5 + 60) = v9;
            *(_DWORD *)(v1 + 60) = v9;
            v8 = *(_DWORD *)(v5 + 40);
          }
          (*(void (__cdecl **)(_DWORD, int))(v1 + 48))(*(_DWORD *)(v1 + 52), v8);
          (*(void (__cdecl **)(_DWORD, _DWORD))(v1 + 48))(*(_DWORD *)(v1 + 52), *(_DWORD *)(v5 + 36));
          (*(void (__cdecl **)(_DWORD, int))(v1 + 48))(*(_DWORD *)(v1 + 52), v5);
          v4 = *(void (__cdecl **)(_DWORD, int))(v1 + 48);
          v2 = *(_DWORD *)(v1 + 40);
        }
        v4(*(_DWORD *)(v1 + 52), v2);
        *(_DWORD *)(v1 + 40) = 0;
      }
    }
    *(_DWORD *)(v1 + 44) = 0;
    *(_DWORD *)(v1 + 48) = 0;
    *(_DWORD *)(v1 + 52) = 0;
    *(_DWORD *)(v1 + 12) = 0;
    *(_DWORD *)(v1 + 24) = 0;
    *(_DWORD *)(v1 + 16) = 0;
    *(_DWORD *)(v1 + 28) = 0;
    *(_DWORD *)(v1 + 8) = 0;
    *(_DWORD *)v1 = 0;
    *(_DWORD *)(v1 + 4) = 0;
    sub_6F773D90(v3, v1);
    *(_DWORD *)(a1 + 12) = 0;
  }
}
