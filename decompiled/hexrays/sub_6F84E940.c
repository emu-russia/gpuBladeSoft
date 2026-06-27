char *__cdecl sub_6F84E940(int a1, void *a2, int a3)
{
  unsigned int v3; // eax@5
  int v4; // eax@13
  char *result; // eax@24
  signed int v6; // eax@30
  signed int v7; // edx@32
  int v8; // eax@34
  signed int v9; // eax@37
  signed int v10; // edx@39
  signed int v11; // eax@46
  signed int v12; // edx@48
  int v13; // eax@50
  signed int v14; // eax@53
  signed int v15; // edx@55
  int v16; // eax@59
  char *v17; // eax@92
  _DWORD *v18; // edx@92
  char *v19; // edx@96
  char *v20; // eax@100
  _WORD *v21; // edx@100
  char *v22; // edx@104
  unsigned int v23; // eax@111
  int v24; // eax@115
  int v25; // edx@115
  unsigned int v26; // [sp+1Ch] [bp-5Ch]@98
  unsigned int v27; // [sp+20h] [bp-58h]@90
  unsigned int v28; // [sp+24h] [bp-54h]@71
  unsigned __int8 v29; // [sp+2Ch] [bp-4Ch]@59
  unsigned int v30; // [sp+30h] [bp-48h]@26
  unsigned int v31; // [sp+34h] [bp-44h]@1
  unsigned int v32; // [sp+38h] [bp-40h]@1
  unsigned int v33; // [sp+38h] [bp-40h]@67
  size_t v34; // [sp+3Ch] [bp-3Ch]@99
  _WORD *v35; // [sp+40h] [bp-38h]@98
  char *v36; // [sp+44h] [bp-34h]@98
  size_t v37; // [sp+48h] [bp-30h]@91
  _DWORD *v38; // [sp+4Ch] [bp-2Ch]@90
  char *v39; // [sp+50h] [bp-28h]@90
  size_t v40; // [sp+54h] [bp-24h]@68
  int v41; // [sp+58h] [bp-20h]@42
  int v42; // [sp+5Ch] [bp-1Ch]@11
  char v43; // [sp+63h] [bp-15h]@1
  char *v44; // [sp+64h] [bp-14h]@1
  char *v45; // [sp+68h] [bp-10h]@1
  char *v46; // [sp+68h] [bp-10h]@67
  const void *v47; // [sp+6Ch] [bp-Ch]@1
  int v48; // [sp+6Ch] [bp-Ch]@67
  char *v49; // [sp+6Ch] [bp-Ch]@95
  char *v50; // [sp+6Ch] [bp-Ch]@103
  char *v51; // [sp+84h] [bp+Ch]@67
  char *v52; // [sp+84h] [bp+Ch]@95
  char *v53; // [sp+84h] [bp+Ch]@103

  v32 = *(_BYTE *)(a1 + 351);
  v47 = (const void *)(*(_DWORD *)(a1 + 292) + 1);
  v45 = *(char **)(a1 + 256);
  v31 = *(_BYTE *)(a1 + 341);
  v44 = 0;
  v43 = 0;
  if ( !*(_BYTE *)(a1 + 351) )
    sub_6F839044(a1, (int)"internal row logic error");
  if ( *(_DWORD *)(a1 + 312) )
  {
    v3 = v32 <= 7 ? (v32 * (unsigned int)v45 + 7) >> 3 : (_DWORD)v45 * (v32 >> 3);
    if ( *(_DWORD *)(a1 + 312) != v3 )
      sub_6F839044(a1, (int)"internal row size calculation error");
  }
  if ( !v45 )
    sub_6F839044(a1, (int)"internal row width error");
  v42 = (_BYTE)v45 * (_BYTE)v32 & 7;
  if ( (_BYTE)v45 * (_BYTE)v32 & 7 )
  {
    if ( v32 <= 7 )
      v4 = ((v32 * (unsigned int)v45 + 7) >> 3) - 1;
    else
      v4 = (_DWORD)v45 * (v32 >> 3) - 1;
    v44 = (char *)a2 + v4;
    v43 = *((_BYTE *)a2 + v4);
    if ( *(_DWORD *)(a1 + 124) & 0x10000 )
      v42 = 255 << v42;
    else
      v42 = 255 >> v42;
  }
  if ( !*(_BYTE *)(a1 + 340) || !(*(_DWORD *)(a1 + 124) & 2) || v31 > 5 || a3 && (a3 != 1 || !(v31 & 1)) )
  {
    if ( v32 <= 7 )
      v23 = (v32 * (unsigned int)v45 + 7) >> 3;
    else
      v23 = (_DWORD)v45 * (v32 >> 3);
    result = (char *)memcpy(a2, v47, v23);
LABEL_114:
    if ( v44 )
    {
      v24 = v42;
      LOBYTE(v24) = v43 & v42;
      v25 = ~v42 & (unsigned __int8)*v44 | v24;
      result = v44;
      *v44 = v25;
    }
    return result;
  }
  result = (char *)(((v31 & 1) << (3 - ((v31 + 1) >> 1))) & 7);
  if ( result >= v45 )
    return result;
  if ( v32 <= 7 )
  {
    v30 = 8 / v32;
    if ( *(_DWORD *)(a1 + 124) & 0x10000 )
    {
      if ( a3 )
      {
        if ( v32 == 1 )
        {
          v7 = 0;
        }
        else
        {
          if ( v32 == 2 )
            v6 = 1;
          else
            v6 = 2;
          v7 = v6;
        }
        v8 = dword_6FB9AD40[(v31 >> 1) + 3 * v7];
      }
      else
      {
        if ( v32 == 1 )
        {
          v10 = 0;
        }
        else
        {
          if ( v32 == 2 )
            v9 = 1;
          else
            v9 = 2;
          v10 = v9;
        }
        v8 = dword_6FB9ADA0[v31 + 6 * v10];
      }
      v41 = v8;
    }
    else
    {
      if ( a3 )
      {
        if ( v32 == 1 )
        {
          v12 = 0;
        }
        else
        {
          if ( v32 == 2 )
            v11 = 1;
          else
            v11 = 2;
          v12 = v11;
        }
        v13 = dword_6FB9AD40[(v31 >> 1) + 3 * v12 + 9];
      }
      else
      {
        if ( v32 == 1 )
        {
          v15 = 0;
        }
        else
        {
          if ( v32 == 2 )
            v14 = 1;
          else
            v14 = 2;
          v15 = v14;
        }
        v13 = dword_6FB9ADA0[v31 + 6 * v15 + 18];
      }
      v41 = v13;
    }
    while ( 1 )
    {
      v29 = v41;
      v16 = __ROR4__(v41, 8);
      v41 = v16;
      if ( v29 )
      {
        if ( v29 == 255 )
          *(_BYTE *)a2 = *(_BYTE *)v47;
        else
          *(_BYTE *)a2 = *(_BYTE *)v47 & v29 | ~v29 & *(_BYTE *)a2;
      }
      result = v45;
      if ( (unsigned int)v45 <= v30 )
        break;
      v45 -= v30;
      a2 = (char *)a2 + 1;
      v47 = (char *)v47 + 1;
    }
    goto LABEL_114;
  }
  if ( v32 & 7 )
    sub_6F839044(a1, (int)"invalid user transform pixel depth");
  v33 = v32 >> 3;
  v46 = (char *)(v33 * (_DWORD)v45 - v33 * (((v31 & 1) << (3 - ((v31 + 1) >> 1))) & 7));
  v51 = (char *)a2 + v33 * (((v31 & 1) << (3 - ((v31 + 1) >> 1))) & 7);
  v48 = (int)v47 + v33 * (((v31 & 1) << (3 - ((v31 + 1) >> 1))) & 7);
  if ( a3 )
  {
    v40 = v33 << ((6 - v31) >> 1);
    if ( v40 > (unsigned int)v46 )
      v40 = (size_t)v46;
  }
  else
  {
    v40 = v33;
  }
  v28 = v33 << ((7 - v31) >> 1);
  switch ( v40 )
  {
    case 2u:
      while ( 1 )
      {
        *v51 = *(_BYTE *)v48;
        v51[1] = *(_BYTE *)(v48 + 1);
        result = v46;
        if ( (unsigned int)v46 <= v28 )
          break;
        v48 += v28;
        v51 += v28;
        v46 -= v28;
        if ( (unsigned int)v46 <= 1 )
        {
          result = v51;
          *v51 = *(_BYTE *)v48;
          return result;
        }
      }
      break;
    case 3u:
      while ( 1 )
      {
        *v51 = *(_BYTE *)v48;
        v51[1] = *(_BYTE *)(v48 + 1);
        v51[2] = *(_BYTE *)(v48 + 2);
        result = v46;
        if ( (unsigned int)v46 <= v28 )
          break;
        v48 += v28;
        v51 += v28;
        v46 -= v28;
      }
      break;
    case 1u:
      while ( 1 )
      {
        *v51 = *(_BYTE *)v48;
        result = v46;
        if ( (unsigned int)v46 <= v28 )
          break;
        v51 += v28;
        v48 += v28;
        v46 -= v28;
      }
      break;
    default:
      if ( v40 > 0xF || (unsigned __int8)v51 & 1 || v48 & 1 || v40 & 1 || v28 & 1 )
      {
        while ( 1 )
        {
          memcpy(v51, (const void *)v48, v40);
          result = v46;
          if ( (unsigned int)v46 <= v28 )
            break;
          v48 += v28;
          v51 += v28;
          v46 -= v28;
          if ( v40 > (unsigned int)v46 )
            v40 = (size_t)v46;
        }
      }
      else if ( (unsigned __int8)v51 & 3 || v48 & 3 || v40 & 3 || v28 & 3 )
      {
        v36 = v51;
        v35 = (_WORD *)v48;
        v26 = (v28 - v40) >> 1;
        while ( 1 )
        {
          v34 = v40;
          do
          {
            v20 = v36;
            v36 += 2;
            v21 = v35;
            ++v35;
            *(_WORD *)v20 = *v21;
            v34 -= 2;
          }
          while ( v34 );
          result = v46;
          if ( (unsigned int)v46 <= v28 )
            break;
          v36 += 2 * v26;
          v35 += v26;
          v46 -= v28;
          if ( v40 > (unsigned int)v46 )
          {
            v53 = v36;
            v50 = (char *)v35;
            do
            {
              result = v53++;
              v22 = v50++;
              *result = *v22;
              --v46;
            }
            while ( v46 );
            return result;
          }
        }
      }
      else
      {
        v39 = v51;
        v38 = (_DWORD *)v48;
        v27 = (v28 - v40) >> 2;
        while ( 1 )
        {
          v37 = v40;
          do
          {
            v17 = v39;
            v39 += 4;
            v18 = v38;
            ++v38;
            *(_DWORD *)v17 = *v18;
            v37 -= 4;
          }
          while ( v37 );
          result = v46;
          if ( (unsigned int)v46 <= v28 )
            break;
          v39 += 4 * v27;
          v38 += v27;
          v46 -= v28;
          if ( v40 > (unsigned int)v46 )
          {
            v52 = v39;
            v49 = (char *)v38;
            do
            {
              result = v52++;
              v19 = v49++;
              *result = *v19;
              --v46;
            }
            while ( v46 );
            return result;
          }
        }
      }
      break;
  }
  return result;
}
