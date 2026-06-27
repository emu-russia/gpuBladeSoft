int __cdecl sub_6F79FB30(int a1, int a2)
{
  int v2; // esi@1
  unsigned int v3; // eax@2
  unsigned int v4; // edi@2
  unsigned __int32 v5; // edx@5
  int v6; // ebp@5
  unsigned int v7; // edi@11
  unsigned int v8; // edx@11
  unsigned int v9; // edi@15
  unsigned int v10; // ebx@15
  unsigned __int32 v11; // edi@15
  unsigned __int32 v12; // ebx@15
  unsigned int v13; // eax@15
  unsigned int v15; // [sp+10h] [bp-2Ch]@2

  v2 = a1 + 16;
  if ( *(_DWORD *)(a2 + 68) < (unsigned int)(a1 + 16) )
    sub_6F769150(a2, 8);
  v3 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  v4 = _byteswap_ulong(*(_DWORD *)(a1 + 12));
  v15 = v4;
  if ( v3 > *(_DWORD *)(a2 + 68) - a1 || v3 <= 0xF || v4 > (v3 - 16) / 0xC )
    sub_6F769150(a2, 8);
  v5 = 0;
  v6 = 0;
  if ( v4 )
  {
    do
    {
      v9 = *(_DWORD *)v2;
      v10 = *(_DWORD *)(v2 + 4);
      v2 += 12;
      v11 = _byteswap_ulong(v9);
      v12 = _byteswap_ulong(v10);
      v13 = _byteswap_ulong(*(_DWORD *)(v2 - 4));
      if ( v11 > v12 )
        sub_6F769150(a2, 8);
      if ( v6 && v11 <= v5 )
        sub_6F769150(a2, 8);
      if ( *(_DWORD *)(a2 + 72) )
      {
        v7 = v12 - v11;
        v8 = *(_DWORD *)(a2 + 80);
        if ( v7 > v8 || v13 >= v8 - v7 )
          sub_6F769150(a2, 16);
      }
      ++v6;
      v5 = v12;
    }
    while ( v15 != v6 );
  }
  return 0;
}
