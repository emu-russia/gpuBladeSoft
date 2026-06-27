int __cdecl sub_6F867004(int a1)
{
  int v1; // ebx@1
  int result; // eax@1
  int v3; // eax@4
  int v4; // edi@13
  int v5; // ebx@15
  int v6; // eax@17
  int v7; // esi@20
  signed int v8; // edi@20
  char *v9; // ebx@21
  int v10; // ecx@21
  int v11; // esi@30
  int v12; // ebx@30
  int v13; // edi@39
  int v14; // ebx@39
  int v15; // [sp+1Ch] [bp-2Ch]@20
  int v16; // [sp+24h] [bp-24h]@20
  int v17; // [sp+28h] [bp-20h]@20
  int v18; // [sp+28h] [bp-20h]@39
  int v19; // [sp+2Ch] [bp-1Ch]@14
  unsigned int v20; // [sp+2Ch] [bp-1Ch]@29
  int v21; // [sp+2Ch] [bp-1Ch]@38

  v1 = *(_DWORD *)(a1 + 440);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(v1 + 16);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(v1 + 20);
  result = *(_DWORD *)(a1 + 76);
  if ( result == 1 )
  {
    if ( *(_DWORD *)(a1 + 100) == 3 )
      *(_DWORD *)(v1 + 4) = sub_6F866ED0;
    else
      *(_DWORD *)(v1 + 4) = sub_6F867414;
    *(_DWORD *)(v1 + 48) = 0;
    if ( !*(_BYTE *)(v1 + 28) )
      result = sub_6F866C08(a1);
    if ( *(_DWORD *)(v1 + 52) )
      return result;
    v4 = *(_DWORD *)(a1 + 440);
    if ( *(_DWORD *)(a1 + 100) <= 0 )
      return result;
    v19 = 0;
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 4 * v19 + 32);
      if ( v19 )
      {
        if ( v5 == *(_DWORD *)(v4 + 32) )
        {
          v6 = 0;
LABEL_36:
          v16 = *(_DWORD *)(v4 + 4 * v6 + 52);
          if ( v16 )
            goto LABEL_25;
        }
        else
        {
          v6 = 0;
          while ( ++v6 < v19 )
          {
            if ( v5 == *(_DWORD *)(v4 + 4 * v6 + 32) )
              goto LABEL_36;
          }
        }
      }
      v16 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 1024);
      v7 = v16;
      v17 = 0;
      v15 = v4;
      v8 = (v5 - 1) << 9;
      do
      {
        v9 = (char *)&unk_6FB9DF80 + 16 * v17;
        v10 = 0;
        do
          *(_DWORD *)(v7 + 4 * v10++) = (-510 * (unsigned __int8)*v9++ + 65025) / v8;
        while ( v10 != 16 );
        ++v17;
        v7 += 64;
      }
      while ( v17 != 16 );
      v4 = v15;
LABEL_25:
      *(_DWORD *)(v4 + 4 * v19 + 52) = v16;
      result = v19 + 1;
      v19 = result;
      if ( result >= *(_DWORD *)(a1 + 100) )
        return result;
    }
  }
  if ( (unsigned int)result < 1 )
  {
    if ( *(_DWORD *)(a1 + 100) == 3 )
      *(_DWORD *)(v1 + 4) = sub_6F866E30;
    else
      *(_DWORD *)(v1 + 4) = sub_6F866D94;
  }
  else
  {
    if ( result != 2 )
    {
      v3 = *(_DWORD *)a1;
      *(_DWORD *)(v3 + 20) = 49;
      return (*(int (__cdecl **)(int))v3)(a1);
    }
    *(_DWORD *)(v1 + 4) = sub_6F86723C;
    *(_BYTE *)(v1 + 84) = 0;
    if ( *(_DWORD *)(v1 + 68) )
    {
      result = *(_DWORD *)(a1 + 100);
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 440);
      result = 2 * *(_DWORD *)(a1 + 92) + 4;
      if ( *(_DWORD *)(a1 + 100) <= 0 )
        return result;
      v13 = 0;
      v18 = v1;
      v14 = 2 * *(_DWORD *)(a1 + 92) + 4;
      do
      {
        *(_DWORD *)(v21 + 4 * v13++ + 68) = (*(int (__cdecl **)(int, signed int, int))(*(_DWORD *)(a1 + 4) + 4))(
                                              a1,
                                              1,
                                              v14);
        result = *(_DWORD *)(a1 + 100);
      }
      while ( v13 < result );
      v1 = v18;
    }
    v20 = 2 * *(_DWORD *)(a1 + 92) + 4;
    if ( result > 0 )
    {
      result = 0;
      v11 = v1;
      v12 = 0;
      do
        memset(*(void **)(v11 + 4 * v12++ + 68), 0, v20);
      while ( *(_DWORD *)(a1 + 100) > v12 );
    }
  }
  return result;
}
