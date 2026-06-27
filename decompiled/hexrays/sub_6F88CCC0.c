signed int __usercall sub_6F88CCC0@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // eax@1
  int v3; // esi@2
  int v4; // edi@3
  int v5; // edx@3
  int v7; // edx@7
  int v8; // ecx@7
  int v9; // edi@7
  int v10; // [sp+1Ch] [bp-10h]@4

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 76);
  if ( v2 != -5 && v2 )
    return -1;
  v3 = *(_DWORD *)(v1 + 52);
  if ( !v3 )
  {
    v4 = *(_DWORD *)(v1 + 88);
    v5 = 0;
    if ( v4 )
    {
      v7 = *(_DWORD *)(v1 + 32);
      v8 = *(_DWORD *)(v1 + 84);
      v9 = v7 + v4;
      do
        *(_BYTE *)(++v7 - 1) = *(_BYTE *)(++v8 - 1);
      while ( v7 != v9 );
      v5 = *(_DWORD *)(v1 + 88);
    }
    if ( sub_6F88CC30(v1, *(_DWORD *)(v1 + 32) + v5, *(_DWORD *)(v1 + 24) - v5, (unsigned int *)&v10) != -1 )
    {
      *(_DWORD *)(v1 + 88) += v10;
      *(_DWORD *)(v1 + 84) = *(_DWORD *)(v1 + 32);
      return v3;
    }
    return -1;
  }
  return 0;
}
