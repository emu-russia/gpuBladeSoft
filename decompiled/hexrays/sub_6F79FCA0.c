int __cdecl sub_6F79FCA0(int a1, int a2)
{
  int v2; // ebx@1
  unsigned int v3; // eax@2
  unsigned int v4; // edi@2
  unsigned __int32 v5; // edx@5
  int v6; // ebp@5
  unsigned int v7; // edi@13
  unsigned int v8; // esi@13
  unsigned __int32 v9; // edi@13
  unsigned __int32 v10; // esi@13
  unsigned __int32 v11; // eax@13
  unsigned int v13; // [sp+10h] [bp-2Ch]@2

  v2 = a1 + 16;
  if ( *(_DWORD *)(a2 + 68) < (unsigned int)(a1 + 16) )
    sub_6F769150(a2, 8);
  v3 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  v4 = _byteswap_ulong(*(_DWORD *)(a1 + 12));
  v13 = v4;
  if ( v3 > *(_DWORD *)(a2 + 68) - a1 || v3 <= 0xF || v4 > (v3 - 16) / 0xC )
    sub_6F769150(a2, 8);
  v5 = 0;
  v6 = 0;
  if ( v4 )
  {
    do
    {
      v7 = *(_DWORD *)v2;
      v8 = *(_DWORD *)(v2 + 4);
      v2 += 12;
      v9 = _byteswap_ulong(v7);
      v10 = _byteswap_ulong(v8);
      v11 = _byteswap_ulong(*(_DWORD *)(v2 - 4));
      if ( v9 > v10 )
        sub_6F769150(a2, 8);
      if ( v6 && v9 <= v5 )
        sub_6F769150(a2, 8);
      if ( *(_DWORD *)(a2 + 72) && v11 >= *(_DWORD *)(a2 + 80) )
        sub_6F769150(a2, 16);
      ++v6;
      v5 = v10;
    }
    while ( v13 != v6 );
  }
  return 0;
}
