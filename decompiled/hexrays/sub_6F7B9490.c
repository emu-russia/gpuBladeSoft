int __cdecl sub_6F7B9490(int a1, int a2, int a3, int a4)
{
  int v4; // eax@1
  unsigned int v5; // edx@2
  int v6; // eax@2
  unsigned int v7; // ebx@2
  unsigned int v8; // ecx@2
  int v9; // eax@6
  unsigned int v10; // edi@6
  int result; // eax@9
  int v12; // edx@10
  int v13; // eax@10

  v4 = *(_DWORD *)(a1 + 492);
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  if ( v4
    && (v5 = *(_DWORD *)(v4 + 36),
        v6 = 16 * (*(_DWORD *)(v4 + 40) + 0xFFFFFFF),
        v7 = a3 | (a2 << 16),
        v8 = v6 + v5,
        !__CFADD__(v6, v5)) )
  {
    while ( 1 )
    {
      v9 = v5 + 16 * ((signed int)(((unsigned int)v6 >> 31) + (v6 >> 4)) >> 1);
      v10 = *(_DWORD *)(v9 + 4) | (*(_DWORD *)v9 << 16);
      if ( v7 == v10 )
        break;
      if ( v7 > v10 )
      {
        v5 = v9 + 16;
        if ( v8 < v9 + 16 )
          goto LABEL_9;
      }
      else
      {
        v8 = v9 - 16;
        if ( v9 - 16 < v5 )
          goto LABEL_9;
      }
      v6 = v8 - v5;
    }
    v12 = *(_DWORD *)(v9 + 8);
    v13 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)a4 = v12;
    *(_DWORD *)(a4 + 4) = v13;
    result = 0;
  }
  else
  {
LABEL_9:
    result = 0;
  }
  return result;
}
