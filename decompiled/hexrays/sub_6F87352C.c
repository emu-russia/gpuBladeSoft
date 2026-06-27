char __cdecl sub_6F87352C(int a1, int a2)
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
  signed int v23; // edi@26
  signed int v24; // eax@28
  int v26; // eax@36
  int v27; // ecx@36
  signed int v28; // eax@37
  int v29; // eax@38
  signed int v30; // eax@43
  signed int v31; // eax@53
  int *v32; // esi@53
  signed int v33; // eax@61
  int v34; // [sp+2Ch] [bp-6Ch]@4
  _WORD *v35; // [sp+30h] [bp-68h]@6
  int v36; // [sp+34h] [bp-64h]@5
  int v37; // [sp+38h] [bp-60h]@1
  signed int v38; // [sp+3Ch] [bp-5Ch]@9
  int v39; // [sp+40h] [bp-58h]@4
  int v40; // [sp+44h] [bp-54h]@15
  signed int v41; // [sp+48h] [bp-50h]@23
  signed int v42; // [sp+48h] [bp-50h]@38
  int v43; // [sp+4Ch] [bp-4Ch]@12
  signed int v44; // [sp+4Ch] [bp-4Ch]@15
  int v45; // [sp+4Ch] [bp-4Ch]@38
  int *v46; // [sp+4Ch] [bp-4Ch]@61
  char v47; // [sp+58h] [bp-40h]@4
  int v48[4]; // [sp+5Ch] [bp-3Ch]@14
  int v49; // [sp+6Ch] [bp-2Ch]@4
  int v50; // [sp+70h] [bp-28h]@4
  int v51; // [sp+74h] [bp-24h]@45
  int v52; // [sp+78h] [bp-20h]@45
  int v53; // [sp+7Ch] [bp-1Ch]@4

  v37 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 252) && !*(_DWORD *)(*(_DWORD *)(a1 + 424) + 40) && !sub_6F872974(a1) )
    return 0;
  if ( *(_BYTE *)(v37 + 36) )
    goto LABEL_30;
  v34 = *(_DWORD *)(a1 + 388);
  v39 = *(_DWORD *)(a1 + 392);
  v53 = a1;
  v2 = *(_DWORD *)(a1 + 24);
  v49 = *(_DWORD *)v2;
  v50 = *(_DWORD *)(v2 + 4);
  v3 = *(_DWORD *)(v37 + 8);
  v4 = *(_DWORD *)(v37 + 12);
  qmemcpy(&v47, (const void *)(v37 + 16), 0x14u);
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
    if ( v7 <= 7 )
    {
      v46 = &v49;
      if ( !sub_6F87276C((int)&v49, v6, v7, 0) )
        return 0;
      v6 = v51;
      v7 = v52;
      if ( v52 <= 7 )
      {
        v33 = 1;
        goto LABEL_62;
      }
    }
    v9 = (v6 >> (v7 - 8)) & 0xFF;
    v10 = *(_DWORD *)(v8 + 4 * v9 + 144);
    if ( !v10 )
    {
      v33 = 9;
      v46 = &v49;
LABEL_62:
      v11 = sub_6F8728A4((int)v46, v6, v7, v8, v33);
      if ( v11 < 0 )
        return 0;
      v6 = v51;
      v7 = v52;
      goto LABEL_9;
    }
    v7 -= v10;
    v11 = *(_BYTE *)(v8 + v9 + 1168);
LABEL_9:
    v12 = *(_DWORD *)(v37 + 4 * v36 + 136);
    v38 = *(_DWORD *)(v37 + 4 * v36 + 176);
    if ( v38 )
    {
      if ( v11 )
      {
        if ( v7 < v11 )
        {
          if ( !sub_6F87276C((int)&v49, v6, v7, v11) )
            return 0;
          v6 = v51;
          v7 = v52;
        }
        v7 -= v11;
        v43 = dword_6FB9EC80[v11];
        v13 = v43 & (v6 >> v7);
        if ( v13 > dword_6FB9EC7C[v11] )
          v11 = v43 & (v6 >> v7);
        else
          v11 = v13 - v43;
      }
      v14 = *(_DWORD *)(a1 + 4 * v36 + 328);
      v15 = v48[v14] + v11;
      v48[v14] = v15;
      *v35 = v15;
      if ( v38 <= 1 )
      {
LABEL_67:
        v23 = 1;
        goto LABEL_34;
      }
      v40 = v12;
      v44 = 1;
      while ( 1 )
      {
        if ( v7 <= 7 )
        {
          v32 = &v49;
          if ( !sub_6F87276C((int)&v49, v6, v7, 0) )
            return 0;
          v6 = v51;
          v7 = v52;
          if ( v52 <= 7 )
            break;
        }
        v19 = (v6 >> (v7 - 8)) & 0xFF;
        v20 = *(_DWORD *)(v40 + 4 * v19 + 144);
        if ( !v20 )
        {
          v31 = 9;
          v32 = &v49;
LABEL_54:
          v21 = sub_6F8728A4((int)v32, v6, v7, v40, v31);
          if ( v21 < 0 )
            return 0;
          v6 = v51;
          v7 = v52;
          goto LABEL_23;
        }
        v7 -= v20;
        v21 = *(_BYTE *)(v40 + v19 + 1168);
LABEL_23:
        v41 = v21 >> 4;
        v22 = v21 & 0xF;
        if ( v22 )
        {
          if ( v7 < v22 )
          {
            if ( !sub_6F87276C((int)&v49, v6, v7, v22) )
              return 0;
            v6 = v51;
            v7 = v52;
          }
          v7 -= v22;
          v16 = dword_6FB9EC80[v22];
          v17 = v16 & (v6 >> v7);
          if ( v17 <= dword_6FB9EC7C[v22] )
            LOWORD(v17) = v17 - v16;
          v35[*(_DWORD *)(v34 + 4 * (v44 + v41))] = v17;
          v18 = v44 + v41 + 1;
          v44 = v18;
          if ( v38 <= v18 )
            goto LABEL_26;
        }
        else
        {
          if ( v41 != 15 )
            goto LABEL_27;
          v18 = v44 + 16;
          v44 = v18;
          if ( v38 <= v18 )
          {
LABEL_26:
            v12 = v40;
            v23 = v18;
            if ( v39 < v18 )
              goto LABEL_27;
            goto LABEL_35;
          }
        }
      }
      v31 = 1;
      goto LABEL_54;
    }
    if ( !v11 )
      goto LABEL_67;
    if ( v7 < v11 )
    {
      if ( !sub_6F87276C((int)&v49, v6, v7, v11) )
        return 0;
      v6 = v51;
      v7 = v52;
    }
    v7 -= v11;
    v23 = 1;
LABEL_34:
    while ( v39 >= v23 )
    {
LABEL_35:
      if ( v7 <= 7 )
      {
        if ( !sub_6F87276C((int)&v49, v6, v7, 0) )
          return 0;
        v6 = v51;
        v7 = v52;
        if ( v52 <= 7 )
        {
          v30 = 1;
          goto LABEL_44;
        }
      }
      v26 = (v6 >> (v7 - 8)) & 0xFF;
      v27 = *(_DWORD *)(v12 + 4 * v26 + 144);
      if ( !v27 )
      {
        v30 = 9;
LABEL_44:
        v28 = sub_6F8728A4((int)&v49, v6, v7, v12, v30);
        if ( v28 < 0 )
          return 0;
        v6 = v51;
        v7 = v52;
        goto LABEL_38;
      }
      v7 -= v27;
      v28 = *(_BYTE *)(v12 + v26 + 1168);
LABEL_38:
      v42 = v28 >> 4;
      v29 = v28 & 0xF;
      v45 = v29;
      if ( v29 )
      {
        if ( v7 < v29 )
        {
          if ( !sub_6F87276C((int)&v49, v6, v7, v29) )
            return 0;
          v6 = v51;
          v7 = v52;
        }
        v7 -= v45;
        v23 += v42 + 1;
      }
      else
      {
        if ( v42 != 15 )
          break;
        v23 += 16;
      }
    }
LABEL_27:
    ++v36;
  }
  while ( *(_DWORD *)(a1 + 324) > v36 );
  v24 = v7;
  v3 = v6;
  v4 = v24;
  v2 = *(_DWORD *)(a1 + 24);
LABEL_29:
  *(_DWORD *)v2 = v49;
  *(_DWORD *)(v2 + 4) = v50;
  *(_DWORD *)(v37 + 8) = v3;
  *(_DWORD *)(v37 + 12) = v4;
  qmemcpy((void *)(v37 + 16), &v47, 0x14u);
LABEL_30:
  --*(_DWORD *)(v37 + 40);
  return 1;
}
