signed int __cdecl sub_6F82F8E0(int a1, int a2)
{
  void *v2; // eax@2
  void *v3; // esi@2
  void *v4; // eax@2
  void *v5; // ebp@2
  void *v6; // edi@2
  signed int result; // eax@4

  if ( a1 )
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 356) = 0;
    memset((void *)((a1 + 4) & 0xFFFFFFFC), 0, 4 * ((a1 - ((a1 + 4) & 0xFFFFFFFC) + 360) >> 2));
    *(_DWORD *)(a1 + 4) = 0x4000;
    *(_DWORD *)(a1 + 24) = 1024;
    v2 = malloc(0x4000u);
    *(_DWORD *)a1 = v2;
    v3 = v2;
    v4 = malloc(0x1000u);
    *(_DWORD *)(a1 + 16) = v4;
    v5 = v4;
    v6 = malloc(0x2000u);
    *(_DWORD *)(a1 + 20) = v6;
    if ( v5 == 0 || v3 == 0 || !v6 )
    {
      if ( v3 )
        free(v3);
      if ( v5 )
      {
        free(v5);
        v6 = *(void **)(a1 + 20);
      }
      if ( v6 )
        free(v6);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 356) = 0;
      memset((void *)((a1 + 4) & 0xFFFFFFFC), 0, 4 * ((a1 - ((a1 + 4) & 0xFFFFFFFC) + 360) >> 2));
      result = -1;
    }
    else
    {
      *(_DWORD *)(a1 + 336) = a2;
      result = 0;
    }
  }
  else
  {
    result = -1;
  }
  return result;
}
