signed int __usercall sub_6F79E8D0@<eax>(int a1@<eax>, unsigned int *a2@<edx>, unsigned int a3@<ecx>, char a4)
{
  unsigned int v4; // ebx@1
  unsigned int v5; // edi@1
  int v7; // esi@3

  v4 = *a2;
  v5 = *a2 + 5;
  if ( v5 > a3 )
    return 6;
  v7 = *(_DWORD *)(a1 + 12);
  *(_WORD *)v7 = *(_BYTE *)v4;
  *(_WORD *)(v7 + 2) = *(_BYTE *)(v4 + 1);
  *(_WORD *)(v7 + 4) = *(_BYTE *)(v4 + 2);
  *(_WORD *)(v7 + 6) = *(_BYTE *)(v4 + 3);
  *(_WORD *)(v7 + 8) = *(_BYTE *)(v4 + 4);
  if ( a4 )
  {
    v5 = v4 + 8;
    if ( a3 < v4 + 8 )
      return 6;
    *(_WORD *)(v7 + 10) = *(_BYTE *)(v4 + 5);
    *(_WORD *)(v7 + 12) = *(_BYTE *)(v4 + 6);
    *(_WORD *)(v7 + 14) = *(_BYTE *)(v4 + 7);
  }
  else
  {
    *(_WORD *)(v7 + 10) = 0;
    *(_WORD *)(v7 + 12) = 0;
    *(_WORD *)(v7 + 14) = 0;
  }
  *(_BYTE *)(a1 + 16) = 1;
  *a2 = v5;
  return 0;
}
