signed int __usercall sub_6F88D720@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  size_t v2; // edi@1
  void *v3; // esi@1
  signed int result; // eax@4
  void *v5; // eax@6
  unsigned int v6; // eax@7
  int v7; // edx@8
  int v8; // edx@9
  void *v9; // [sp+0h] [bp-2Ch]@10

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 28);
  v3 = malloc(*(_DWORD *)(a1 + 28));
  *(_DWORD *)(v1 + 32) = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)(v1 + 40) )
    {
      *(_DWORD *)(v1 + 24) = v2;
      return 0;
    }
    v5 = malloc(v2);
    *(_DWORD *)(v1 + 36) = v5;
    if ( v5 )
    {
      v6 = *(_DWORD *)(v1 + 64);
      *(_DWORD *)(v1 + 116) = 0;
      *(_DWORD *)(v1 + 120) = 0;
      *(_DWORD *)(v1 + 124) = 0;
      if ( !sub_6F890900(v1 + 84, *(_DWORD *)(v1 + 60), 8, 31, 8, v6, "1.2.8", 56) )
      {
        result = *(_DWORD *)(v1 + 40);
        v7 = *(_DWORD *)(v1 + 28);
        *(_DWORD *)(v1 + 24) = v7;
        if ( !result )
        {
          *(_DWORD *)(v1 + 100) = v7;
          v8 = *(_DWORD *)(v1 + 36);
          *(_DWORD *)(v1 + 96) = v8;
          *(_DWORD *)(v1 + 4) = v8;
          return result;
        }
        return 0;
      }
      free(*(void **)(v1 + 36));
      v9 = *(void **)(v1 + 32);
    }
    else
    {
      v9 = v3;
    }
    free(v9);
  }
  sub_6F88C430(v1, -4, "out of memory");
  return -1;
}
