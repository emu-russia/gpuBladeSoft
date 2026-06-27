int __usercall sub_6F81BC90@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, int a6, int a7)
{
  signed int v7; // ebx@2
  int v8; // ecx@3
  signed __int16 v9; // dx@3
  int v10; // ebp@3
  int v11; // ebp@9
  int v12; // edi@10
  int v13; // edx@10
  int v14; // esi@10
  int v15; // edx@10
  int v16; // ebx@10
  int v17; // esi@10
  int v18; // ebx@10
  int v19; // eax@10
  char *v20; // ebp@11
  signed int v21; // edx@11
  int v22; // edx@13
  signed __int16 v23; // di@13
  int v24; // ebx@13
  int v25; // ebx@19
  int v26; // eax@20
  int v27; // edx@20
  signed __int16 v28; // si@20
  int v29; // ebx@26
  int v30; // ebx@27
  char v31; // dl@27
  __int16 v32; // di@27
  int v33; // esi@27
  int v34; // edx@27
  int v35; // esi@27
  int v36; // ecx@27
  int v37; // edi@27
  unsigned int v38; // eax@27
  int v39; // edx@27
  int *v40; // ebp@33
  int result; // eax@34
  int v42; // eax@51
  int v43; // ecx@56
  unsigned int v44; // eax@56
  int v45; // eax@71
  int v46; // esi@72
  int v47; // ebp@78
  int v48; // edi@79
  signed int v49; // [sp+0h] [bp-ECh]@11
  int v50; // [sp+4h] [bp-E8h]@1
  int v51; // [sp+8h] [bp-E4h]@12
  int v52; // [sp+10h] [bp-DCh]@1
  int v53; // [sp+28h] [bp-C4h]@10
  int v54; // [sp+2Ch] [bp-C0h]@1
  signed int v55; // [sp+30h] [bp-BCh]@10
  int v56; // [sp+34h] [bp-B8h]@1
  int v57; // [sp+38h] [bp-B4h]@1
  signed int v58; // [sp+3Ch] [bp-B0h]@1
  char v59; // [sp+45h] [bp-A7h]@1
  unsigned __int16 v60; // [sp+46h] [bp-A6h]@1
  unsigned int v61; // [sp+48h] [bp-A4h]@10
  int v62; // [sp+50h] [bp-9Ch]@1
  int v63; // [sp+54h] [bp-98h]@10
  unsigned int v64; // [sp+58h] [bp-94h]@10
  int v65; // [sp+5Ch] [bp-90h]@1
  int v66; // [sp+60h] [bp-8Ch]@1
  char v67; // [sp+65h] [bp-87h]@1
  unsigned __int16 v68; // [sp+66h] [bp-86h]@1
  int v69; // [sp+68h] [bp-84h]@27
  int v70; // [sp+6Ch] [bp-80h]@10
  int v71; // [sp+70h] [bp-7Ch]@10
  int v72; // [sp+74h] [bp-78h]@10
  int v73; // [sp+78h] [bp-74h]@10
  int v74; // [sp+7Ch] [bp-70h]@1
  int v75; // [sp+80h] [bp-6Ch]@1
  signed int v76; // [sp+88h] [bp-64h]@1
  int v77; // [sp+A4h] [bp-48h]@1
  int v78; // [sp+A8h] [bp-44h]@1
  int v79; // [sp+ACh] [bp-40h]@2
  int v80; // [sp+B0h] [bp-3Ch]@2
  int v81; // [sp+B4h] [bp-38h]@2
  int v82; // [sp+B8h] [bp-34h]@56
  int v83; // [sp+BCh] [bp-30h]@56
  int v84; // [sp+C0h] [bp-2Ch]@56
  int v85; // [sp+C4h] [bp-28h]@10
  __int16 v86; // [sp+C8h] [bp-24h]@10
  char v87; // [sp+C9h] [bp-23h]@10
  __int16 v88; // [sp+CAh] [bp-22h]@10
  char v89; // [sp+CBh] [bp-21h]@10
  char v90; // [sp+CCh] [bp-20h]@11

  v75 = a2;
  v56 = *(_DWORD *)(a1 + 53164);
  v58 = *(_BYTE *)(a1 + 794);
  v57 = *(_DWORD *)a3;
  v78 = *(_DWORD *)(a3 + 8);
  v65 = a1;
  v77 = *(_DWORD *)(a3 + 4);
  v50 = *(_DWORD *)a4;
  v76 = 0;
  v74 = 0;
  v68 = *(_WORD *)(a4 + 4) & 0x3FFF;
  v59 = *(_BYTE *)(a4 + 5) >> 6;
  v60 = *(_WORD *)(a4 + 6) & 0x3FFF;
  v67 = *(_BYTE *)(a4 + 7) >> 6;
  v62 = 0;
  v54 = 0;
  v52 = 0;
  v66 = 24 * a7;
  do
  {
    v79 = v57;
    v7 = *(_DWORD *)(a5 + 4 * v52);
    v80 = v77;
    v81 = v78;
    sub_6F81AC30((int)&v79);
    if ( v59 )
    {
      v8 = v50;
      v9 = 1;
      v10 = 1;
    }
    else
    {
      if ( (signed int)v68 > 4128 )
      {
        v9 = 1;
        v8 = v50 + 1;
LABEL_55:
        v11 = 0;
        goto LABEL_10;
      }
      if ( (signed int)v68 < 2 )
      {
        v47 = 0;
      }
      else if ( (signed int)v68 < 4 )
      {
        v47 = 1;
      }
      else if ( (signed int)v68 < 6 )
      {
        v47 = 2;
      }
      else if ( (signed int)v68 < 10 )
      {
        v47 = 3;
      }
      else if ( (signed int)v68 < 18 )
      {
        v47 = 4;
      }
      else
      {
        v47 = ((signed int)v68 >= 34) + 5;
      }
      v48 = (unsigned __int8)byte_6FB88A1A[v47];
      v10 = v68 + 1;
      v8 = v50 - v48;
      v9 = (v68 + 1) & 0x3FFF;
    }
    if ( v10 < 2 )
      goto LABEL_55;
    if ( v10 < 4 )
    {
      v11 = 1;
    }
    else if ( v10 < 6 )
    {
      v11 = 2;
    }
    else if ( v10 < 10 )
    {
      v11 = 3;
    }
    else if ( v10 < 18 )
    {
      v11 = 4;
    }
    else
    {
      v11 = (v10 >= 34) + 5;
    }
LABEL_10:
    v87 &= 0x3Fu;
    v85 = (unsigned __int8)byte_6FB88A1A[v11] + v8;
    v86 = v86 & 0xC000 | v9;
    v73 = v79;
    v89 = v89 & 0x3F | (v67 << 6);
    v72 = (v79 - v57) << 6;
    v88 = v60 | v88 & 0xC000;
    v12 = (v7 >> 9) + (v7 >> 9 > 22 ? 22 - (v7 >> 9) : 0);
    v70 = (v7 >> 9) + (v7 >> 9 > 22 ? 22 - (v7 >> 9) : 0);
    v53 = v7 - (v12 << 9);
    v13 = v66 + 144 * *(_BYTE *)(v65 + 795);
    v14 = v13 + v12++;
    v15 = v12 + v13;
    v16 = word_6FB8EC40[2 * v14];
    v17 = word_6FB8EC42[2 * v14];
    v71 = v12;
    v18 = (v53 * (word_6FB8EC40[2 * v15] - v16) >> 9) + v16;
    v19 = (~(v17 + (v53 * (word_6FB8EC42[2 * v15] - v17) >> 9)) >> 31) & (v17
                                                                        + (v53 * (word_6FB8EC42[2 * v15] - v17) >> 9));
    v64 = (unsigned int)(v19 * v19) >> 4;
    v63 = ((v85 - v50) << 6) + ((~v18 >> 31) & v18);
    v55 = 0;
    v61 = v56 * ((unsigned int)(v72 + v62 + v63) >> 6)
        + ((v64 + v54) >> 6)
        + ((((v64 + v54) & 0x3F) + v56 * (((_BYTE)v72 + (_BYTE)v62 + (_BYTE)v63) & 0x3F) + 32) >> 6);
    if ( v58 > 1 )
    {
      v20 = &v90;
      v21 = 1;
      v49 = 1;
      do
      {
        v51 = v21 + 1;
        if ( v59 == 1 )
        {
          if ( (signed int)v68 > 4128 )
          {
            v23 = 1;
            v22 = v50 + 1;
LABEL_38:
            v25 = 0;
            goto LABEL_20;
          }
          if ( (signed int)v68 < 2 )
          {
            v42 = 0;
          }
          else if ( (signed int)v68 < 4 )
          {
            v42 = 1;
          }
          else if ( (signed int)v68 < 6 )
          {
            v42 = 2;
          }
          else if ( (signed int)v68 < 10 )
          {
            v42 = 3;
          }
          else if ( (signed int)v68 < 18 )
          {
            v42 = 4;
          }
          else
          {
            v42 = ((signed int)v68 >= 34) + 5;
          }
          v24 = v68 + 1;
          v22 = v50 - (unsigned __int8)byte_6FB88A1A[v42];
          v23 = (v68 + 1) & 0x3FFF;
        }
        else
        {
          v22 = v50;
          v23 = 1;
          v24 = 1;
        }
        if ( v24 < 2 )
          goto LABEL_38;
        if ( v24 < 4 )
        {
          v25 = 1;
        }
        else if ( v24 < 6 )
        {
          v25 = 2;
        }
        else if ( v24 < 10 )
        {
          v25 = 3;
        }
        else if ( v24 < 18 )
        {
          v25 = 4;
        }
        else
        {
          v25 = (v24 >= 34) + 5;
        }
LABEL_20:
        v26 = 1;
        v27 = (unsigned __int8)byte_6FB88A1A[v25] + v22;
        v28 = 1;
        if ( v49 >> 1 == v67 )
        {
          if ( (signed int)v60 > 4128 )
          {
            ++v27;
            goto LABEL_45;
          }
          if ( (signed int)v60 < 2 )
          {
            v45 = 0;
          }
          else if ( (signed int)v60 < 4 )
          {
            v45 = 1;
          }
          else if ( (signed int)v60 < 6 )
          {
            v45 = 2;
          }
          else if ( (signed int)v60 < 10 )
          {
            v45 = 3;
          }
          else if ( (signed int)v60 < 18 )
          {
            v45 = 4;
          }
          else
          {
            v45 = ((signed int)v60 >= 34) + 5;
          }
          v46 = (unsigned __int8)byte_6FB88A1A[v45];
          v26 = v60 + 1;
          v27 -= v46;
          v28 = (v60 + 1) & 0x3FFF;
        }
        if ( v26 >= 2 )
        {
          if ( v26 < 4 )
          {
            v29 = 1;
          }
          else if ( v26 < 6 )
          {
            v29 = 2;
          }
          else if ( v26 < 10 )
          {
            v29 = 3;
          }
          else if ( v26 < 18 )
          {
            v29 = 4;
          }
          else
          {
            v29 = (v26 >= 34) + 5;
          }
          goto LABEL_27;
        }
LABEL_45:
        v29 = 0;
LABEL_27:
        v30 = v27 + (unsigned __int8)byte_6FB88A1A[v29];
        v31 = v20[5];
        *(_DWORD *)v20 = v30;
        v20[5] = v31 & 0x3F | 0x40;
        v32 = *((_WORD *)v20 + 2) & 0xC000 | v23;
        v20[7] = v20[7] & 0x3F | ((unsigned __int8)(v49 >> 1) << 6);
        *((_WORD *)v20 + 2) = v32;
        *((_WORD *)v20 + 3) = *((_WORD *)v20 + 3) & 0xC000 | v28;
        v33 = v66 + 144 * *(_BYTE *)(v65 + v51 + 794);
        v34 = v33 + v70;
        v35 = v71 + v33;
        v36 = word_6FB8EC42[2 * v34] + (v53 * (word_6FB8EC42[2 * v35] - word_6FB8EC42[2 * v34]) >> 9);
        v37 = (v53 * (word_6FB8EC40[2 * v35] - word_6FB8EC40[2 * v34]) >> 9) + word_6FB8EC40[2 * v34];
        v38 = ((~v36 >> 31) & v36) * ((~v36 >> 31) & (unsigned int)v36) >> 4;
        v39 = ((v30 - v50) << 6) + ((~v37 >> 31) & v37);
        v69 = v72 + v62;
        if ( v61 > ((((v38 + v54) & 0x3F) + v56 * ((v39 + v69) & 0x3F) + 32) >> 6)
                 + v56 * ((unsigned int)(v39 + v69) >> 6)
                 + ((v38 + v54) >> 6) )
        {
          v64 = ((~v36 >> 31) & v36) * ((~v36 >> 31) & (unsigned int)v36) >> 4;
          v61 = ((((v38 + v54) & 0x3F) + v56 * ((v39 + v69) & 0x3F) + 32) >> 6)
              + v56 * ((unsigned int)(v39 + v69) >> 6)
              + ((v38 + v54) >> 6);
          v63 = ((v30 - v50) << 6) + ((~v37 >> 31) & v37);
          v55 = v49;
        }
        v21 = v51;
        v20 += 8;
        v49 = v51;
      }
      while ( v58 > v51 );
    }
    if ( *(_DWORD *)(a6 + 4 * v52) == -1 || v76 > 2 )
    {
      v57 = v73;
LABEL_33:
      v62 += v63;
      v40 = &v85 + 2 * v55;
      v74 += v72;
      v77 = v80;
      v78 = v81;
      v54 += v64;
      v68 = *((_WORD *)v40 + 2) & 0x3FFF;
      v59 = *((_BYTE *)v40 + 5) >> 6;
      v50 = *(&v85 + 2 * v55);
      v60 = *((_WORD *)v40 + 3) & 0x3FFF;
      v67 = *((_BYTE *)v40 + 7) >> 6;
      goto LABEL_34;
    }
    v82 = v57;
    v83 = v77;
    v84 = v78;
    sub_6F81B0A0((int)&v82);
    v43 = (v82 - v57) << 6;
    v44 = v54 + (*(_DWORD *)(a6 + 4 * v52) << 6);
    if ( (v44 >> 6) + v56 * ((unsigned int)(v43 + v62) >> 6) + (((v44 & 0x3F) + v56 * ((v43 + v62) & 0x3F) + 32) >> 6) > v61 )
    {
      v57 = v79;
      goto LABEL_33;
    }
    v74 += v43;
    LOBYTE(v55) = v55 + 4;
    ++v76;
    v57 = v82;
    v78 = v84;
    v77 = v83;
    v54 += *(_DWORD *)(a6 + 4 * v52) << 6;
LABEL_34:
    result = (unsigned __int8)v55;
    *(_BYTE *)(v75 + v52++ + 16) = v55;
  }
  while ( v52 != 4 );
  *(_DWORD *)(v75 + 8) = v62;
  *(_DWORD *)(v75 + 4) = v54;
  *(_DWORD *)(v75 + 12) = v74 & (~v74 >> 31);
  return result;
}
