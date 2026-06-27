signed int __cdecl sub_6F788F80(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v5; // esi@1
  signed int result; // eax@5
  int v7; // eax@6
  _DWORD *v8; // edx@6
  int v9; // eax@6
  bool v10; // zf@7
  unsigned int v11; // eax@7
  int v12; // edi@8
  unsigned int v13; // ebx@8
  int v14; // eax@10
  unsigned int v15; // eax@16
  int v16; // edi@17
  unsigned int v17; // ebx@17
  int v18; // eax@19
  unsigned int v19; // esi@26
  unsigned int v20; // ebx@30
  int v21; // edi@33
  unsigned int v22; // ebx@33
  int v23; // eax@34
  int v24; // edi@37
  unsigned int v25; // ebx@37
  int i; // eax@39
  int v27; // [sp+24h] [bp-38h]@6
  unsigned int v28; // [sp+28h] [bp-34h]@7
  unsigned int v29; // [sp+28h] [bp-34h]@16
  char v30; // [sp+3Ch] [bp-20h]@27
  unsigned __int16 v31; // [sp+3Eh] [bp-1Eh]@27

  v5 = *(_DWORD *)(a1 + 84);
  if ( *(_BYTE *)(a1 + 8) & 8 )
  {
    if ( a4 & 0x10 )
    {
      if ( *(_BYTE *)(a1 + 292) )
      {
        if ( a3 )
        {
          v20 = a2;
          do
          {
            (*(void (__cdecl **)(int, signed int, unsigned int, char *, __int16 *))(*(_DWORD *)(a1 + 532) + 112))(
              a1,
              1,
              v20,
              &v30,
              (__int16 *)&v31);
            *(_DWORD *)(a5 - 4 * a2 + 4 * v20++) = v31;
          }
          while ( v20 != a3 + a2 );
        }
        return 0;
      }
    }
    else if ( *(_WORD *)(a1 + 250) )
    {
      if ( a3 )
      {
        v19 = a2;
        do
        {
          (*(void (__cdecl **)(int, _DWORD, unsigned int, char *, unsigned __int16 *))(*(_DWORD *)(a1 + 532) + 112))(
            a1,
            0,
            v19,
            &v30,
            &v31);
          *(_DWORD *)(a5 - 4 * a2 + 4 * v19++) = v31;
        }
        while ( v19 != a3 + a2 );
      }
      return 0;
    }
  }
  if ( !a3 )
    return 0;
  result = 37;
  if ( v5 )
  {
    v7 = a4;
    v8 = *(_DWORD **)(a1 + 88);
    BYTE1(v7) |= 1u;
    v27 = v7;
    v9 = a4 & 1;
    if ( a4 & 0x10 )
    {
      v10 = v9 == 0;
      v29 = a3 + a2;
      v15 = 4 * a2;
      if ( v10 )
      {
        v24 = a5 - v15;
        v25 = a2;
        if ( !v8 )
          goto LABEL_43;
LABEL_38:
        if ( *v8 == *(_DWORD *)(v5 + 4) )
        {
          for ( i = v27; ; i = a4 | 0x103 )
          {
            result = sub_6F787F00(v5, (int)v8, v25, i);
            if ( result )
              break;
            *(_DWORD *)(v24 + 4 * v25++) = *(_DWORD *)(v5 + 60);
            if ( v25 == v29 )
              return 0;
            v8 = *(_DWORD **)(a1 + 88);
            if ( v8 )
              goto LABEL_38;
LABEL_43:
            ;
          }
        }
        else
        {
LABEL_36:
          result = 35;
        }
      }
      else
      {
        v16 = a5 - v15;
        v17 = a2;
        while ( 1 )
        {
          v18 = v27;
          if ( !v8 )
            v18 = a4 | 0x103;
          result = sub_6F787F00(v5, 0, v17, v18);
          if ( result )
            break;
          *(_DWORD *)(v16 + 4 * v17++) = *(_DWORD *)(v5 + 60);
          if ( v29 == v17 )
            return 0;
          v8 = *(_DWORD **)(a1 + 88);
        }
      }
    }
    else
    {
      v10 = v9 == 0;
      v28 = a3 + a2;
      v11 = 4 * a2;
      if ( v10 )
      {
        v21 = a5 - v11;
        v22 = a2;
        while ( 1 )
        {
          v23 = a4 | 0x103;
          if ( v8 )
          {
            if ( *v8 != *(_DWORD *)(v5 + 4) )
              goto LABEL_36;
            v23 = v27;
          }
          result = sub_6F787F00(v5, (int)v8, v22, v23);
          if ( result )
            break;
          *(_DWORD *)(v21 + 4 * v22++) = *(_DWORD *)(v5 + 56);
          if ( v28 == v22 )
            return 0;
          v8 = *(_DWORD **)(a1 + 88);
        }
      }
      else
      {
        v12 = a5 - v11;
        v13 = a2;
        while ( 1 )
        {
          v14 = v27;
          if ( !v8 )
            v14 = a4 | 0x103;
          result = sub_6F787F00(v5, 0, v13, v14);
          if ( result )
            break;
          *(_DWORD *)(v12 + 4 * v13++) = *(_DWORD *)(v5 + 56);
          if ( v13 == v28 )
            return 0;
          v8 = *(_DWORD **)(a1 + 88);
        }
      }
    }
  }
  return result;
}
