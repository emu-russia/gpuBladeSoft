int __usercall sub_6F85D5D4@<eax>(int a1@<eax>, char a2@<dl>)
{
  int v2; // esi@1
  int result; // eax@3
  int v4; // ebx@3
  int v5; // edi@4
  void (__cdecl **v6)(_DWORD); // eax@7

  v2 = a1;
  sub_6F85D394(a1, a2);
  sub_6F85D3B0(v2, 3 * *(_WORD *)(v2 + 76) + 8);
  if ( *(_DWORD *)(v2 + 68) > 0xFFFF || *(_DWORD *)(v2 + 64) > 0xFFFF )
  {
    v6 = *(void (__cdecl ***)(_DWORD))v2;
    v6[5] = (void (__cdecl *)(_DWORD))42;
    v6[6] = (void (__cdecl *)(_DWORD))0xFFFF;
    (**(void (__cdecl ***)(_DWORD))v2)(v2);
  }
  sub_6F85D350(v2, *(_DWORD *)(v2 + 72));
  sub_6F85D3B0(v2, *(_DWORD *)(v2 + 68));
  sub_6F85D3B0(v2, *(_DWORD *)(v2 + 64));
  result = sub_6F85D350(v2, *(_DWORD *)(v2 + 76));
  v4 = *(_DWORD *)(v2 + 84);
  if ( *(_DWORD *)(v2 + 76) > 0 )
  {
    v5 = 0;
    do
    {
      sub_6F85D350(v2, *(_DWORD *)v4);
      sub_6F85D350(v2, *(_BYTE *)(v4 + 12) + 16 * *(_BYTE *)(v4 + 8));
      result = sub_6F85D350(v2, *(_DWORD *)(v4 + 16));
      ++v5;
      v4 += 88;
    }
    while ( *(_DWORD *)(v2 + 76) > v5 );
  }
  return result;
}
