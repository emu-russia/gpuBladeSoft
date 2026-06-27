signed int __cdecl sub_6F869970(int a1)
{
  int v1; // esi@1
  int v2; // eax@1
  int v3; // edi@2
  int v4; // ebx@2
  int v5; // edx@5
  signed int result; // eax@6
  int v7; // ecx@10
  int v8; // ST0C_4@12
  int i; // ebx@15
  unsigned int v10; // ecx@19
  unsigned int v11; // edi@19
  int j; // ebx@22
  unsigned int v13; // ecx@26
  unsigned int v14; // edi@26
  int v15; // ST08_4@31
  int v16; // ST08_4@32
  signed int v17; // [sp+1Ch] [bp-1Ch]@13

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 68);
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      while ( *(_DWORD *)v2 )
      {
        v2 = *(_DWORD *)(v2 + 36);
        if ( !v2 )
          goto LABEL_6;
      }
      v5 = *(_DWORD *)(v2 + 8);
      v4 += v5 * *(_DWORD *)(v2 + 12);
      v3 += *(_DWORD *)(v2 + 4) * v5;
      v2 = *(_DWORD *)(v2 + 36);
    }
    while ( v2 );
  }
  else
  {
    v3 = 0;
    v4 = 0;
  }
LABEL_6:
  for ( result = *(_DWORD *)(v1 + 72); result; result = *(_DWORD *)(result + 36) )
  {
    while ( *(_DWORD *)result )
    {
      result = *(_DWORD *)(result + 36);
      if ( !result )
        goto LABEL_11;
    }
    v7 = *(_DWORD *)(result + 8);
    v4 += v7 * *(_DWORD *)(result + 12) << 7;
    v3 += *(_DWORD *)(result + 4) * v7 << 7;
  }
LABEL_11:
  if ( v4 > 0 )
  {
    v8 = *(_DWORD *)(v1 + 76);
    result = sub_6F869D44(a1, v4, v3);
    if ( result >= v3 )
    {
      v17 = 1000000000;
    }
    else
    {
      result /= v4;
      v17 = result;
      if ( result <= 0 )
        v17 = 1;
    }
    for ( i = *(_DWORD *)(v1 + 68); i; i = *(_DWORD *)(i + 36) )
    {
      while ( *(_DWORD *)i )
      {
        i = *(_DWORD *)(i + 36);
        if ( !i )
          goto LABEL_22;
      }
      v10 = *(_DWORD *)(i + 4);
      v11 = *(_DWORD *)(i + 12);
      if ( v17 < (signed int)((v10 - 1) / v11 + 1) )
      {
        *(_DWORD *)(i + 16) = v17 * v11;
        v15 = *(_DWORD *)(i + 8) * v10;
        sub_6F869D4C((int *)a1);
        *(_BYTE *)(i + 34) = 1;
        v10 = *(_DWORD *)(i + 16);
      }
      else
      {
        *(_DWORD *)(i + 16) = v10;
      }
      *(_DWORD *)i = sub_6F869890(a1, 1u, *(_DWORD *)(i + 8), v10);
      result = *(_DWORD *)(v1 + 80);
      *(_DWORD *)(i + 20) = result;
      *(_DWORD *)(i + 24) = 0;
      *(_DWORD *)(i + 28) = 0;
      *(_BYTE *)(i + 33) = 0;
    }
LABEL_22:
    for ( j = *(_DWORD *)(v1 + 72); j; j = *(_DWORD *)(j + 36) )
    {
      while ( *(_DWORD *)j )
      {
        j = *(_DWORD *)(j + 36);
        if ( !j )
          return result;
      }
      v13 = *(_DWORD *)(j + 4);
      v14 = *(_DWORD *)(j + 12);
      if ( v17 < (signed int)((v13 - 1) / v14 + 1) )
      {
        *(_DWORD *)(j + 16) = v17 * v14;
        v16 = *(_DWORD *)(j + 8) * v13 << 7;
        sub_6F869D4C((int *)a1);
        *(_BYTE *)(j + 34) = 1;
        v13 = *(_DWORD *)(j + 16);
      }
      else
      {
        *(_DWORD *)(j + 16) = v13;
      }
      *(_DWORD *)j = sub_6F8697AC(a1, 1u, *(_DWORD *)(j + 8), v13);
      result = *(_DWORD *)(v1 + 80);
      *(_DWORD *)(j + 20) = result;
      *(_DWORD *)(j + 24) = 0;
      *(_DWORD *)(j + 28) = 0;
      *(_BYTE *)(j + 33) = 0;
    }
  }
  return result;
}
