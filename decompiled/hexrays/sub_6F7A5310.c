char *__usercall sub_6F7A5310@<eax>(int a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>)
{
  unsigned int *v3; // ebx@1
  unsigned int v4; // ebp@1
  unsigned int v5; // edx@1
  unsigned __int32 v6; // ebp@1
  char *result; // eax@2
  int v8; // edi@3
  char *v9; // ecx@3
  int v10; // edx@4
  int v11; // edi@7
  char *v12; // eax@7
  int v13; // ecx@7
  char *v14; // edx@7
  int v15; // [sp+2Ch] [bp-20h]@1

  v3 = a2 + 1;
  v4 = *a2;
  v5 = *(_DWORD *)(a1 + 28);
  v15 = 0;
  v6 = _byteswap_ulong(v4);
  if ( v6 + 1 > v5 )
  {
    *(_DWORD *)(a1 + 36) = a3;
    v11 = a1;
    v12 = sub_6F773B30(a3, 4, v5, v6 + 1, *(char **)(a1 + 32), &v15);
    v13 = v15;
    v14 = v12;
    *(_DWORD *)(v11 + 32) = v12;
    result = 0;
    if ( v13 )
      return result;
    *(_DWORD *)(v11 + 28) = v6 + 1;
    result = v14;
  }
  else
  {
    result = *(char **)(a1 + 32);
  }
  v8 = 4 * v6;
  v9 = result;
  if ( v6 )
  {
    do
    {
      v10 = *(_BYTE *)v3;
      v9 += 4;
      v3 = (unsigned int *)((char *)v3 + 5);
      *((_DWORD *)v9 - 1) = *((_BYTE *)v3 - 3) | (v10 << 16) | (*((_BYTE *)v3 - 4) << 8);
    }
    while ( v9 != &result[4 * v6] );
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)&result[v8] = 0;
  return result;
}
