_BYTE *__cdecl sub_6F7BAC80(int a1, int a2)
{
  _BYTE *result; // eax@3
  _BYTE *v3; // esi@6
  unsigned int v4; // eax@6
  bool v5; // zf@6
  const char *v6; // edi@7
  signed int v7; // ecx@7
  unsigned int v8; // esi@11
  int v9; // edi@11
  int v10; // esi@17
  _BYTE *v11; // esi@19
  unsigned int v12; // eax@19
  bool v13; // zf@19
  const char *v14; // edi@20
  signed int v15; // ecx@20
  unsigned int v16; // eax@26
  void *v17; // esi@28
  int v18; // [sp+14h] [bp-48h]@11
  int v19; // [sp+18h] [bp-44h]@1
  int v20; // [sp+1Ch] [bp-40h]@1
  int v21; // [sp+20h] [bp-3Ch]@15
  int v22; // [sp+24h] [bp-38h]@5
  const void *v23; // [sp+28h] [bp-34h]@16
  _BYTE *v24; // [sp+2Ch] [bp-30h]@3
  _BYTE *v25; // [sp+3Ch] [bp-20h]@28

  v19 = *(_DWORD *)(a2 + 16);
  v20 = *(_DWORD *)(a1 + 488);
  (*(void (__cdecl **)(int))(a2 + 28))(a2);
  if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 8) || **(_BYTE **)a2 != 91 )
  {
    v24 = (_BYTE *)(*(int (__cdecl **)(int))(a2 + 36))(a2);
    (*(void (__cdecl **)(int))(a2 + 32))(a2);
    result = *(_BYTE **)(a2 + 12);
    if ( result )
      return result;
    v22 = a2 + 316;
    (*(void (__cdecl **)(int))(a2 + 28))(a2);
    if ( !*(_DWORD *)(a2 + 312) )
    {
      result = (_BYTE *)(**(int (__cdecl ***)(int, _BYTE *, int))v20)(a2 + 316, v24, v19);
      v25 = result;
      goto LABEL_30;
    }
    while ( 1 )
    {
      v3 = *(_BYTE **)a2;
      v4 = *(_DWORD *)a2 + 4;
      v5 = *(_DWORD *)(a2 + 8) == v4;
      if ( *(_DWORD *)(a2 + 8) <= v4 )
        goto LABEL_42;
      v6 = "dup";
      v7 = 3;
      do
      {
        if ( !v7 )
          break;
        v5 = *v3++ == *v6++;
        --v7;
      }
      while ( v5 );
      if ( !v5 )
      {
LABEL_42:
        result = *(_BYTE **)(a2 + 312);
        if ( !result )
        {
          result = v24;
          *(_DWORD *)(a2 + 312) = v24;
        }
        return result;
      }
      (*(void (__cdecl **)(int))(a2 + 32))(a2);
      v18 = (*(int (__cdecl **)(int))(a2 + 36))(a2);
      v8 = *(_DWORD *)(a2 + 8);
      v9 = *(_DWORD *)(*(_DWORD *)(a1 + 128) + 48);
      (*(void (__cdecl **)(int))(a2 + 28))(a2);
      result = *(_BYTE **)a2;
      if ( v8 <= *(_DWORD *)a2 )
        break;
      result = (_BYTE *)(*result - 48);
      if ( (unsigned int)result > 9 )
        break;
      v21 = (*(int (__cdecl **)(int))(a2 + 36))(a2);
      result = (_BYTE *)(*(int (__cdecl **)(int))(a2 + 32))(a2);
      if ( v21 < 0 )
        break;
      result = *(_BYTE **)a2;
      v23 = (const void *)(*(_DWORD *)a2 + 1);
      if ( v21 >= (signed int)(v8 - (_DWORD)v23) )
        break;
      v10 = *(_DWORD *)(a2 + 12);
      result += v21 + 1;
      *(_DWORD *)a2 = result;
      if ( v10 )
        return result;
      result = (_BYTE *)(*(int (__cdecl **)(int))(a2 + 32))(a2);
      if ( *(_DWORD *)(a2 + 12) )
        return result;
      (*(void (__cdecl **)(int))(a2 + 28))(a2);
      v11 = *(_BYTE **)a2;
      v12 = *(_DWORD *)a2 + 4;
      v13 = *(_DWORD *)(a2 + 8) == v12;
      if ( *(_DWORD *)(a2 + 8) > v12 )
      {
        v14 = "put";
        v15 = 3;
        do
        {
          if ( !v15 )
            break;
          v13 = *v11++ == *v14++;
          --v15;
        }
        while ( v13 );
        if ( v13 )
        {
          (*(void (__cdecl **)(int))(a2 + 32))(a2);
          (*(void (__cdecl **)(int))(a2 + 28))(a2);
        }
      }
      if ( !*(_DWORD *)(a2 + 312) )
      {
        v16 = *(_DWORD *)(a1 + 172);
        if ( (v16 & 0x80000000) != 0 )
        {
          result = (_BYTE *)(*(int (__cdecl **)(int, int, const void *, int))(a2 + 360))(v22, v18, v23, v21);
          v25 = result;
        }
        else
        {
          if ( v16 > v21 )
          {
            result = (_BYTE *)3;
LABEL_31:
            *(_DWORD *)(a2 + 12) = result;
            return result;
          }
          v17 = sub_6F773A50(v19, v21, (signed int *)&v25);
          result = v25;
          if ( v25 )
            goto LABEL_31;
          memcpy(v17, v23, v21);
          (*(void (__cdecl **)(void *, int, signed int))(v20 + 16))(v17, v21, 4330);
          v25 = (_BYTE *)(*(int (__cdecl **)(int, int, int, int))(a2 + 360))(
                           v22,
                           v18,
                           (int)v17 + *(_DWORD *)(a1 + 172),
                           v21 - *(_DWORD *)(a1 + 172));
          sub_6F773D90(v19, (int)v17);
          result = v25;
        }
LABEL_30:
        if ( result )
          goto LABEL_31;
      }
    }
    if ( v9 )
      return result;
LABEL_14:
    *(_DWORD *)(a2 + 12) = 3;
    return result;
  }
  (*(void (__cdecl **)(int))(a2 + 32))(a2);
  (*(void (__cdecl **)(int))(a2 + 28))(a2);
  result = *(_BYTE **)a2;
  if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 8) || *result != 93 )
    goto LABEL_14;
  return result;
}
