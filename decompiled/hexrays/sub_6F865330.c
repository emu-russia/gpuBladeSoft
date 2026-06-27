int __cdecl sub_6F865330(int a1)
{
  int v1; // esi@1
  int result; // eax@10
  int v3; // edx@11
  int v4; // edx@11
  int v5; // eax@21

  v1 = *(_DWORD *)(a1 + 400);
  if ( *(_BYTE *)(v1 + 8) )
  {
    *(_BYTE *)(v1 + 8) = 0;
    (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 440))(a1, 0);
    (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 412))(a1, 2);
    (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 404))(a1, 2);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 74) && !*(_DWORD *)(a1 + 116) )
    {
      if ( *(_BYTE *)(a1 + 80) && *(_BYTE *)(a1 + 90) )
      {
        *(_DWORD *)(a1 + 440) = *(_DWORD *)(v1 + 24);
        *(_BYTE *)(v1 + 8) = 1;
      }
      else if ( *(_BYTE *)(a1 + 88) )
      {
        *(_DWORD *)(a1 + 440) = *(_DWORD *)(v1 + 20);
      }
      else
      {
        v5 = *(_DWORD *)a1;
        *(_DWORD *)(v5 + 20) = 47;
        (*(void (__cdecl **)(int))v5)(a1);
      }
    }
    (**(void (__cdecl ***)(_DWORD))(a1 + 428))(a1);
    (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 408) + 8))(a1);
    if ( !*(_BYTE *)(a1 + 65) )
    {
      if ( !*(_BYTE *)(v1 + 16) )
        (**(void (__cdecl ***)(_DWORD))(a1 + 436))(a1);
      (**(void (__cdecl ***)(_DWORD))(a1 + 432))(a1);
      if ( *(_BYTE *)(a1 + 74) )
        (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 440))(a1, *(_BYTE *)(v1 + 8));
      (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 412))(a1, *(_BYTE *)(v1 + 8) >= 1u ? 3 : 0);
      (**(void (__cdecl ***)(_DWORD, _DWORD))(a1 + 404))(a1, 0);
    }
  }
  result = *(_DWORD *)(a1 + 8);
  if ( result )
  {
    v3 = *(_DWORD *)(v1 + 12);
    *(_DWORD *)(result + 12) = v3;
    v4 = v3 - (*(_BYTE *)(v1 + 8) < 1u) + 2;
    *(_DWORD *)(result + 16) = v4;
    if ( *(_BYTE *)(a1 + 64) )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(a1 + 416) + 17) )
        *(_DWORD *)(result + 16) = v4 - (*(_BYTE *)(a1 + 90) < 1u) + 2;
    }
  }
  return result;
}
