_DWORD *__usercall sub_6F9684DF@<eax>(_DWORD *result@<eax>)
{
  int i; // edx@1
  char *v2; // ebx@3
  int v3; // ecx@3
  int v4; // edx@4
  int v5; // ecx@5
  _DWORD *v6; // ebx@5

  for ( i = *result; i; i = *(_DWORD *)(i + 4) )
  {
    v2 = *(char **)(i + 8);
    *(_DWORD *)i = *(_DWORD *)v2;
    v3 = -((*(_DWORD *)(i + 12) & 8u) < 1);
    --*(_DWORD *)(i + 16);
    *(_DWORD *)(i + 8) = &v2[(v3 & 0xFFFFFFF8) + 4];
  }
  v4 = *result;
  if ( *result )
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = result;
    while ( v5 )
    {
      if ( *(_DWORD *)v4 > *(_DWORD *)v5 )
      {
        *v6 = v5;
        *(_DWORD *)(v4 + 4) = *(_DWORD *)(v5 + 4);
        *(_DWORD *)(v5 + 4) = v4;
        v6 = result;
        v4 = *result;
      }
      else
      {
        v6 = (_DWORD *)(v4 + 4);
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          return result;
      }
      v5 = *(_DWORD *)(v4 + 4);
    }
  }
  return result;
}
