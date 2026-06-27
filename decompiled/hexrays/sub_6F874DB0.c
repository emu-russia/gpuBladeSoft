int (__cdecl *__cdecl sub_6F874DB0(int a1, char a2))(int a1, int a2)
{
  signed int v2; // ecx@4
  int v3; // edi@6
  int v4; // eax@6
  int v5; // edx@6
  int v6; // esi@6
  int v7; // ST28_4@8
  int v8; // ecx@8
  int v9; // eax@8
  int (__cdecl *result)(int, int); // eax@10
  int v11; // edi@12
  int v12; // ST08_4@13
  int v13; // eax@2
  int v14; // eax@5
  signed int v15; // [sp+18h] [bp-30h]@6
  int (__cdecl **v16)(int, int); // [sp+24h] [bp-24h]@1
  int v17; // [sp+2Ch] [bp-1Ch]@7

  v16 = (int (__cdecl **)(int, int))(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 80);
  *(_DWORD *)(a1 + 404) = v16;
  *v16 = sub_6F874800;
  if ( a2 )
  {
    v13 = *(_DWORD *)a1;
    *(_DWORD *)(v13 + 20) = 3;
    (*(void (__cdecl **)(int))v13)(a1);
  }
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 432) + 8) )
  {
    v2 = *(_DWORD *)(a1 + 284);
    if ( v2 <= 1 )
    {
      v14 = *(_DWORD *)a1;
      *(_DWORD *)(v14 + 20) = 48;
      (*(void (__cdecl **)(int))v14)(a1);
      v2 = *(_DWORD *)(a1 + 284);
    }
    v3 = *(_DWORD *)(a1 + 404);
    v15 = v2;
    v4 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 8 * *(_DWORD *)(a1 + 36));
    *(_DWORD *)(v3 + 56) = v4;
    v5 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(v3 + 60) = v4 + 4 * v5;
    v6 = *(_DWORD *)(a1 + 196);
    if ( v5 > 0 )
    {
      v17 = 0;
      do
      {
        v7 = *(_DWORD *)(v6 + 12) * *(_DWORD *)(v6 + 40) / *(_DWORD *)(a1 + 284);
        v8 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 4 * v7 * 2 * (v15 + 4)) + 4 * v7;
        v9 = 4 * v17;
        *(_DWORD *)(*(_DWORD *)(v3 + 56) + v9) = v8;
        *(_DWORD *)(*(_DWORD *)(v3 + 60) + v9) = v8 + 4 * v7 * (v15 + 4);
        ++v17;
        v6 += 88;
        v5 = *(_DWORD *)(a1 + 36);
      }
      while ( v17 < v5 );
      v6 = *(_DWORD *)(a1 + 196);
    }
    result = (int (__cdecl *)(int, int))(*(_DWORD *)(a1 + 284) + 2);
  }
  else
  {
    result = *(int (__cdecl **)(int, int))(a1 + 284);
    v6 = *(_DWORD *)(a1 + 196);
    v5 = *(_DWORD *)(a1 + 36);
  }
  if ( v5 > 0 )
  {
    v11 = 0;
    do
    {
      v12 = *(_DWORD *)(v6 + 28) * *(_DWORD *)(v6 + 36);
      result = (int (__cdecl *)(int, int))(*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 8))(
                                            *(_DWORD *)(a1 + 4),
                                            *(_DWORD *)(v6 + 12) * *(_DWORD *)(v6 + 40) % *(_DWORD *)(a1 + 284));
      v16[v11++ + 2] = result;
      v6 += 88;
    }
    while ( *(_DWORD *)(a1 + 36) > v11 );
  }
  return result;
}
