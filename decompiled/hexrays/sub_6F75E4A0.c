int sub_6F75E4A0()
{
  int result; // eax@1
  int *v1; // edx@1
  int v2; // ecx@2
  void *v3; // edi@2

  result = 0;
  v1 = (int *)&unk_7026A6AC;
  memset(dword_7025A560, 0, 0x100u);
  dword_7026A660 = 0;
  dword_7026A69C[0] = 0;
  memset(
    (void *)((unsigned int)&unk_7026A664 & 0xFFFFFFFC),
    0,
    4 * (((unsigned int)&dword_7026A6A0 - ((unsigned int)&unk_7026A664 & 0xFFFFFFFC)) >> 2));
  dword_7026A6A0 = 0;
  do
  {
    memset(v1, 0, 0x100u);
    v1[16448] = 0;
    v1[16463] = 0;
    memset(
      (void *)((unsigned int)(v1 + 16449) & 0xFFFFFFFC),
      0,
      4 * (((unsigned int)v1 + -((unsigned int)(v1 + 16449) & 0xFFFFFFFC) + 65856) >> 2));
    v1[16464] = 0;
    memset(v1 + 16467, 0, 0x100u);
    v1[32915] = 0;
    v1[32930] = 0;
    memset(
      (void *)((unsigned int)(v1 + 32916) & 0xFFFFFFFC),
      0,
      4 * (((unsigned int)v1 + -((unsigned int)(v1 + 32916) & 0xFFFFFFFC) + 131724) >> 2));
    v1[32931] = 0;
    memset(v1 + 32934, 0, 0x100u);
    v1[49382] = 0;
    v1[49397] = 0;
    memset(
      (void *)((unsigned int)(v1 + 49383) & 0xFFFFFFFC),
      0,
      4 * (((unsigned int)v1 + -((unsigned int)(v1 + 49383) & 0xFFFFFFFC) + 197592) >> 2));
    v1[49398] = 0;
    memset(v1 + 49401, 0, 0x100u);
    v1[65849] = 0;
    v1[65864] = 0;
    memset(
      (void *)((unsigned int)(v1 + 65850) & 0xFFFFFFFC),
      0,
      4 * (((unsigned int)v1 + -((unsigned int)(v1 + 65850) & 0xFFFFFFFC) + 263460) >> 2));
    v1[65865] = 0;
    memset(v1 + 65868, 0, 0x100u);
    v2 = (int)(v1 + 82316);
    v1[82316] = 0;
    v3 = (void *)((unsigned int)(v1 + 82317) & 0xFFFFFFFC);
    v1 += 82335;
    *(v1 - 4) = 0;
    memset(v3, 0, 4 * ((unsigned int)(v2 - (_DWORD)v3 + 64) >> 2));
    *(v1 - 3) = 0;
  }
  while ( v1 != &dword_7035BA20 );
  return result;
}
