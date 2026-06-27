void *__cdecl sub_6F85ACBA(int a1)
{
  void *result; // eax@1
  size_t v2; // eax@12

  ++*(_DWORD *)(a1 + 280);
  result = *(void **)(a1 + 264);
  if ( *(_DWORD *)(a1 + 280) >= (unsigned int)result )
  {
    if ( !*(_BYTE *)(a1 + 340) )
      goto LABEL_19;
    *(_DWORD *)(a1 + 280) = 0;
    if ( *(_DWORD *)(a1 + 124) & 2 )
    {
      ++*(_BYTE *)(a1 + 341);
    }
    else
    {
      do
      {
        if ( ++*(_BYTE *)(a1 + 341) > 6u )
          break;
        *(_DWORD *)(a1 + 268) = ((unsigned __int8)byte_6FB9C50A[*(_BYTE *)(a1 + 341)]
                               + *(_DWORD *)(a1 + 256)
                               - (unsigned int)(unsigned __int8)byte_6FB9C511[*(_BYTE *)(a1 + 341)]
                               - 1)
                              / (unsigned __int8)byte_6FB9C50A[*(_BYTE *)(a1 + 341)];
        *(_DWORD *)(a1 + 264) = ((unsigned __int8)byte_6FB9C518[*(_BYTE *)(a1 + 341)]
                               + *(_DWORD *)(a1 + 260)
                               - (unsigned int)(unsigned __int8)byte_6FB9C51F[*(_BYTE *)(a1 + 341)]
                               - 1)
                              / (unsigned __int8)byte_6FB9C518[*(_BYTE *)(a1 + 341)];
        if ( *(_DWORD *)(a1 + 124) & 2 )
          break;
      }
      while ( !*(_DWORD *)(a1 + 268) || !*(_DWORD *)(a1 + 264) );
    }
    if ( *(_BYTE *)(a1 + 341) <= 6u )
    {
      result = *(void **)(a1 + 288);
      if ( result )
      {
        if ( *(_BYTE *)(a1 + 348) * *(_BYTE *)(a1 + 345) <= 7 )
          v2 = ((*(_DWORD *)(a1 + 256) * *(_BYTE *)(a1 + 348) * (unsigned int)*(_BYTE *)(a1 + 345) + 7) >> 3) + 1;
        else
          v2 = *(_DWORD *)(a1 + 256) * (*(_BYTE *)(a1 + 348) * (unsigned int)*(_BYTE *)(a1 + 345) >> 3) + 1;
        result = memset(*(void **)(a1 + 288), 0, v2);
      }
    }
    else
    {
LABEL_19:
      result = (void *)sub_6F859237(a1, 0, 0, 4);
    }
  }
  return result;
}
