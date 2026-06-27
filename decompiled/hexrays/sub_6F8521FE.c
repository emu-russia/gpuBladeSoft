void __cdecl sub_6F8521FE(int a1, int a2, int a3, int a4)
{
  int v4; // eax@15
  size_t v5; // [sp+28h] [bp-10h]@12
  char *v6; // [sp+2Ch] [bp-Ch]@6
  int v7; // [sp+2Ch] [bp-Ch]@8

  if ( !a1 || !a2 || a4 <= 0 || !a3 )
    return;
  v6 = (char *)sub_6F83B411(a1, *(const void **)(a2 + 244), *(_DWORD *)(a2 + 248), a4, 0x10u);
  if ( !v6 )
  {
    sub_6F83987F(a1, "too many sPLT chunks", 1);
    return;
  }
  sub_6F83B5A7(a1, *(_DWORD *)(a2 + 244));
  *(_DWORD *)(a2 + 244) = v6;
  *(_DWORD *)(a2 + 232) |= 0x20u;
  v7 = (int)&v6[16 * *(_DWORD *)(a2 + 248)];
  while ( !*(_DWORD *)a3 || !*(_DWORD *)(a3 + 8) )
  {
    sub_6F8395F1(a1, "png_set_sPLT: invalid sPLT");
LABEL_16:
    a3 += 16;
    if ( !--a4 )
      goto LABEL_17;
  }
  *(_BYTE *)(v7 + 4) = *(_BYTE *)(a3 + 4);
  v5 = strlen(*(const char **)a3) + 1;
  *(_DWORD *)v7 = sub_6F83B347(a1, v5);
  if ( !*(_DWORD *)v7 )
    goto LABEL_17;
  memcpy(*(void **)v7, *(const void **)a3, v5);
  *(_DWORD *)(v7 + 8) = sub_6F83B3D1(a1, *(_DWORD *)(a3 + 12), 0xAu);
  if ( *(_DWORD *)(v7 + 8) )
  {
    *(_DWORD *)(v7 + 12) = *(_DWORD *)(a3 + 12);
    memcpy(*(void **)(v7 + 8), *(const void **)(a3 + 8), 10 * *(_DWORD *)(a3 + 12));
    v4 = *(_DWORD *)(a2 + 8);
    BYTE1(v4) |= 0x20u;
    *(_DWORD *)(a2 + 8) = v4;
    ++*(_DWORD *)(a2 + 248);
    v7 += 16;
    goto LABEL_16;
  }
  sub_6F83B5A7(a1, *(_DWORD *)v7);
LABEL_17:
  if ( a4 > 0 )
    sub_6F83987F(a1, "sPLT out of memory", 1);
}
