int __cdecl sub_6F72E430(int a2, int a3, int a4, const char *a5, char a6)
{
  unsigned int v5; // eax@1
  void *v6; // esp@1
  size_t v7; // esi@1
  void *v8; // eax@1
  char v10; // [sp+0h] [bp-28h]@0
  char v11; // [sp+1Fh] [bp-9h]@1

  v5 = 16 * ((unsigned int)(a4 + 27) >> 4);
  sub_6F8A13B0(v5, v10);
  v6 = alloca(v5);
  v7 = ((int (__cdecl *)(unsigned int, int, const char *, char *))a3)((unsigned int)&v11 & 0xFFFFFFF0, a4, a5, &a6);
  v8 = (void *)(a2 + 8);
  *(_DWORD *)a2 = a2 + 8;
  if ( v7 > 0xF )
  {
    if ( (v7 & 0x80000000) != 0 )
      sub_6F95B240("basic_string::_M_create");
    v8 = sub_6F961B60(v7 + 1);
    *(_DWORD *)(a2 + 8) = v7;
    *(_DWORD *)a2 = v8;
    goto LABEL_9;
  }
  if ( v7 != 1 )
  {
    if ( !v7 )
      goto LABEL_4;
LABEL_9:
    memcpy(v8, (const void *)((unsigned int)&v11 & 0xFFFFFFF0), v7);
    v8 = *(void **)a2;
    goto LABEL_4;
  }
  *(_BYTE *)(a2 + 8) = *(_BYTE *)((unsigned int)&v11 & 0xFFFFFFF0);
LABEL_4:
  *(_DWORD *)(a2 + 4) = v7;
  *((_BYTE *)v8 + v7) = 0;
  return a2;
}
