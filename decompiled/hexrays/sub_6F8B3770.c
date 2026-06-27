unsigned int __usercall sub_6F8B3770@<eax>(int a1@<eax>)
{
  int v1; // ebp@2
  int v2; // edi@2
  int v3; // esi@2
  void *v4; // eax@4
  unsigned int v5; // ebx@6
  int v6; // eax@13
  const void *v7; // edx@16
  int v8; // eax@16
  int v9; // ecx@16
  int v10; // ST1C_4@17
  unsigned int result; // eax@18
  int v12; // ebx@19
  void *v13; // eax@19
  int v14; // [sp+1Ch] [bp-20h]@22

  if ( !a1 )
    return 0;
  v1 = a1;
  v2 = dword_70373568;
  v3 = dword_7037356C;
  if ( dword_70373568 < (unsigned int)dword_70373564 )
    goto LABEL_8;
  if ( !dword_70373568 )
  {
    v4 = malloc(0x80u);
    v3 = (int)v4;
    if ( v4 )
    {
      dword_70373564 = 16;
      dword_7037356C = (int)v4;
      goto LABEL_8;
    }
    return 0;
  }
  v12 = dword_70373564 + 16;
  v13 = realloc((void *)dword_7037356C, 8 * (dword_70373564 + 16));
  v3 = (int)v13;
  if ( !v13 )
    return 0;
  dword_70373564 = v12;
  dword_7037356C = (int)v13;
  do
  {
LABEL_8:
    v5 = dword_70373560;
    while ( 1 )
    {
      dword_70373560 = ++v5;
      if ( v5 & 0x40000000 )
        break;
      if ( v5 )
        goto LABEL_7;
    }
    dword_70373560 = 1;
    v5 = 1;
LABEL_7:
    ;
  }
  while ( sub_6F8B3700(v5) );
  if ( v2 )
  {
    v6 = v2;
    while ( v5 < *(_DWORD *)(v3 + 8 * v6 - 4) )
    {
      if ( !--v6 )
      {
        v7 = (const void *)v3;
        v8 = v2;
        v9 = 8;
LABEL_17:
        v10 = (int)v7;
        memmove((void *)(v3 + v9), v7, 8 * v8);
        v3 = v10;
        goto LABEL_18;
      }
    }
    v14 = 8 * v6;
    v7 = (const void *)(v3 + 8 * v6);
    if ( v2 != v6 )
    {
      v8 = v2 - v6;
      v9 = v14 + 8;
      goto LABEL_17;
    }
    v3 += 8 * v6;
  }
LABEL_18:
  *(_DWORD *)(v3 + 4) = v5;
  result = v5;
  *(_DWORD *)v3 = v1;
  dword_70373568 = v2 + 1;
  return result;
}
