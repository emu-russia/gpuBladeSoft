signed int __cdecl sub_6F76B920(int a1, int a2, int a3, int a4, int *a5)
{
  signed int result; // eax@1
  int v6; // eax@6
  _BYTE **v7; // ebp@8
  int v8; // edx@11
  int v9; // ecx@11
  _DWORD *v10; // eax@13
  int v11; // ebx@15
  int v12; // esi@17
  int v13; // edx@18
  int v14; // eax@18
  int v15; // eax@19
  int v16; // edi@19
  unsigned int v17; // ebx@22
  _BYTE **v18; // ecx@23
  bool v19; // zf@25
  const char *v20; // edi@26
  signed int v21; // ecx@26
  _BYTE *v22; // esi@26
  int v23; // edx@26
  int v24; // ebx@38
  int v25; // esi@41
  signed int v26; // esi@45
  int v27; // eax@46
  int v28; // ST04_4@62
  unsigned int v29; // ebx@62
  char v30; // bp@62
  bool v31; // di@66
  int v32; // eax@68
  int v33; // ST34_4@74
  int v34; // ST3C_4@74
  int *v35; // ebx@79
  int v36; // ebx@86
  int v37; // esi@87
  int v38; // edx@92
  int v39; // ebx@93
  int v40; // eax@94
  int v41; // edx@95
  int v42; // edx@100
  int v43; // eax@101
  int v44; // ecx@101
  int v45; // edx@102
  int v46; // edx@104
  int v47; // eax@109
  int v48; // eax@113
  int v49; // edi@114
  _DWORD *v50; // ebp@114
  _DWORD *v51; // esi@114
  _DWORD *v52; // eax@115
  _DWORD *v53; // ST2C_4@116
  _DWORD *v54; // eax@116
  int (__cdecl *v55)(_DWORD); // eax@119
  signed int v56; // eax@132
  int v57; // [sp+2Ch] [bp-150h]@19
  int v58; // [sp+2Ch] [bp-150h]@24
  int v59; // [sp+2Ch] [bp-150h]@62
  int v60; // [sp+2Ch] [bp-150h]@114
  int v61; // [sp+30h] [bp-14Ch]@24
  _BYTE **v62; // [sp+30h] [bp-14Ch]@62
  unsigned int v63; // [sp+34h] [bp-148h]@22
  int v64; // [sp+38h] [bp-144h]@7
  int v65; // [sp+48h] [bp-134h]@6
  int v66; // [sp+4Ch] [bp-130h]@2
  int v67; // [sp+50h] [bp-12Ch]@2
  int v68; // [sp+54h] [bp-128h]@62
  int v69; // [sp+58h] [bp-124h]@2
  int v70; // [sp+5Ch] [bp-120h]@2
  int v71; // [sp+60h] [bp-11Ch]@2
  int v72; // [sp+64h] [bp-118h]@62
  int v73; // [sp+68h] [bp-114h]@2
  _BYTE **v74; // [sp+6Ch] [bp-110h]@8
  int v75; // [sp+70h] [bp-10Ch]@11
  int v76; // [sp+74h] [bp-108h]@11
  int v77; // [sp+78h] [bp-104h]@68
  int v78; // [sp+84h] [bp-F8h]@70
  int v79[9]; // [sp+98h] [bp-E4h]@62
  int v80[9]; // [sp+BCh] [bp-C0h]@62
  int v81[15]; // [sp+E0h] [bp-9Ch]@62
  char v82; // [sp+11Fh] [bp-5Dh]@126
  char v83; // [sp+12Ah] [bp-52h]@123
  char v84; // [sp+132h] [bp-4Ah]@124
  unsigned int v85; // [sp+133h] [bp-49h]@128

  result = 6;
  if ( !a2 )
    return result;
  v70 = a2;
  v69 = 1;
  v73 = 0;
  v66 = 0;
  v67 = 0;
  v71 = a3;
  if ( !a5 && a4 >= 0 )
    return result;
  if ( !a1 )
  {
    v65 = 33;
    v64 = 0;
    v7 = 0;
    goto LABEL_42;
  }
  v6 = sub_6F768950((int *)a1, (int)&v69, &v66);
  v65 = v6;
  if ( !v6 )
  {
    v64 = *(_DWORD *)a1;
    if ( v69 & 8 && (v7 = v74) != 0 )
    {
      if ( !(**v74 & 1) )
      {
        v65 = 32;
        goto LABEL_52;
      }
      if ( v69 & 0x10 )
      {
        v8 = v75;
        v9 = v76;
      }
      else
      {
        v9 = 0;
        v8 = 0;
      }
      v65 = sub_6F768E50((int)v74, &v66, 0, a4, v8, v9, &v67);
      if ( !v65 )
      {
LABEL_13:
        v10 = sub_6F773A50(v64, 12, &v65);
        if ( v65 )
        {
          if ( v10 )
          {
LABEL_15:
            v11 = v67;
LABEL_16:
            if ( v11 )
            {
              v12 = *(_DWORD *)(v11 + 96);
              if ( v12 )
              {
                v13 = *(_DWORD *)(v11 + 128);
                v14 = *(_DWORD *)(v13 + 56) - 1;
                v19 = *(_DWORD *)(v13 + 56) == 1;
                *(_DWORD *)(v13 + 56) = v14;
                if ( v14 < 0 || v19 )
                {
                  v57 = *(_DWORD *)(v12 + 8);
                  v15 = sub_6F773F40((int *)(v12 + 16), v11);
                  v16 = v15;
                  if ( v15 )
                  {
                    sub_6F773FF0(v12 + 16, v15);
                    sub_6F773D90(v57, v16);
                    sub_6F768C90(v57, v11, v12);
                  }
                }
              }
            }
            return v65;
          }
LABEL_42:
          if ( v67 )
            sub_6F768C90(v64, v67, (int)v7);
          return v65;
        }
        v38 = v67;
        v10[2] = v67;
        sub_6F773F80(*(_DWORD *)(v38 + 96) + 16, (int)v10);
        if ( a4 < 0 )
        {
          v39 = v67;
LABEL_94:
          v40 = *(_DWORD *)(v39 + 8);
          if ( v40 & 1 )
          {
            v41 = *(_WORD *)(v39 + 74);
            if ( (signed __int16)v41 < 0 )
            {
              v41 = -v41;
              *(_WORD *)(v39 + 74) = v41;
            }
            if ( !(v40 & 0x20) )
              *(_WORD *)(v39 + 78) = v41;
          }
          if ( v40 & 2 )
          {
            v42 = *(_DWORD *)(v39 + 28);
            if ( v42 > 0 )
            {
              v43 = *(_DWORD *)(v39 + 32);
              v44 = v43 + 16 * v42;
              do
              {
                if ( *(_WORD *)v43 < 0 )
                  *(_WORD *)v43 = -*(_WORD *)v43;
                v45 = *(_DWORD *)(v43 + 8);
                if ( v45 < 0 )
                  *(_DWORD *)(v43 + 8) = (signed __int16)-*(_WORD *)(v43 + 8);
                v46 = *(_DWORD *)(v43 + 12);
                if ( v46 < 0 )
                  *(_DWORD *)(v43 + 12) = -v46;
                v43 += 16;
              }
              while ( v43 != v44 );
            }
          }
          v47 = *(_DWORD *)(v39 + 128);
          *(_DWORD *)v47 = 0x10000;
          *(_DWORD *)(v47 + 4) = 0;
          *(_DWORD *)(v47 + 8) = 0;
          *(_DWORD *)(v47 + 12) = 0x10000;
          *(_DWORD *)(v47 + 16) = 0;
          *(_DWORD *)(v47 + 20) = 0;
          *(_DWORD *)(v47 + 56) = 1;
          if ( a5 )
            *a5 = v39;
          else
            sub_6F769910(v39);
          return v65;
        }
        v65 = sub_6F7693C0(v67, 0);
        v11 = v67;
        if ( v65 )
          goto LABEL_16;
        if ( v67 )
        {
          v48 = *(_DWORD *)(v67 + 96);
          if ( v48 )
          {
            v49 = *(_DWORD *)(v67 + 100);
            v50 = 0;
            v60 = *(_DWORD *)(v48 + 12);
            v51 = sub_6F773A50(*(_DWORD *)(v67 + 100), *(_DWORD *)(v60 + 40), v81);
            if ( v81[0]
              || (v50 = sub_6F773A50(v49, 12, v81), v81[0])
              || (*v51 = v11, v51[10] = 0, (v55 = *(int (__cdecl **)(_DWORD))(v60 + 56)) != 0)
              && (v81[0] = v55(v51)) != 0 )
            {
              v52 = 0;
            }
            else
            {
              v50[2] = v51;
              sub_6F773F80(v11 + 108, (int)v50);
              if ( !v81[0] )
              {
                v65 = 0;
                v54 = v51;
LABEL_117:
                v39 = v67;
                *(_DWORD *)(v67 + 88) = v54;
                goto LABEL_94;
              }
              v52 = v51;
            }
            v53 = v52;
            sub_6F773D90(v49, (int)v50);
            sub_6F773D90(v49, (int)v51);
            v54 = v53;
            v65 = v81[0];
            if ( v81[0] )
              goto LABEL_15;
            goto LABEL_117;
          }
          v56 = 34;
        }
        else
        {
          v56 = 35;
        }
        v65 = v56;
        goto LABEL_16;
      }
LABEL_52:
      v24 = v66;
    }
    else
    {
      v65 = 11;
      v17 = a1 + 20;
      v63 = a1 + 20 + 4 * *(_DWORD *)(a1 + 16);
      if ( a1 + 20 < v63 )
      {
        v18 = 0;
        while ( 1 )
        {
          v7 = *(_BYTE ***)v17;
          if ( ***(_BYTE ***)v17 & 1 )
          {
            if ( v69 & 0x10 )
            {
              v58 = v75;
              v61 = v76;
            }
            else
            {
              v61 = 0;
              v58 = 0;
            }
            v6 = sub_6F768E50((int)v7, &v66, 0, a4, v58, v61, &v67);
            v19 = v6 == 0;
            v65 = v6;
            if ( !v6 )
              goto LABEL_13;
            v20 = "truetype";
            v21 = 9;
            v22 = *(_BYTE **)(**(_DWORD **)v17 + 8);
            v23 = (unsigned __int8)v6;
            do
            {
              if ( !v21 )
                break;
              v19 = *v22++ == *v20++;
              --v21;
            }
            while ( v19 );
            if ( v19 && (unsigned __int8)v6 == 142 )
            {
              if ( sub_6F771FF0(v66, 0) )
              {
                LOBYTE(v6) = v65;
                v23 = (unsigned __int8)v65;
                goto LABEL_38;
              }
              v6 = sub_6F76A550((int *)a1, v66, a4, v58, v61, a5);
              v65 = v6;
              if ( !v6 )
              {
                sub_6F769260(v66, 0);
                return v65;
              }
              v23 = (unsigned __int8)v6;
            }
            if ( v23 != 2 )
              goto LABEL_38;
            v18 = v7;
          }
          v17 += 4;
          if ( v63 <= v17 )
          {
            LOBYTE(v6) = v65;
            v7 = v18;
            v23 = (unsigned __int8)v65;
            goto LABEL_38;
          }
        }
      }
      v24 = v66;
      v7 = 0;
    }
LABEL_40:
    if ( v24 )
    {
      v25 = *(_DWORD *)(v24 + 28);
      sub_6F771FD0(v24);
      sub_6F773D90(v25, v24);
    }
    goto LABEL_42;
  }
  v23 = (unsigned __int8)v6;
  v64 = 0;
  v7 = 0;
LABEL_38:
  v24 = v66;
  if ( (v6 & 0xFB) != 81 && v23 != 2 )
    goto LABEL_40;
  if ( !v66 )
  {
    if ( !(v69 & 4) )
    {
      v65 = 85;
      goto LABEL_40;
    }
    goto LABEL_62;
  }
  v26 = sub_6F771FF0(v66, 0);
  if ( v26 || (v26 = sub_6F7720B0(v24, v81, 0x80u)) != 0 )
  {
LABEL_46:
    v27 = (unsigned __int8)v26;
    if ( (unsigned __int8)v26 != 2 )
      goto LABEL_47;
    goto LABEL_90;
  }
  if ( !LOBYTE(v81[0])
    && !v83
    && !v84
    && (unsigned __int8)(BYTE1(v81[0]) - 1) <= 0x20u
    && !v82
    && !*((_BYTE *)&v81[0] + BYTE1(v81[0]) + 2) )
  {
    v26 = sub_6F76A8D0((int *)a1, v24, ((_byteswap_ulong(v85) + 127) & 0xFFFFFF80) + 128, a4, a5);
    goto LABEL_46;
  }
LABEL_90:
  v26 = sub_6F76A8D0((int *)a1, v24, 0, a4, a5);
  v27 = (unsigned __int8)v26;
LABEL_47:
  if ( v27 != 2 && v27 != 85 || !(v69 & 4) )
    goto LABEL_49;
LABEL_62:
  v68 = 0;
  v26 = 2;
  v28 = v24;
  v29 = 0;
  v59 = *(_DWORD *)a1;
  sub_6F771EA0(a1, v28, v72, v79, (int)v80, (int)v81);
  v62 = v7;
  v30 = 0;
  while ( 1 )
  {
    v31 = sub_6F771F80(a1, v29);
    if ( !v31 || !(v30 & 1) )
    {
      if ( v81[v29] )
        goto LABEL_65;
      v32 = v79[v29];
      v77 = 4;
      v68 = 0;
      if ( !v32 )
        v32 = v72;
      v78 = v32;
      v26 = sub_6F768950((int *)a1, (int)&v77, &v68);
      if ( !v31 || (_BYTE)v26 != 81 )
        break;
    }
    v30 = 1;
LABEL_65:
    if ( ++v29 == 9 )
      goto LABEL_79;
  }
  if ( v26 )
    goto LABEL_65;
  v26 = sub_6F76A8D0((int *)a1, v68, v80[v29], a4, a5);
  if ( v68 )
  {
    v33 = v68;
    v34 = *(_DWORD *)(v68 + 28);
    sub_6F771FD0(v68);
    sub_6F773D90(v34, v33);
  }
  if ( v26 )
  {
    if ( v31 )
      v30 = 1;
    goto LABEL_65;
  }
LABEL_79:
  v7 = v62;
  v35 = v79;
  do
  {
    if ( *v35 )
    {
      sub_6F773D90(v59, *v35);
      *v35 = 0;
    }
    ++v35;
  }
  while ( v35 != v80 );
  if ( v26 )
    v26 = 2;
LABEL_49:
  v65 = v26;
  if ( v26 )
  {
    if ( (_BYTE)v26 == 2 )
      v65 = 2;
    goto LABEL_52;
  }
  v36 = v66;
  result = 0;
  if ( v66 )
  {
    v37 = *(_DWORD *)(v66 + 28);
    sub_6F771FD0(v66);
    sub_6F773D90(v37, v36);
    result = v65;
  }
  return result;
}
