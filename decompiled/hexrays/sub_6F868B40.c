int __cdecl sub_6F868B40(int a1)
{
  int v1; // eax@2
  int v2; // eax@3
  int v3; // edi@3
  int v4; // ebx@3
  signed int v5; // ebx@7
  int v6; // eax@9
  int result; // eax@10
  int v8; // eax@14
  int v9; // [sp+1Ch] [bp-1Ch]@1

  v9 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 44);
  *(_DWORD *)(a1 + 440) = v9;
  *(_DWORD *)v9 = sub_6F867968;
  *(_DWORD *)(v9 + 12) = sub_6F867954;
  *(_DWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  if ( *(_DWORD *)(a1 + 100) != 3 )
  {
    v1 = *(_DWORD *)a1;
    *(_DWORD *)(v1 + 20) = 48;
    (*(void (__cdecl **)(int))v1)(a1);
  }
  v2 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 128);
  *(_DWORD *)(v9 + 24) = v2;
  v3 = v2;
  v4 = 0;
  while ( 1 )
  {
    *(_DWORD *)(v3 + v4) = (*(int (__cdecl **)(int, signed int, signed int))(*(_DWORD *)(a1 + 4) + 4))(a1, 1, 4096);
    v4 += 4;
    if ( v4 == 128 )
      break;
    v3 = *(_DWORD *)(v9 + 24);
  }
  *(_BYTE *)(v9 + 28) = 1;
  if ( !*(_BYTE *)(a1 + 90) )
  {
    *(_DWORD *)(v9 + 16) = 0;
    result = *(_DWORD *)(a1 + 76);
    if ( !result )
      return result;
LABEL_13:
    *(_DWORD *)(a1 + 76) = 2;
    *(_DWORD *)(v9 + 32) = (*(int (__cdecl **)(int, signed int, int))(*(_DWORD *)(a1 + 4) + 4))(
                             a1,
                             1,
                             6 * *(_DWORD *)(a1 + 92) + 12);
    return sub_6F8678AC(a1);
  }
  v5 = *(_DWORD *)(a1 + 84);
  if ( v5 <= 7 )
  {
    v8 = *(_DWORD *)a1;
    *(_DWORD *)(v8 + 20) = 58;
    *(_DWORD *)(v8 + 24) = 8;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  else if ( v5 > 256 )
  {
    v6 = *(_DWORD *)a1;
    *(_DWORD *)(v6 + 20) = 59;
    *(_DWORD *)(v6 + 24) = 256;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  *(_DWORD *)(v9 + 16) = (*(int (__cdecl **)(int, signed int, signed int, signed int))(*(_DWORD *)(a1 + 4) + 8))(
                           a1,
                           1,
                           v5,
                           3);
  *(_DWORD *)(v9 + 20) = v5;
  result = *(_DWORD *)(a1 + 76);
  if ( result )
    goto LABEL_13;
  return result;
}
