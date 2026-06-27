int __cdecl sub_6F791740(int a1, int a2, int a3, unsigned __int8 a4)
{
  int result; // eax@1
  int v5; // ebx@1
  int v6; // esi@2
  int v7; // edi@2
  _BYTE *v8; // esi@2
  signed int v9; // eax@2
  signed int v10; // eax@2

  result = a1;
  v5 = *(_DWORD *)(a1 + 20);
  if ( *(_BYTE *)(a1 + 68) )
  {
    v6 = *(_WORD *)(v5 + 2);
    v7 = *(_DWORD *)(v5 + 4) + 8 * v6;
    v8 = (_BYTE *)(*(_DWORD *)(v5 + 8) + v6);
    LOWORD(v9) = sub_6F7C9390(a2);
    *(_DWORD *)v7 = v9 >> 16;
    LOWORD(v10) = sub_6F7C9390(a3);
    *(_DWORD *)(v7 + 4) = v10 >> 16;
    result = 2 - (a4 >= 1u);
    *v8 = result;
  }
  ++*(_WORD *)(v5 + 2);
  return result;
}
