_BYTE *__cdecl sub_6F7B7C50(int a1, int a2)
{
  unsigned int v2; // edi@1
  int (__cdecl ***v3)(_DWORD, _DWORD, _DWORD); // esi@1
  _BYTE *result; // eax@1
  _BYTE *v5; // ebp@1
  char v6; // al@2
  signed int v7; // edi@4
  bool v8; // zf@7
  const char *v9; // edi@8
  signed int v10; // ecx@8
  _BYTE *v11; // esi@8
  bool v12; // zf@13
  bool v13; // zf@14
  const char *v14; // edi@15
  signed int v15; // ecx@15
  _BYTE *v16; // esi@15
  const char *v17; // edi@21
  signed int v18; // ecx@21
  _BYTE *v19; // esi@21
  int v20; // ebp@32
  int v21; // ST04_4@33
  _BYTE *v22; // eax@35
  unsigned int v23; // edi@36
  _BYTE *v24; // esi@36
  int v25; // edx@37
  int v26; // ebp@41
  unsigned __int8 v27; // dl@54
  unsigned __int8 v28; // cl@57
  _BYTE *v29; // edx@67
  int v30; // ecx@71
  _BYTE *v31; // [sp+2Ch] [bp-40h]@1
  char v32; // [sp+2Ch] [bp-40h]@54
  unsigned __int8 v33; // [sp+2Ch] [bp-40h]@57
  int v34; // [sp+2Ch] [bp-40h]@69
  int v35; // [sp+30h] [bp-3Ch]@3
  _BYTE *v36; // [sp+30h] [bp-3Ch]@32
  _BYTE *v37; // [sp+30h] [bp-3Ch]@36
  signed int v38; // [sp+34h] [bp-38h]@36
  int v39; // [sp+38h] [bp-34h]@30
  bool v40; // [sp+3Dh] [bp-2Fh]@2
  char v41; // [sp+3Eh] [bp-2Eh]@4
  char v42; // [sp+3Fh] [bp-2Dh]@56
  _BYTE *v43; // [sp+4Ch] [bp-20h]@26

  v2 = *(_DWORD *)(a2 + 8);
  v31 = *(_BYTE **)(a2 + 8);
  v3 = *(int (__cdecl ****)(_DWORD, _DWORD, _DWORD))(a1 + 488);
  result = (_BYTE *)(*(int (__cdecl **)(int))(a2 + 28))(a2);
  v5 = *(_BYTE **)a2;
  if ( v2 <= *(_DWORD *)a2 )
  {
    *(_DWORD *)(a2 + 12) = 3;
    return result;
  }
  v6 = *v5;
  v40 = v6 == 91 || (unsigned __int8)(v6 - 48) <= 9u;
  if ( v40 )
  {
    v35 = *(_DWORD *)(a2 + 16);
    if ( v6 == 91 )
    {
      v41 = 1;
      v7 = 256;
      *(_DWORD *)a2 = v5 + 1;
    }
    else
    {
      v41 = 0;
      v7 = (*(int (__cdecl **)(int))(a2 + 36))(a2);
    }
    (*(void (__cdecl **)(int))(a2 + 28))(a2);
    result = v31;
    if ( (unsigned int)v31 <= *(_DWORD *)a2 )
      return result;
    *(_DWORD *)(a1 + 372) = v7;
    *(_DWORD *)(a2 + 96) = v7;
    *(_DWORD *)(a1 + 384) = sub_6F773B30(v35, 2, 0, v7, 0, (signed int *)&v43);
    result = v43;
    if ( v43
      || (*(_DWORD *)(a1 + 388) = sub_6F773B30(v35, 4, 0, v7, 0, (signed int *)&v43), (result = v43) != 0)
      || (v39 = a2 + 100, result = (_BYTE *)(**v3)(a2 + 100, v7, v35), (v43 = result) != 0) )
    {
      *(_DWORD *)(a2 + 12) = result;
      return result;
    }
    if ( v7 > 0 )
    {
      v36 = v5;
      v20 = 0;
      do
      {
        v21 = v20++;
        (*(void (__cdecl **)(int, int, const char *, signed int))(a2 + 144))(v39, v21, ".notdef", 8);
      }
      while ( v7 != v20 );
      v5 = v36;
    }
    (*(void (__cdecl **)(int))(a2 + 28))(a2);
    v22 = *(_BYTE **)a2;
    if ( (unsigned int)v31 > *(_DWORD *)a2 )
    {
      v38 = v7;
      v23 = (unsigned int)v31;
      v24 = *(_BYTE **)a2;
      v37 = 0;
      while ( 1 )
      {
        v25 = *v24;
        if ( (_BYTE)v25 == 100 )
          break;
        if ( (_BYTE)v25 == 93 )
        {
          v30 = (int)(v24 + 1);
          goto LABEL_72;
        }
        if ( (unsigned int)(v25 - 48) > 9 )
          goto LABEL_60;
        if ( !v41 )
        {
          v26 = (*(int (__cdecl **)(int))(a2 + 36))(a2);
          (*(void (__cdecl **)(int))(a2 + 28))(a2);
          result = *(_BYTE **)a2;
          if ( *(_BYTE **)a2 == v24 )
            goto LABEL_50;
          if ( v23 <= (unsigned int)(result + 2) || *result != 47 || v38 <= (signed int)v37 )
          {
            v24 = *(_BYTE **)a2;
            goto LABEL_44;
          }
          v24 = *(_BYTE **)a2;
LABEL_67:
          *(_DWORD *)a2 = ++v24;
          result = (_BYTE *)(*(int (__cdecl **)(int))(a2 + 32))(a2);
          v29 = *(_BYTE **)a2;
          if ( v23 <= *(_DWORD *)a2 )
            return result;
          if ( *(_DWORD *)(a2 + 12) )
            return result;
          v34 = v29 - v24;
          result = (_BYTE *)(*(int (__cdecl **)(int, int, _BYTE *, int))(a2 + 144))(v39, v26, v24, v29 - v24 + 1);
          *(_DWORD *)(a2 + 12) = result;
          if ( result )
            return result;
          ++v37;
          *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 124) + 4 * v26) + v34) = 0;
          goto LABEL_44;
        }
LABEL_46:
        result = v22 + 2;
        if ( v23 <= (unsigned int)result )
          goto LABEL_50;
        if ( *v24 == 47 )
        {
          result = v37;
          v26 = (int)v37;
          if ( v38 > (signed int)v37 )
            goto LABEL_67;
        }
        if ( v41 )
        {
LABEL_50:
          *(_DWORD *)(a2 + 12) = 2;
          return result;
        }
LABEL_44:
        (*(void (__cdecl **)(int))(a2 + 28))(a2);
        v22 = *(_BYTE **)a2;
        if ( v23 <= *(_DWORD *)a2 )
        {
          v30 = (int)v24;
          goto LABEL_72;
        }
        v24 = *(_BYTE **)a2;
      }
      v5 = v24 + 3;
      if ( v23 > (unsigned int)(v24 + 3) && v24[1] == 101 && v24[2] == 102 )
      {
        v27 = v40;
        v32 = v24[3];
        if ( (unsigned __int8)(v32 - 9) <= 0x1Cu )
          v27 = ((0x1000001Bu >> (v32 - 9)) & 1 ^ 1) & 1;
        v42 = v32 & 0xDF;
        if ( ((v32 & 0xDF) == 0) >= v27 )
          goto LABEL_74;
        v28 = v32 - 40;
        v33 = v40;
        if ( v28 <= 0x16u )
          v33 = ((0x500083u >> v28) & 1 ^ 1) & 1;
        if ( (((v42 - 91) & 0xFD) == 0) >= v33 )
          goto LABEL_74;
      }
LABEL_60:
      if ( !v41 )
      {
        (*(void (__cdecl **)(int))(a2 + 32))(a2);
        result = *(_BYTE **)(a2 + 12);
        if ( result )
          return result;
        goto LABEL_44;
      }
      goto LABEL_46;
    }
LABEL_74:
    v30 = (int)v5;
LABEL_72:
    result = (_BYTE *)a1;
    *(_DWORD *)(a1 + 368) = 1;
    *(_DWORD *)a2 = v30;
  }
  else
  {
    v8 = v31 == v5 + 17;
    if ( v31 <= v5 + 17 )
      goto LABEL_77;
    v9 = "StandardEncoding";
    v10 = 16;
    v11 = *(_BYTE **)a2;
    do
    {
      if ( !v10 )
        break;
      v8 = *v11++ == *v9++;
      --v10;
    }
    while ( v8 );
    if ( v8 )
    {
      result = (_BYTE *)a1;
      *(_DWORD *)(a1 + 368) = 2;
    }
    else
    {
LABEL_77:
      v12 = v31 == v5 + 15;
      if ( v31 <= v5 + 15 )
        goto LABEL_78;
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
LABEL_78:
        result = v5 + 18;
        v13 = v31 == v5 + 18;
        if ( v31 <= v5 + 18 )
          goto LABEL_79;
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
LABEL_79:
          *(_DWORD *)(a2 + 12) = 162;
        }
      }
    }
  }
  return result;
}
