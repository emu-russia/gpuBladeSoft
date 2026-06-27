_BYTE *__cdecl sub_6F7BE330(int a1, int a2)
{
  unsigned int v2; // edi@1
  int (__cdecl ***v3)(_DWORD, _DWORD, _DWORD); // esi@1
  _BYTE *result; // eax@1
  int v5; // ebp@1
  char v6; // al@2
  bool v7; // zf@4
  const char *v8; // edi@5
  signed int v9; // ecx@5
  _BYTE *v10; // esi@5
  signed int v11; // edi@12
  bool v12; // zf@16
  bool v13; // zf@17
  const char *v14; // edi@18
  signed int v15; // ecx@18
  _BYTE *v16; // esi@18
  const char *v17; // edi@24
  signed int v18; // ecx@24
  _BYTE *v19; // esi@24
  int v20; // ebp@33
  int v21; // ST04_4@34
  int v22; // esi@36
  unsigned int v23; // edi@37
  int v24; // esi@41
  int v25; // eax@44
  int v26; // edx@57
  _BYTE *v27; // [sp+2Ch] [bp-40h]@1
  int v28; // [sp+2Ch] [bp-40h]@59
  int v29; // [sp+30h] [bp-3Ch]@11
  int v30; // [sp+30h] [bp-3Ch]@33
  _BYTE *v31; // [sp+30h] [bp-3Ch]@37
  char v32; // [sp+37h] [bp-35h]@12
  signed int v33; // [sp+38h] [bp-34h]@37
  int v34; // [sp+3Ch] [bp-30h]@31
  _BYTE *v35; // [sp+4Ch] [bp-20h]@14

  v2 = *(_DWORD *)(a2 + 8);
  v27 = *(_BYTE **)(a2 + 8);
  v3 = *(int (__cdecl ****)(_DWORD, _DWORD, _DWORD))(a1 + 488);
  result = (_BYTE *)(*(int (__cdecl **)(int))(a2 + 28))(a2);
  v5 = *(_DWORD *)a2;
  if ( v2 <= *(_DWORD *)a2 )
  {
    *(_DWORD *)(a2 + 12) = 3;
    return result;
  }
  v6 = *(_BYTE *)v5;
  if ( (unsigned __int8)(*(_BYTE *)v5 - 48) <= 9u || v6 == 91 )
  {
    v29 = *(_DWORD *)(a2 + 16);
    if ( v6 == 91 )
    {
      v32 = 1;
      v11 = 256;
      *(_DWORD *)a2 = v5 + 1;
    }
    else
    {
      v32 = 0;
      v11 = (*(int (__cdecl **)(int))(a2 + 36))(a2);
    }
    (*(void (__cdecl **)(int))(a2 + 28))(a2);
    result = v27;
    if ( (unsigned int)v27 <= *(_DWORD *)a2 )
      return result;
    *(_DWORD *)(a1 + 372) = v11;
    *(_DWORD *)(a2 + 88) = v11;
    *(_DWORD *)(a1 + 384) = sub_6F773B30(v29, 2, 0, v11, 0, (signed int *)&v35);
    result = v35;
    if ( v35
      || (*(_DWORD *)(a1 + 388) = sub_6F773B30(v29, 4, 0, v11, 0, (signed int *)&v35), (result = v35) != 0)
      || (v34 = a2 + 92, result = (_BYTE *)(**v3)(a2 + 92, v11, v29), (v35 = result) != 0) )
    {
      *(_DWORD *)(a2 + 12) = result;
      return result;
    }
    if ( v11 > 0 )
    {
      v30 = v5;
      v20 = 0;
      do
      {
        v21 = v20++;
        (*(void (__cdecl **)(int, int, const char *, signed int))(a2 + 136))(v34, v21, ".notdef", 8);
      }
      while ( v11 != v20 );
      v5 = v30;
    }
    (*(void (__cdecl **)(int))(a2 + 28))(a2);
    v22 = *(_DWORD *)a2;
    if ( (unsigned int)v27 <= *(_DWORD *)a2 )
    {
LABEL_64:
      result = (_BYTE *)a1;
      *(_DWORD *)(a1 + 368) = 1;
      *(_DWORD *)a2 = v5;
      return result;
    }
    v33 = v11;
    v5 = *(_DWORD *)a2;
    v31 = 0;
    v23 = (unsigned int)v27;
    while ( 1 )
    {
      v25 = *(_BYTE *)v22;
      if ( (_BYTE)v25 == 100 )
        break;
      if ( (_BYTE)v25 == 93 )
      {
        v5 = v22 + 1;
        goto LABEL_64;
      }
      if ( (unsigned int)(v25 - 48) > 9 )
        goto LABEL_47;
      if ( !v32 )
      {
        v24 = (*(int (__cdecl **)(int))(a2 + 36))(a2);
        (*(void (__cdecl **)(int))(a2 + 28))(a2);
        v5 = *(_DWORD *)a2;
        if ( v23 <= *(_DWORD *)a2 + 2 || *(_BYTE *)v5 != 47 || v33 <= (signed int)v31 )
          goto LABEL_42;
        goto LABEL_57;
      }
LABEL_48:
      result = (_BYTE *)(v22 + 2);
      if ( v23 <= v22 + 2 )
        goto LABEL_52;
      if ( *(_BYTE *)v22 == 47 )
      {
        result = v31;
        if ( v33 > (signed int)v31 )
        {
          v24 = (int)v31;
LABEL_57:
          *(_DWORD *)a2 = ++v5;
          result = (_BYTE *)(*(int (__cdecl **)(int))(a2 + 32))(a2);
          v26 = *(_DWORD *)a2;
          if ( v23 <= *(_DWORD *)a2 )
            return result;
          if ( *(_DWORD *)(a2 + 12) )
            return result;
          v28 = v26 - v5;
          result = (_BYTE *)(*(int (__cdecl **)(int, int, int, int))(a2 + 136))(v34, v24, v5, v26 - v5 + 1);
          *(_DWORD *)(a2 + 12) = result;
          if ( result )
            return result;
          ++v31;
          *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 116) + 4 * v24) + v28) = 0;
          goto LABEL_42;
        }
      }
      if ( v32 )
      {
LABEL_52:
        *(_DWORD *)(a2 + 12) = 2;
        return result;
      }
LABEL_42:
      (*(void (__cdecl **)(int))(a2 + 28))(a2);
      v22 = *(_DWORD *)a2;
      if ( v23 <= *(_DWORD *)a2 )
        goto LABEL_64;
      v5 = *(_DWORD *)a2;
    }
    if ( v23 > v22 + 3 && *(_BYTE *)(v22 + 1) == 101 && *(_BYTE *)(v22 + 2) == 102 && sub_6F96961C(*(_BYTE *)(v22 + 3)) )
    {
      v5 = v22 + 3;
      goto LABEL_64;
    }
LABEL_47:
    if ( !v32 )
    {
      (*(void (__cdecl **)(int))(a2 + 32))(a2);
      result = *(_BYTE **)(a2 + 12);
      if ( result )
        return result;
      goto LABEL_42;
    }
    goto LABEL_48;
  }
  v7 = v27 == (_BYTE *)(v5 + 17);
  if ( (unsigned int)v27 <= v5 + 17 )
    goto LABEL_71;
  v8 = "StandardEncoding";
  v9 = 16;
  v10 = *(_BYTE **)a2;
  do
  {
    if ( !v9 )
      break;
    v7 = *v10++ == *v8++;
    --v9;
  }
  while ( v7 );
  if ( v7 )
  {
    result = (_BYTE *)a1;
    *(_DWORD *)(a1 + 368) = 2;
  }
  else
  {
LABEL_71:
    v12 = v27 == (_BYTE *)(v5 + 15);
    if ( (unsigned int)v27 <= v5 + 15 )
      goto LABEL_72;
    v17 = "ExpertEncoding";
    v18 = 14;
    v19 = *(_BYTE **)a2;
    do
    {
      if ( !v18 )
        break;
      v12 = *v19++ == *v17++;
      --v18;
    }
    while ( v12 );
    if ( v12 )
    {
      result = (_BYTE *)a1;
      *(_DWORD *)(a1 + 368) = 4;
    }
    else
    {
LABEL_72:
      result = (_BYTE *)(v5 + 18);
      v13 = v27 == (_BYTE *)(v5 + 18);
      if ( (unsigned int)v27 <= v5 + 18 )
        goto LABEL_73;
      v14 = "ISOLatin1Encoding";
      v15 = 17;
      v16 = *(_BYTE **)a2;
      do
      {
        if ( !v15 )
          break;
        v13 = *v16++ == *v14++;
        --v15;
      }
      while ( v13 );
      if ( v13 )
      {
        result = (_BYTE *)a1;
        *(_DWORD *)(a1 + 368) = 3;
      }
      else
      {
LABEL_73:
        *(_DWORD *)(a2 + 12) = 162;
      }
    }
  }
  return result;
}
