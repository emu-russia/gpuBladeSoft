int __thiscall sub_6F8C33B0(unsigned int this)
{
  int v1; // eax@1
  unsigned int v2; // ebp@1
  char *v3; // edx@3
  int (__stdcall *v4)(const void *, int, void *); // eax@3
  int result; // eax@5
  char v6[256]; // [sp+20h] [bp-11Ch]@2
  char v7; // [sp+120h] [bp-1Ch]@8

  v1 = 0;
  v2 = this;
  do
  {
    v6[v1] = v1;
    ++v1;
  }
  while ( v1 != 256 );
  v3 = (char *)(this + 29);
  v4 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)this + 28);
  if ( v4 == sub_6F8C3630 )
  {
    *(_DWORD *)(this + 29) = *(_DWORD *)v6;
    *(_DWORD *)(this + 281) = *(_DWORD *)&v6[252];
    qmemcpy(
      (void *)((this + 33) & 0xFFFFFFFC),
      (const void *)(v6 - &v3[-((this + 33) & 0xFFFFFFFC)]),
      4 * ((unsigned int)&v3[-((this + 33) & 0xFFFFFFFC) + 256] >> 2));
  }
  else
  {
    v4(v6, (int)&v7, (void *)(this + 29));
    v3 = (char *)(v2 + 29);
  }
  *(_BYTE *)(v2 + 28) = 1;
  result = memcmp(v6, v3, 0x100u);
  if ( result )
    *(_BYTE *)(v2 + 28) = 2;
  return result;
}
