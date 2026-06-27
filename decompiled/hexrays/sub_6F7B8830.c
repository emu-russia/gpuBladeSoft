int __cdecl sub_6F7B8830(int a1, const char *a2)
{
  int v2; // esi@1
  int v3; // ebp@2
  int v4; // ebx@2
  int result; // eax@5

  v2 = *(_DWORD *)(a1 + 416);
  if ( v2 <= 0 )
  {
LABEL_6:
    result = 0;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 420);
    v4 = 0;
    while ( strcmp(a2, *(const char **)(v3 + 4 * v4)) )
    {
      if ( ++v4 == v2 )
        goto LABEL_6;
    }
    result = v4;
  }
  return result;
}
