int __cdecl sub_6F794320(int a1, int a2, int a3, unsigned int a4)
{
  char *v4; // edx@2
  char *v5; // edi@2
  signed int v6; // esi@2
  signed int v7; // eax@4
  char v8; // al@7
  int result; // eax@17
  char *v10; // eax@19
  char *v11; // esi@19
  signed int v12; // ebp@20
  unsigned int v13; // eax@21
  char *i; // eax@23
  char v15; // dl@24
  int v16; // edi@35
  int v17; // esi@35
  int v18; // ebx@36
  int v19; // eax@36
  int v20; // eax@36
  int v21; // eax@36
  int v22; // eax@36
  int v23; // eax@36
  int v24; // eax@40
  int v25; // eax@40
  int v26; // eax@40
  int v27; // eax@40
  int v28; // eax@43
  char v29; // dl@44
  int v30; // esi@58
  int v31; // ebp@58
  size_t v32; // esi@61
  void *v33; // ebp@64
  int v34; // esi@79
  int v35; // ebp@79
  bool v36; // zf@79
  _DWORD *v37; // [sp+20h] [bp-6Ch]@5
  int v38; // [sp+24h] [bp-68h]@6
  int v39; // [sp+24h] [bp-68h]@19
  signed int v40; // [sp+28h] [bp-64h]@2
  unsigned int v41; // [sp+30h] [bp-5Ch]@4
  signed int v42; // [sp+34h] [bp-58h]@5
  int v43; // [sp+38h] [bp-54h]@19
  char *v44; // [sp+3Ch] [bp-50h]@35
  char *v45; // [sp+4Ch] [bp-40h]@2
  int v46; // [sp+50h] [bp-3Ch]@19
  int v47; // [sp+54h] [bp-38h]@1
  char *v48; // [sp+58h] [bp-34h]@2
  int v49; // [sp+5Ch] [bp-30h]@1
  int v50; // [sp+60h] [bp-2Ch]@39
  int v51; // [sp+64h] [bp-28h]@40
  int v52; // [sp+68h] [bp-24h]@40
  int v53; // [sp+6Ch] [bp-20h]@40

  sub_6F793CA0(a1, (unsigned int)&v47);
  if ( !v49 )
    return 3;
  v4 = (char *)v47;
  v5 = v48;
  v6 = *(_DWORD *)(a2 + 8);
  v45 = (char *)v47;
  v40 = v6;
  if ( v6 != 7 )
  {
    if ( v49 != 3 )
    {
LABEL_4:
      v7 = 0;
      v41 = 1;
      goto LABEL_5;
    }
    if ( a4 )
    {
      v4 = (char *)(v47 + 1);
      v5 = v48 - 1;
      v45 = (char *)(v47 + 1);
      v41 = a4;
      v7 = 1;
      goto LABEL_5;
    }
    return 3;
  }
  v34 = *(_DWORD *)a1;
  v35 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = v47 + 1;
  *(_DWORD *)(a1 + 8) = v5 - 1;
  sub_6F793CA0(a1, (unsigned int)&v50);
  v36 = v52 == 3;
  v4 = v45;
  *(_DWORD *)a1 = v34;
  *(_DWORD *)(a1 + 8) = v35;
  if ( !v36 )
    goto LABEL_4;
  if ( !a4 )
    return 3;
  ++v4;
  --v5;
  v40 = 8;
  v45 = v4;
  v7 = 1;
  v41 = 1;
LABEL_5:
  v42 = 4 * a4;
  v37 = (_DWORD *)(a3 + 4 * v7);
  while ( 2 )
  {
    v38 = *v37 + *(_DWORD *)(a2 + 16);
    if ( v5 <= v4 )
    {
LABEL_16:
      v45 = v4;
      switch ( v40 )
      {
        default:
          return 3;
        case 8:
          goto LABEL_19;
        case 7:
          goto LABEL_39;
        case 5:
        case 6:
          goto LABEL_41;
        case 4:
          goto LABEL_43;
        case 3:
          goto LABEL_48;
        case 2:
          goto LABEL_49;
        case 1:
          break;
      }
LABEL_50:
      if ( v5 > v4 + 3 && *v4 == 116 )
      {
        v28 = 0;
        if ( v4[1] == 114 && v4[2] == 117 && v4[3] == 101 )
        {
          v4 += 5;
          v28 = 1;
        }
      }
      else
      {
        v28 = 0;
        if ( v5 > v4 + 4 && *v4 == 102 && v4[1] == 97 && v4[2] == 108 && v4[3] == 115 && v4[4] == 101 )
          v4 += 6;
      }
      v45 = v4;
LABEL_44:
      v29 = *(_BYTE *)(a2 + 20);
      if ( v29 == 2 )
      {
        *(_WORD *)v38 = v28;
      }
      else if ( v29 != 4 && v29 == 1 )
      {
        *(_BYTE *)v38 = v28;
      }
      else
      {
        *(_DWORD *)v38 = v28;
      }
      goto LABEL_41;
    }
    while ( 1 )
    {
      v8 = *v4;
      if ( (unsigned __int8)(*v4 - 12) > 1u && (unsigned __int8)(*v4 - 9) > 1u )
      {
        if ( v8 & 0xDF )
          break;
      }
LABEL_15:
      if ( ++v4 >= v5 )
        goto LABEL_16;
    }
    if ( v8 == 37 )
    {
      if ( v4 < v5 )
      {
        do
          ++v4;
        while ( v4 != v5 && *v4 != 13 && *v4 != 10 );
      }
      goto LABEL_15;
    }
    v45 = v4;
    switch ( v40 )
    {
      default:
        return 3;
      case 8:
LABEL_19:
        v43 = *(_DWORD *)(a1 + 16);
        v10 = sub_6F773B30(*(_DWORD *)(a1 + 16), 4, 0, v42, 0, &v46);
        v11 = v10;
        v39 = (int)v10;
        result = v46;
        if ( v46 )
          return result;
        v12 = 4;
        do
        {
          v13 = sub_6F792DD0((unsigned int *)&v45, v5, a4, v11, 0);
          if ( v13 >> 31 || a4 > v13 )
            return 3;
          for ( i = v45; i < v5; ++i )
          {
            v15 = *i;
            if ( (unsigned __int8)(*i - 9) > 1u && (unsigned __int8)(*i - 12) > 1u && v15 & 0xDF )
            {
              if ( v15 != 37 )
                break;
              if ( i < v5 )
              {
                do
                  ++i;
                while ( i != v5 && *i != 13 && *i != 10 );
              }
            }
          }
          v11 += v42;
          --v12;
          v45 = i;
        }
        while ( v12 );
        if ( a4 )
        {
          v44 = v5;
          v16 = 0;
          v17 = v42 + v42 + v39;
          do
          {
            v18 = *(_DWORD *)(a3 + 4 * v16);
            LOWORD(v19) = sub_6F7C9390(*(_DWORD *)(v39 + 4 * v16));
            *(_DWORD *)v18 = v19;
            LOWORD(v20) = sub_6F7C9390(*(_DWORD *)(v42 + v39 + 4 * v16));
            *(_DWORD *)(v18 + 4) = v20;
            LOWORD(v21) = sub_6F7C9390(*(_DWORD *)(v17 + 4 * v16));
            *(_DWORD *)(v18 + 8) = v21;
            v22 = *(_DWORD *)(v17 + v42 + 4 * v16++);
            LOWORD(v23) = sub_6F7C9390(v22);
            *(_DWORD *)(v18 + 12) = v23;
          }
          while ( a4 != v16 );
          v5 = v44;
        }
        sub_6F773D90(v43, v39);
        break;
      case 7:
LABEL_39:
        if ( sub_6F792DD0((unsigned int *)&v45, v5, 4, (char *)&v50, 0) <= 3 )
          return 3;
        LOWORD(v24) = sub_6F7C9390(v50);
        *(_DWORD *)v38 = v24;
        LOWORD(v25) = sub_6F7C9390(v51);
        *(_DWORD *)(v38 + 4) = v25;
        LOWORD(v26) = sub_6F7C9390(v52);
        *(_DWORD *)(v38 + 8) = v26;
        LOWORD(v27) = sub_6F7C9390(v53);
        *(_DWORD *)(v38 + 12) = v27;
        break;
      case 4:
LABEL_43:
        v28 = sub_6F792040(&v45, v5, 3);
        goto LABEL_44;
      case 3:
LABEL_48:
        v28 = sub_6F792040(&v45, v5, 0);
        goto LABEL_44;
      case 2:
LABEL_49:
        v28 = sub_6F791EC0((unsigned int *)&v45, v5);
        goto LABEL_44;
      case 1:
        goto LABEL_50;
      case 5:
      case 6:
        v30 = v5 - v4;
        v31 = *(_DWORD *)(a1 + 16);
        if ( v4 >= v5 )
          break;
        if ( v49 == 4 )
        {
          v32 = v30 - 1;
          v45 = v4 + 1;
        }
        else
        {
          if ( v49 != 2 )
            return 3;
          v32 = v30 - 2;
          v45 = v4 + 1;
        }
        if ( *(_DWORD *)v38 )
        {
          sub_6F773D90(v31, *(_DWORD *)v38);
          *(_DWORD *)v38 = 0;
        }
        v33 = sub_6F773A50(v31, v32 + 1, &v46);
        result = v46;
        if ( v46 )
          return result;
        memcpy(v33, v45, v32);
        *((_BYTE *)v33 + v32) = 0;
        *(_DWORD *)v38 = v33;
        break;
    }
LABEL_41:
    ++v37;
    if ( --v41 )
    {
      v4 = v45;
      continue;
    }
    return 0;
  }
}
