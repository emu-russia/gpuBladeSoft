char __cdecl sub_6F872FEC(int a1, int *a2)
{
  int v2; // ecx@4
  int v3; // esi@4
  int v4; // eax@4
  signed int v5; // edx@4
  int v6; // ebx@4
  int v7; // edi@6
  int v8; // ecx@8
  int v9; // eax@8
  signed int v10; // eax@9
  int v11; // eax@10
  int v12; // eax@12
  signed int v13; // ST10_4@12
  signed int v14; // ecx@16
  __int16 v15; // ax@19
  __int16 *v16; // esi@23
  int v17; // eax@26
  int v18; // eax@30
  signed int v19; // ecx@34
  int v20; // edi@34
  __int16 v21; // ax@36
  __int16 *v22; // esi@40
  signed int v23; // eax@50
  int *v24; // esi@50
  signed int v26; // [sp+14h] [bp-164h]@4
  signed int v27; // [sp+18h] [bp-160h]@4
  int v28; // [sp+1Ch] [bp-15Ch]@1
  int v29; // [sp+20h] [bp-158h]@6
  int v30; // [sp+24h] [bp-154h]@4
  signed int v31; // [sp+28h] [bp-150h]@4
  int v32; // [sp+2Ch] [bp-14Ch]@10
  int v33; // [sp+30h] [bp-148h]@4
  int v34; // [sp+34h] [bp-144h]@4
  int v35; // [sp+38h] [bp-140h]@4
  signed int v36; // [sp+3Ch] [bp-13Ch]@10
  int v37[64]; // [sp+4Ch] [bp-12Ch]@26
  int v38; // [sp+14Ch] [bp-2Ch]@4
  int v39; // [sp+150h] [bp-28h]@4
  int v40; // [sp+154h] [bp-24h]@43
  int v41; // [sp+158h] [bp-20h]@43
  int v42; // [sp+15Ch] [bp-1Ch]@4

  v28 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 252) && !*(_DWORD *)(*(_DWORD *)(a1 + 424) + 40) && !sub_6F872974(a1) )
  {
LABEL_66:
    LOBYTE(v18) = 0;
    return v18;
  }
  if ( *(_BYTE *)(v28 + 36) )
    goto LABEL_30;
  v35 = *(_DWORD *)(a1 + 372);
  v2 = *(_DWORD *)(a1 + 380);
  v31 = 1 << v2;
  v27 = -1 << v2;
  v3 = *(_DWORD *)(a1 + 388);
  v42 = a1;
  v4 = *(_DWORD *)(a1 + 24);
  v38 = *(_DWORD *)v4;
  v39 = *(_DWORD *)(v4 + 4);
  v34 = *(_DWORD *)(v28 + 8);
  v5 = *(_DWORD *)(v28 + 12);
  v26 = *(_DWORD *)(v28 + 16);
  v33 = *a2;
  v30 = *(_DWORD *)(v28 + 60);
  v6 = *(_DWORD *)(a1 + 368);
  if ( v26 )
  {
    v29 = 0;
LABEL_33:
    if ( v35 >= v6 )
    {
      v19 = v5;
      v20 = v3;
      do
      {
        v22 = (__int16 *)(v33 + 2 * *(_DWORD *)(v20 + 4 * v6));
        if ( *v22 )
        {
          if ( v19 <= 0 )
          {
            if ( !sub_6F87276C((int)&v38, v34, v19, 1) )
              goto LABEL_67;
            v34 = v40;
            v19 = v41;
          }
          if ( (v34 >> --v19) & 1 )
          {
            v21 = *v22;
            if ( !(*v22 & v31) )
            {
              if ( v21 < 0 )
                *v22 = v27 + v21;
              else
                *v22 = v31 + v21;
            }
          }
        }
        ++v6;
      }
      while ( v35 >= v6 );
      v5 = v19;
    }
    --v26;
LABEL_64:
    v4 = *(_DWORD *)(a1 + 24);
LABEL_29:
    *(_DWORD *)v4 = v38;
    *(_DWORD *)(v4 + 4) = v39;
    *(_DWORD *)(v28 + 8) = v34;
    *(_DWORD *)(v28 + 12) = v5;
    *(_DWORD *)(v28 + 16) = v26;
LABEL_30:
    --*(_DWORD *)(v28 + 40);
    LOBYTE(v18) = 1;
    return v18;
  }
  if ( v35 < v6 )
    goto LABEL_29;
  v29 = 0;
  v7 = v3;
LABEL_7:
  if ( v5 > 7 )
    goto LABEL_77;
  v24 = &v38;
  if ( !sub_6F87276C((int)&v38, v34, v5, 0) )
    goto LABEL_67;
  v34 = v40;
  v5 = v41;
  if ( v41 > 7 )
  {
LABEL_77:
    v8 = (unsigned __int8)(v34 >> (v5 - 8));
    v9 = *(_DWORD *)(v30 + 4 * v8 + 144);
    if ( v9 )
    {
      v5 -= v9;
      v10 = *(_BYTE *)(v30 + v8 + 1168);
      goto LABEL_10;
    }
    v23 = 9;
    v24 = &v38;
  }
  else
  {
    v23 = 1;
  }
  v10 = sub_6F8728A4((int)v24, v34, v5, v30, v23);
  if ( v10 < 0 )
    goto LABEL_67;
  v34 = v40;
  v5 = v41;
LABEL_10:
  v36 = v10 >> 4;
  v11 = v10 & 0xF;
  v32 = v11;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      v12 = *(_DWORD *)a1;
      *(_DWORD *)(v12 + 20) = 121;
      v13 = v5;
      (*(void (__cdecl **)(int, signed int))(v12 + 4))(a1, -1);
      v5 = v13;
    }
    if ( v5 > 0 )
      goto LABEL_14;
    if ( sub_6F87276C((int)&v38, v34, v5, 1) )
    {
      v34 = v40;
      v5 = v41;
LABEL_14:
      if ( (v34 >> --v5) & 1 )
        v32 = v31;
      else
        v32 = v27;
      goto LABEL_16;
    }
    goto LABEL_67;
  }
  if ( v36 == 15 )
  {
LABEL_16:
    v14 = v5;
    while ( 1 )
    {
      v16 = (__int16 *)(v33 + 2 * *(_DWORD *)(v7 + 4 * v6));
      if ( *v16 )
      {
        if ( v14 <= 0 )
        {
          if ( !sub_6F87276C((int)&v38, v34, v14, 1) )
            goto LABEL_67;
          v34 = v40;
          v14 = v41;
        }
        if ( (v34 >> --v14) & 1 )
        {
          v15 = *v16;
          if ( !(*v16 & v31) )
          {
            if ( v15 < 0 )
              *v16 = v27 + v15;
            else
              *v16 = v31 + v15;
          }
        }
      }
      else if ( --v36 == -1 )
      {
LABEL_25:
        v5 = v14;
        if ( v32 )
        {
          v17 = *(_DWORD *)(v7 + 4 * v6);
          *(_WORD *)(v33 + 2 * v17) = v32;
          v37[v29++] = v17;
        }
        if ( v35 < ++v6 )
        {
          v4 = *(_DWORD *)(a1 + 24);
          goto LABEL_29;
        }
        goto LABEL_7;
      }
      if ( v35 < ++v6 )
        goto LABEL_25;
    }
  }
  v3 = v7;
  v26 = 1 << v36;
  if ( !v36 )
  {
LABEL_48:
    if ( !v26 )
      goto LABEL_64;
    goto LABEL_33;
  }
  if ( v5 >= v36 )
  {
LABEL_47:
    v5 -= v36;
    v26 += dword_6FB9EC80[v36] & (v34 >> v5);
    goto LABEL_48;
  }
  if ( sub_6F87276C((int)&v38, v34, v5, v36) )
  {
    v34 = v40;
    v5 = v41;
    goto LABEL_47;
  }
LABEL_67:
  if ( !v29 )
    goto LABEL_66;
  v18 = v29;
  do
    *(_WORD *)(v33 + 2 * v37[--v18]) = 0;
  while ( v18 );
  return v18;
}
