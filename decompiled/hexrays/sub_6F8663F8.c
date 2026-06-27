int __cdecl sub_6F8663F8(int a1, char a2)
{
  int result; // eax@1
  int v3; // esi@1
  signed int v4; // edi@2
  int (__cdecl *v5)(int, signed int, _DWORD, int, int, signed int); // ST2C_4@5
  int v6; // eax@5

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 28);
  v3 = result;
  *(_DWORD *)(a1 + 412) = result;
  *(_DWORD *)result = sub_6F8660D8;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  if ( *(_BYTE *)(a1 + 74) )
  {
    v4 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(result + 16) = v4;
    if ( a2 )
    {
      v5 = *(int (__cdecl **)(int, signed int, _DWORD, int, int, signed int))(*(_DWORD *)(a1 + 4) + 16);
      v6 = sub_6F868CD8(*(_DWORD *)(a1 + 96), v4);
      result = v5(a1, 1, 0, *(_DWORD *)(a1 + 92) * *(_DWORD *)(a1 + 100), v6, v4);
      *(_DWORD *)(v3 + 8) = result;
    }
    else
    {
      result = (*(int (__cdecl **)(int, signed int, int, signed int))(*(_DWORD *)(a1 + 4) + 8))(
                 a1,
                 1,
                 *(_DWORD *)(a1 + 92) * *(_DWORD *)(a1 + 100),
                 v4);
      *(_DWORD *)(v3 + 12) = result;
    }
  }
  return result;
}
