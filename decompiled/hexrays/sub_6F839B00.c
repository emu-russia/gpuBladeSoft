void __cdecl __noreturn sub_6F839B00(int a1, int a2)
{
  const char *v2; // eax@2
  int *v3; // [sp+18h] [bp-20h]@4
  signed int v4; // [sp+1Ch] [bp-1Ch]@4
  int v5; // [sp+20h] [bp-18h]@4
  int v6; // [sp+24h] [bp-14h]@4
  int v7; // [sp+28h] [bp-10h]@4
  int savedregs; // [sp+38h] [bp+0h]@4

  if ( a2 )
    LOBYTE(v2) = a2;
  else
    v2 = "undefined";
  sub_6F839014((int)&iob + 64, (int)"libpng error: %s", (char)v2);
  sub_6F839014((int)&iob + 64, (int)"\n", v7);
  v6 = 1;
  v5 = a1;
  v4 = 1870895966;
  v3 = &savedregs;
  if ( a1 && *(_DWORD *)(a1 + 64) )
  {
    if ( *(_DWORD *)(a1 + 68) )
      (*(void (__cdecl **)(_DWORD, int))(a1 + 64))(*(_DWORD *)(a1 + 68), a2);
  }
  ExitProcess(0);
}
