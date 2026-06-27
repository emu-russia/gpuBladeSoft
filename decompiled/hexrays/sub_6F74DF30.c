signed int __usercall sub_6F74DF30@<eax>(signed int result@<eax>, int a2@<edx>, unsigned int a3@<ecx>, unsigned int a4@<edi>)
{
  unsigned int v4; // ebx@6
  unsigned int v5; // edx@6
  unsigned int v6; // ecx@8
  int v7; // eax@15
  int v8; // edx@15
  int v9; // ecx@15
  int v10; // edx@15
  int v11; // edi@15
  int v12; // eax@15
  int v13; // ebp@15
  int v14; // ebx@16
  signed int v15; // esi@18
  int v16; // ebx@18
  signed int v17; // edx@18
  char v18; // bp@19
  int v19; // edi@19
  int v20; // eax@20
  int v21; // edx@20
  int v22; // eax@20
  int v23; // eax@22
  int v24; // esi@25
  int v25; // ebx@28
  int v26; // ebx@34
  int v27; // edx@35
  char i; // cl@37
  int v29; // ebx@40
  int v30; // ebp@40
  int v31; // ebx@40
  int v32; // ebx@44
  int v33; // eax@48
  int v34; // ebx@48
  int v35; // edx@48
  int v36; // eax@48
  int v37; // edx@50
  int v38; // eax@50
  int v39; // eax@54
  int v40; // eax@56
  int v41; // ecx@56
  int v42; // ebx@56
  int v43; // ST08_4@59
  int v44; // ST08_4@60
  int v45; // ST08_4@61
  int v46; // ebx@61
  int v47; // edi@62
  int v48; // eax@63
  int v49; // ecx@63
  int v50; // ST04_4@63
  int v51; // ecx@65
  int v52; // ebx@67
  int v53; // edx@67
  int v54; // [sp+3Ch] [bp-A0h]@15
  int v55; // [sp+3Ch] [bp-A0h]@23
  int v56; // [sp+40h] [bp-9Ch]@15
  int v57; // [sp+40h] [bp-9Ch]@20
  signed int v58; // [sp+44h] [bp-98h]@1
  int v59; // [sp+48h] [bp-94h]@1
  int v60; // [sp+4Ch] [bp-90h]@15
  int v61; // [sp+4Ch] [bp-90h]@19
  int v62; // [sp+50h] [bp-8Ch]@15
  signed int v63; // [sp+54h] [bp-88h]@15
  int v64; // [sp+58h] [bp-84h]@0
  int v65; // [sp+60h] [bp-7Ch]@0
  int v66; // [sp+68h] [bp-74h]@18
  int v67; // [sp+68h] [bp-74h]@37
  signed int v68; // [sp+6Ch] [bp-70h]@18
  signed int v69; // [sp+70h] [bp-6Ch]@18
  int v70; // [sp+74h] [bp-68h]@15
  int v71; // [sp+78h] [bp-64h]@15
  int v72; // [sp+7Ch] [bp-60h]@18
  int v73; // [sp+8Ch] [bp-50h]@56
  signed int v74; // [sp+8Ch] [bp-50h]@62
  __int16 v75; // [sp+91h] [bp-4Bh]@15
  unsigned __int8 v76; // [sp+93h] [bp-49h]@15
  int v77; // [sp+94h] [bp-48h]@56
  int v78; // [sp+94h] [bp-48h]@61
  int v79; // [sp+98h] [bp-44h]@56
  int v80; // [sp+9Ch] [bp-40h]@62
  int v81; // [sp+A8h] [bp-34h]@15
  int v82; // [sp+ACh] [bp-30h]@15
  int v83; // [sp+B0h] [bp-2Ch]@15
  int v84; // [sp+B4h] [bp-28h]@15
  int v85; // [sp+B8h] [bp-24h]@15
  int v86; // [sp+BCh] [bp-20h]@15

  v58 = result;
  v59 = a2;
  if ( dword_6FBB9558 == 1 )
    return sub_6F738A40(a4);
  if ( dword_6FBB9558 <= 1 )
  {
    if ( dword_6FBB9558 )
      return result;
    v62 = dword_6FBB52F4 * dword_6FBBDB98;
    v63 = dword_6FBB52F4 * dword_6FBBDBA0;
    v70 = dword_6FBB52F8 * dword_6FBBDB9C;
    v71 = dword_6FBB52F8 * dword_6FBBDBA4;
    v7 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
    v81 = v7 * dword_6FBB52F4;
    v82 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
    v83 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E88) >> 5);
    v8 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
    v84 = v8 * dword_6FBB52F8;
    v85 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E86) >> 5);
    v86 = dword_6FBB52F8 * (signed __int16)((signed __int16)(32 * word_70041E8A) >> 5);
    sub_6F733480(v7, v8, &v81, &v84);
    sub_6F733480(
      (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
      (signed __int16)(32 * word_70041E86) >> 5,
      &v82,
      &v85);
    sub_6F733480(
      (signed __int16)((signed __int16)(32 * word_70041E88) >> 5),
      (signed __int16)(32 * word_70041E8A) >> 5,
      &v83,
      &v86);
    v75 = dword_70041E70;
    v9 = v84;
    v76 = BYTE2(dword_70041E70);
    v56 = dword_6FBBDB94 * dword_6FBB52F8 + v84;
    v54 = dword_6FBB52F4 * dword_6FBBDB90 + v81;
    v81 += dword_6FBB52F4 * dword_6FBBDB90;
    v84 += dword_6FBBDB94 * dword_6FBB52F8;
    v10 = v85;
    v11 = dword_6FBB52F4 * dword_6FBBDB90 + v82;
    v12 = v83 + dword_6FBB52F4 * dword_6FBBDB90;
    v13 = dword_6FBBDB94 * dword_6FBB52F8 + v85;
    v82 += dword_6FBB52F4 * dword_6FBBDB90;
    v83 += dword_6FBB52F4 * dword_6FBBDB90;
    v85 += dword_6FBBDB94 * dword_6FBB52F8;
    v60 = v86 + dword_6FBBDB94 * dword_6FBB52F8;
    v86 += dword_6FBBDB94 * dword_6FBB52F8;
    if ( v9 > v10 )
    {
      v14 = v54;
      v81 = v11;
      v54 = v11;
      v82 = v14;
      v11 = v14;
      v85 = v56;
      v84 = v13;
      v56 = v13;
      v13 = v85;
    }
    if ( v60 < v13 )
    {
      v26 = v60;
      v82 = v12;
      v83 = v11;
      v85 = v60;
      v86 = v13;
      if ( v60 >= v56 )
      {
        v52 = v60;
        v53 = v12;
        v60 = v13;
        v12 = v11;
        v11 = v53;
        v13 = v52;
      }
      else
      {
        v81 = v12;
        v60 = v13;
        v13 = v56;
        v82 = v54;
        v27 = v12;
        v12 = v11;
        v11 = v54;
        v84 = v26;
        v85 = v56;
        v54 = v27;
        v56 = v26;
      }
    }
    v68 = 2;
    v66 = v11;
    v69 = 0;
    v15 = v13;
    v16 = v60;
    v17 = 2;
    v72 = (v12 - v11) * (v60 - v56) - (v12 - v54) * (v60 - v13);
    while ( 1 )
    {
      v18 = dword_6FD4098C;
      v61 = v15 - v56;
      v19 = v54 << dword_6FD4098C;
      if ( v17 == 2 )
      {
        v33 = v12 - v54;
        v34 = v16 - v56;
        v35 = (unsigned __int64)((signed __int64)v33 << dword_6FD4098C) >> 32;
        v36 = v33 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v35 = v36;
          v36 = 0;
        }
        v64 = sub_6F737040(v36, v35, v34);
        v37 = (unsigned __int64)((signed __int64)(v66 - v54) << v18) >> 32;
        v38 = (v66 - v54) << v18;
        if ( v18 & 0x20 )
          v37 = (v66 - v54) << v18;
        if ( v18 & 0x20 )
          v38 = 0;
        v39 = sub_6F737040(v38, v37, v61);
        v65 = v39;
        if ( v72 < 0 )
        {
          v51 = v64;
          v64 = v39;
          v16 = v15;
          v15 = v56;
          v65 = v51;
          v55 = v19;
        }
        else
        {
          v16 = v15;
          v55 = v19;
          v15 = v56;
        }
      }
      else
      {
        v57 = v54 << dword_6FD4098C;
        v20 = v12 - v66;
        v19 = v66 << dword_6FD4098C;
        v21 = (unsigned __int64)((signed __int64)v20 << dword_6FD4098C) >> 32;
        v22 = v20 << dword_6FD4098C;
        if ( dword_6FD4098C & 0x20 )
        {
          v21 = v22;
          v22 = 0;
        }
        v23 = sub_6F737040(v22, v21, v16 - v15);
        if ( v72 < 0 )
        {
          v55 = v19;
          v64 = v23;
          v19 = v65 * v61 + v57;
        }
        else
        {
          v65 = v23;
          v55 = v57 + v64 * v61;
        }
      }
      result = v70 - v15;
      if ( v70 - v15 > 0 )
      {
        v24 = result * v65;
        result *= v64;
        v55 += result;
        v19 += v24;
        v15 = v70;
      }
      if ( v71 <= v16 )
        v16 = v71;
      v25 = v16 - v15;
      if ( v25 > 0 )
        break;
LABEL_29:
      if ( v68 == 1 )
        return result;
      v68 = 1;
      v15 = v85;
      v56 = v84;
      v16 = v86;
      v54 = v81;
      v12 = v83;
      v17 = 1;
      v66 = v82;
    }
    v67 = v25 + v15;
    for ( i = v18; ; i = dword_6FD4098C )
    {
      result = v63;
      v29 = (1 << i) - 1;
      v30 = (v19 + v29) >> i;
      v31 = (v55 + v29) >> i;
      if ( v62 - v30 > 0 )
        v30 = v62;
      if ( v63 <= v31 )
        v31 = v63;
      v32 = v31 - v30;
      if ( v32 > 0 )
      {
        result = sub_6F71F0C0(v15);
        if ( result )
          break;
      }
LABEL_38:
      ++v15;
      v19 += v65;
      v55 += v64;
      if ( v15 == v67 )
        goto LABEL_29;
    }
    result = v69 / v58;
    if ( v59 == v69 % v58 )
    {
      v40 = v30 + dword_6FBB52F4 * (v15 << 10);
      v41 = dword_6FBB5068 + 2 * v40;
      v77 = dword_6FBB505C + 4 * v40;
      v73 = v41;
      v79 = v41 + 2 * v32;
      v42 = ((unsigned __int8)((unsigned int)(2 * v32 - 2) >> 1) + 1) & 3;
      if ( v42 )
      {
        if ( v42 != 1 )
        {
          if ( v42 != 2 )
          {
            v43 = v30++;
            dword_6FBB5058(v41, v77, v43, v15, (unsigned __int8)v75, HIBYTE(v75), v76, 0, 0);
            v73 += 2;
            v77 += 4;
          }
          v44 = v30++;
          dword_6FBB5058(v73, v77, v44, v15, (unsigned __int8)v75, HIBYTE(v75), v76, 0, 0);
          v73 += 2;
          v77 += 4;
        }
        v45 = v30++;
        v46 = v73 + 2;
        result = dword_6FBB5058(v73, v77, v45, v15, (unsigned __int8)v75, HIBYTE(v75), v76, 0, 0);
        v78 = v77 + 4;
        if ( v73 + 2 == v79 )
          goto LABEL_47;
        v74 = v15;
        v80 = v19;
        v47 = v78;
      }
      else
      {
        v80 = v19;
        v46 = dword_6FBB5068 + 2 * v40;
        v47 = dword_6FBB505C + 4 * v40;
        v74 = v15;
      }
      do
      {
        dword_6FBB5058(v46, v47, v30, v74, (unsigned __int8)v75, HIBYTE(v75), v76, 0, 0);
        dword_6FBB5058(v46 + 2, v47 + 4, v30 + 1, v74, (unsigned __int8)v75, HIBYTE(v75), v76, 0, 0);
        dword_6FBB5058(v46 + 4, v47 + 8, v30 + 2, v74, (unsigned __int8)v75, HIBYTE(v75), v76, 0, 0);
        v48 = v46 + 6;
        v49 = v30 + 3;
        v50 = v47 + 12;
        v46 += 8;
        v47 += 16;
        v30 += 4;
        result = dword_6FBB5058(v48, v50, v49, v74, (unsigned __int8)v75, HIBYTE(v75), v76, 0, 0);
      }
      while ( v46 != v79 );
      v15 = v74;
      v19 = v80;
    }
LABEL_47:
    ++v69;
    goto LABEL_38;
  }
  if ( dword_6FBB9558 == 2 )
  {
    result = sub_6F745980(a3);
  }
  else if ( dword_6FBB9558 == 3 )
  {
    if ( dword_6FBB9564 )
    {
      v4 = 0;
      v5 = 65280;
      if ( dword_6FBB9564 == 1 )
        v4 = 16711680;
      v6 = 0;
      if ( dword_6FBB9564 != 1 )
        v5 = 0;
      if ( dword_6FBB9564 == 1 )
        v6 = 255;
    }
    else
    {
      v6 = dword_70041E70;
      v4 = dword_70041E70;
      v5 = dword_70041E70;
    }
    result = sub_6F744610(result, v59, v6, v5, v4);
  }
  return result;
}
