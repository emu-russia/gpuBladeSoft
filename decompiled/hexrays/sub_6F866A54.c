int __cdecl sub_6F866A54(int a1, char *a2)
{
  int v2; // ecx@1
  int v3; // eax@1
  const char *v4; // ebx@3
  const char *v5; // eax@5
  char v6; // dl@6
  int v8; // edx@10
  int v9; // ebx@11

  v2 = *(_DWORD *)a1;
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 20);
  if ( v3 <= 0 || v3 > *(_DWORD *)(v2 + 116) )
  {
    v8 = *(_DWORD *)(v2 + 120);
    if ( !v8 )
      goto LABEL_15;
    v9 = *(_DWORD *)(v2 + 124);
    if ( v3 < v9 || v3 > *(_DWORD *)(v2 + 128) )
      goto LABEL_15;
    v4 = *(const char **)(v8 + 4 * (v3 - v9));
  }
  else
  {
    v4 = *(const char **)(*(_DWORD *)(v2 + 112) + 4 * v3);
  }
  if ( !v4 )
  {
LABEL_15:
    *(_DWORD *)(v2 + 24) = v3;
    v4 = **(const char ***)(v2 + 112);
  }
  v5 = v4;
  do
  {
    v6 = *v5;
    if ( !*v5 )
      return sprintf(
               a2,
               v4,
               *(_DWORD *)(v2 + 24),
               *(_DWORD *)(v2 + 28),
               *(_DWORD *)(v2 + 32),
               *(_DWORD *)(v2 + 36),
               *(_DWORD *)(v2 + 40),
               *(_DWORD *)(v2 + 44),
               *(_DWORD *)(v2 + 48),
               *(_DWORD *)(v2 + 52));
    ++v5;
  }
  while ( v6 != 37 );
  if ( *v5 != 115 )
    return sprintf(
             a2,
             v4,
             *(_DWORD *)(v2 + 24),
             *(_DWORD *)(v2 + 28),
             *(_DWORD *)(v2 + 32),
             *(_DWORD *)(v2 + 36),
             *(_DWORD *)(v2 + 40),
             *(_DWORD *)(v2 + 44),
             *(_DWORD *)(v2 + 48),
             *(_DWORD *)(v2 + 52));
  return sprintf(a2, v4, v2 + 24);
}
