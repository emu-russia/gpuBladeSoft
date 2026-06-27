unsigned int __cdecl sub_6F84FEAB(int a1)
{
  unsigned int result; // eax@1

  ++*(_DWORD *)(a1 + 280);
  result = *(_DWORD *)(a1 + 264);
  if ( *(_DWORD *)(a1 + 280) >= result )
  {
    if ( !*(_BYTE *)(a1 + 340) )
      goto LABEL_14;
    *(_DWORD *)(a1 + 280) = 0;
    memset(*(void **)(a1 + 288), 0, *(_DWORD *)(a1 + 272) + 1);
    while ( ++*(_BYTE *)(a1 + 341) <= 6u )
    {
      *(_DWORD *)(a1 + 276) = ((unsigned __int8)byte_6FB9AE4C[*(_BYTE *)(a1 + 341)]
                             + *(_DWORD *)(a1 + 256)
                             - (unsigned int)(unsigned __int8)byte_6FB9AE53[*(_BYTE *)(a1 + 341)]
                             - 1)
                            / (unsigned __int8)byte_6FB9AE4C[*(_BYTE *)(a1 + 341)];
      if ( *(_DWORD *)(a1 + 124) & 2 )
        break;
      *(_DWORD *)(a1 + 264) = ((unsigned __int8)byte_6FB9AE5A[*(_BYTE *)(a1 + 341)]
                             + *(_DWORD *)(a1 + 260)
                             - (unsigned int)(unsigned __int8)byte_6FB9AE61[*(_BYTE *)(a1 + 341)]
                             - 1)
                            / (unsigned __int8)byte_6FB9AE5A[*(_BYTE *)(a1 + 341)];
      if ( *(_DWORD *)(a1 + 264) )
      {
        if ( *(_DWORD *)(a1 + 276) )
          break;
      }
    }
    result = *(_BYTE *)(a1 + 341);
    if ( (unsigned __int8)result > 6u )
LABEL_14:
      result = sub_6F84FDF0(a1);
  }
  return result;
}
