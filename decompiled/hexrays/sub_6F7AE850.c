signed int __usercall sub_6F7AE850@<eax>(int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, unsigned int a4)
{
  bool v4; // zf@1
  int v5; // esi@1
  int v6; // edi@1
  int v7; // ebp@1
  signed int result; // eax@3
  char *v9; // ebx@5
  int v10; // ST34_4@18
  __int16 v11; // ax@19
  int v12; // ebp@19
  __int16 v13; // ax@21
  __int16 v14; // bx@21
  unsigned int v15; // esi@22
  unsigned int v16; // esi@26
  unsigned int v17; // esi@29
  signed int v18; // edi@31
  unsigned int v19; // eax@34
  char *v20; // ebx@37
  signed int v21; // edx@38
  int v22; // eax@40
  signed int v23; // edx@40
  int v24; // esi@40
  int v25; // ecx@42
  int j; // ecx@45
  int v27; // eax@46
  int v28; // edx@46
  unsigned int k; // esi@48
  unsigned int v30; // ebx@49
  signed __int64 v31; // rax@50
  int v32; // ebx@50
  signed __int64 v33; // rax@50
  int v34; // esi@54
  int v35; // edi@54
  int v36; // ebx@56
  unsigned int v37; // ebp@60
  int v38; // ecx@71
  int v39; // eax@83
  int v40; // edx@83
  int v41; // ecx@83
  int v42; // eax@83
  int i; // esi@87
  signed __int64 v44; // rax@88
  int v45; // ebx@88
  signed __int64 v46; // rax@88
  int l; // edx@91
  int v48; // [sp+28h] [bp-84h]@1
  char *v49; // [sp+2Ch] [bp-80h]@5
  unsigned int v50; // [sp+30h] [bp-7Ch]@4
  __int16 v51; // [sp+30h] [bp-7Ch]@17
  int v52; // [sp+30h] [bp-7Ch]@19
  unsigned int v53; // [sp+34h] [bp-78h]@5
  int v54; // [sp+34h] [bp-78h]@12
  unsigned int v55; // [sp+34h] [bp-78h]@55
  int v56; // [sp+38h] [bp-74h]@12
  char *v57; // [sp+38h] [bp-74h]@19
  int v58; // [sp+3Ch] [bp-70h]@17
  char *v59; // [sp+40h] [bp-6Ch]@13
  char *v60; // [sp+44h] [bp-68h]@19
  char *v61; // [sp+48h] [bp-64h]@13
  char *v62; // [sp+4Ch] [bp-60h]@12
  __int16 v63; // [sp+52h] [bp-5Ah]@54
  int v64; // [sp+54h] [bp-58h]@19
  int v65; // [sp+58h] [bp-54h]@40
  int v66; // [sp+5Ch] [bp-50h]@42
  int v67; // [sp+60h] [bp-4Ch]@77
  unsigned int v68; // [sp+64h] [bp-48h]@19
  char *v69; // [sp+68h] [bp-44h]@17
  int v70; // [sp+6Ch] [bp-40h]@21
  int v71; // [sp+70h] [bp-3Ch]@36
  unsigned int v72; // [sp+78h] [bp-34h]@19
  int v73; // [sp+7Ch] [bp-30h]@54
  int v74; // [sp+84h] [bp-28h]@5
  unsigned int v75; // [sp+88h] [bp-24h]@37
  unsigned int v76; // [sp+8Ch] [bp-20h]@1

  v4 = *(_BYTE *)(a1 + 672) == 0;
  v5 = *(_DWORD *)(a1 + 104);
  v48 = a3;
  v6 = *(_DWORD *)(a1 + 676);
  v76 = 0;
  v7 = *(_DWORD *)(v5 + 28);
  if ( v4 || !v6 )
    return 6;
  result = 0;
  if ( *(_DWORD *)(v6 + 32) > a2 )
  {
    v50 = 4 * a2;
    if ( *(_DWORD *)(*(_DWORD *)(v6 + 36) + 4 * a2) != *(_DWORD *)(*(_DWORD *)(v6 + 36) + 4 * a2 + 4) )
    {
      v9 = 0;
      v53 = a2;
      v49 = sub_6F773B30(v7, 8, 0, a4, 0, &v74);
      if ( v74 )
        goto LABEL_6;
      v9 = sub_6F773B30(v7, 1, 0, a4, 0, &v74);
      if ( v74 )
        goto LABEL_6;
      v74 = sub_6F771FF0(v5, *(_DWORD *)(*(_DWORD *)(v6 + 36) + 4 * v53));
      if ( v74 )
        goto LABEL_6;
      v74 = sub_6F772380(v5, *(_DWORD *)(*(_DWORD *)(v6 + 36) + v50 + 4) - *(_DWORD *)(*(_DWORD *)(v6 + 36) + 4 * v53));
      if ( v74 )
        goto LABEL_6;
      v54 = *(_DWORD *)(v5 + 32);
      v56 = *(_DWORD *)v5;
      v62 = sub_6F773B30(v7, 4, 0, *(_DWORD *)v6, 0, &v74);
      if ( v74 )
      {
        v59 = 0;
        v61 = 0;
LABEL_14:
        sub_6F773D90(v7, (int)v62);
        sub_6F773D90(v7, (int)v61);
        sub_6F773D90(v7, (int)v59);
        sub_6F772460(v5);
LABEL_6:
        sub_6F773D90(v7, (int)v49);
        sub_6F773D90(v7, (int)v9);
        return v74;
      }
      v61 = sub_6F773B30(v7, 4, 0, *(_DWORD *)v6, 0, &v74);
      v59 = 0;
      if ( v74 )
        goto LABEL_14;
      v59 = sub_6F773B30(v7, 4, 0, *(_DWORD *)v6, 0, &v74);
      if ( v74 )
        goto LABEL_14;
      v51 = sub_6F7724C0(v5);
      v69 = 0;
      v58 = v54 - v56 + (unsigned __int16)sub_6F7724C0(v5);
      if ( v51 < 0 )
      {
        v10 = *(_DWORD *)(v5 + 32) - *(_DWORD *)v5;
        *(_DWORD *)(v5 + 32) = v58 + *(_DWORD *)v5;
        v69 = sub_6F969250(v5, &v76);
        v58 = *(_DWORD *)(v5 + 32) - *(_DWORD *)v5;
        *(_DWORD *)(v5 + 32) = v10 + *(_DWORD *)v5;
      }
      v11 = v51;
      v64 = v7;
      v12 = v5;
      v60 = 0;
      v68 = 0;
      v57 = v9;
      v52 = v6;
      v72 = v11 & 0xFFF;
      while ( 1 )
      {
        if ( v68 >= v72 )
        {
          v5 = v12;
          v9 = v57;
          v7 = v64;
          goto LABEL_14;
        }
        v70 = (unsigned __int16)sub_6F7724C0(v12);
        v13 = sub_6F7724C0(v12);
        v14 = v13;
        if ( v13 >= 0 )
        {
          v19 = v13 & 0xFFF;
          if ( v19 >= *(_DWORD *)(v52 + 24) )
          {
            v5 = v12;
            v9 = v57;
            v7 = v64;
            v74 = 8;
            goto LABEL_14;
          }
          memcpy(v62, (const void *)(*(_DWORD *)(v52 + 28) + 4 * *(_DWORD *)v52 * v19), 4 * *(_DWORD *)v52);
        }
        else
        {
          v15 = 0;
          if ( *(_DWORD *)v52 )
          {
            do
              *(_DWORD *)&v62[4 * v15++] = 4 * (signed __int16)sub_6F7724C0(v12);
            while ( *(_DWORD *)v52 > v15 );
          }
        }
        if ( HIBYTE(v14) & 0x40 )
        {
          if ( *(_DWORD *)v52 )
          {
            v16 = 0;
            do
              *(_DWORD *)&v61[4 * v16++] = 4 * (signed __int16)sub_6F7724C0(v12);
            while ( *(_DWORD *)v52 > v16 );
            if ( *(_DWORD *)v52 )
            {
              v17 = 0;
              do
                *(_DWORD *)&v59[4 * v17++] = 4 * (signed __int16)sub_6F7724C0(v12);
              while ( *(_DWORD *)v52 > v17 );
            }
          }
        }
        v18 = sub_6F7AAAA0((unsigned int *)v52, v14, (int)v62, (int)v61, (int)v59);
        if ( !v18 )
        {
          v58 += v70;
          goto LABEL_33;
        }
        v71 = *(_DWORD *)(v12 + 32) - *(_DWORD *)v12;
        if ( HIBYTE(v14) & 0x20 )
        {
          *(_DWORD *)(v12 + 32) = v58 + *(_DWORD *)v12;
          v60 = sub_6F969250(v12, &v75);
          v20 = v60;
        }
        else
        {
          v20 = v69;
          v75 = v76;
        }
        v21 = v75;
        if ( !v75 )
          v21 = a4;
        v22 = sub_6F9693CD(v12, v21);
        v23 = v75;
        v24 = v22;
        v65 = v22;
        if ( !v75 )
          v23 = a4;
        v25 = sub_6F9693CD(v12, v23);
        v66 = v25;
        if ( v24 != 0 && v20 != 0 )
        {
          if ( v25 )
          {
            if ( v20 == (char *)-1 )
            {
              for ( i = 0; i != a4; ++i )
              {
                v44 = (unsigned int)(((signed int)((unsigned __int64)(v18 * (signed __int64)*(_WORD *)(v65 + 2 * i)) >> 32) >> 31)
                                   + 0x8000)
                    + v18 * (signed __int64)*(_WORD *)(v65 + 2 * i);
                v45 = *(_DWORD *)(v48 + 4) + 8 * i;
                *(_DWORD *)v45 += (HIDWORD(v44) << 16) + ((unsigned int)v44 >> 16);
                v46 = (unsigned int)(((signed int)((unsigned __int64)(v18 * (signed __int64)*(_WORD *)(v25 + 2 * i)) >> 32) >> 31)
                                   + 0x8000)
                    + v18 * (signed __int64)*(_WORD *)(v25 + 2 * i);
                *(_DWORD *)(v45 + 4) += (HIDWORD(v46) << 16) + ((unsigned int)v46 >> 16);
              }
              goto LABEL_64;
            }
            for ( j = 0; j != a4; ++j )
            {
              v27 = *(_DWORD *)(v48 + 4);
              v28 = *(_DWORD *)(v27 + 8 * j + 4);
              *(_DWORD *)&v49[8 * j] = *(_DWORD *)(v27 + 8 * j);
              *(_DWORD *)&v49[8 * j + 4] = v28;
              v57[j] = 0;
            }
            for ( k = 0; k < v75; ++k )
            {
              v30 = *(_WORD *)&v60[2 * k];
              if ( a4 > v30 )
              {
                v57[v30] = 1;
                v31 = (unsigned int)(((signed int)((unsigned __int64)(v18 * (signed __int64)*(_WORD *)(v65 + 2 * k)) >> 32) >> 31)
                                   + 0x8000)
                    + v18 * (signed __int64)*(_WORD *)(v65 + 2 * k);
                v32 = *(_DWORD *)(v48 + 4) + 8 * v30;
                *(_DWORD *)v32 += (HIDWORD(v31) << 16) + ((unsigned int)v31 >> 16);
                v33 = (unsigned int)(((signed int)((unsigned __int64)(v18 * (signed __int64)*(_WORD *)(v66 + 2 * k)) >> 32) >> 31)
                                   + 0x8000)
                    + v18 * (signed __int64)*(_WORD *)(v66 + 2 * k);
                *(_DWORD *)(v32 + 4) += (HIDWORD(v33) << 16) + ((unsigned int)v33 >> 16);
              }
            }
            if ( *(_WORD *)v48 )
              break;
          }
        }
LABEL_64:
        if ( v60 != (char *)-1 )
        {
          sub_6F773D90(v64, (int)v60);
          v60 = 0;
        }
        sub_6F773D90(v64, v65);
        sub_6F773D90(v64, v66);
        v58 += v70;
        *(_DWORD *)(v12 + 32) = *(_DWORD *)v12 + v71;
LABEL_33:
        ++v68;
      }
      v34 = *(_DWORD *)(v48 + 4);
      v63 = 0;
      v35 = 0;
      v73 = v12;
      while ( 1 )
      {
        v55 = *(_WORD *)(*(_DWORD *)(v48 + 12) + 2 * v63);
        if ( v55 < v35 )
          break;
        v36 = v35;
        if ( !v57[v35] )
        {
          while ( v55 >= ++v36 )
          {
            if ( v57[v36] )
              goto LABEL_70;
          }
          goto LABEL_60;
        }
LABEL_70:
        v37 = v36 + 1;
        if ( v55 < v36 + 1 )
          goto LABEL_96;
        v38 = v36;
        do
        {
          if ( v57[v37] )
          {
            if ( v38 + 1 > (signed int)(v37 - 1) )
            {
              v38 = v37;
            }
            else
            {
              sub_6F9694E4(v38 + 1, v37 - 1, v38, v37, (int)v49, v34);
              v38 = v37;
            }
          }
          ++v37;
        }
        while ( v55 >= v37 );
        v67 = v38;
        if ( v38 == v36 )
        {
LABEL_96:
          v39 = v34 + 8 * v36;
          v40 = (int)&v49[8 * v36];
          v41 = *(_DWORD *)v39 - *(_DWORD *)v40;
          v42 = *(_DWORD *)(v39 + 4) - *(_DWORD *)(v40 + 4);
          if ( v42 | v41 )
          {
            while ( v36 > v35 )
            {
              *(_DWORD *)(v34 + 8 * v35) += v41;
              *(_DWORD *)(v34 + 8 * v35++ + 4) += v42;
            }
            for ( l = v36 + 1; (signed int)v55 >= l; ++l )
            {
              *(_DWORD *)(v34 + 8 * l) += v41;
              *(_DWORD *)(v34 + 8 * l + 4) += v42;
            }
          }
        }
        else
        {
          if ( (signed int)v55 >= v38 + 1 )
            sub_6F9694E4(v38 + 1, v55, v38, v36, (int)v49, v34);
          if ( v36 && v36 - 1 >= v35 )
            sub_6F9694E4(v35, v36 - 1, v67, v36, (int)v49, v34);
        }
LABEL_61:
        if ( ++v63 >= *(_WORD *)v48 )
        {
          v12 = v73;
          goto LABEL_64;
        }
        v35 = v37;
      }
      v36 = v35;
LABEL_60:
      v37 = v36;
      goto LABEL_61;
    }
  }
  return result;
}
