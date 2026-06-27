int __cdecl sub_6F79B9A0(int a1, unsigned int *a2)
{
  unsigned int v2; // esi@1
  unsigned int v3; // eax@1
  int v4; // ebp@2
  unsigned int v5; // ebx@2
  unsigned int v6; // eax@2
  int v7; // edi@2
  int v8; // edx@2
  unsigned int v9; // ecx@3
  unsigned int v10; // edx@8
  int v11; // eax@12
  int v13; // [sp+0h] [bp-18h]@3

  v2 = *a2 + 1;
  v3 = *(_DWORD *)(a1 + 16);
  if ( !v3 )
  {
    v2 = 0;
    v13 = 0;
    goto LABEL_15;
  }
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = v3 >> 1;
  v7 = v4 + 8 * v6;
  v8 = *(_DWORD *)v7;
  if ( v2 == *(_DWORD *)v7 )
  {
LABEL_14:
    v13 = *(_DWORD *)(v7 + 4);
    goto LABEL_15;
  }
  v9 = 0;
  v13 = 0;
  while ( 1 )
  {
    v10 = v8 & 0x7FFFFFFF;
    if ( v2 != v10 )
      break;
    v5 = v6;
    v13 = *(_DWORD *)(v7 + 4);
    if ( v6 <= v9 )
      goto LABEL_10;
LABEL_7:
    v6 = v9 + ((v5 - v9) >> 1);
    v7 = v4 + 8 * v6;
    v8 = *(_DWORD *)v7;
    if ( v2 == *(_DWORD *)v7 )
      goto LABEL_14;
  }
  if ( v2 <= v10 )
    v5 = v6;
  else
    v9 = v6 + 1;
  if ( v5 > v9 )
    goto LABEL_7;
LABEL_10:
  if ( !v13 )
  {
    v2 = 0;
    if ( *(_DWORD *)(a1 + 16) > v9 )
    {
      v11 = v4 + 8 * v9;
      v13 = *(_DWORD *)(v11 + 4);
      v2 = *(_DWORD *)v11 & 0x7FFFFFFF;
    }
  }
LABEL_15:
  *a2 = v2;
  return v13;
}
