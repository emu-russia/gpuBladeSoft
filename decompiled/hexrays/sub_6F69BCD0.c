void sub_6F69BCD0()
{
  _DWORD *v0; // eax@1
  const char *v1; // ecx@2
  int v2; // eax@6
  char v3; // [sp+8h] [bp-24h]@0

  sub_6F6898F0();
  dword_6FD40990 = 2;
  dword_6FD4098C = 13;
  dword_6FBB51DC = 1024;
  dword_6FD40980 = dword_6FBB52F4 << 10;
  dword_6FD4097C = dword_6FBB52F8 << 10;
  dword_6FBB51E0 = 1024;
  dword_6FD40988 = 1023;
  dword_6FD40984 = 1023;
  sub_6F751960();
  v0 = malloc(0xF8u);
  dword_6FBB51E8 = (int)v0;
  if ( !v0 )
  {
    v2 = off_6FB48ABC(2);
    sub_6F6898C0(v2, (int)"[GPU] Emulator: memory allocation failed.\n", v3);
    exit(1);
  }
  v1 = (const char *)dword_6FBB5020;
  v0[10] = &unk_6FD412D4;
  v0[2] = strdup(v1);
  sub_6F75F080();
  sub_6F759FF0();
  sub_6F761680();
  sub_6F75B480();
  dword_6FD40978 = sub_6F75A3B0();
  sub_6F75A5F0(dword_6FD40978, 0x100u);
  dword_6FD40974 = sub_6F7617D0();
  dword_6FD40970 = sub_6F7617D0();
  dword_6FD4096C = sub_6F7617D0();
  sub_6F732760();
  sub_6F75F0A0(dword_6FBB9548, dword_6FBB954C, dword_6FBB9550, (const char *)dword_6FBB51C4);
  sub_6F75A390();
  sub_6F7617B0();
  sub_6F75B020();
  sub_6F7295E0();
  dword_6FBB97A0 = 1024;
  *(_DWORD *)&word_6FBB979C = 343941120;
  sub_6F75A6D0(dword_6FD40978);
  dword_6FD40968 = 1;
  byte_6FD40960 = 0;
  memset(dword_6FD40560, 0, 0x400u);
  dword_6FD40964 = 0;
  memset(dword_6FD40160, 0, 0x400u);
  dword_6FD40144 = sub_6F75A3B0();
  dword_6FD40140 = sub_6F75A3B0();
  sub_6F75A5F0(dword_6FD40144, 0x100u);
  sub_6F75A5F0(dword_6FD40140, 0x200u);
  dword_6FD40120 = 0;
  dword_6FD40124 = 0;
  dword_6FD40128 = 0;
  dword_6FD4012C = 0;
  dword_6FD40130 = 0;
  dword_6FD40134 = 0;
  dword_6FD40138 = 0;
  dword_6FD4013C = 0;
  sub_6F6A8120();
  sub_6F71F120();
  sub_6F71F120();
  sub_6F7341E0();
  if ( dword_6FBB9554 && sub_6F69BB30() < 0 )
  {
    puts("[GPU] Unable to start debug server.");
    fflush(0);
  }
  dword_6F96D020 = 0;
  dword_6FD40994 = 0;
  nullsub_10();
  nullsub_10();
  nullsub_10();
  nullsub_10();
  dword_6FD412D0 = 1;
  dword_6F96D01C = 0;
  dword_6FD412CC = 0;
}
