int __cdecl sub_6F85CC20(int a1)
{
  int v1; // eax@1
  int v2; // edx@3
  int i; // eax@4
  unsigned int v4; // edx@5
  unsigned int v5; // esi@6
  int v6; // eax@8
  int v7; // eax@11
  int v9; // eax@15

  v1 = *(_DWORD *)(a1 + 20);
  if ( (unsigned int)(v1 - 101) <= 1 )
  {
    if ( *(_DWORD *)(a1 + 244) < *(_DWORD *)(a1 + 32) )
    {
      v9 = *(_DWORD *)a1;
      *(_DWORD *)(v9 + 20) = 69;
      (*(void (__cdecl **)(int))v9)(a1);
    }
    goto LABEL_12;
  }
  if ( v1 != 103 )
  {
    v2 = *(_DWORD *)a1;
    *(_DWORD *)(v2 + 20) = 21;
    *(_DWORD *)(v2 + 24) = v1;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  for ( i = *(_DWORD *)(a1 + 372); !*(_BYTE *)(i + 13); i = *(_DWORD *)(a1 + 372) )
  {
    (*(void (__cdecl **)(int))i)(a1);
    v4 = *(_DWORD *)(a1 + 268);
    if ( v4 )
    {
      v5 = 0;
      do
      {
        while ( 1 )
        {
          v6 = *(_DWORD *)(a1 + 8);
          if ( v6 )
          {
            *(_DWORD *)(v6 + 4) = v5;
            *(_DWORD *)(v6 + 8) = v4;
            (*(void (__cdecl **)(int))v6)(a1);
          }
          if ( !(unsigned __int8)(*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)(a1 + 384) + 4))(a1, 0) )
            break;
          ++v5;
          v4 = *(_DWORD *)(a1 + 268);
          if ( v4 <= v5 )
            goto LABEL_12;
        }
        v7 = *(_DWORD *)a1;
        *(_DWORD *)(v7 + 20) = 25;
        (*(void (__cdecl **)(int))v7)(a1);
        ++v5;
        v4 = *(_DWORD *)(a1 + 268);
      }
      while ( v4 > v5 );
    }
LABEL_12:
    (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 372) + 8))(a1);
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)(a1 + 388) + 12))(a1);
  (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 24) + 16))(a1);
  return sub_6F85F3E0(a1);
}
