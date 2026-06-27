int __cdecl sub_6F79E0B0(int a1, int a2)
{
  int v2; // ebx@1
  unsigned __int32 v3; // edx@1
  int result; // eax@1

  v2 = *(_DWORD *)(a1 + 16);
  v3 = a2 - _byteswap_ulong(*(_DWORD *)(v2 + 12));
  result = 0;
  if ( _byteswap_ulong(*(_DWORD *)(v2 + 16)) > v3 )
    result = _byteswap_ushort(*(_WORD *)(v2 + 2 * v3 + 20));
  return result;
}
