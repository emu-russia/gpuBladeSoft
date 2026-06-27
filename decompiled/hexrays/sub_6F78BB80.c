signed int __cdecl sub_6F78BB80(int a1, const char *a2, int a3)
{
  int v3; // ebx@1
  const char **v4; // edi@2
  int v5; // ebp@2
  int v6; // eax@4
  int v7; // eax@6
  signed int result; // eax@8
  int v9; // [sp+1Ch] [bp-20h]@1

  v3 = *(_DWORD *)(a1 + 280);
  v9 = *(_DWORD *)(a1 + 284);
  if ( v3 <= 0 )
    goto LABEL_10;
  v4 = *(const char ***)(a1 + 284);
  v5 = 0;
  while ( 1 )
  {
    ++v5;
    v6 = strcmp(*v4, a2);
    if ( v3 == v5 )
      break;
    v4 += 3;
    if ( !v6 )
      goto LABEL_6;
  }
  if ( v6 )
    goto LABEL_10;
LABEL_6:
  v7 = v9 + 12 * v5 - 12;
  if ( v9 + 12 * v5 == 12 )
  {
LABEL_10:
    result = 6;
  }
  else if ( *(_BYTE *)(v7 + 4) )
  {
    *(_DWORD *)a3 = 1;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(v7 + 8);
    result = 0;
  }
  else
  {
    *(_DWORD *)a3 = 2;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(v7 + 8);
    result = 0;
  }
  return result;
}
