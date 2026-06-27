int (__cdecl **__cdecl sub_6F85D2A8(int a1, char a2))(int a1, int a2)
{
  int (__cdecl **result)(int, int); // eax@1
  int v3; // ebx@3
  int v4; // edi@4
  int v5; // eax@7
  int (__cdecl **v6)(int, int); // [sp+1Ch] [bp-1Ch]@1

  result = (int (__cdecl **)(int, int))(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 64);
  v6 = result;
  *(_DWORD *)(a1 + 376) = result;
  *result = sub_6F85D16C;
  if ( !*(_BYTE *)(a1 + 208) )
  {
    if ( a2 )
    {
      v5 = *(_DWORD *)a1;
      *(_DWORD *)(v5 + 20) = 3;
      result = (int (__cdecl **)(int, int))(*(int (__cdecl **)(int))v5)(a1);
    }
    else
    {
      v3 = *(_DWORD *)(a1 + 84);
      result = *(int (__cdecl ***)(int, int))(a1 + 76);
      if ( (signed int)result > 0 )
      {
        v4 = 0;
        do
        {
          result = (int (__cdecl **)(int, int))(*(int (__cdecl **)(int, signed int, int, int))(*(_DWORD *)(a1 + 4) + 8))(
                                                 a1,
                                                 1,
                                                 *(_DWORD *)(v3 + 28) * *(_DWORD *)(v3 + 36),
                                                 *(_DWORD *)(v3 + 12) * *(_DWORD *)(v3 + 40));
          v6[v4++ + 6] = (int (__cdecl *)(int, int))result;
          v3 += 88;
        }
        while ( *(_DWORD *)(a1 + 76) > v4 );
      }
    }
  }
  return result;
}
