int __cdecl sub_6F77ABA0(int a1, const char *a2)
{
  int v2; // ebp@1
  int v3; // eax@1
  int v4; // esi@2
  unsigned int v5; // eax@2
  int v6; // edi@3
  unsigned int v7; // edx@4
  const char *v8; // eax@5
  int v9; // edx@10

  v2 = *(_DWORD *)(a1 + 656);
  v3 = sub_6F76F110(*(_DWORD *)(a1 + 96), (int)"postscript-cmaps");
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = *(_DWORD *)(v2 + 12);
  if ( !v5 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v9 = *(_WORD *)(*(_DWORD *)(v2 + 1160) + 2 * v6);
    if ( (unsigned __int16)v9 <= 0x186u )
      break;
    v7 = v9 - 391;
    if ( v7 < *(_DWORD *)(v2 + 1312) )
    {
      v8 = *(const char **)(*(_DWORD *)(v2 + 1316) + 4 * v7);
      goto LABEL_6;
    }
LABEL_9:
    if ( ++v6 >= v5 )
      return 0;
  }
  v8 = (const char *)(*(int (__cdecl **)(_DWORD))(v4 + 20))(*(_WORD *)(*(_DWORD *)(v2 + 1160) + 2 * v6));
LABEL_6:
  if ( !v8 || strcmp(a2, v8) )
  {
    v5 = *(_DWORD *)(v2 + 12);
    goto LABEL_9;
  }
  return v6;
}
