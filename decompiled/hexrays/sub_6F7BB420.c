_BYTE *__cdecl sub_6F7BB420(int a1, int a2)
{
  unsigned int v2; // ebx@1
  _BYTE *result; // eax@1
  _BYTE *v4; // edi@5
  _BYTE *v5; // edi@7
  char v6; // dl@9
  unsigned __int8 v7; // al@9
  unsigned int v8; // eax@12
  _BYTE *v9; // esi@16
  bool v10; // zf@30
  _DWORD *v11; // eax@31
  int v12; // ecx@44
  _BYTE *v13; // eax@46
  _BYTE *v14; // esi@46
  int v15; // edi@46
  bool v16; // cf@47
  bool v17; // zf@47
  unsigned int v18; // eax@48
  void *v19; // esi@51
  signed int v20; // ecx@60
  const char *v21; // esi@60
  _BYTE *v22; // edi@60
  char v23; // cl@63
  int v24; // edx@63
  const char *v25; // esi@68
  signed int v26; // ecx@68
  _BYTE *v27; // edi@68
  int v28; // [sp+18h] [bp-64h]@1
  int v29; // [sp+1Ch] [bp-60h]@1
  unsigned int v30; // [sp+20h] [bp-5Ch]@20
  int v31; // [sp+24h] [bp-58h]@6
  int v32; // [sp+28h] [bp-54h]@20
  int v33; // [sp+2Ch] [bp-50h]@5
  int v34; // [sp+30h] [bp-4Ch]@5
  int v35; // [sp+34h] [bp-48h]@42
  int v36; // [sp+38h] [bp-44h]@6
  char v37; // [sp+3Fh] [bp-3Dh]@6
  int v38; // [sp+40h] [bp-3Ch]@6
  int v39; // [sp+44h] [bp-38h]@5
  const void *v40; // [sp+48h] [bp-34h]@43
  _BYTE *v41; // [sp+54h] [bp-28h]@31
  char v42; // [sp+5Bh] [bp-21h]@31
  char v43; // [sp+5Ch] [bp-20h]@31
  char v44; // [sp+5Dh] [bp-1Fh]@31
  char v45; // [sp+5Eh] [bp-1Eh]@31
  char v46; // [sp+5Fh] [bp-1Dh]@31

  v2 = *(_DWORD *)(a2 + 8);
  v28 = *(_DWORD *)(a2 + 16);
  v29 = *(_DWORD *)(a1 + 488);
  result = (_BYTE *)(*(int (__cdecl **)(int))(a2 + 36))(a2);
  if ( (signed int)result < 0 )
  {
LABEL_24:
    result = (_BYTE *)3;
    goto LABEL_25;
  }
  if ( result && !*(_DWORD *)(a2 + 12) )
  {
    v4 = result;
    v34 = a2 + 208;
    v33 = a2 + 156;
    v39 = a2 + 260;
    if ( !*(_DWORD *)(a2 + 152) )
    {
      result = (_BYTE *)(**(int (__cdecl ***)(int, _BYTE *, int))v29)(a2 + 208, result + 6, v28);
      v41 = result;
      if ( result )
        goto LABEL_25;
      result = (_BYTE *)(**(int (__cdecl ***)(int, _BYTE *, int))v29)(a2 + 156, v4 + 6, v28);
      v41 = result;
      if ( result )
        goto LABEL_25;
      result = (_BYTE *)(**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))v29)(a2 + 260, 4, v28);
      v41 = result;
      if ( result )
        goto LABEL_25;
    }
    v37 = 0;
    v38 = 0;
    v31 = 0;
    v36 = (int)(v4 + 4);
    while ( 1 )
    {
      (*(void (__cdecl **)(int))(a2 + 28))(a2);
      v5 = *(_BYTE **)a2;
      if ( v2 <= *(_DWORD *)a2 )
        break;
      if ( v2 > (unsigned int)(v5 + 3) )
      {
        v6 = v5[3];
        v7 = 1;
        if ( (unsigned __int8)(v6 - 9) <= 0x1Cu )
          v7 = ((0x1000001Bu >> (v6 - 9)) & 1 ^ 1) & 1;
        if ( ((v6 & 0xDF) == 0) >= v7 )
          goto LABEL_83;
        LOBYTE(v8) = 0;
        if ( (unsigned __int8)(v6 - 40) <= 0x16u )
          v8 = (0x500083u >> (v6 - 40)) & 1;
        if ( !(((v6 & 0xDF) - 91) & 0xFD) || (_BYTE)v8 )
        {
LABEL_83:
          if ( *v5 == 100 )
          {
            if ( v5[1] == 101 && v5[2] == 102 && v31 )
              break;
          }
          else if ( *v5 == 101 && v5[1] == 110 && v5[2] == 100 )
          {
            break;
          }
        }
      }
      (*(void (__cdecl **)(int))(a2 + 32))(a2);
      v9 = *(_BYTE **)a2;
      if ( v2 <= *(_DWORD *)a2 )
        goto LABEL_24;
      result = *(_BYTE **)(a2 + 12);
      if ( result )
        return result;
      if ( *v5 == 47 )
      {
        if ( v2 <= (unsigned int)(v5 + 2) )
          goto LABEL_24;
        v32 = *(_DWORD *)(*(_DWORD *)(a1 + 128) + 48);
        v30 = *(_DWORD *)(a2 + 8);
        (*(void (__cdecl **)(int))(a2 + 28))(a2);
        result = *(_BYTE **)a2;
        if ( v30 <= *(_DWORD *)a2
          || (result = (_BYTE *)(*result - 48), (unsigned int)result > 9)
          || (v35 = (*(int (__cdecl **)(int))(a2 + 36))(a2),
              result = (_BYTE *)(*(int (__cdecl **)(int))(a2 + 32))(a2),
              v35 < 0)
          || (v40 = (const void *)(*(_DWORD *)a2 + 1),
              result = (_BYTE *)(v30 - (_DWORD)v40),
              v35 >= (signed int)(v30 - (_DWORD)v40)) )
        {
          if ( !v32 )
            *(_DWORD *)(a2 + 12) = 3;
          return result;
        }
        result = (_BYTE *)(*(_DWORD *)a2 + v35 + 1);
        v12 = *(_DWORD *)(a2 + 12);
        *(_DWORD *)a2 = result;
        if ( v12 )
          return result;
        if ( !*(_DWORD *)(a2 + 152) )
        {
          v13 = v9;
          v14 = v5;
          v15 = v13 - (v5 + 1);
          result = (_BYTE *)(*(int (__cdecl **)(int, int, int, int))(a2 + 200))(v33, v31, (int)(v14 + 1), v15 + 1);
          v41 = result;
          if ( result )
            goto LABEL_25;
          *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 180) + 4 * v31) + v15) = 0;
          v16 = v14[1] < 0x2Eu;
          v17 = v14[1] == 46;
          if ( v14[1] == 46 )
          {
            v20 = 8;
            v21 = ".notdef";
            v22 = *(_BYTE **)(*(_DWORD *)(a2 + 180) + 4 * v31);
            do
            {
              if ( !v20 )
                break;
              v16 = (const unsigned __int8)*v21 < *v22;
              v17 = *v21++ == *v22++;
              --v20;
            }
            while ( v17 );
            v23 = v37;
            v24 = v38;
            if ( (!v16 && !v17) == v16 )
              v24 = v31;
            if ( (!v16 && !v17) == v16 )
              v23 = 1;
            v37 = v23;
            v38 = v24;
          }
          v18 = *(_DWORD *)(a1 + 172);
          if ( (v18 & 0x80000000) != 0 || v31 > v36 )
          {
            result = (_BYTE *)(*(int (__cdecl **)(int, int, const void *, int))(a2 + 252))(v34, v31, v40, v35);
            v41 = result;
          }
          else
          {
            if ( v18 >= v35 )
              goto LABEL_24;
            v19 = sub_6F773A50(v28, v35, (signed int *)&v41);
            result = v41;
            if ( v41 )
              goto LABEL_25;
            memcpy(v19, v40, v35);
            (*(void (__cdecl **)(void *, int, signed int))(v29 + 16))(v19, v35, 4330);
            v41 = (_BYTE *)(*(int (__cdecl **)(int, int, int, int))(a2 + 252))(
                             v34,
                             v31,
                             (int)v19 + *(_DWORD *)(a1 + 172),
                             v35 - *(_DWORD *)(a1 + 172));
            sub_6F773D90(v28, (int)v19);
            result = v41;
          }
          if ( result )
            goto LABEL_25;
          ++v31;
        }
      }
    }
    v10 = v37 == 0;
    *(_DWORD *)(a2 + 152) = v31;
    if ( !v37 )
    {
      v11 = *(_DWORD **)(a2 + 184);
      v42 = -117;
      v43 = -9;
      v44 = -31;
      v45 = 13;
      v46 = 14;
      result = (_BYTE *)(*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(a2 + 304))(
                          v39,
                          0,
                          **(_DWORD **)(a2 + 180),
                          *v11);
      v41 = result;
      if ( !result )
      {
        result = (_BYTE *)(*(int (__cdecl **)(int, signed int, _DWORD, _DWORD))(a2 + 304))(
                            v39,
                            1,
                            **(_DWORD **)(a2 + 232),
                            **(_DWORD **)(a2 + 236));
        v41 = result;
        if ( !result )
        {
          result = (_BYTE *)(*(int (__cdecl **)(int, _DWORD, const char *, signed int))(a2 + 200))(v33, 0, ".notdef", 8);
          v41 = result;
          if ( !result )
          {
            result = (_BYTE *)(*(int (__cdecl **)(int, _DWORD, char *, signed int))(a2 + 252))(v34, 0, &v42, 5);
            v41 = result;
            if ( !result )
            {
              result = (_BYTE *)(*(int (__cdecl **)(int, int, _DWORD, _DWORD))(a2 + 200))(
                                  v33,
                                  v31,
                                  **(_DWORD **)(a2 + 284),
                                  **(_DWORD **)(a2 + 288));
              v41 = result;
              if ( !result )
              {
                result = (_BYTE *)(*(int (__cdecl **)(int, int, _DWORD, _DWORD))(a2 + 252))(
                                    v34,
                                    v31,
                                    *(_DWORD *)(*(_DWORD *)(a2 + 284) + 4),
                                    *(_DWORD *)(*(_DWORD *)(a2 + 288) + 4));
                if ( !result )
                {
                  ++*(_DWORD *)(a2 + 152);
                  return result;
                }
              }
            }
          }
        }
      }
      goto LABEL_25;
    }
    v25 = ".notdef";
    v26 = 8;
    result = **(_BYTE ***)(a2 + 180);
    v27 = **(_BYTE ***)(a2 + 180);
    do
    {
      if ( !v26 )
        break;
      v10 = *v25++ == *v27++;
      --v26;
    }
    while ( v10 );
    if ( !v10 )
    {
      result = (_BYTE *)(*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(a2 + 304))(
                          v39,
                          0,
                          **(_DWORD **)(a2 + 180),
                          **(_DWORD **)(a2 + 184));
      v41 = result;
      if ( result
        || (result = (_BYTE *)(*(int (__cdecl **)(int, signed int, _DWORD, _DWORD))(a2 + 304))(
                                v39,
                                1,
                                **(_DWORD **)(a2 + 232),
                                **(_DWORD **)(a2 + 236)),
            (v41 = result) != 0)
        || (result = (_BYTE *)(*(int (__cdecl **)(int, signed int, _DWORD, _DWORD))(a2 + 304))(
                                v39,
                                2,
                                *(_DWORD *)(*(_DWORD *)(a2 + 180) + 4 * v38),
                                *(_DWORD *)(*(_DWORD *)(a2 + 184) + 4 * v38)),
            (v41 = result) != 0)
        || (result = (_BYTE *)(*(int (__cdecl **)(int, signed int, _DWORD, _DWORD))(a2 + 304))(
                                v39,
                                3,
                                *(_DWORD *)(*(_DWORD *)(a2 + 232) + 4 * v38),
                                *(_DWORD *)(*(_DWORD *)(a2 + 236) + 4 * v38)),
            (v41 = result) != 0)
        || (result = (_BYTE *)(*(int (__cdecl **)(int, int, _DWORD, _DWORD))(a2 + 200))(
                                v33,
                                v38,
                                **(_DWORD **)(a2 + 284),
                                **(_DWORD **)(a2 + 288)),
            (v41 = result) != 0)
        || (result = (_BYTE *)(*(int (__cdecl **)(int, int, _DWORD, _DWORD))(a2 + 252))(
                                v34,
                                v38,
                                *(_DWORD *)(*(_DWORD *)(a2 + 284) + 4),
                                *(_DWORD *)(*(_DWORD *)(a2 + 288) + 4)),
            (v41 = result) != 0)
        || (result = (_BYTE *)(*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(a2 + 200))(
                                v33,
                                0,
                                *(_DWORD *)(*(_DWORD *)(a2 + 284) + 8),
                                *(_DWORD *)(*(_DWORD *)(a2 + 288) + 8)),
            (v41 = result) != 0)
        || (result = (_BYTE *)(*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(a2 + 252))(
                                v34,
                                0,
                                *(_DWORD *)(*(_DWORD *)(a2 + 284) + 12),
                                *(_DWORD *)(*(_DWORD *)(a2 + 288) + 12))) != 0 )
      {
LABEL_25:
        *(_DWORD *)(a2 + 12) = result;
        return result;
      }
    }
  }
  return result;
}
