unsigned __int32 __cdecl sub_6F79E020(int a1, unsigned int *a2)
{
  unsigned int v2; // ebx@1
  int v3; // ecx@1
  unsigned int v4; // esi@1
  int v5; // ecx@1
  unsigned __int32 v6; // esi@1
  unsigned int v7; // edx@2
  unsigned int v8; // ebp@2
  unsigned __int32 v9; // edx@2
  unsigned __int32 v10; // ebp@2
  unsigned __int32 v11; // eax@2
  unsigned __int32 result; // eax@5

  v2 = *a2 + 1;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_DWORD *)(v3 + 8204);
  v5 = v3 + 8208;
  v6 = _byteswap_ulong(v4);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)v5;
      v8 = *(_DWORD *)(v5 + 4);
      v5 += 12;
      v9 = _byteswap_ulong(v7);
      v10 = _byteswap_ulong(v8);
      v11 = _byteswap_ulong(*(_DWORD *)(v5 - 4));
      if ( v2 < v9 )
        v2 = v9;
      if ( v2 <= v10 )
      {
        result = v2 - v9 + v11;
        if ( result )
          break;
      }
      if ( !--v6 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    result = 0;
    v2 = 0;
  }
  *a2 = v2;
  return result;
}
