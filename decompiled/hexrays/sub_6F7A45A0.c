signed int __cdecl sub_6F7A45A0(int a1, int a2, int a3)
{
  int v3; // ebp@1
  int v4; // edi@1
  int v5; // eax@1
  int v6; // eax@2
  int v7; // ebx@3
  unsigned __int32 v8; // edx@3
  signed int result; // eax@3
  int v10; // ebx@6
  int *v11; // eax@33
  int *v12; // edx@33
  int v13; // ebx@35
  int v14; // esi@38
  int v15; // edx@40
  int v16; // eax@41
  int *v17; // ecx@41
  int v18; // eax@42
  unsigned int v19; // edx@44
  int j; // ebx@48
  unsigned __int32 *v21; // esi@49
  unsigned int v22; // ecx@59
  signed int v23; // eax@62
  int v24; // ST40_4@63
  char v25; // al@63
  unsigned int v26; // ecx@66
  int v27; // edx@66
  char *v28; // ebx@67
  unsigned int v29; // ST44_4@68
  unsigned int v30; // eax@68
  unsigned int v31; // eax@71
  int v32; // ecx@72
  unsigned int v33; // ecx@75
  int v34; // edx@76
  unsigned int v35; // ebx@76
  unsigned int v36; // ecx@79
  unsigned int v37; // ecx@81
  int v38; // edx@96
  int v39; // ebx@99
  unsigned int *v40; // ebp@99
  int v41; // edx@102
  int v42; // eax@103
  int i; // eax@105
  unsigned int v44; // eax@109
  int v45; // [sp+24h] [bp-98h]@1
  int v46; // [sp+28h] [bp-94h]@2
  char *v47; // [sp+2Ch] [bp-90h]@22
  unsigned int v48; // [sp+2Ch] [bp-90h]@59
  unsigned int v49; // [sp+2Ch] [bp-90h]@62
  char v50; // [sp+30h] [bp-8Ch]@62
  int v51; // [sp+30h] [bp-8Ch]@67
  int v52; // [sp+30h] [bp-8Ch]@76
  int v53; // [sp+30h] [bp-8Ch]@99
  _BYTE *v54; // [sp+34h] [bp-88h]@21
  char *v55; // [sp+38h] [bp-84h]@22
  unsigned int v56; // [sp+38h] [bp-84h]@62
  _DWORD *v57; // [sp+3Ch] [bp-80h]@22
  int v58; // [sp+40h] [bp-7Ch]@68
  unsigned int v59; // [sp+40h] [bp-7Ch]@73
  signed int v60; // [sp+40h] [bp-7Ch]@99
  int v61; // [sp+44h] [bp-78h]@76
  unsigned int v62; // [sp+48h] [bp-74h]@71
  int v63; // [sp+50h] [bp-6Ch]@71
  unsigned int v64; // [sp+54h] [bp-68h]@75
  unsigned int v65; // [sp+5Ch] [bp-60h]@73
  int v66; // [sp+68h] [bp-54h]@3
  int v67; // [sp+6Ch] [bp-50h]@6
  int v68; // [sp+70h] [bp-4Ch]@103
  char v69; // [sp+74h] [bp-48h]@6
  int v70; // [sp+78h] [bp-44h]@7
  unsigned int v71; // [sp+7Ch] [bp-40h]@9
  unsigned __int16 v72; // [sp+80h] [bp-3Ch]@12
  unsigned int v73; // [sp+84h] [bp-38h]@14
  int v74; // [sp+8Ch] [bp-30h]@16
  int v75; // [sp+90h] [bp-2Ch]@17
  int v76; // [sp+94h] [bp-28h]@18
  int v77; // [sp+98h] [bp-24h]@19
  int v78; // [sp+9Ch] [bp-20h]@20
  int v79; // [sp+C4h] [bp+8h]@99

  v3 = a2;
  v4 = a1;
  v5 = *(_DWORD *)(a2 + 96);
  v45 = *(_DWORD *)(a2 + 532);
  if ( !*(_DWORD *)(a2 + 532) )
  {
    v16 = sub_6F76F0A0(*(_DWORD *)(v5 + 4), "sfnt");
    v17 = (int *)v16;
    v45 = v16;
    result = 11;
    if ( !v17 )
      return result;
    v18 = *v17;
    *(_DWORD *)(a2 + 532) = v17;
    *(_DWORD *)(a2 + 508) = v18;
    v5 = *(_DWORD *)(a2 + 96);
  }
  *(_DWORD *)(a2 + 536) = sub_6F76F110(v5, (int)"postscript-cmaps");
  v6 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a2 + 132) = 0;
  *(_DWORD *)(a2 + 136) = 0;
  *(_DWORD *)(a2 + 140) = 0;
  v46 = v6;
  while ( 1 )
  {
    v7 = sub_6F7720A0(v4);
    v8 = sub_6F7727E0(v4, &v66);
    result = v66;
    if ( v66 )
      return result;
    if ( v8 != 2001684038 )
      break;
    result = sub_6F771FF0(v4, v7);
    v66 = result;
    if ( result )
      return result;
    v10 = *(_DWORD *)(v4 + 28);
    v67 = 0;
    result = sub_6F7728E0(v4, (int)&unk_6FB688A0, (int)&v69);
    v67 = result;
    if ( result )
      return result;
    if ( v70 == 2001684038
      || v70 == 1953784678
      || v71 != *(_DWORD *)(v4 + 4)
      || !v72
      || v71 <= 20 * (unsigned int)v72 + 44
      || 16 * (unsigned int)v72 + 12 >= v73
      || v73 & 3 )
    {
      return 8;
    }
    if ( v74 )
    {
      if ( v75 && !v76 )
        return 8;
    }
    else if ( v75 || v76 )
    {
      return 8;
    }
    if ( !v77 && v78 )
      return 8;
    v54 = sub_6F773A50(v10, v73, &v67);
    if ( v67 )
    {
      v57 = 0;
      v47 = 0;
      v55 = 0;
      goto LABEL_23;
    }
    v57 = sub_6F773A50(v10, 40, &v67);
    if ( v67 )
    {
      v47 = 0;
      v55 = 0;
      goto LABEL_23;
    }
    if ( v72 )
    {
      v22 = 0;
      v48 = v72;
      while ( 1 )
      {
        v48 >>= 1;
        if ( !v48 )
          break;
        ++v22;
      }
      v23 = 16 << v22;
      v50 = 16 << v22;
      v49 = (unsigned int)(16 << v22) >> 8;
      v56 = v22 >> 8;
    }
    else
    {
      LOBYTE(v22) = -1;
      LOBYTE(v56) = -1;
      v50 = 8;
      LOBYTE(v49) = 0;
      v23 = 8;
    }
    v24 = 16 * v72 - v23;
    *v54 = BYTE3(v70);
    v54[1] = BYTE2(v70);
    v54[2] = BYTE1(v70);
    v54[3] = v70;
    v54[4] = HIBYTE(v72);
    v25 = v72;
    v54[9] = v22;
    v54[5] = v25;
    v54[11] = v24;
    v54[6] = v49;
    v54[7] = v50;
    v54[8] = v56;
    v54[10] = BYTE1(v24);
    v55 = sub_6F773B30(v10, 24, 0, v72, 0, &v67);
    v47 = 0;
    if ( !v67 )
    {
      v47 = sub_6F773B30(v10, 4, 0, v72, 0, &v67);
      if ( !v67 )
      {
        v67 = sub_6F772380(v4, 20 * v72);
        if ( !v67 )
        {
          v26 = 0;
          v27 = 0;
          if ( v72 )
          {
            v51 = v10;
            v28 = v55;
            while ( 1 )
            {
              v29 = v26;
              v58 = v27;
              *(_DWORD *)v28 = sub_6F772560(v4);
              *((_DWORD *)v28 + 1) = sub_6F772560(v4);
              *((_DWORD *)v28 + 2) = sub_6F772560(v4);
              *((_DWORD *)v28 + 3) = sub_6F772560(v4);
              *((_DWORD *)v28 + 4) = sub_6F772560(v4);
              v30 = *(_DWORD *)v28;
              if ( *(_DWORD *)v28 <= v29 )
                break;
              *(_DWORD *)&v47[4 * v58] = v28;
              v26 = v30;
              v27 = v58 + 1;
              v28 += 24;
              if ( v58 + 1 >= v72 )
              {
                v10 = v51;
                goto LABEL_71;
              }
            }
            v10 = v51;
            sub_6F772460(v4);
            v67 = 8;
          }
          else
          {
LABEL_71:
            sub_6F772460(v4);
            qsort(v47, v72, 4u, (int (__cdecl *)(const void *, const void *))sub_6F79E7E0);
            v63 = v72;
            v31 = 20 * v72 + 44;
            v62 = 16 * v72 + 12;
            if ( v72 )
            {
              v32 = *(_DWORD *)v47;
              if ( v31 != *(_DWORD *)(*(_DWORD *)v47 + 4) )
                goto LABEL_91;
              v59 = *(_DWORD *)(v32 + 8);
              v65 = v71;
              if ( v71 < v59 )
                goto LABEL_91;
              if ( v31 > v71 - v59 )
                goto LABEL_91;
              v33 = *(_DWORD *)(v32 + 12);
              v64 = v73;
              if ( v73 < v33 )
                goto LABEL_91;
              v34 = *(_DWORD *)v47;
              v52 = v10;
              v35 = v33;
              v61 = 0;
              while ( 1 )
              {
                if ( v64 - v35 < v62 || v59 > v35 )
                {
LABEL_84:
                  v10 = v52;
                  goto LABEL_91;
                }
                ++v61;
                *(_DWORD *)(v34 + 20) = v62;
                v36 = v31 + ((v59 + 3) & 0xFFFFFFFC);
                v62 += (v35 + 3) & 0xFFFFFFFC;
                if ( v63 == v61 )
                  break;
                v34 = *(_DWORD *)&v47[4 * v61];
                v31 = *(_DWORD *)(v34 + 4);
                if ( v31 == v36 )
                {
                  v37 = *(_DWORD *)(v34 + 8);
                  v59 = *(_DWORD *)(v34 + 8);
                  if ( v37 <= v65 && v31 <= v65 - v37 )
                  {
                    v35 = *(_DWORD *)(v34 + 12);
                    if ( v35 <= v64 )
                      continue;
                  }
                }
                goto LABEL_84;
              }
              v10 = v52;
              v31 += (v59 + 3) & 0xFFFFFFFC;
            }
            if ( v74 && (v74 != v31 || (v31 += v75, v31 > v71))
              || v77 && (v77 != ((v31 + 3) & 0xFFFFFFFC) || (v31 = v77 + v78, v77 + v78 > v71))
              || (v38 = v73, v73 != v62)
              || v71 != v31 )
            {
LABEL_91:
              v67 = 8;
              goto LABEL_23;
            }
            if ( v63 )
            {
              v53 = v10;
              v39 = (int)(v54 + 12);
              v79 = v3;
              v60 = 0;
              v40 = (unsigned int *)(v55 + 20);
              while ( 1 )
              {
                v39 += 16;
                *(_BYTE *)(v39 - 16) = *((_BYTE *)v40 - 17);
                *(_BYTE *)(v39 - 15) = *((_WORD *)v40 - 9);
                *(_BYTE *)(v39 - 14) = *((_WORD *)v40 - 10) >> 8;
                *(_BYTE *)(v39 - 13) = *(v40 - 5);
                *(_BYTE *)(v39 - 12) = *((_BYTE *)v40 - 1);
                *(_BYTE *)(v39 - 11) = *((_WORD *)v40 - 1);
                *(_BYTE *)(v39 - 10) = *((_WORD *)v40 - 2) >> 8;
                *(_BYTE *)(v39 - 9) = *(v40 - 1);
                *(_BYTE *)(v39 - 8) = *v40 >> 24;
                *(_BYTE *)(v39 - 7) = *v40 >> 16;
                *(_BYTE *)(v39 - 6) = *(_WORD *)v40 >> 8;
                *(_BYTE *)(v39 - 5) = *v40;
                *(_BYTE *)(v39 - 4) = *((_BYTE *)v40 - 5);
                *(_BYTE *)(v39 - 3) = *((_WORD *)v40 - 3);
                *(_BYTE *)(v39 - 2) = *((_WORD *)v40 - 4) >> 8;
                *(_BYTE *)(v39 - 1) = *(v40 - 2);
                v67 = sub_6F771FF0(v4, *(v40 - 4));
                if ( v67 )
                  break;
                v67 = sub_6F772380(v4, *(v40 - 3));
                if ( v67 )
                  break;
                v41 = *(v40 - 3);
                if ( v41 == *(v40 - 2) )
                {
                  memcpy(&v54[*v40], *(const void **)(v4 + 32), *(v40 - 3));
                }
                else
                {
                  v68 = *(v40 - 2);
                  sub_6F7CF8A0(v53, (int)&v54[*v40], &v68, *(_DWORD *)(v4 + 32), v41);
                  v67 = v42;
                  if ( v42 )
                    break;
                  if ( *(v40 - 2) != v68 )
                  {
                    v10 = v53;
                    v3 = v79;
                    goto LABEL_91;
                  }
                }
                sub_6F772460(v4);
                for ( i = *v40 + *(v40 - 2); i & 3; ++i )
                  v54[i] = 0;
                ++v60;
                v40 += 6;
                if ( v60 >= v72 )
                {
                  v10 = v53;
                  v3 = v79;
                  v38 = v73;
                  goto LABEL_109;
                }
              }
              v10 = v53;
              v3 = v79;
            }
            else
            {
LABEL_109:
              sub_6F771FA0((int)v57, (int)v54, v38);
              v57[7] = *(_DWORD *)(v4 + 28);
              v44 = *(_DWORD *)(v3 + 8);
              v57[6] = sub_6F7A0490;
              sub_6F769260(*(_DWORD *)(v3 + 104), (v44 >> 10) & 1);
              *(_DWORD *)(v3 + 104) = v57;
              *(_DWORD *)(v3 + 8) &= 0xFFFFFBFF;
            }
          }
        }
      }
    }
LABEL_23:
    sub_6F773D90(v10, (int)v55);
    sub_6F773D90(v10, (int)v47);
    if ( v67 )
    {
      sub_6F773D90(v10, (int)v54);
      sub_6F771FD0((int)v57);
      sub_6F773D90(v10, (int)v57);
      result = v67;
      v66 = v67;
      if ( v67 )
        return result;
    }
    else
    {
      v66 = 0;
    }
    v4 = *(_DWORD *)(v3 + 104);
  }
  if ( (v8 - 0x10000) & 0xFFFEFFFF && v8 != 1953784678 )
  {
    if ( v8 != 1330926671 && v8 != 1953658213 )
    {
      result = 2;
      if ( v8 != 1954115633 )
        return result;
    }
    *(_DWORD *)(v3 + 132) = 1953784678;
LABEL_33:
    *(_DWORD *)(v3 + 136) = 0x10000;
    *(_DWORD *)(v3 + 140) = 1;
    v11 = (int *)sub_6F773A50(v46, 4, &v66);
    v12 = v11;
    *(_DWORD *)(v3 + 144) = v11;
    result = v66;
    if ( v66 )
      return result;
    *v12 = v7;
    goto LABEL_35;
  }
  *(_DWORD *)(v3 + 132) = 1953784678;
  if ( v8 != 1953784678 )
    goto LABEL_33;
  result = sub_6F7728E0(v4, (int)&unk_6FB688DC, v3 + 132);
  v66 = result;
  if ( !result )
  {
    v19 = *(_DWORD *)(v3 + 140);
    result = 8;
    if ( v19 )
    {
      result = 10;
      if ( v19 <= *(_DWORD *)(v4 + 4) >> 5 )
      {
        *(_DWORD *)(v3 + 144) = sub_6F773B30(v46, 4, 0, v19, 0, &v66);
        result = v66;
        if ( !v66 )
        {
          result = sub_6F772380(v4, 4 * *(_DWORD *)(v3 + 140));
          v66 = result;
          if ( !result )
          {
            for ( j = 0; j < *(_DWORD *)(v3 + 140); *v21 = sub_6F772560(v4) )
              v21 = (unsigned __int32 *)(*(_DWORD *)(v3 + 144) + 4 * j++);
            sub_6F772460(v4);
            result = v66;
            if ( !v66 )
            {
LABEL_35:
              v13 = 0;
              if ( a3 >= 0 )
                v13 = a3;
              result = 6;
              if ( *(_DWORD *)(v3 + 140) > v13 )
              {
                v14 = *(_DWORD *)(v3 + 104);
                result = sub_6F771FF0(*(_DWORD *)(v3 + 104), *(_DWORD *)(*(_DWORD *)(v3 + 144) + 4 * v13));
                if ( !result )
                {
                  result = (*(int (__cdecl **)(int, int))(v45 + 88))(v3, v14);
                  if ( !result )
                  {
                    v15 = *(_DWORD *)(v3 + 140);
                    *(_DWORD *)(v3 + 4) = v13;
                    *(_DWORD *)v3 = v15;
                  }
                }
              }
              return result;
            }
          }
        }
      }
    }
  }
  return result;
}
