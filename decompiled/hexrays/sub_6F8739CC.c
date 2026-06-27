char __cdecl sub_6F8739CC(int a1, int a2)
{
  int v2; // eax@4
  int v3; // ebx@4
  signed int v4; // edx@4
  signed int v5; // eax@5
  int v6; // edx@5
  signed int v7; // ebx@5
  int v8; // esi@6
  int v9; // eax@7
  int v10; // ecx@7
  int v11; // edi@8
  int v12; // esi@9
  int v13; // eax@12
  int v14; // eax@14
  int v15; // edi@14
  int v16; // esi@17
  int v17; // eax@17
  int v18; // ecx@19
  int v19; // eax@21
  int v20; // ecx@21
  signed int v21; // edi@22
  int v22; // edi@23
  int v23; // edi@26
  signed int v24; // eax@28
  int v26; // edi@36
  int v27; // eax@39
  int v28; // ecx@39
  signed int v29; // eax@40
  int v30; // eax@41
  signed int v31; // eax@44
  signed int v32; // eax@54
  int *v33; // esi@54
  signed int v34; // eax@62
  _WORD *v35; // [sp+24h] [bp-64h]@6
  int v36; // [sp+28h] [bp-60h]@5
  int v37; // [sp+2Ch] [bp-5Ch]@1
  signed int v38; // [sp+30h] [bp-58h]@9
  int v39; // [sp+34h] [bp-54h]@15
  signed int v40; // [sp+38h] [bp-50h]@23
  signed int v41; // [sp+38h] [bp-50h]@41
  int v42; // [sp+3Ch] [bp-4Ch]@12
  signed int v43; // [sp+3Ch] [bp-4Ch]@15
  int v44; // [sp+3Ch] [bp-4Ch]@41
  int *v45; // [sp+3Ch] [bp-4Ch]@62
  char v46; // [sp+48h] [bp-40h]@4
  int v47[4]; // [sp+4Ch] [bp-3Ch]@14
  int v48; // [sp+5Ch] [bp-2Ch]@4
  int v49; // [sp+60h] [bp-28h]@4
  int v50; // [sp+64h] [bp-24h]@46
  int v51; // [sp+68h] [bp-20h]@46
  int v52; // [sp+6Ch] [bp-1Ch]@4

  v37 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 252) && !*(_DWORD *)(*(_DWORD *)(a1 + 424) + 40) && !sub_6F872974(a1) )
    return 0;
  if ( *(_BYTE *)(v37 + 36) )
    goto LABEL_30;
  v52 = a1;
  v2 = *(_DWORD *)(a1 + 24);
  v48 = *(_DWORD *)v2;
  v49 = *(_DWORD *)(v2 + 4);
  v3 = *(_DWORD *)(v37 + 8);
  v4 = *(_DWORD *)(v37 + 12);
  qmemcpy(&v46, (const void *)(v37 + 16), 0x14u);
  if ( *(_DWORD *)(a1 + 324) <= 0 )
    goto LABEL_29;
  v36 = 0;
  v5 = v4;
  v6 = v3;
  v7 = v5;
  do
  {
    v35 = *(_WORD **)(a2 + 4 * v36);
    v8 = *(_DWORD *)(v37 + 4 * v36 + 96);
    if ( v7 > 7 )
      goto LABEL_75;
    v45 = &v48;
    if ( !sub_6F87276C((int)&v48, v6, v7, 0) )
      return 0;
    v6 = v50;
    v7 = v51;
    if ( v51 > 7 )
    {
LABEL_75:
      v9 = (v6 >> (v7 - 8)) & 0xFF;
      v10 = *(_DWORD *)(v8 + 4 * v9 + 144);
      if ( v10 )
      {
        v7 -= v10;
        v11 = *(_BYTE *)(v8 + v9 + 1168);
        goto LABEL_9;
      }
      v34 = 9;
      v45 = &v48;
    }
    else
    {
      v34 = 1;
    }
    v11 = sub_6F8728A4((int)v45, v6, v7, v8, v34);
    if ( v11 < 0 )
      return 0;
    v6 = v50;
    v7 = v51;
LABEL_9:
    v12 = *(_DWORD *)(v37 + 4 * v36 + 136);
    v38 = *(_DWORD *)(v37 + 4 * v36 + 176);
    if ( !v38 )
    {
      if ( v11 )
      {
        if ( v7 < v11 )
        {
          if ( !sub_6F87276C((int)&v48, v6, v7, v11) )
            return 0;
          v6 = v50;
          v7 = v51;
        }
        v7 -= v11;
      }
LABEL_34:
      v23 = 1;
      while ( 1 )
      {
LABEL_38:
        if ( v7 > 7 )
          goto LABEL_76;
        if ( !sub_6F87276C((int)&v48, v6, v7, 0) )
          return 0;
        v6 = v50;
        v7 = v51;
        if ( v51 > 7 )
        {
LABEL_76:
          v27 = (v6 >> (v7 - 8)) & 0xFF;
          v28 = *(_DWORD *)(v12 + 4 * v27 + 144);
          if ( v28 )
          {
            v7 -= v28;
            v29 = *(_BYTE *)(v12 + v27 + 1168);
            goto LABEL_41;
          }
          v31 = 9;
        }
        else
        {
          v31 = 1;
        }
        v29 = sub_6F8728A4((int)&v48, v6, v7, v12, v31);
        if ( v29 < 0 )
          return 0;
        v6 = v50;
        v7 = v51;
LABEL_41:
        v41 = v29 >> 4;
        v30 = v29 & 0xF;
        v44 = v30;
        if ( v30 )
        {
          if ( v7 < v30 )
          {
            if ( !sub_6F87276C((int)&v48, v6, v7, v30) )
              return 0;
            v6 = v50;
            v7 = v51;
          }
          v26 = v41 + v23;
          v7 -= v44;
        }
        else
        {
          if ( v41 != 15 )
            goto LABEL_27;
          v26 = v23 + 15;
        }
        v23 = v26 + 1;
        if ( v23 > 63 )
          goto LABEL_27;
      }
    }
    if ( v11 )
    {
      if ( v7 < v11 )
      {
        if ( !sub_6F87276C((int)&v48, v6, v7, v11) )
          return 0;
        v6 = v50;
        v7 = v51;
      }
      v7 -= v11;
      v42 = dword_6FB9EC80[v11];
      v13 = v42 & (v6 >> v7);
      if ( v13 > dword_6FB9EC7C[v11] )
        v11 = v42 & (v6 >> v7);
      else
        v11 = v13 - v42;
    }
    v14 = *(_DWORD *)(a1 + 4 * v36 + 328);
    v15 = v47[v14] + v11;
    v47[v14] = v15;
    *v35 = v15;
    if ( v38 <= 1 )
      goto LABEL_34;
    v39 = v12;
    v43 = 1;
    do
    {
      while ( 1 )
      {
        if ( v7 > 7 )
          goto LABEL_77;
        v33 = &v48;
        if ( !sub_6F87276C((int)&v48, v6, v7, 0) )
          return 0;
        v6 = v50;
        v7 = v51;
        if ( v51 > 7 )
        {
LABEL_77:
          v19 = (v6 >> (v7 - 8)) & 0xFF;
          v20 = *(_DWORD *)(v39 + 4 * v19 + 144);
          if ( v20 )
          {
            v7 -= v20;
            v21 = *(_BYTE *)(v39 + v19 + 1168);
            goto LABEL_23;
          }
          v32 = 9;
          v33 = &v48;
        }
        else
        {
          v32 = 1;
        }
        v21 = sub_6F8728A4((int)v33, v6, v7, v39, v32);
        if ( v21 < 0 )
          return 0;
        v6 = v50;
        v7 = v51;
LABEL_23:
        v40 = v21 >> 4;
        v22 = v21 & 0xF;
        if ( v22 )
          break;
        if ( v40 != 15 )
          goto LABEL_27;
        v18 = v43 + 16;
        v43 = v18;
        if ( v38 <= v18 )
          goto LABEL_26;
      }
      if ( v7 < v22 )
      {
        if ( !sub_6F87276C((int)&v48, v6, v7, v22) )
          return 0;
        v6 = v50;
        v7 = v51;
      }
      v7 -= v22;
      v16 = dword_6FB9EC80[v22];
      v17 = v16 & (v6 >> v7);
      if ( v17 <= dword_6FB9EC7C[v22] )
        LOWORD(v17) = v17 - v16;
      v35[dword_6FB9E080[v43 + v40]] = v17;
      v18 = v43 + v40 + 1;
      v43 = v18;
    }
    while ( v38 > v18 );
LABEL_26:
    v12 = v39;
    v23 = v18;
    if ( v18 <= 63 )
      goto LABEL_38;
LABEL_27:
    ++v36;
  }
  while ( *(_DWORD *)(a1 + 324) > v36 );
  v24 = v7;
  v3 = v6;
  v4 = v24;
  v2 = *(_DWORD *)(a1 + 24);
LABEL_29:
  *(_DWORD *)v2 = v48;
  *(_DWORD *)(v2 + 4) = v49;
  *(_DWORD *)(v37 + 8) = v3;
  *(_DWORD *)(v37 + 12) = v4;
  qmemcpy((void *)(v37 + 16), &v46, 0x14u);
LABEL_30:
  --*(_DWORD *)(v37 + 40);
  return 1;
}
