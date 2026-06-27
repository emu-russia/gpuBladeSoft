signed int __cdecl sub_6F7B93A0(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // edi@1
  signed int result; // eax@1
  unsigned int v6; // eax@2
  unsigned int v7; // ebx@2
  int v8; // esi@5
  int v9; // edx@6
  int v10; // ecx@10

  v4 = *(_DWORD *)(a1 + 492);
  result = 6;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 32);
    v7 = 0;
    if ( !v6 )
      return 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v4 + 28) + 20 * v7;
        if ( *(_DWORD *)v8 == a3 )
          break;
LABEL_4:
        if ( ++v7 >= v6 )
          return 0;
      }
      v9 = *(_DWORD *)(v8 + 4);
      if ( v9 <= a2 )
      {
        v10 = *(_DWORD *)(v8 + 12);
        if ( a2 <= v10 )
        {
          *a4 = *(_DWORD *)(v8 + 8) + sub_6F7C9420(a2 - v9, *(_DWORD *)(v8 + 16) - *(_DWORD *)(v8 + 8), v10 - v9);
          v6 = *(_DWORD *)(v4 + 32);
        }
        else
        {
          *a4 = *(_DWORD *)(v8 + 16);
        }
        goto LABEL_4;
      }
      ++v7;
      *a4 = *(_DWORD *)(v8 + 8);
      if ( v7 >= v6 )
        return 0;
    }
  }
  return result;
}
