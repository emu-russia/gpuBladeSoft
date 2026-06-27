signed int __usercall sub_6F8B38D0@<eax>(signed int result@<eax>)
{
  signed int v1; // ebx@4
  unsigned int v2; // esi@4
  void *v3; // edi@15
  unsigned int v4; // edx@15
  unsigned int v5; // ecx@15
  unsigned int v6; // eax@19
  unsigned int v7; // eax@23
  int v8; // [sp+1Ch] [bp-20h]@15

  if ( result && !*(_DWORD *)(result + 176) )
  {
    v1 = result;
    sub_6F8B2F50((volatile signed __int32 *)&unk_6FB48AD4);
    v2 = *(_DWORD *)(v1 + 180);
    if ( v2 && dword_70373568 )
    {
      v3 = (void *)dword_7037356C;
      v4 = 0;
      v8 = dword_70373568 - 1;
      v5 = dword_70373568 - 1;
      while ( 1 )
      {
        v6 = (v4 + v5) >> 1;
        if ( v2 == *(_DWORD *)(dword_7037356C + 8 * v6 + 4) )
          break;
        if ( v2 < *(_DWORD *)(dword_7037356C + 8 * v6 + 4) )
        {
          if ( v6 == v4 )
            goto LABEL_5;
          v5 = v6 - 1;
        }
        else
        {
          v4 = v6 + 1;
        }
        if ( v5 < v4 )
          goto LABEL_5;
      }
      v7 = v6 + 1;
      if ( dword_70373568 > v7 )
        memmove(
          (void *)(dword_7037356C + 8 * v7 - 8),
          (const void *)(dword_7037356C + 8 * v7),
          8 * (dword_70373568 - v7));
      dword_70373568 = v8;
      if ( !v8 )
      {
        free(v3);
        dword_70373564 = 0;
        dword_70373568 = 0;
      }
    }
LABEL_5:
    if ( *(_DWORD *)(v1 + 44) )
      free(*(void **)(v1 + 44));
    if ( *(_DWORD *)(v1 + 48) )
      free(*(void **)(v1 + 48));
    if ( *(_DWORD *)(v1 + 52) )
      free(*(void **)(v1 + 52));
    *(_DWORD *)v1 = 0;
    *(_DWORD *)(v1 + 180) = 0;
    memset((void *)((v1 + 4) & 0xFFFFFFFC), 0, 4 * ((v1 - ((v1 + 4) & 0xFFFFFFFC) + 184) >> 2));
    if ( dword_70373570 )
    {
      *(_DWORD *)(dword_70373570 + 176) = v1;
      dword_70373570 = v1;
    }
    else
    {
      dword_70373570 = v1;
      dword_70373574 = v1;
    }
    result = sub_6F8B3270((volatile signed __int32 *)&unk_6FB48AD4);
  }
  return result;
}
