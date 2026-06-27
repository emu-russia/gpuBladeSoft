int __usercall sub_6F8A17C0@<eax>(int a1@<eax>, int *a2@<edx>, signed int *a3@<ecx>)
{
  signed int v3; // edi@1
  int v4; // esi@1
  int *v5; // ebx@1
  int v6; // eax@1
  signed int v7; // ecx@3
  signed int v8; // ebp@3
  int result; // eax@4
  int (__cdecl *v10)(signed int, signed int, _DWORD, _DWORD, int, int *); // [sp+28h] [bp-24h]@9
  signed int *v11; // [sp+2Ch] [bp-20h]@1

  v3 = 1;
  v4 = a1;
  v5 = a2;
  v6 = *a2;
  v11 = a3;
  if ( !*a2 )
    return 2;
  while ( 1 )
  {
    v10 = *(int (__cdecl **)(signed int, signed int, _DWORD, _DWORD, int, int *))(v6 + 24);
    if ( v6 == *(_DWORD *)(v4 + 16) )
    {
      if ( !v10 )
        goto LABEL_14;
      v7 = 6;
      v8 = 4;
    }
    else
    {
      v7 = 2;
      v8 = 0;
      if ( !v10 )
        goto LABEL_8;
    }
    result = v10(1, v7, *(_DWORD *)v4, *(_DWORD *)(v4 + 4), v4, v5);
    if ( result == 7 )
      break;
    if ( result != 8 )
      return 2;
    if ( v8 )
LABEL_14:
      abort();
    v6 = *v5;
LABEL_8:
    v6 = *(_DWORD *)v6;
    ++v3;
    *v5 = v6;
    if ( !v6 )
      return 2;
  }
  *v11 = v3;
  return result;
}
