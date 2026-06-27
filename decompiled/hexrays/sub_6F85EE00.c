int __cdecl sub_6F85EE00(int a1, char a2)
{
  signed int v2; // eax@2
  int v3; // edx@3
  signed int v4; // eax@7
  int v5; // eax@8
  int v6; // eax@10
  int v7; // edx@11
  signed int v8; // edx@12
  int v9; // esi@14
  int v10; // edi@15
  int v11; // eax@17
  signed int v12; // edx@18
  int v13; // eax@20
  int v14; // esi@26
  int v15; // ecx@28
  signed int i; // ecx@28
  signed int j; // edi@32
  int v18; // eax@47
  int v19; // eax@53
  int v20; // edx@53
  int v21; // esi@53
  int v22; // ecx@54
  int result; // eax@68
  int v24; // eax@13
  int v25; // edx@77
  int v26; // [sp+20h] [bp-38h]@1
  int v27; // [sp+28h] [bp-30h]@28
  int v28; // [sp+2Ch] [bp-2Ch]@32
  int v29; // [sp+30h] [bp-28h]@27
  int v30; // [sp+34h] [bp-24h]@28
  int v31; // [sp+34h] [bp-24h]@32
  int v32; // [sp+34h] [bp-24h]@52
  int v33; // [sp+38h] [bp-20h]@28
  signed int v34; // [sp+3Ch] [bp-1Ch]@12
  int v35; // [sp+3Ch] [bp-1Ch]@35
  const void *v36; // [sp+3Ch] [bp-1Ch]@53

  v26 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 32);
  *(_DWORD *)(a1 + 372) = v26;
  *(_DWORD *)v26 = sub_6F85E658;
  *(_DWORD *)(v26 + 4) = sub_6F85E3CC;
  *(_DWORD *)(v26 + 8) = sub_6F85E400;
  *(_BYTE *)(v26 + 13) = 0;
  if ( !a2 )
  {
    sub_6F85E834(a1);
    v2 = *(_DWORD *)(a1 + 360);
    if ( (unsigned int)(v2 - 1) <= 0xF )
      goto LABEL_5;
    goto LABEL_77;
  }
  v2 = *(_DWORD *)(a1 + 260);
  if ( v2 != *(_DWORD *)(a1 + 264) )
  {
    v3 = *(_DWORD *)a1;
    *(_DWORD *)(v3 + 20) = 7;
    *(_DWORD *)(v3 + 24) = v2;
    *(_DWORD *)(*(_DWORD *)a1 + 28) = *(_DWORD *)(a1 + 264);
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    v2 = *(_DWORD *)(a1 + 260);
  }
  *(_DWORD *)(a1 + 360) = v2;
  if ( (unsigned int)(v2 - 1) > 0xF )
  {
LABEL_77:
    v25 = *(_DWORD *)a1;
    *(_DWORD *)(v25 + 20) = 7;
    *(_DWORD *)(v25 + 24) = v2;
    *(_DWORD *)(*(_DWORD *)a1 + 28) = *(_DWORD *)(a1 + 360);
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    v2 = *(_DWORD *)(a1 + 360);
  }
LABEL_5:
  if ( (unsigned int)v2 <= 7 )
  {
    switch ( v2 )
    {
      default:
        goto LABEL_6;
      case 6:
        *(_DWORD *)(a1 + 364) = &unk_6FB9E2E0;
        break;
      case 3:
        *(_DWORD *)(a1 + 364) = &unk_6FB9E500;
        break;
      case 4:
        *(_DWORD *)(a1 + 364) = &unk_6FB9E480;
        break;
      case 7:
        *(_DWORD *)(a1 + 364) = &unk_6FB9E1C0;
        break;
      case 5:
        *(_DWORD *)(a1 + 364) = &unk_6FB9E3C0;
        break;
      case 2:
        *(_DWORD *)(a1 + 364) = &unk_6FB9E580;
        break;
    }
  }
  else
  {
LABEL_6:
    *(_DWORD *)(a1 + 364) = dword_6FB9E080;
    if ( v2 > 7 )
    {
      *(_DWORD *)(a1 + 368) = 63;
      v4 = *(_DWORD *)(a1 + 68);
      if ( !v4 )
        goto LABEL_8;
      goto LABEL_43;
    }
  }
  *(_DWORD *)(a1 + 368) = v2 * v2 - 1;
  v4 = *(_DWORD *)(a1 + 68);
  if ( !v4 )
    goto LABEL_8;
LABEL_43:
  if ( !*(_DWORD *)(a1 + 64) || *(_DWORD *)(a1 + 76) <= 0 || *(_DWORD *)(a1 + 36) <= 0 )
  {
LABEL_8:
    v5 = *(_DWORD *)a1;
    *(_DWORD *)(v5 + 20) = 33;
    (*(void (__cdecl **)(int))v5)(a1);
    if ( *(_DWORD *)(a1 + 68) <= 65500 )
      goto LABEL_9;
    goto LABEL_47;
  }
  if ( v4 <= 65500 )
  {
LABEL_9:
    if ( *(_DWORD *)(a1 + 64) <= 65500 )
      goto LABEL_10;
  }
LABEL_47:
  v18 = *(_DWORD *)a1;
  *(_DWORD *)(v18 + 20) = 42;
  *(_DWORD *)(v18 + 24) = 65500;
  (**(void (__cdecl ***)(_DWORD))a1)(a1);
LABEL_10:
  v6 = *(_DWORD *)(a1 + 72);
  if ( v6 != 8 )
  {
    v7 = *(_DWORD *)a1;
    *(_DWORD *)(v7 + 20) = 16;
    *(_DWORD *)(v7 + 24) = v6;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  v8 = *(_DWORD *)(a1 + 76);
  v34 = v8;
  if ( v8 > 10 )
  {
    v24 = *(_DWORD *)a1;
    *(_DWORD *)(v24 + 20) = 27;
    *(_DWORD *)(v24 + 24) = v8;
    *(_DWORD *)(*(_DWORD *)a1 + 28) = 10;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    v34 = *(_DWORD *)(a1 + 76);
  }
  *(_DWORD *)(a1 + 252) = 1;
  *(_DWORD *)(a1 + 256) = 1;
  v9 = *(_DWORD *)(a1 + 84);
  if ( v34 > 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v9 + 8);
      if ( (unsigned int)(v11 - 1) > 3 || (v12 = *(_DWORD *)(v9 + 12), v12 <= 0) || v12 > 4 )
      {
        v13 = *(_DWORD *)a1;
        *(_DWORD *)(v13 + 20) = 19;
        (*(void (__cdecl **)(int))v13)(a1);
        v11 = *(_DWORD *)(v9 + 8);
        v12 = *(_DWORD *)(v9 + 12);
        v34 = *(_DWORD *)(a1 + 76);
      }
      if ( v11 < *(_DWORD *)(a1 + 252) )
        v11 = *(_DWORD *)(a1 + 252);
      *(_DWORD *)(a1 + 252) = v11;
      if ( v12 < *(_DWORD *)(a1 + 256) )
        v12 = *(_DWORD *)(a1 + 256);
      *(_DWORD *)(a1 + 256) = v12;
      if ( ++v10 >= v34 )
        break;
      v9 += 88;
    }
    v14 = *(_DWORD *)(a1 + 84);
    if ( v34 > 0 )
    {
      v29 = 0;
      while ( 1 )
      {
        *(_DWORD *)(v14 + 4) = v29;
        v33 = *(_DWORD *)(a1 + 260);
        v15 = *(_DWORD *)(v14 + 8);
        v27 = v15;
        v30 = 2 * v15;
        for ( i = 1; i * v33 <= (*(_BYTE *)(a1 + 212) < 1u ? 4 : 8) && !(*(_DWORD *)(a1 + 252) % (i * v30)); i *= 2 )
          ;
        v28 = i * v33;
        *(_DWORD *)(v14 + 36) = i * v33;
        v31 = *(_DWORD *)(a1 + 264);
        for ( j = 1; ; j *= 2 )
        {
          v35 = j * v31;
          if ( j * v31 > (*(_BYTE *)(a1 + 212) < 1u ? 4 : 8) || *(_DWORD *)(a1 + 256) % (j * 2 * *(_DWORD *)(v14 + 12)) )
            break;
        }
        *(_DWORD *)(v14 + 40) = v35;
        if ( v28 <= 2 * v35 )
        {
          if ( 2 * v28 < v35 )
            *(_DWORD *)(v14 + 40) = 2 * v28;
        }
        else
        {
          *(_DWORD *)(v14 + 36) = 2 * v35;
        }
        *(_DWORD *)(v14 + 28) = sub_6F868CC4(*(_DWORD *)(a1 + 64) * v27, *(_DWORD *)(a1 + 252) * *(_DWORD *)(a1 + 360));
        *(_DWORD *)(v14 + 32) = sub_6F868CC4(
                                  *(_DWORD *)(v14 + 12) * *(_DWORD *)(a1 + 68),
                                  *(_DWORD *)(a1 + 256) * *(_DWORD *)(a1 + 360));
        *(_DWORD *)(v14 + 44) = sub_6F868CC4(
                                  *(_DWORD *)(a1 + 64) * *(_DWORD *)(v14 + 8) * *(_DWORD *)(v14 + 36),
                                  *(_DWORD *)(a1 + 252) * *(_DWORD *)(a1 + 360));
        *(_DWORD *)(v14 + 48) = sub_6F868CC4(
                                  *(_DWORD *)(a1 + 68) * *(_DWORD *)(v14 + 12) * *(_DWORD *)(v14 + 40),
                                  *(_DWORD *)(a1 + 256) * *(_DWORD *)(a1 + 360));
        *(_BYTE *)(v14 + 52) = 1;
        if ( ++v29 >= *(_DWORD *)(a1 + 76) )
          break;
        v14 += 88;
      }
    }
  }
  *(_DWORD *)(a1 + 268) = sub_6F868CC4(*(_DWORD *)(a1 + 68), *(_DWORD *)(a1 + 256) * *(_DWORD *)(a1 + 360));
  if ( *(_DWORD *)(a1 + 204) )
  {
    sub_6F85DDFC(a1);
    if ( *(_DWORD *)(a1 + 360) <= 7 )
    {
      v32 = *(_DWORD *)(a1 + 204);
      if ( *(_DWORD *)(a1 + 200) <= 0 )
      {
        v19 = 0;
      }
      else
      {
        v19 = 0;
        v20 = 0;
        v21 = *(_DWORD *)(a1 + 368);
        v36 = *(const void **)(a1 + 204);
        while ( 1 )
        {
          v22 = v32 + 36 * v19;
          if ( *(_DWORD *)(v22 + 20) <= v21 )
          {
            if ( v21 < *(_DWORD *)(v22 + 24) )
              *(_DWORD *)(v22 + 24) = v21;
            ++v19;
          }
          if ( ++v20 >= *(_DWORD *)(a1 + 200) )
            break;
          if ( v20 == v19 )
          {
            v36 = (char *)v36 + 36;
          }
          else
          {
            v36 = (char *)v36 + 36;
            qmemcpy((void *)(v32 + 36 * v19), v36, 0x24u);
            v21 = *(_DWORD *)(a1 + 368);
          }
        }
      }
      *(_DWORD *)(a1 + 200) = v19;
    }
    if ( *(_BYTE *)(a1 + 248) )
    {
      if ( *(_BYTE *)(a1 + 209) )
        goto LABEL_65;
LABEL_72:
      *(_BYTE *)(a1 + 210) = 1;
      if ( a2 )
        goto LABEL_66;
      goto LABEL_73;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 248) = 0;
    *(_DWORD *)(a1 + 200) = 1;
  }
  if ( *(_DWORD *)(a1 + 360) <= 7 && !*(_BYTE *)(a1 + 209) )
    goto LABEL_72;
LABEL_65:
  if ( a2 )
  {
LABEL_66:
    *(_DWORD *)(v26 + 16) = 2 - (*(_BYTE *)(a1 + 210) >= 1u);
    goto LABEL_67;
  }
LABEL_73:
  *(_DWORD *)(v26 + 16) = 0;
LABEL_67:
  *(_DWORD *)(v26 + 28) = 0;
  *(_DWORD *)(v26 + 20) = 0;
  if ( *(_BYTE *)(a1 + 210) )
  {
    result = 2 * *(_DWORD *)(a1 + 200);
    *(_DWORD *)(v26 + 24) = result;
  }
  else
  {
    result = *(_DWORD *)(a1 + 200);
    *(_DWORD *)(v26 + 24) = result;
  }
  return result;
}
