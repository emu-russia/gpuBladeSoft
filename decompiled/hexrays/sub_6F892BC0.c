signed int __usercall sub_6F892BC0@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>)
{
  int v3; // ebp@1
  unsigned int v4; // edi@1
  int v5; // ebx@1
  void *v6; // edx@1
  size_t v7; // esi@2
  int v8; // eax@4
  size_t v9; // esi@4
  size_t v10; // edi@6
  unsigned int v11; // edx@7
  int v12; // eax@7
  unsigned int v13; // ecx@8
  signed int result; // eax@8
  int v15; // ecx@11
  int v16; // eax@12
  int v17; // eax@15
  int v18; // eax@16

  v3 = a2;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(void **)(v5 + 52);
  if ( !v6 )
  {
    v18 = (*(int (__cdecl **)(_DWORD, signed int, signed int))(a1 + 32))(
            *(_DWORD *)(a1 + 40),
            1 << *(_DWORD *)(v5 + 36),
            1);
    *(_DWORD *)(v5 + 52) = v18;
    if ( !v18 )
      return 1;
    v6 = (void *)v18;
  }
  v7 = *(_DWORD *)(v5 + 40);
  if ( !v7 )
  {
    v15 = *(_DWORD *)(v5 + 36);
    *(_DWORD *)(v5 + 48) = 0;
    *(_DWORD *)(v5 + 44) = 0;
    v7 = 1 << v15;
    *(_DWORD *)(v5 + 40) = 1 << v15;
    if ( v4 < 1 << v15 )
      goto LABEL_4;
LABEL_12:
    memcpy(v6, (const void *)(v3 - v7), v7);
    v16 = *(_DWORD *)(v5 + 40);
    *(_DWORD *)(v5 + 48) = 0;
    *(_DWORD *)(v5 + 44) = v16;
    return 0;
  }
  if ( v4 >= v7 )
    goto LABEL_12;
LABEL_4:
  v8 = *(_DWORD *)(v5 + 48);
  v9 = v7 - v8;
  if ( v9 > v4 )
    v9 = v4;
  memcpy((char *)v6 + v8, (const void *)(v3 - v4), v9);
  v10 = v4 - v9;
  if ( v10 )
  {
    memcpy(*(void **)(v5 + 52), (const void *)(v3 - v10), v10);
    v17 = *(_DWORD *)(v5 + 40);
    *(_DWORD *)(v5 + 48) = v10;
    *(_DWORD *)(v5 + 44) = v17;
    return 0;
  }
  v11 = *(_DWORD *)(v5 + 40);
  v12 = v9 + *(_DWORD *)(v5 + 48);
  *(_DWORD *)(v5 + 48) = v12;
  if ( v12 != v11 )
  {
    v13 = *(_DWORD *)(v5 + 44);
    result = 0;
    if ( v11 <= v13 )
      return result;
    goto LABEL_9;
  }
  v13 = *(_DWORD *)(v5 + 44);
  result = 0;
  *(_DWORD *)(v5 + 48) = 0;
  if ( v11 > v13 )
LABEL_9:
    *(_DWORD *)(v5 + 44) = v13 + v9;
  return result;
}
