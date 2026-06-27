signed int __cdecl sub_6F7938A0(int a1, int a2, int a3)
{
  signed int result; // eax@1
  int v4; // esi@2
  int v5; // eax@4
  int v6; // edx@5
  int v7; // esi@9
  int v8; // ebx@10
  int v9; // edi@10
  _BYTE *v10; // ebx@10
  signed int v11; // eax@10
  signed int v12; // eax@10

  result = 0;
  if ( *(_DWORD *)(a1 + 64) != 3 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 64) = 3;
    result = 3;
    if ( v4 )
    {
      if ( *(_BYTE *)(a1 + 68) )
      {
        v5 = *(_DWORD *)(a1 + 12);
        if ( (unsigned int)(*(_WORD *)(v5 + 20) + *(_WORD *)(v5 + 56) + 1) > *(_DWORD *)(v5 + 8) )
        {
          result = sub_6F7CA4F0(v5, 0, 1);
          if ( result )
            return result;
          v5 = *(_DWORD *)(a1 + 12);
        }
        v6 = *(_WORD *)v4;
        if ( (signed __int16)v6 > 0 )
        {
          *(_WORD *)(*(_DWORD *)(v4 + 12) + 2 * v6 - 2) = *(_WORD *)(v4 + 2) - 1;
          LOWORD(v6) = *(_WORD *)v4;
        }
        *(_WORD *)v4 = v6 + 1;
      }
      else
      {
        ++*(_WORD *)v4;
        v5 = *(_DWORD *)(a1 + 12);
      }
      if ( (unsigned int)(*(_WORD *)(v5 + 22) + *(_WORD *)(v5 + 58) + 1) <= *(_DWORD *)(v5 + 4)
        || (result = sub_6F7CA4F0(v5, 1, 0)) == 0 )
      {
        v7 = *(_DWORD *)(a1 + 20);
        if ( *(_BYTE *)(a1 + 68) )
        {
          v8 = *(_WORD *)(v7 + 2);
          v9 = *(_DWORD *)(v7 + 4) + 8 * v8;
          v10 = (_BYTE *)(*(_DWORD *)(v7 + 8) + v8);
          LOWORD(v11) = sub_6F7C9390(a2);
          *(_DWORD *)v9 = v11 >> 16;
          LOWORD(v12) = sub_6F7C9390(a3);
          *(_DWORD *)(v9 + 4) = v12 >> 16;
          *v10 = 1;
        }
        ++*(_WORD *)(v7 + 2);
        result = 0;
      }
    }
  }
  return result;
}
