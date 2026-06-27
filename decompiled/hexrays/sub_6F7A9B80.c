unsigned int __cdecl sub_6F7A9B80(int a1, unsigned int a2, int *a3)
{
  unsigned int v3; // ecx@1
  int v4; // esi@2
  unsigned int v5; // ebx@3
  unsigned int v6; // edi@3
  unsigned int result; // eax@3
  unsigned int v8; // ecx@3
  unsigned int v9; // edx@5
  int v10; // edx@7
  unsigned int v11; // ebx@9
  unsigned int v12; // edi@9
  unsigned __int16 v13; // ax@9
  int v14; // ecx@9
  bool v15; // zf@10

  v3 = *(_DWORD *)(a1 + 696);
  if ( v3 <= a2 )
  {
    v10 = 0;
    result = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 700);
    if ( *(_WORD *)(a1 + 210) )
    {
      v5 = v4 + 4 * a2;
      v6 = v4 + 4 * v3;
      result = _byteswap_ulong(*(_DWORD *)v5);
      v8 = result;
      if ( v6 >= v5 + 8 )
        v8 = _byteswap_ulong(*(_DWORD *)(v5 + 4));
      v9 = *(_DWORD *)(a1 + 668);
      if ( result > v9 )
      {
LABEL_6:
        *a3 = 0;
        return 0;
      }
    }
    else
    {
      v11 = v4 + 2 * a2;
      v12 = v4 + 2 * v3;
      v13 = _byteswap_ushort(*(_WORD *)v11);
      v14 = v13;
      if ( v12 >= v11 + 4 )
      {
        v15 = (*(_BYTE *)(v11 + 3) | (*(_BYTE *)(v11 + 2) << 8)) == 0;
        v14 = _byteswap_ushort(*(_WORD *)(v11 + 2));
      }
      v9 = *(_DWORD *)(a1 + 668);
      result = 2 * v13;
      v8 = 2 * v14;
      if ( result > v9 )
        goto LABEL_6;
    }
    if ( v8 <= v9 && result <= v8 )
      v10 = v8 - result;
    else
      v10 = v9 - result;
  }
  *a3 = v10;
  return result;
}
