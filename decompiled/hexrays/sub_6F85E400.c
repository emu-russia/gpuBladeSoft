unsigned int __cdecl sub_6F85E400(int a1)
{
  int v1; // ebx@1
  unsigned int result; // eax@1

  v1 = *(_DWORD *)(a1 + 372);
  (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 404) + 8))(a1);
  result = *(_DWORD *)(v1 + 16);
  if ( result != 1 )
  {
    if ( result < 1 )
    {
      *(_DWORD *)(v1 + 16) = 2;
      if ( *(_BYTE *)(a1 + 210) )
        goto LABEL_4;
    }
    else
    {
      if ( result != 2 )
      {
LABEL_4:
        ++*(_DWORD *)(v1 + 20);
        return result;
      }
      if ( *(_BYTE *)(a1 + 210) )
      {
        *(_DWORD *)(v1 + 16) = 1;
        ++*(_DWORD *)(v1 + 28);
        goto LABEL_7;
      }
    }
    ++*(_DWORD *)(v1 + 28);
LABEL_7:
    ++*(_DWORD *)(v1 + 20);
    return result;
  }
  *(_DWORD *)(v1 + 16) = 2;
  ++*(_DWORD *)(v1 + 20);
  return result;
}
