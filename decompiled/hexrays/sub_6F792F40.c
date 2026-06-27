signed int __cdecl sub_6F792F40(int a1, int a2, int a3)
{
  int v3; // eax@1
  int v4; // esi@2
  signed int result; // eax@4
  int v6; // ebx@3
  int v7; // edi@3
  _BYTE *v8; // ebx@3
  signed int v9; // eax@3
  signed int v10; // eax@3

  v3 = *(_DWORD *)(a1 + 12);
  if ( (unsigned int)(*(_WORD *)(v3 + 22) + *(_WORD *)(v3 + 58) + 1) <= *(_DWORD *)(v3 + 4)
    || (result = sub_6F7CA4F0(v3, 1, 0)) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    if ( *(_BYTE *)(a1 + 68) )
    {
      v6 = *(_WORD *)(v4 + 2);
      v7 = *(_DWORD *)(v4 + 4) + 8 * v6;
      v8 = (_BYTE *)(*(_DWORD *)(v4 + 8) + v6);
      LOWORD(v9) = sub_6F7C9390(a2);
      *(_DWORD *)v7 = v9 >> 16;
      LOWORD(v10) = sub_6F7C9390(a3);
      *(_DWORD *)(v7 + 4) = v10 >> 16;
      *v8 = 1;
    }
    ++*(_WORD *)(v4 + 2);
    result = 0;
  }
  return result;
}
