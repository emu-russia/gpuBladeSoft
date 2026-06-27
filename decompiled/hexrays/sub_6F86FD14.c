char __cdecl sub_6F86FD14(int a1, int a2)
{
  int v2; // ebx@1
  int v3; // eax@2
  int v4; // edi@8
  int v5; // esi@8
  int v6; // eax@9
  signed int v7; // esi@11
  int v8; // edi@11
  int v9; // ebx@12
  int v10; // eax@17
  signed int v12; // ebx@19
  signed int v13; // eax@22
  _BYTE *i; // esi@23
  int v15; // eax@32
  signed int v16; // esi@38
  _BYTE *j; // ebx@39
  int v18; // eax@51
  int v19; // edi@53
  int v20; // eax@55
  int v21; // [sp+18h] [bp-40h]@6
  signed int v22; // [sp+1Ch] [bp-3Ch]@38
  signed int v23; // [sp+20h] [bp-38h]@19
  int v24; // [sp+20h] [bp-38h]@38
  _WORD *v25; // [sp+24h] [bp-34h]@8
  int v26; // [sp+28h] [bp-30h]@11
  int v27; // [sp+28h] [bp-30h]@39
  int v28; // [sp+2Ch] [bp-2Ch]@8
  signed int v29; // [sp+2Ch] [bp-2Ch]@23
  _BYTE *v30; // [sp+2Ch] [bp-2Ch]@28
  int v31; // [sp+30h] [bp-28h]@7
  int v32; // [sp+34h] [bp-24h]@8
  int v33; // [sp+34h] [bp-24h]@11
  int v34; // [sp+38h] [bp-20h]@8
  _BYTE *v35; // [sp+38h] [bp-20h]@19
  signed int v36; // [sp+38h] [bp-20h]@28
  signed int v37; // [sp+38h] [bp-20h]@47
  int v38; // [sp+3Ch] [bp-1Ch]@1

  v2 = a1;
  v38 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 252) )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 424) + 52);
    if ( !v3 )
    {
      sub_6F86FC10(a1);
      v3 = *(_DWORD *)(v38 + 52);
    }
    *(_DWORD *)(v38 + 52) = v3 - 1;
  }
  if ( *(_DWORD *)(v38 + 16) == -1 )
    return 1;
  v21 = *(_DWORD *)(a1 + 388);
  if ( *(_DWORD *)(a1 + 324) <= 0 )
    return 1;
  v31 = 0;
  while ( 1 )
  {
    v25 = *(_WORD **)(a2 + 4 * v31);
    v4 = *(_DWORD *)(v2 + 4 * v31 + 328);
    v28 = *(_DWORD *)(v2 + 4 * v4 + 300);
    v32 = *(_DWORD *)(v28 + 20);
    v34 = v4 + 8;
    v5 = *(_DWORD *)(v38 + 4 * (v4 + 8) + 4) + *(_DWORD *)(v38 + 4 * (v32 + 12) + 8);
    if ( sub_6F86F66C(v2, (_BYTE *)v5) )
      break;
    *(_DWORD *)(v38 + 4 * v34 + 4) = 0;
    v6 = *(_DWORD *)(v38 + 4 * v4 + 20);
LABEL_10:
    *v25 = v6;
    if ( *(_DWORD *)(v2 + 392) )
    {
      v26 = *(_DWORD *)(v28 + 24);
      v7 = 0;
      v33 = v26 + 28;
      v8 = v2;
      do
      {
        v9 = *(_DWORD *)(v38 + 4 * v33 + 8) + 3 * v7;
        if ( sub_6F86F66C(v8, (_BYTE *)v9) )
          break;
        while ( 1 )
        {
          ++v7;
          if ( sub_6F86F66C(v8, (_BYTE *)(v9 + 1)) )
            break;
          if ( v7 >= *(_DWORD *)(v8 + 392) )
          {
            v10 = *(_DWORD *)v8;
            *(_DWORD *)(v10 + 20) = 117;
            (*(void (__cdecl **)(int, signed int))(v10 + 4))(v8, -1);
            *(_DWORD *)(v38 + 16) = -1;
            return 1;
          }
          v9 += 3;
        }
        v23 = sub_6F86F66C(v8, (_BYTE *)(v38 + 184));
        v35 = (_BYTE *)(v9 + 2);
        v12 = sub_6F86F66C(v8, (_BYTE *)(v9 + 2));
        if ( v12 && sub_6F86F66C(v8, v35) )
        {
          v12 *= 2;
          if ( *(_BYTE *)(v8 + v26 + 235) < v7 )
            v13 = 217;
          else
            v13 = 189;
          v29 = v7;
          for ( i = (_BYTE *)(v13 + *(_DWORD *)(v38 + 4 * v33 + 8)); sub_6F86F66C(v8, i); ++i )
          {
            v12 *= 2;
            if ( v12 == 0x8000 )
              goto LABEL_55;
          }
          v35 = i;
          v7 = v29;
        }
        v30 = v35 + 14;
        v36 = v12;
        while ( 1 )
        {
          v12 >>= 1;
          if ( !v12 )
            break;
          while ( sub_6F86F66C(v8, v30) )
          {
            v36 |= v12;
            v12 >>= 1;
            if ( !v12 )
              goto LABEL_32;
          }
        }
LABEL_32:
        v15 = v36 + 1;
        if ( v23 )
          v15 = -v15;
        v25[*(_DWORD *)(v21 + 4 * v7)] = v15;
      }
      while ( *(_DWORD *)(v8 + 392) > v7 );
      v2 = v8;
    }
    if ( *(_DWORD *)(v2 + 324) <= ++v31 )
      return 1;
  }
  v22 = sub_6F86F66C(v2, (_BYTE *)(v5 + 1));
  v24 = v5 + v22 + 2;
  v16 = sub_6F86F66C(v2, (_BYTE *)v24);
  if ( !v16 )
  {
LABEL_44:
    if ( v16 < 1 << *(_BYTE *)(v2 + v32 + 203) >> 1 )
    {
      *(_DWORD *)(v38 + 4 * v34 + 4) = 0;
    }
    else if ( v16 <= 1 << *(_BYTE *)(v2 + v32 + 219) >> 1 )
    {
      *(_DWORD *)(v38 + 4 * v34 + 4) = 4 * v22 + 4;
    }
    else
    {
      *(_DWORD *)(v38 + 4 * v34 + 4) = 4 * v22 + 12;
    }
    v37 = v16;
    while ( 1 )
    {
      v16 >>= 1;
      if ( !v16 )
        break;
      while ( sub_6F86F66C(v2, (_BYTE *)(v24 + 14)) )
      {
        v37 |= v16;
        v16 >>= 1;
        if ( !v16 )
          goto LABEL_51;
      }
    }
LABEL_51:
    v18 = v37 + 1;
    if ( v22 )
      v18 = -v18;
    v19 = v4 + 4;
    v6 = *(_DWORD *)(v38 + 4 * v19 + 4) + v18;
    *(_DWORD *)(v38 + 4 * v19 + 4) = v6;
    goto LABEL_10;
  }
  v27 = v4;
  v8 = v2;
  for ( j = (_BYTE *)(*(_DWORD *)(v38 + 4 * (v32 + 12) + 8) + 20); ; ++j )
  {
    if ( !sub_6F86F66C(v8, j) )
    {
      v24 = (int)j;
      v2 = v8;
      v4 = v27;
      goto LABEL_44;
    }
    v16 *= 2;
    if ( v16 == 0x8000 )
      break;
  }
LABEL_55:
  v20 = *(_DWORD *)v8;
  *(_DWORD *)(v20 + 20) = 117;
  (*(void (__cdecl **)(int, signed int))(v20 + 4))(v8, -1);
  *(_DWORD *)(v38 + 16) = -1;
  return 1;
}
