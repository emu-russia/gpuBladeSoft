__int32 __cdecl sub_6F7BDD90(int a1, const char *a2)
{
  int v2; // esi@1
  int v3; // ebx@2
  int v4; // edi@2
  char v5; // bp@2
  __int32 result; // eax@6

  v2 = *(_DWORD *)(a1 + 416);
  if ( v2 <= 0 )
  {
LABEL_7:
    result = 0;
  }
  else
  {
    v3 = 0;
    v4 = *(_DWORD *)(a1 + 420);
    v5 = *a2;
    while ( **(_BYTE **)(v4 + 4 * v3) != v5 || strcmp(a2, *(const char **)(v4 + 4 * v3)) )
    {
      if ( ++v3 == v2 )
        goto LABEL_7;
    }
    result = atol(*(const char **)(*(_DWORD *)(a1 + 424) + 4 * v3));
  }
  return result;
}
