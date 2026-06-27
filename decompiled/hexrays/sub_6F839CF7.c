int __cdecl sub_6F839CF7(int a1, _BYTE *a2)
{
  int result; // eax@1
  int v3; // [sp+18h] [bp-8h]@1

  v3 = *(_DWORD *)(a1 + 84);
  result = *(_DWORD *)(v3 + 28);
  if ( !result )
  {
    sub_6F839081(v3 + 32, 0x40u, 0, a2);
    result = v3;
    *(_DWORD *)(v3 + 28) |= 1u;
  }
  return result;
}
