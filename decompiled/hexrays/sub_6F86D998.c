char __cdecl sub_6F86D998(int a1, int a2)
{
  unsigned int v2; // ebx@1
  int v3; // eax@1
  int v4; // edi@5
  int v5; // edx@6
  signed int v6; // ecx@6
  signed int v7; // esi@9
  int v8; // edx@13
  _DWORD *v9; // eax@14
  int v10; // eax@17
  int v11; // eax@17
  int v12; // edx@18
  int v14; // edx@23
  int v15; // esi@24
  signed int v16; // edi@24
  _BYTE *v17; // eax@27
  int v18; // eax@27
  _BYTE *v19; // eax@29
  int v20; // eax@29
  int v21; // eax@33
  int v22; // ecx@33
  int v23; // edx@33
  int v24; // eax@34
  int v25; // esi@35
  signed int v26; // edi@35
  _BYTE *v27; // eax@38
  int v28; // eax@38
  _BYTE *v29; // eax@40
  int v30; // eax@40
  int v31; // eax@12
  int v32; // ST20_4@46
  int v33; // ST18_4@46
  int v34; // [sp+1Ch] [bp-2Ch]@35
  signed int v35; // [sp+20h] [bp-28h]@35
  int v36; // [sp+24h] [bp-24h]@1
  int v37; // [sp+28h] [bp-20h]@8
  int v38; // [sp+28h] [bp-20h]@24
  int v39; // [sp+2Ch] [bp-1Ch]@6
  int v40; // [sp+2Ch] [bp-1Ch]@23
  int v41; // [sp+2Ch] [bp-1Ch]@33
  int v42; // [sp+2Ch] [bp-1Ch]@34

  v2 = *(_DWORD *)(a1 + 404);
  v36 = *(_DWORD *)(a1 + 356);
  v3 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v2 + 112) = *(_DWORD *)v3;
  *(_DWORD *)(v2 + 116) = *(_DWORD *)(v3 + 4);
  if ( *(_DWORD *)(a1 + 224) && !*(_DWORD *)(v2 + 36) )
    sub_6F86D854(v2, *(_DWORD *)(v2 + 40));
  if ( *(_DWORD *)(a1 + 300) <= 0 )
    goto LABEL_17;
  v4 = 0;
  do
  {
    v5 = *(_DWORD *)(a1 + 4 * v4 + 304);
    v39 = *(_DWORD *)(a1 + 4 * v5 + 276);
    v6 = ((signed int)**(_WORD **)(a2 + 4 * v4) >> v36) - *(_DWORD *)(v2 + 4 * v5 + 20);
    *(_DWORD *)(v2 + 4 * v5 + 20) = (signed int)**(_WORD **)(a2 + 4 * v4) >> v36;
    if ( v6 < 0 )
    {
      v37 = v6 - 1;
      v6 = -v6;
      goto LABEL_9;
    }
    if ( v6 )
    {
      v37 = v6;
LABEL_9:
      v7 = 0;
      do
      {
        ++v7;
        v6 >>= 1;
      }
      while ( v6 );
      if ( v7 > 11 )
      {
        v31 = *(_DWORD *)a1;
        *(_DWORD *)(v31 + 20) = 6;
        (*(void (__cdecl **)(int))v31)(a1);
      }
      goto LABEL_13;
    }
    v37 = 0;
    v7 = 0;
LABEL_13:
    v8 = *(_DWORD *)(v39 + 20);
    if ( *(_BYTE *)(v2 + 108) )
    {
      v9 = (_DWORD *)(*(_DWORD *)(v2 + 4 * v8 + 76) + 4 * v7);
      ++*v9;
      goto LABEL_15;
    }
    v21 = *(_DWORD *)(v2 + 4 * v8 + 44);
    v22 = *(_BYTE *)(v21 + v7 + 1024);
    v23 = *(_DWORD *)(v21 + 4 * v7);
    v41 = *(_DWORD *)(v2 + 16);
    if ( *(_BYTE *)(v21 + v7 + 1024)
      || (v32 = **(_DWORD **)(v2 + 120),
          *(_DWORD *)(v32 + 20) = 41,
          v33 = v23,
          (*(void (__cdecl **)(_DWORD))v32)(*(_DWORD *)(v2 + 120)),
          v23 = v33,
          v22 = 0,
          !*(_BYTE *)(v2 + 108)) )
    {
      v42 = v41 + v22;
      v24 = *(_DWORD *)(v2 + 12) | ((v23 & ((1 << v22) - 1)) << (24 - v42));
      if ( v42 <= 7 )
        goto LABEL_43;
      v35 = v7;
      v34 = v4;
      v25 = *(_DWORD *)(v2 + 12) | ((v23 & ((1 << v22) - 1)) << (24 - v42));
      v26 = v42;
      while ( 1 )
      {
        v27 = *(_BYTE **)(v2 + 112);
        *v27 = v25 >> 16;
        *(_DWORD *)(v2 + 112) = v27 + 1;
        v28 = *(_DWORD *)(v2 + 116) - 1;
        *(_DWORD *)(v2 + 116) = v28;
        if ( v28 )
        {
          if ( ((v25 >> 16) & 0xFF) != 255 )
            goto LABEL_37;
        }
        else
        {
          sub_6F86CA70(v2);
          if ( ((v25 >> 16) & 0xFF) != 255 )
            goto LABEL_37;
        }
        v29 = *(_BYTE **)(v2 + 112);
        *v29 = 0;
        *(_DWORD *)(v2 + 112) = v29 + 1;
        v30 = *(_DWORD *)(v2 + 116) - 1;
        *(_DWORD *)(v2 + 116) = v30;
        if ( v30 )
        {
LABEL_37:
          v25 <<= 8;
          v26 -= 8;
          if ( v26 <= 7 )
            goto LABEL_42;
          continue;
        }
        sub_6F86CA70(v2);
        v25 <<= 8;
        v26 -= 8;
        if ( v26 <= 7 )
        {
LABEL_42:
          v4 = v34;
          v24 = v25;
          v7 = v35;
          v42 &= 7u;
LABEL_43:
          *(_DWORD *)(v2 + 12) = v24;
          *(_DWORD *)(v2 + 16) = v42;
          break;
        }
      }
    }
LABEL_15:
    if ( !v7 || *(_BYTE *)(v2 + 108) )
      goto LABEL_16;
    v40 = v7 + *(_DWORD *)(v2 + 16);
    v14 = *(_DWORD *)(v2 + 12) | ((v37 & ((1 << v7) - 1)) << (24 - v40));
    if ( v40 <= 7 )
      goto LABEL_32;
    v15 = v7 + *(_DWORD *)(v2 + 16);
    v38 = v4;
    v16 = v14;
    do
    {
      while ( 1 )
      {
        v17 = *(_BYTE **)(v2 + 112);
        *v17 = v16 >> 16;
        *(_DWORD *)(v2 + 112) = v17 + 1;
        v18 = *(_DWORD *)(v2 + 116) - 1;
        *(_DWORD *)(v2 + 116) = v18;
        if ( !v18 )
          break;
        if ( ((v16 >> 16) & 0xFF) == 255 )
          goto LABEL_29;
LABEL_26:
        v16 <<= 8;
        v15 -= 8;
        if ( v15 <= 7 )
          goto LABEL_31;
      }
      sub_6F86CA70(v2);
      if ( ((v16 >> 16) & 0xFF) != 255 )
        goto LABEL_26;
LABEL_29:
      v19 = *(_BYTE **)(v2 + 112);
      *v19 = 0;
      *(_DWORD *)(v2 + 112) = v19 + 1;
      v20 = *(_DWORD *)(v2 + 116) - 1;
      *(_DWORD *)(v2 + 116) = v20;
      if ( v20 )
        goto LABEL_26;
      sub_6F86CA70(v2);
      v16 <<= 8;
      v15 -= 8;
    }
    while ( v15 > 7 );
LABEL_31:
    v14 = v16;
    v4 = v38;
    v40 &= 7u;
LABEL_32:
    *(_DWORD *)(v2 + 12) = v14;
    *(_DWORD *)(v2 + 16) = v40;
LABEL_16:
    ++v4;
  }
  while ( *(_DWORD *)(a1 + 300) > v4 );
LABEL_17:
  v10 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)v10 = *(_DWORD *)(v2 + 112);
  *(_DWORD *)(v10 + 4) = *(_DWORD *)(v2 + 116);
  v11 = *(_DWORD *)(a1 + 224);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v2 + 36);
    if ( !v12 )
    {
      *(_DWORD *)(v2 + 40) = ((unsigned __int8)*(_DWORD *)(v2 + 40) + 1) & 7;
      v12 = v11;
    }
    *(_DWORD *)(v2 + 36) = v12 - 1;
  }
  return 1;
}
