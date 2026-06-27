void __cdecl sub_6F869224(int a1, unsigned int a2)
{
  int v2; // ebx@1
  int v3; // eax@2
  unsigned int v4; // edi@3
  int v5; // eax@3
  int v6; // ST18_4@6
  int v7; // eax@7
  int v8; // edi@10
  int i; // edi@13
  int j; // edi@18
  int v11; // [sp+1Ch] [bp-1Ch]@6
  int v12; // [sp+1Ch] [bp-1Ch]@10

  v2 = *(_DWORD *)(a1 + 4);
  if ( a2 <= 1 )
  {
    if ( a2 == 1 )
    {
      for ( i = *(_DWORD *)(v2 + 68); i; i = *(_DWORD *)(i + 36) )
      {
        while ( !*(_BYTE *)(i + 34) )
        {
          i = *(_DWORD *)(i + 36);
          if ( !i )
            goto LABEL_18;
        }
        *(_BYTE *)(i + 34) = 0;
        (*(void (__cdecl **)(int, int))(i + 48))(a1, i + 40);
      }
LABEL_18:
      *(_DWORD *)(v2 + 68) = 0;
      for ( j = *(_DWORD *)(v2 + 72); j; j = *(_DWORD *)(j + 36) )
      {
        while ( !*(_BYTE *)(j + 34) )
        {
          j = *(_DWORD *)(j + 36);
          if ( !j )
            goto LABEL_23;
        }
        *(_BYTE *)(j + 34) = 0;
        (*(void (__cdecl **)(int, int))(j + 48))(a1, j + 40);
      }
LABEL_23:
      *(_DWORD *)(v2 + 72) = 0;
    }
  }
  else
  {
    v3 = *(_DWORD *)a1;
    *(_DWORD *)(v3 + 20) = 15;
    *(_DWORD *)(v3 + 24) = a2;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  v4 = a2 + 12;
  v5 = *(_DWORD *)(v2 + 4 * (a2 + 12) + 12);
  *(_DWORD *)(v2 + 4 * (a2 + 12) + 12) = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 + 8) + *(_DWORD *)(v5 + 4) + 16;
      v11 = *(_DWORD *)v5;
      sub_6F869D30(a1, (void *)v5);
      *(_DWORD *)(v2 + 76) -= v6;
      if ( !v11 )
        break;
      v5 = v11;
    }
  }
  v7 = *(_DWORD *)(v2 + 4 * v4 + 4);
  *(_DWORD *)(v2 + 4 * v4 + 4) = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8) + *(_DWORD *)(v7 + 4) + 16;
      v12 = *(_DWORD *)v7;
      sub_6F869D08(a1, (void *)v7);
      *(_DWORD *)(v2 + 76) -= v8;
      if ( !v12 )
        break;
      v7 = v12;
    }
  }
}
