unsigned int __cdecl sub_6F79E0F0(int a1, unsigned int *a2)
{
  int v2; // ebx@1
  unsigned int v3; // edx@1
  unsigned int result; // eax@1
  unsigned __int32 v5; // esi@1
  unsigned __int32 v6; // edi@3
  unsigned __int16 *v7; // ebp@3
  unsigned __int32 v8; // ebx@4
  int v9; // esi@5
  int v10; // esi@5

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *a2 + 1;
  result = _byteswap_ulong(*(_DWORD *)(v2 + 12));
  v5 = _byteswap_ulong(*(_DWORD *)(v2 + 16));
  if ( v3 < result )
    v3 = result;
  v6 = v3 - result;
  v7 = (unsigned __int16 *)(v2 + 2 * (v3 - result) + 20);
  if ( v5 <= v3 - result )
  {
LABEL_9:
    *a2 = v3;
    return 0;
  }
  v8 = v2 + 2 * (v3 - result) + 22;
  LOWORD(result) = _byteswap_ushort(*v7);
  if ( !(_WORD)result )
  {
    v9 = v3++ + v5;
    v10 = v9 - v6;
    while ( v3 != v10 )
    {
      v8 += 2;
      LOWORD(result) = *(_BYTE *)(v8 - 1) | (unsigned __int16)(*(_BYTE *)(v8 - 2) << 8);
      if ( (_WORD)result )
        goto LABEL_10;
      ++v3;
    }
    goto LABEL_9;
  }
LABEL_10:
  *a2 = v3;
  return (unsigned __int16)result;
}
