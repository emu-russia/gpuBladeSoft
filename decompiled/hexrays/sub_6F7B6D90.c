signed int __cdecl sub_6F7B6D90(int a1, int a2)
{
  int v2; // edx@1
  signed int result; // eax@1
  unsigned int v4; // eax@2
  int v5; // ebx@2
  _DWORD *v6; // ebx@3
  _DWORD *v7; // ebx@4
  _DWORD *v8; // ebx@5
  _DWORD *v9; // eax@6

  v2 = *(_DWORD *)(a1 + 528);
  result = 6;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = *(_DWORD *)v2;
    *(_DWORD *)a2 = v4;
    *(_DWORD *)(a2 + 4) = v5;
    if ( v4 )
    {
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(v2 + 8);
      v6 = *(_DWORD **)(v2 + 92);
      *(_DWORD *)(a2 + 12) = *v6;
      *(_DWORD *)(a2 + 16) = v6[*(_BYTE *)(v2 + 88) - 1];
      if ( v4 > 1 )
      {
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v2 + 12);
        v7 = *(_DWORD **)(v2 + 104);
        *(_DWORD *)(a2 + 24) = *v7;
        *(_DWORD *)(a2 + 28) = v7[*(_BYTE *)(v2 + 100) - 1];
        if ( v4 != 2 )
        {
          *(_DWORD *)(a2 + 32) = *(_DWORD *)(v2 + 16);
          v8 = *(_DWORD **)(v2 + 116);
          *(_DWORD *)(a2 + 36) = *v8;
          *(_DWORD *)(a2 + 40) = v8[*(_BYTE *)(v2 + 112) - 1];
          if ( v4 != 3 )
          {
            *(_DWORD *)(a2 + 44) = *(_DWORD *)(v2 + 20);
            v9 = *(_DWORD **)(v2 + 128);
            *(_DWORD *)(a2 + 48) = *v9;
            *(_DWORD *)(a2 + 52) = v9[*(_BYTE *)(v2 + 124) - 1];
          }
        }
      }
    }
    result = 0;
  }
  return result;
}
