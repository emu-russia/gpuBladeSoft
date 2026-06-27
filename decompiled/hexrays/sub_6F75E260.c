int sub_6F75E260()
{
  int v0; // ebp@1
  int *i; // ebx@1
  int v2; // edx@4

  v0 = 0;
  for ( i = dword_7025A560; ; i += 16467 )
  {
    v2 = (int)(i + 16448);
    if ( !v0 )
    {
      dword_7026A6A8 = 0;
      *i = 0;
      i[63] = 0;
      memset(
        (void *)((unsigned int)(i + 1) & 0xFFFFFFFC),
        0,
        4 * (((unsigned int)i + -((unsigned int)(i + 1) & 0xFFFFFFFC) + 256) >> 2));
      i[16448] = 0;
      i[16463] = 0;
      memset(
        (void *)((unsigned int)(i + 16449) & 0xFFFFFFFC),
        0,
        4 * ((v2 - ((unsigned int)(i + 16449) & 0xFFFFFFFC) + 64) >> 2));
      i[16464] = 0;
      i[16465] = 0;
      memset(i + 64, 0, 0x10000u);
      goto LABEL_3;
    }
    *i = 0;
    i[63] = 0;
    memset(
      (void *)((unsigned int)(i + 1) & 0xFFFFFFFC),
      0,
      4 * (((unsigned int)i + -((unsigned int)(i + 1) & 0xFFFFFFFC) + 256) >> 2));
    i[16448] = 0;
    i[16463] = 0;
    memset(
      (void *)((unsigned int)(i + 16449) & 0xFFFFFFFC),
      0,
      4 * ((v2 - ((unsigned int)(i + 16449) & 0xFFFFFFFC) + 64) >> 2));
    i[16464] = 0;
    i[16465] = 0;
    memset(i + 64, 0, 0x10000u);
    if ( v0 == 15 )
      break;
LABEL_3:
    ++v0;
  }
  return 0;
}
