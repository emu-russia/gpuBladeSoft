signed int __usercall sub_6F7D0010@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  char v2; // dl@1
  size_t v3; // esi@1
  unsigned int v4; // eax@2
  bool v5; // cf@4
  int v6; // eax@5
  unsigned int v7; // eax@9
  unsigned int v8; // edx@9
  int v9; // edx@10
  int v10; // ebp@10
  int v11; // edi@10
  unsigned int v12; // ecx@10
  int v13; // eax@11
  unsigned int v14; // esi@11
  signed int v15; // eax@11
  _BYTE *v16; // ebx@11
  signed int result; // eax@11
  char v18; // cl@12

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 52);
  if ( !v2 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( v4 < *(_DWORD *)(v1 + 28) )
    {
      if ( *(_DWORD *)(v1 + 56) < *(_DWORD *)(v1 + 60) )
      {
        v12 = v4 >> 3;
        v10 = v4 & 7;
        v9 = v1 + (v4 >> 3) + 8;
        v11 = 8 - v10;
        goto LABEL_11;
      }
    }
    else if ( *(_DWORD *)(v1 + 60) > *(_DWORD *)(v1 + 56) )
    {
      goto LABEL_8;
    }
    v5 = ++v3 < *(_DWORD *)(v1 + 40);
    *(_DWORD *)(v1 + 52) = v3;
    if ( v5 )
      goto LABEL_5;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(a1 + 56) >= *(_DWORD *)(a1 + 60) )
  {
    v5 = ++v3 < *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 52) = v3;
    if ( v5 )
    {
LABEL_5:
      v6 = (1 << v3) - 256;
      goto LABEL_6;
    }
LABEL_18:
    v6 = *(_DWORD *)(v1 + 48) + 1;
LABEL_6:
    *(_DWORD *)(v1 + 60) = v6;
    if ( !v2 )
      goto LABEL_8;
  }
  *(_DWORD *)(v1 + 52) = 9;
  *(_DWORD *)(v1 + 60) = 256;
  v3 = 9;
  *(_BYTE *)(v1 + 32) = 0;
LABEL_8:
  if ( *(_DWORD *)(v1 + 4) )
    return -1;
  v7 = sub_6F7721D0(*(_DWORD *)(v1 + 164), (void *)(v1 + 8), v3);
  v8 = *(_DWORD *)(v1 + 52);
  *(_DWORD *)(v1 + 36) += v7;
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 4) = v7 < v8;
  *(_DWORD *)(v1 + 28) = 1 - v8 + 8 * v7;
  if ( !v7 )
    return -1;
  v9 = v1 + 8;
  LOBYTE(v10) = 0;
  v11 = 8;
  v12 = 0;
  v4 = 0;
LABEL_11:
  v13 = v3 + v4;
  v14 = v3 - v11;
  *(_DWORD *)(v1 + 24) = v13;
  v15 = *(_BYTE *)(v1 + v12 + 8);
  v16 = (_BYTE *)(v9 + 1);
  result = v15 >> v10;
  if ( v14 > 7 )
  {
    v16 = (_BYTE *)(v9 + 2);
    v18 = v11;
    v14 -= 8;
    LOBYTE(v11) = 16 - v10;
    result |= *(_BYTE *)(v9 + 1) << v18;
  }
  if ( v14 )
    result |= (((1 << v14) - 1) & *v16) << v11;
  return result;
}
