signed int __cdecl sub_6F8B1880(int a1, int a2)
{
  char *v2; // edi@3
  int v3; // eax@3
  signed int v5; // edi@7
  int v6; // esi@7
  char *v7; // eax@7
  char *v8; // eax@9

  if ( !a1 )
    return -1;
  lock(8);
  if ( *(_DWORD *)a1 )
  {
    v2 = *(char **)(a1 + 4);
    v3 = *(_DWORD *)(a1 + 8);
LABEL_4:
    if ( (char *)v3 != v2 )
    {
LABEL_5:
      *(_DWORD *)(a1 + 4) = v2 + 4;
      *(_DWORD *)v2 = a2;
      unlock(8);
      return 0;
    }
    v5 = (signed int)&v2[-*(_DWORD *)a1];
    v6 = 8 * (v5 >> 2);
    v7 = (char *)realloc(*(void **)a1, 8 * (v5 >> 2));
    if ( v7 )
    {
      *(_DWORD *)a1 = v7;
      v2 = &v7[v5];
      *(_DWORD *)(a1 + 8) = &v7[v6];
      goto LABEL_5;
    }
    goto LABEL_12;
  }
  v8 = (char *)calloc(0x20u, 4u);
  v2 = v8;
  *(_DWORD *)a1 = v8;
  if ( v8 )
  {
    *(_DWORD *)(a1 + 4) = v8;
    v3 = (int)(v8 + 128);
    *(_DWORD *)(a1 + 8) = v3;
    goto LABEL_4;
  }
LABEL_12:
  unlock(8);
  return -1;
}
