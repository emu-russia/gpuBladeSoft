unsigned int __usercall sub_6F891570@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebp@1
  unsigned int result; // eax@1
  int v5; // esi@1
  signed int v6; // ebx@1
  int v7; // eax@2
  signed int v8; // edx@2
  int v9; // edi@2
  int v10; // ebp@3
  int v11; // ebp@6
  int v12; // ebx@7
  __int16 v13; // cx@7
  int v14; // esi@7
  int v15; // ecx@7
  int v16; // esi@7
  int v17; // ebx@7
  bool v18; // zf@7
  int v19; // eax@8
  int v20; // ecx@8
  signed int v21; // edx@8
  int v22; // ecx@16
  int v23; // edx@16
  int v24; // eax@16
  signed int v25; // ebx@16
  int v26; // edx@17
  int v27; // ebp@17
  __int16 v28; // cx@17
  int v29; // edx@17
  int v30; // esi@17
  int v31; // edx@17
  signed int v32; // ebx@17
  int v33; // ecx@17
  int v34; // eax@18
  signed int v35; // edx@18
  int v36; // ebp@19
  signed int v37; // esi@19
  int v38; // ecx@19
  __int16 v39; // bx@19
  int v40; // ecx@19
  int v41; // esi@19
  int v42; // esi@19
  signed int v43; // edx@19
  int v44; // ecx@19
  int v45; // esi@20
  __int16 v46; // dx@20
  int v47; // eax@20
  int v48; // eax@20
  int v49; // ecx@20
  int v50; // eax@20
  int v51; // esi@24
  int v52; // ecx@24
  signed int v53; // ebx@25
  int v54; // eax@25
  signed int v55; // edx@25
  int v56; // ecx@25
  int v57; // eax@25
  int v58; // ecx@25
  int v59; // edx@25
  int v60; // eax@25
  int v61; // ecx@25
  int v62; // edx@26
  int v63; // ebx@26
  int v64; // ecx@26
  __int16 v65; // ax@26
  int v66; // eax@26
  int v67; // ecx@26
  int v68; // eax@26
  int v69; // esi@30
  int v70; // ecx@30
  signed int v71; // ebx@31
  int v72; // eax@31
  signed int v73; // edx@31
  int v74; // ecx@31
  int v75; // eax@31
  int v76; // ecx@31
  int v77; // edx@31
  int v78; // eax@31
  int v79; // ecx@31
  int v80; // edx@33
  int v81; // ebx@33
  int v82; // ecx@33
  __int16 v83; // ax@33
  int v84; // eax@33
  int v85; // ecx@33
  int v86; // eax@33
  int v87; // [sp+0h] [bp-24h]@2
  int v88; // [sp+0h] [bp-24h]@6
  signed int v89; // [sp+4h] [bp-20h]@1
  signed int v90; // [sp+8h] [bp-1Ch]@3
  int v91; // [sp+Ch] [bp-18h]@2
  unsigned int v92; // [sp+10h] [bp-14h]@2

  v3 = a1;
  result = *(_WORD *)(a2 + 2);
  v5 = 4 - (result < 1);
  v6 = result < 1 ? 138 : 7;
  v89 = *(_WORD *)(a2 + 2);
  if ( a3 >= 0 )
  {
    v7 = a2 + 4 * a3 + 4;
    v91 = a2;
    v8 = -1;
    v87 = 0;
    v9 = v3;
    v92 = v7;
    while ( 1 )
    {
      v90 = *(_WORD *)(v91 + 6);
      v10 = v87 + 1;
      if ( v87 + 1 < v6 && v89 == v90 )
      {
        ++v87;
        v89 = v8;
LABEL_12:
        v91 += 4;
        result = v92;
        if ( v91 == v92 )
          return result;
        goto LABEL_13;
      }
      if ( v10 < v5 )
        break;
      if ( !v89 )
      {
        if ( v10 > 10 )
        {
          v69 = *(_WORD *)(v9 + 2758);
          v70 = *(_DWORD *)(v9 + 5820);
          if ( v70 <= 16 - v69 )
          {
            v78 = *(_WORD *)(v9 + 2756) << v70;
            v79 = v69 + v70;
            LOWORD(v78) = *(_WORD *)(v9 + 5816) | v78;
            *(_DWORD *)(v9 + 5820) = v79;
            *(_WORD *)(v9 + 5816) = v78;
          }
          else
          {
            v71 = *(_WORD *)(v9 + 2756);
            v72 = *(_DWORD *)(v9 + 20);
            v73 = v71 << v70;
            *(_DWORD *)(v9 + 20) = v72 + 1;
            v74 = *(_DWORD *)(v9 + 8);
            LOWORD(v73) = *(_WORD *)(v9 + 5816) | v73;
            *(_WORD *)(v9 + 5816) = v73;
            *(_BYTE *)(v74 + v72) = v73;
            v75 = *(_DWORD *)(v9 + 20);
            v76 = *(_DWORD *)(v9 + 8);
            *(_DWORD *)(v9 + 20) = v75 + 1;
            *(_BYTE *)(v76 + v75) = *(_BYTE *)(v9 + 5817);
            v77 = *(_DWORD *)(v9 + 5820);
            v78 = v71 >> (16 - v77);
            v79 = v69 + v77 - 16;
            *(_WORD *)(v9 + 5816) = v78;
            *(_DWORD *)(v9 + 5820) = v79;
          }
          if ( v79 <= 9 )
          {
            *(_WORD *)(v9 + 5816) = ((unsigned __int16)(v10 - 11) << v79) | v78;
            *(_DWORD *)(v9 + 5820) = v79 + 7;
          }
          else
          {
            v80 = *(_DWORD *)(v9 + 20);
            v81 = (unsigned __int16)(v87 - 10) << v79;
            v82 = *(_DWORD *)(v9 + 8);
            v83 = v81 | v78;
            *(_WORD *)(v9 + 5816) = v83;
            *(_DWORD *)(v9 + 20) = v80 + 1;
            *(_BYTE *)(v82 + v80) = v83;
            v84 = *(_DWORD *)(v9 + 20);
            v85 = *(_DWORD *)(v9 + 8);
            *(_DWORD *)(v9 + 20) = v84 + 1;
            *(_BYTE *)(v85 + v84) = *(_BYTE *)(v9 + 5817);
            v86 = *(_DWORD *)(v9 + 5820);
            *(_WORD *)(v9 + 5816) = (signed int)(unsigned __int16)(v87 - 10) >> (16 - v86);
            *(_DWORD *)(v9 + 5820) = v86 - 9;
          }
        }
        else
        {
          v51 = *(_WORD *)(v9 + 2754);
          v52 = *(_DWORD *)(v9 + 5820);
          if ( v52 <= 16 - v51 )
          {
            v60 = *(_WORD *)(v9 + 2752) << v52;
            v61 = v51 + v52;
            LOWORD(v60) = *(_WORD *)(v9 + 5816) | v60;
            *(_DWORD *)(v9 + 5820) = v61;
            *(_WORD *)(v9 + 5816) = v60;
            if ( v61 > 13 )
              goto LABEL_26;
          }
          else
          {
            v53 = *(_WORD *)(v9 + 2752);
            v54 = *(_DWORD *)(v9 + 20);
            v55 = v53 << v52;
            *(_DWORD *)(v9 + 20) = v54 + 1;
            v56 = *(_DWORD *)(v9 + 8);
            LOWORD(v55) = *(_WORD *)(v9 + 5816) | v55;
            *(_WORD *)(v9 + 5816) = v55;
            *(_BYTE *)(v56 + v54) = v55;
            v57 = *(_DWORD *)(v9 + 20);
            v58 = *(_DWORD *)(v9 + 8);
            *(_DWORD *)(v9 + 20) = v57 + 1;
            *(_BYTE *)(v58 + v57) = *(_BYTE *)(v9 + 5817);
            v59 = *(_DWORD *)(v9 + 5820);
            v60 = v53 >> (16 - v59);
            v61 = v51 + v59 - 16;
            *(_WORD *)(v9 + 5816) = v60;
            *(_DWORD *)(v9 + 5820) = v61;
            if ( v61 > 13 )
            {
LABEL_26:
              v62 = *(_DWORD *)(v9 + 20);
              v63 = (unsigned __int16)(v87 - 2) << v61;
              v64 = *(_DWORD *)(v9 + 8);
              v65 = v63 | v60;
              *(_WORD *)(v9 + 5816) = v65;
              *(_DWORD *)(v9 + 20) = v62 + 1;
              *(_BYTE *)(v64 + v62) = v65;
              v66 = *(_DWORD *)(v9 + 20);
              v67 = *(_DWORD *)(v9 + 8);
              *(_DWORD *)(v9 + 20) = v66 + 1;
              *(_BYTE *)(v67 + v66) = *(_BYTE *)(v9 + 5817);
              v68 = *(_DWORD *)(v9 + 5820);
              *(_WORD *)(v9 + 5816) = (signed int)(unsigned __int16)(v87 - 2) >> (16 - v68);
              *(_DWORD *)(v9 + 5820) = v68 - 13;
              goto LABEL_10;
            }
          }
          *(_WORD *)(v9 + 5816) = ((unsigned __int16)(v10 - 3) << v61) | v60;
          *(_DWORD *)(v9 + 5820) = v61 + 3;
        }
LABEL_10:
        if ( v90 )
          goto LABEL_11;
        goto LABEL_21;
      }
      if ( v8 == v89 )
      {
        v33 = *(_DWORD *)(v9 + 5820);
        LOWORD(v32) = *(_WORD *)(v9 + 5816);
        LOWORD(v87) = v87 + 1;
      }
      else
      {
        v22 = *(_DWORD *)(v9 + 5820);
        v23 = v9 + 4 * v89;
        v24 = *(_WORD *)(v23 + 2686);
        v25 = *(_WORD *)(v23 + 2684);
        if ( v22 <= 16 - v24 )
        {
          v32 = v25 << v22;
          v33 = v24 + v22;
          LOWORD(v32) = *(_WORD *)(v9 + 5816) | v32;
          *(_DWORD *)(v9 + 5820) = v33;
          *(_WORD *)(v9 + 5816) = v32;
        }
        else
        {
          v26 = *(_DWORD *)(v9 + 20);
          v27 = *(_DWORD *)(v9 + 8);
          v28 = *(_WORD *)(v9 + 5816) | (v25 << v22);
          *(_DWORD *)(v9 + 20) = v26 + 1;
          *(_WORD *)(v9 + 5816) = v28;
          *(_BYTE *)(v27 + v26) = v28;
          v29 = *(_DWORD *)(v9 + 20);
          v30 = *(_DWORD *)(v9 + 8);
          *(_DWORD *)(v9 + 20) = v29 + 1;
          *(_BYTE *)(v30 + v29) = *(_BYTE *)(v9 + 5817);
          v31 = *(_DWORD *)(v9 + 5820);
          v32 = v25 >> (16 - v31);
          v33 = v24 + v31 - 16;
          *(_WORD *)(v9 + 5816) = v32;
          *(_DWORD *)(v9 + 5820) = v33;
        }
      }
      v34 = *(_WORD *)(v9 + 2750);
      v35 = *(_WORD *)(v9 + 2748);
      if ( 16 - v34 >= v33 )
      {
        v43 = v35 << v33;
        v44 = v34 + v33;
        LOWORD(v43) = v32 | v43;
        *(_WORD *)(v9 + 5816) = v43;
        *(_DWORD *)(v9 + 5820) = v44;
        if ( v44 <= 14 )
        {
LABEL_29:
          *(_WORD *)(v9 + 5816) = (((_WORD)v87 - 3) << v44) | v43;
          *(_DWORD *)(v9 + 5820) = v44 + 2;
          goto LABEL_10;
        }
      }
      else
      {
        v36 = *(_DWORD *)(v9 + 8);
        v37 = v35 << v33;
        v38 = *(_DWORD *)(v9 + 20);
        v39 = v37 | v32;
        *(_WORD *)(v9 + 5816) = v39;
        *(_DWORD *)(v9 + 20) = v38 + 1;
        *(_BYTE *)(v36 + v38) = v39;
        v40 = *(_DWORD *)(v9 + 20);
        v41 = *(_DWORD *)(v9 + 8);
        *(_DWORD *)(v9 + 20) = v40 + 1;
        *(_BYTE *)(v41 + v40) = *(_BYTE *)(v9 + 5817);
        v42 = *(_DWORD *)(v9 + 5820);
        v43 = v35 >> (16 - v42);
        v44 = v34 + v42 - 16;
        *(_WORD *)(v9 + 5816) = v43;
        *(_DWORD *)(v9 + 5820) = v44;
        if ( v44 <= 14 )
          goto LABEL_29;
      }
      v45 = *(_DWORD *)(v9 + 20);
      v46 = ((unsigned __int16)(v87 - 3) << v44) | v43;
      v47 = *(_DWORD *)(v9 + 8);
      *(_WORD *)(v9 + 5816) = v46;
      *(_DWORD *)(v9 + 20) = v45 + 1;
      *(_BYTE *)(v47 + v45) = v46;
      v48 = *(_DWORD *)(v9 + 20);
      v49 = *(_DWORD *)(v9 + 8);
      *(_DWORD *)(v9 + 20) = v48 + 1;
      *(_BYTE *)(v49 + v48) = *(_BYTE *)(v9 + 5817);
      v50 = *(_DWORD *)(v9 + 5820);
      *(_DWORD *)(v9 + 5820) = v50 - 14;
      *(_WORD *)(v9 + 5816) = (signed int)(unsigned __int16)(v87 - 3) >> (16 - v50);
      if ( v90 )
      {
LABEL_11:
        v87 = 0;
        v5 = (v89 != v90) + 3;
        v6 = (v89 != v90) + 6;
        goto LABEL_12;
      }
LABEL_21:
      v91 += 4;
      v5 = 3;
      result = v92;
      v6 = 138;
      v87 = 0;
      if ( v91 == v92 )
        return result;
LABEL_13:
      v8 = v89;
      v89 = v90;
    }
    v88 = v87 + 1;
    v11 = v9 + 4 * v89;
    do
    {
      while ( 1 )
      {
        v19 = *(_WORD *)(v11 + 2686);
        v20 = *(_DWORD *)(v9 + 5820);
        v21 = *(_WORD *)(v11 + 2684);
        if ( v20 <= 16 - v19 )
          break;
        v12 = *(_DWORD *)(v9 + 20);
        v13 = *(_WORD *)(v9 + 5816) | (v21 << v20);
        *(_DWORD *)(v9 + 20) = v12 + 1;
        v14 = *(_DWORD *)(v9 + 8);
        *(_WORD *)(v9 + 5816) = v13;
        *(_BYTE *)(v14 + v12) = v13;
        v15 = *(_DWORD *)(v9 + 20);
        v16 = *(_DWORD *)(v9 + 8);
        *(_DWORD *)(v9 + 20) = v15 + 1;
        *(_BYTE *)(v16 + v15) = *(_BYTE *)(v9 + 5817);
        v17 = *(_DWORD *)(v9 + 5820);
        v18 = v88-- == 1;
        *(_WORD *)(v9 + 5816) = v21 >> (16 - v17);
        *(_DWORD *)(v9 + 5820) = v19 + v17 - 16;
        if ( v18 )
          goto LABEL_10;
      }
      *(_WORD *)(v9 + 5816) |= v21 << v20;
      v18 = v88-- == 1;
      *(_DWORD *)(v9 + 5820) = v20 + v19;
    }
    while ( !v18 );
    goto LABEL_10;
  }
  return result;
}
