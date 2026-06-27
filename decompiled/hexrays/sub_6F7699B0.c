signed int __cdecl sub_6F7699B0(int a1, int a2, int a3, int *a4)
{
  int v4; // eax@6
  _BYTE **v5; // ebp@8
  int v6; // edx@11
  int v7; // ecx@11
  _DWORD *v8; // eax@13
  int v9; // edx@13
  int v10; // ebx@14
  int v11; // esi@16
  int v12; // edx@17
  int v13; // eax@17
  int v14; // eax@18
  int v15; // edi@18
  signed int result; // eax@20
  unsigned int v17; // ebx@26
  _BYTE **v18; // ecx@27
  bool v19; // zf@29
  const char *v20; // edi@30
  signed int v21; // ecx@30
  _BYTE *v22; // esi@30
  int v23; // edx@30
  int v24; // ebx@42
  int v25; // esi@45
  signed int v26; // edi@49
  int v27; // eax@50
  int v28; // esi@63
  int v29; // ebx@64
  int v30; // ST04_4@68
  unsigned int v31; // ebx@68
  char v32; // bp@68
  bool v33; // si@72
  int v34; // eax@74
  int v35; // eax@76
  int v36; // ST38_4@80
  int v37; // ST3C_4@80
  int *v38; // ebx@85
  int v39; // ebx@92
  int v40; // esi@93
  int v41; // ebx@100
  int v42; // eax@101
  int v43; // edx@102
  int v44; // edx@107
  int v45; // eax@108
  int v46; // ecx@108
  int v47; // edx@109
  int v48; // edx@111
  int v49; // eax@116
  int v50; // eax@120
  int v51; // edi@121
  _DWORD *v52; // ebp@121
  _DWORD *v53; // esi@121
  _DWORD *v54; // eax@122
  _DWORD *v55; // ST24_4@123
  _DWORD *v56; // eax@123
  int (__cdecl *v57)(_DWORD); // eax@126
  signed int v58; // eax@140
  int v59; // [sp+24h] [bp-138h]@18
  int v60; // [sp+24h] [bp-138h]@28
  int v61; // [sp+24h] [bp-138h]@68
  int v62; // [sp+24h] [bp-138h]@121
  int v63; // [sp+28h] [bp-134h]@28
  int v64; // [sp+28h] [bp-134h]@68
  unsigned int v65; // [sp+2Ch] [bp-130h]@26
  _BYTE **v66; // [sp+2Ch] [bp-130h]@68
  int v67; // [sp+30h] [bp-12Ch]@3
  int v68; // [sp+34h] [bp-128h]@7
  int v69; // [sp+48h] [bp-114h]@6
  int v70; // [sp+4Ch] [bp-110h]@1
  int v71; // [sp+50h] [bp-10Ch]@1
  int v72; // [sp+54h] [bp-108h]@68
  int v73; // [sp+58h] [bp-104h]@74
  int v74; // [sp+64h] [bp-F8h]@76
  int v75[9]; // [sp+78h] [bp-E4h]@68
  int v76[9]; // [sp+9Ch] [bp-C0h]@68
  int v77[15]; // [sp+C0h] [bp-9Ch]@68
  char v78; // [sp+FFh] [bp-5Dh]@133
  char v79; // [sp+10Ah] [bp-52h]@130
  char v80; // [sp+112h] [bp-4Ah]@131
  unsigned int v81; // [sp+113h] [bp-49h]@135

  v70 = 0;
  v71 = 0;
  if ( ((unsigned int)~a3 >> 31) & (a4 == 0) || !a2 )
    return 6;
  v67 = 0;
  if ( *(_BYTE *)a2 & 2 )
    v67 = *(_DWORD *)(a2 + 16) != 0;
  if ( !a1 )
  {
    v9 = v71;
    v69 = 33;
    v5 = 0;
    v68 = 0;
    goto LABEL_24;
  }
  v4 = sub_6F768950((int *)a1, a2, &v70);
  v69 = v4;
  if ( !v4 )
  {
    v68 = *(_DWORD *)a1;
    if ( !(*(_DWORD *)a2 & 8) || (v5 = *(_BYTE ***)(a2 + 20)) == 0 )
    {
      v69 = 11;
      v17 = a1 + 20;
      v65 = a1 + 20 + 4 * *(_DWORD *)(a1 + 16);
      if ( a1 + 20 >= v65 )
      {
        v24 = v70;
        v5 = 0;
        goto LABEL_44;
      }
      v18 = 0;
      while ( 1 )
      {
        v5 = *(_BYTE ***)v17;
        if ( ***(_BYTE ***)v17 & 1 )
        {
          if ( *(_BYTE *)a2 & 0x10 )
          {
            v60 = *(_DWORD *)(a2 + 24);
            v63 = *(_DWORD *)(a2 + 28);
          }
          else
          {
            v63 = 0;
            v60 = 0;
          }
          v4 = sub_6F768E50((int)v5, &v70, v67, a3, v60, v63, &v71);
          v19 = v4 == 0;
          v69 = v4;
          if ( !v4 )
            goto LABEL_13;
          v20 = "truetype";
          v21 = 9;
          v22 = *(_BYTE **)(**(_DWORD **)v17 + 8);
          v23 = (unsigned __int8)v4;
          do
          {
            if ( !v21 )
              break;
            v19 = *v22++ == *v20++;
            --v21;
          }
          while ( v19 );
          if ( v19 && (unsigned __int8)v4 == 142 )
          {
            if ( sub_6F771FF0(v70, 0) )
            {
              LOBYTE(v4) = v69;
              v23 = (unsigned __int8)v69;
              goto LABEL_42;
            }
            v4 = sub_6F76A550((int *)a1, v70, a3, v60, v63, a4);
            v69 = v4;
            if ( !v4 )
            {
              sub_6F769260(v70, v67);
              return v69;
            }
            v23 = (unsigned __int8)v4;
          }
          if ( v23 != 2 )
            goto LABEL_42;
          v18 = v5;
        }
        v17 += 4;
        if ( v65 <= v17 )
        {
          LOBYTE(v4) = v69;
          v5 = v18;
          v23 = (unsigned __int8)v69;
          goto LABEL_42;
        }
      }
    }
    if ( **v5 & 1 )
    {
      if ( *(_DWORD *)a2 & 0x10 )
      {
        v6 = *(_DWORD *)(a2 + 24);
        v7 = *(_DWORD *)(a2 + 28);
      }
      else
      {
        v7 = 0;
        v6 = 0;
      }
      v69 = sub_6F768E50((int)v5, &v70, v67, a3, v6, v7, &v71);
      if ( !v69 )
      {
LABEL_13:
        v8 = sub_6F773A50(v68, 12, &v69);
        v9 = v71;
        if ( v69 )
        {
          v10 = v71;
          if ( !v8 )
            goto LABEL_24;
          goto LABEL_15;
        }
        v8[2] = v71;
        sub_6F773F80(*(_DWORD *)(v9 + 96) + 16, (int)v8);
        if ( a3 < 0 )
        {
          v41 = v71;
LABEL_101:
          v42 = *(_DWORD *)(v41 + 8);
          if ( v42 & 1 )
          {
            v43 = *(_WORD *)(v41 + 74);
            if ( (signed __int16)v43 < 0 )
            {
              v43 = -v43;
              *(_WORD *)(v41 + 74) = v43;
            }
            if ( !(v42 & 0x20) )
              *(_WORD *)(v41 + 78) = v43;
          }
          if ( v42 & 2 )
          {
            v44 = *(_DWORD *)(v41 + 28);
            if ( v44 > 0 )
            {
              v45 = *(_DWORD *)(v41 + 32);
              v46 = v45 + 16 * v44;
              do
              {
                if ( *(_WORD *)v45 < 0 )
                  *(_WORD *)v45 = -*(_WORD *)v45;
                v47 = *(_DWORD *)(v45 + 8);
                if ( v47 < 0 )
                  *(_DWORD *)(v45 + 8) = (signed __int16)-*(_WORD *)(v45 + 8);
                v48 = *(_DWORD *)(v45 + 12);
                if ( v48 < 0 )
                  *(_DWORD *)(v45 + 12) = -v48;
                v45 += 16;
              }
              while ( v45 != v46 );
            }
          }
          v49 = *(_DWORD *)(v41 + 128);
          *(_DWORD *)v49 = 0x10000;
          *(_DWORD *)(v49 + 4) = 0;
          *(_DWORD *)(v49 + 8) = 0;
          *(_DWORD *)(v49 + 12) = 0x10000;
          *(_DWORD *)(v49 + 16) = 0;
          *(_DWORD *)(v49 + 20) = 0;
          *(_DWORD *)(v49 + 56) = 1;
          if ( a4 )
            *a4 = v41;
          else
            sub_6F769910(v41);
          return v69;
        }
        v69 = sub_6F7693C0(v71, 0);
        if ( !v69 )
        {
          v10 = v71;
          if ( v71 )
          {
            v50 = *(_DWORD *)(v71 + 96);
            if ( v50 )
            {
              v51 = *(_DWORD *)(v71 + 100);
              v52 = 0;
              v62 = *(_DWORD *)(v50 + 12);
              v53 = sub_6F773A50(*(_DWORD *)(v71 + 100), *(_DWORD *)(v62 + 40), v77);
              if ( v77[0]
                || (v52 = sub_6F773A50(v51, 12, v77), v77[0])
                || (*v53 = v10, v53[10] = 0, (v57 = *(int (__cdecl **)(_DWORD))(v62 + 56)) != 0)
                && (v77[0] = v57(v53)) != 0 )
              {
                v54 = 0;
              }
              else
              {
                v52[2] = v53;
                sub_6F773F80(v10 + 108, (int)v52);
                if ( !v77[0] )
                {
                  v69 = 0;
                  v56 = v53;
                  goto LABEL_124;
                }
                v54 = v53;
              }
              v55 = v54;
              sub_6F773D90(v51, (int)v52);
              sub_6F773D90(v51, (int)v53);
              v56 = v55;
              v69 = v77[0];
              if ( !v77[0] )
              {
LABEL_124:
                v41 = v71;
                *(_DWORD *)(v71 + 88) = v56;
                goto LABEL_101;
              }
              goto LABEL_136;
            }
            v58 = 34;
          }
          else
          {
            v58 = 35;
          }
          v69 = v58;
          goto LABEL_15;
        }
LABEL_136:
        v10 = v71;
LABEL_15:
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 + 96);
          if ( v11 )
          {
            v12 = *(_DWORD *)(v10 + 128);
            v13 = *(_DWORD *)(v12 + 56) - 1;
            v19 = *(_DWORD *)(v12 + 56) == 1;
            *(_DWORD *)(v12 + 56) = v13;
            if ( v13 < 0 || v19 )
            {
              v59 = *(_DWORD *)(v11 + 8);
              v14 = sub_6F773F40((int *)(v11 + 16), v10);
              v15 = v14;
              if ( v14 )
              {
                sub_6F773FF0(v11 + 16, v14);
                sub_6F773D90(v59, v15);
                sub_6F768C90(v59, v10, v11);
              }
            }
          }
        }
        return v69;
      }
    }
    else
    {
      v69 = 32;
    }
    v28 = v70;
    if ( v70 )
    {
      v29 = *(_DWORD *)(v70 + 28);
      sub_6F771FD0(v70);
      v9 = v71;
      if ( !v67 )
      {
        sub_6F773D90(v29, v28);
        v9 = v71;
      }
      goto LABEL_24;
    }
LABEL_47:
    v9 = v71;
    goto LABEL_24;
  }
  v23 = (unsigned __int8)v4;
  v68 = 0;
  v5 = 0;
LABEL_42:
  v24 = v70;
  if ( (v4 & 0xFB) != 81 && v23 != 2 )
    goto LABEL_44;
  if ( !v70 )
  {
    if ( !(*(_BYTE *)a2 & 4) )
    {
      v69 = 85;
      goto LABEL_44;
    }
    goto LABEL_68;
  }
  v26 = sub_6F771FF0(v70, 0);
  if ( v26 || (v26 = sub_6F7720B0(v24, v77, 0x80u)) != 0 )
  {
LABEL_50:
    v27 = (unsigned __int8)v26;
    if ( (unsigned __int8)v26 != 2 )
      goto LABEL_51;
    goto LABEL_97;
  }
  if ( !LOBYTE(v77[0])
    && !v79
    && !v80
    && (unsigned __int8)(BYTE1(v77[0]) - 1) <= 0x20u
    && !v78
    && !*((_BYTE *)&v77[0] + BYTE1(v77[0]) + 2) )
  {
    v26 = sub_6F76A8D0((int *)a1, v24, ((_byteswap_ulong(v81) + 127) & 0xFFFFFF80) + 128, a3, a4);
    goto LABEL_50;
  }
LABEL_97:
  v26 = sub_6F76A8D0((int *)a1, v24, 0, a3, a4);
  v27 = (unsigned __int8)v26;
LABEL_51:
  if ( v27 != 2 && v27 != 85 || !(*(_BYTE *)a2 & 4) )
    goto LABEL_53;
LABEL_68:
  v72 = 0;
  v64 = *(_DWORD *)a1;
  v30 = v24;
  v31 = 0;
  sub_6F771EA0(a1, v30, *(_DWORD *)(a2 + 12), v75, (int)v76, (int)v77);
  v61 = 2;
  v66 = v5;
  v32 = 0;
  while ( 1 )
  {
    v33 = sub_6F771F80(a1, v31);
    if ( !v33 || !(v32 & 1) )
    {
      if ( v77[v31] )
        goto LABEL_71;
      v34 = v75[v31];
      v73 = 4;
      if ( !v34 )
        v34 = *(_DWORD *)(a2 + 12);
      v74 = v34;
      v72 = 0;
      v35 = sub_6F768950((int *)a1, (int)&v73, &v72);
      v61 = v35;
      if ( !v33 || (_BYTE)v35 != 81 )
        break;
    }
    v32 = 1;
LABEL_71:
    if ( ++v31 == 9 )
      goto LABEL_85;
  }
  if ( v35 )
    goto LABEL_71;
  v61 = sub_6F76A8D0((int *)a1, v72, v76[v31], a3, a4);
  if ( v72 )
  {
    v36 = v72;
    v37 = *(_DWORD *)(v72 + 28);
    sub_6F771FD0(v72);
    sub_6F773D90(v37, v36);
  }
  if ( v61 )
  {
    if ( v33 )
      v32 = 1;
    goto LABEL_71;
  }
LABEL_85:
  v26 = v61;
  v5 = v66;
  v38 = v75;
  do
  {
    if ( *v38 )
    {
      sub_6F773D90(v64, *v38);
      *v38 = 0;
    }
    ++v38;
  }
  while ( v38 != v76 );
  if ( v61 )
    v26 = 2;
LABEL_53:
  v69 = v26;
  if ( !v26 )
  {
    v39 = v70;
    result = 0;
    if ( v70 )
    {
      v40 = *(_DWORD *)(v70 + 28);
      sub_6F771FD0(v70);
      if ( v67 )
        return v69;
      sub_6F773D90(v40, v39);
      result = v69;
    }
    return result;
  }
  if ( (_BYTE)v26 == 2 )
    v69 = 2;
  v24 = v70;
LABEL_44:
  if ( !v24 )
    goto LABEL_47;
  v25 = *(_DWORD *)(v24 + 28);
  sub_6F771FD0(v24);
  v9 = v71;
  if ( !v67 )
  {
    sub_6F773D90(v25, v24);
    goto LABEL_47;
  }
LABEL_24:
  if ( v9 )
    sub_6F768C90(v68, v9, (int)v5);
  return v69;
}
