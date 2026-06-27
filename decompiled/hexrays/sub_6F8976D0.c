int __usercall sub_6F8976D0@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v2; // esi@1
  char v3; // dl@1
  int v4; // ebx@3
  int v5; // ecx@6
  int v6; // esi@6
  _BYTE *v7; // eax@7
  int result; // eax@9
  int *v9; // eax@11
  int v10; // ecx@11
  int v11; // ebp@11
  int v12; // eax@12
  _BYTE *v13; // eax@15
  signed int v14; // edx@16
  char v15; // al@17
  int v16; // eax@19
  int v17; // edx@21
  int v18; // eax@21
  int v19; // edx@22
  int v20; // edi@27
  int v21; // eax@28
  int v22; // eax@35
  int v23; // ecx@35
  char *v24; // esi@35
  int v25; // edx@35
  unsigned __int8 v26; // cf@35
  bool v27; // zf@35
  _BYTE *v28; // edi@35
  char *v29; // esi@43
  bool v30; // cf@43
  bool v31; // zf@43
  _BYTE *v32; // edi@44
  int v33; // ecx@44
  char v34; // al@50
  int v35; // esi@52
  int v36; // ecx@52
  int v37; // edi@52
  int v38; // eax@52
  char v39; // dl@52
  int v40; // eax@56
  int v41; // eax@57
  int v42; // eax@57
  int v43; // eax@8
  int v44; // esi@58
  int v45; // ecx@58
  int v46; // edi@58
  _BYTE *v47; // eax@58
  int v48; // eax@61
  int v49; // eax@62
  char v50; // al@63
  bool v51; // cf@65
  bool v52; // zf@65
  char *v53; // esi@66
  _BYTE *v54; // edi@66
  signed int v55; // ST18_4@70
  int v56; // eax@70
  signed int v57; // edx@70
  _BYTE *v58; // eax@75
  signed int v59; // eax@80
  signed int v60; // ST18_4@85
  char *v61; // eax@89
  bool v62; // cf@91
  bool v63; // zf@91
  char *v64; // esi@92
  _BYTE *v65; // edi@92
  int v66; // ecx@92
  char v67; // al@95
  bool v68; // cf@95
  bool v69; // zf@95
  char *v70; // esi@96
  _BYTE *v71; // edi@96
  signed int v72; // ecx@96
  char v73; // al@99
  bool v74; // cf@99
  bool v75; // zf@99
  char *v76; // esi@100
  _BYTE *v77; // edi@100
  int v78; // ecx@100
  int v79; // ecx@104
  int v80; // esi@104
  _BYTE *v81; // eax@104
  int v82; // eax@106
  int v83; // eax@107
  int v84; // ecx@107
  int v85; // ecx@108
  char v86; // al@110
  int v87; // eax@105
  int v88; // [sp+0h] [bp-3Ch]@59
  char *v89; // [sp+18h] [bp-24h]@35
  int v90; // [sp+1Ch] [bp-20h]@91

  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_BYTE *)v2;
  if ( *(_BYTE *)v2 == 76 )
  {
    result = sub_6F897550(a1);
  }
  else
  {
    if ( v3 != 84 )
    {
      v4 = a1;
      if ( v3 == 115 )
      {
        v15 = *(_BYTE *)(v2 + 1);
        if ( v15 == 114 )
        {
          *(_DWORD *)(v4 + 12) = v2 + 2;
          v44 = sub_6F898420(v4);
          v46 = sub_6F8992C0(v4);
          v47 = *(_BYTE **)(v4 + 12);
          if ( *v47 == 73 )
          {
            *(_DWORD *)(v4 + 12) = v47 + 1;
            v49 = sub_6F897E00(v4, v45);
            v88 = sub_6F896B60(v4, 4, v46, v49);
          }
          else
          {
            v88 = v46;
          }
          return sub_6F896B60(v4, 1, v44, v88);
        }
        if ( v15 != 112 )
          goto LABEL_11;
        *(_DWORD *)(v4 + 12) = v2 + 2;
        v16 = sub_6F8976D0(v4, a2);
        v6 = sub_6F896B60(v4, 74, v16, 0);
      }
      else if ( v3 == 102 )
      {
        if ( *(_BYTE *)(v2 + 1) != 112 )
          goto LABEL_11;
        *(_DWORD *)(a1 + 12) = v2 + 2;
        if ( *(_BYTE *)(v2 + 2) == 84 )
        {
          v18 = 0;
          *(_DWORD *)(v4 + 12) = v2 + 3;
        }
        else
        {
          v17 = sub_6F896E30(a1);
          v18 = v17 + 1;
          if ( (v17 & 0x7FFFFFFF) == 0x7FFFFFFF )
            return 0;
        }
        v19 = *(_DWORD *)(v4 + 20);
        if ( v19 >= *(_DWORD *)(v4 + 24) )
          return 0;
        v6 = *(_DWORD *)(v4 + 16) + 16 * *(_DWORD *)(v4 + 20);
        *(_DWORD *)(v6 + 4) = 0;
        *(_DWORD *)(v4 + 20) = v19 + 1;
        *(_DWORD *)v6 = 6;
        *(_DWORD *)(v6 + 8) = v18;
      }
      else
      {
        if ( (unsigned __int8)(v3 - 48) <= 9u )
          goto LABEL_6;
        if ( v3 == 111 )
        {
          if ( *(_BYTE *)(v2 + 1) == 110 )
          {
            *(_DWORD *)(a1 + 12) = v2 + 2;
LABEL_6:
            v6 = sub_6F8992C0(a1);
            if ( v6 )
            {
              v7 = *(_BYTE **)(v4 + 12);
              if ( *v7 == 73 )
              {
                *(_DWORD *)(v4 + 12) = v7 + 1;
                v43 = sub_6F897E00(v4, v5);
                v6 = sub_6F896B60(v4, 4, v6, v43);
              }
              return v6;
            }
            return 0;
          }
LABEL_11:
          v9 = (int *)sub_6F898D30(v4);
          v11 = (int)v9;
          if ( !v9 )
            return 0;
          v12 = *v9;
          if ( v12 != 49 )
          {
            if ( v12 != 50 )
            {
              if ( v12 == 51 )
              {
                v13 = *(_BYTE **)(v4 + 12);
                if ( *v13 != 95 )
                {
                  v14 = 0;
                  goto LABEL_70;
                }
                *(_DWORD *)(v4 + 12) = v13 + 1;
                v56 = sub_6F897D50(v4, 69, v10);
                return sub_6F896B60(v4, 54, v11, v56);
              }
              return 0;
            }
            v59 = *(_DWORD *)(v11 + 8);
            if ( v59 == 1 )
            {
              v56 = sub_6F8976D0(v4, v10);
              return sub_6F896B60(v4, 54, v11, v56);
            }
            if ( v59 > 1 || v59 )
              return 0;
            return sub_6F896B60(v4, 53, v11, 0);
          }
          v22 = *(_DWORD *)(v11 + 8);
          v23 = 3;
          v24 = *(char **)v22;
          v25 = *(_DWORD *)(v22 + 8) - 2;
          v26 = __CFADD__(v25, *(_DWORD *)(v4 + 44));
          v27 = v25 + *(_DWORD *)(v4 + 44) == 0;
          *(_DWORD *)(v4 + 44) += v25;
          v28 = &unk_6FBA4810;
          v89 = v24;
          do
          {
            if ( !v23 )
              break;
            v26 = (unsigned __int8)*v24 < *v28;
            v27 = *v24++ == *v28++;
            --v23;
          }
          while ( v27 );
          if ( !(v26 | v27) == v26 )
          {
            v56 = sub_6F898420(v4);
            return sub_6F896B60(v4, 54, v11, v56);
          }
          v14 = *(_DWORD *)(v22 + 12);
          if ( v14 != 1 )
          {
            if ( v14 <= 1 )
            {
              if ( v14 )
                return 0;
              return sub_6F896B60(v4, 53, v11, 0);
            }
            if ( v14 == 2 )
            {
              if ( v89 )
              {
                v61 = *(char **)v22;
                if ( v61[1] != 99 || (v86 = *v61, (unsigned __int8)(v86 - 99) > 1u) && (unsigned __int8)(v86 - 114) > 1u )
                {
                  if ( *v89 == 102 )
                    v90 = sub_6F898D30(v4);
                  else
                    v90 = sub_6F8976D0(v4, v23);
                }
                else
                {
                  v90 = sub_6F898420(v4);
                }
                v64 = v89;
                v65 = &unk_6FBA4816;
                v66 = 3;
                do
                {
                  if ( !v66 )
                    break;
                  v62 = (unsigned __int8)*v64 < *v65;
                  v63 = *v64++ == *v65++;
                  --v66;
                }
                while ( v63 );
                v67 = (!v62 && !v63) - v62;
                v68 = 0;
                v69 = v67 == 0;
                if ( v67 )
                {
                  v70 = v89;
                  v71 = &unk_6FBA4819;
                  v72 = 3;
                  do
                  {
                    if ( !v72 )
                      break;
                    v68 = (unsigned __int8)*v70 < *v71;
                    v69 = *v70++ == *v71++;
                    --v72;
                  }
                  while ( v69 );
                  v73 = (!v68 && !v69) - v68;
                  v74 = 0;
                  v75 = v73 == 0;
                  if ( !v73 )
                    goto LABEL_122;
                  v76 = v89;
                  v77 = &unk_6FBA481C;
                  v78 = 3;
                  do
                  {
                    if ( !v78 )
                      break;
                    v74 = (unsigned __int8)*v76 < *v77;
                    v75 = *v76++ == *v77++;
                    --v78;
                  }
                  while ( v75 );
                  if ( (!v74 && !v75) != v74 )
                  {
                    v80 = sub_6F8976D0(v4, v78);
                  }
                  else
                  {
LABEL_122:
                    v80 = sub_6F8992C0(v4);
                    v81 = *(_BYTE **)(v4 + 12);
                    if ( *v81 == 73 )
                    {
                      *(_DWORD *)(v4 + 12) = v81 + 1;
                      v87 = sub_6F897E00(v4, v79);
                      v80 = sub_6F896B60(v4, 4, v80, v87);
                    }
                  }
                }
                else
                {
                  v80 = sub_6F897D50(v4, 69, v66);
                }
                v82 = sub_6F896B60(v4, 56, v90, v80);
                return sub_6F896B60(v4, 55, v11, v82);
              }
              return 0;
            }
            if ( v14 != 3 )
              return 0;
            v29 = v89;
            v30 = 0;
            v31 = v89 == 0;
            if ( !v89 )
              return 0;
            v32 = &unk_6FBA481F;
            v33 = 3;
            do
            {
              if ( !v33 )
                break;
              v30 = (unsigned __int8)*v29 < *v32;
              v31 = *v29++ == *v32++;
              --v33;
            }
            while ( v31 );
            if ( (!v30 && !v31) == v30 )
            {
              v83 = sub_6F8976D0(v4, v33);
            }
            else
            {
              if ( *v89 != 102 )
              {
                if ( *v89 != 110 )
                  return 0;
                v34 = v89[1];
                if ( v34 != 119 && v34 != 97 )
                  return 0;
                v35 = sub_6F897D50(v4, 95, v33);
                v37 = sub_6F898420(v4);
                v38 = *(_DWORD *)(v4 + 12);
                v39 = *(_BYTE *)v38;
                if ( *(_BYTE *)v38 == 69 )
                {
                  *(_DWORD *)(v4 + 12) = v38 + 1;
                  v40 = 0;
                }
                else if ( v39 == 112 )
                {
                  if ( *(_BYTE *)(v38 + 1) != 105 )
                    return 0;
                  *(_DWORD *)(v4 + 12) = v38 + 2;
                  v40 = sub_6F897D50(v4, 69, v36);
                }
                else
                {
                  if ( v39 != 105 || *(_BYTE *)(v38 + 1) != 108 )
                    return 0;
                  v40 = sub_6F8976D0(v4, v36);
                }
                goto LABEL_57;
              }
              v83 = sub_6F898D30(v4);
            }
            v35 = v83;
            v37 = sub_6F8976D0(v4, v84);
            v40 = sub_6F8976D0(v4, v85);
            if ( !v40 )
              return 0;
LABEL_57:
            v41 = sub_6F896B60(v4, 59, v37, v40);
            v42 = sub_6F896B60(v4, 58, v35, v41);
            return sub_6F896B60(v4, 57, v11, v42);
          }
          v50 = *v89;
          if ( (*v89 == 112 || v50 == 109) && v50 == v89[1] )
          {
            v58 = *(_BYTE **)(v4 + 12);
            v51 = *v58 < 0x5Fu;
            v52 = *v58 == 95;
            if ( *v58 != 95 )
              goto LABEL_66;
            *(_DWORD *)(v4 + 12) = v58 + 1;
          }
          v14 = 0;
          v51 = 0;
          v52 = 1;
LABEL_66:
          v53 = v89;
          v54 = &unk_6FBA4813;
          v10 = 3;
          do
          {
            if ( !v10 )
              break;
            v51 = (unsigned __int8)*v53 < *v54;
            v52 = *v53++ == *v54++;
            --v10;
          }
          while ( v52 );
          if ( (!v51 && !v52) == v51 )
          {
            v60 = v14;
            v56 = sub_6F897E00(v4, v10);
            v57 = v60;
LABEL_71:
            if ( v57 )
              v56 = sub_6F896B60(v4, 56, v56, v56);
            return sub_6F896B60(v4, 54, v11, v56);
          }
LABEL_70:
          v55 = v14;
          v56 = sub_6F8976D0(v4, v10);
          v57 = v55;
          goto LABEL_71;
        }
        if ( v3 != 105 && v3 != 116 || *(_BYTE *)(v2 + 1) != 108 )
          goto LABEL_11;
        v20 = 0;
        if ( v3 == 116 )
        {
          v21 = sub_6F898420(a1);
          v2 = *(_DWORD *)(v4 + 12);
          v20 = v21;
          if ( !*(_BYTE *)(v2 + 1) )
            return 0;
        }
        *(_DWORD *)(v4 + 12) = v2 + 2;
        v48 = sub_6F897D50(v4, 69, a2);
        v6 = sub_6F896B60(v4, 48, v20, v48);
      }
      return v6;
    }
    result = sub_6F896E70(a1);
  }
  return result;
}
