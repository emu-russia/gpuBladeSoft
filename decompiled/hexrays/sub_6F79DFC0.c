unsigned __int32 __cdecl sub_6F79DFC0(int a1, unsigned __int32 a2)
{
  int v2; // edx@1
  unsigned __int32 v3; // ebx@1
  int v4; // eax@2
  unsigned int v5; // edx@5
  unsigned int v6; // ecx@5
  unsigned __int32 v7; // edx@5
  unsigned __int32 v8; // ecx@5
  unsigned __int32 v9; // edi@5

  v2 = *(_DWORD *)(a1 + 16);
  v3 = _byteswap_ulong(*(_DWORD *)(v2 + 8204));
  if ( v3 )
  {
    v4 = v2 + 8208;
    do
    {
      v5 = *(_DWORD *)v4;
      v6 = *(_DWORD *)(v4 + 4);
      v4 += 12;
      v7 = _byteswap_ulong(v5);
      v8 = _byteswap_ulong(v6);
      v9 = _byteswap_ulong(*(_DWORD *)(v4 - 4));
      if ( v7 > a2 )
        break;
      if ( v8 >= a2 )
        return v9 + a2 - v7;
      --v3;
    }
    while ( v3 );
  }
  return 0;
}
