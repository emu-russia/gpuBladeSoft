void __cdecl __noreturn sub_6F8398FF(int a1, int a2)
{
  char v2[220]; // [sp+10h] [bp-E8h]@1
  int v3; // [sp+ECh] [bp-Ch]@1

  memcpy(v2, "fixed point overflow in ", 0x18u);
  v3 = 0;
  if ( a2 )
  {
    while ( v3 <= 194 && *(_BYTE *)(v3 + a2) )
    {
      v2[v3 + 24] = *(_BYTE *)(v3 + a2);
      ++v3;
    }
  }
  v2[v3 + 24] = 0;
  sub_6F839044(a1, (int)v2);
}
