void __cdecl __noreturn sub_6F839C23(int a1, _BYTE *a2)
{
  unsigned int v2; // ST14_4@5
  int v3; // [sp+18h] [bp-10h]@1

  v3 = *(_DWORD *)(a1 + 84);
  if ( v3 )
  {
    sub_6F839081(v3 + 32, 0x40u, 0, a2);
    *(_DWORD *)(v3 + 28) |= 2u;
    if ( *(_DWORD *)v3 )
    {
      if ( *(_DWORD *)(*(_DWORD *)v3 + 8) )
        longjmp(*(_DWORD *)(*(_DWORD *)v3 + 8), 1);
    }
    v2 = sub_6F839081(v3 + 32, 0x40u, 0, "bad longjmp: ");
    sub_6F839081(v3 + 32, 0x40u, v2, a2);
  }
  abort();
}
