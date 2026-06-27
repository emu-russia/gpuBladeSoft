int *__usercall sub_6F7C3860@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // edi@1
  int v3; // eax@1
  int v4; // esi@1
  int *result; // eax@1
  char *v6; // edi@2
  int v7; // eax@2
  char v8; // dl@5
  int v9; // eax@6
  char v10; // al@8
  char v11; // dl@8
  int *v12; // ebx@12
  signed int v13; // ebp@12
  signed int v14; // edi@12
  int v15; // ecx@15
  int v16; // edx@15
  signed int v17; // eax@16
  int v18; // esi@16
  int v19; // ebx@16
  int *v20; // ebx@20
  signed int v21; // ebp@20
  signed int v22; // edi@20
  int v23; // ecx@23
  int v24; // edx@23
  signed int v25; // eax@24
  int v26; // esi@24
  int v27; // ebx@24
  int v28; // edx@28
  int v29; // ecx@30
  int v30; // eax@30
  int v31; // ebx@30
  int v32; // ebp@32
  signed int v33; // kr00_4@33
  int v34; // ebx@33
  int v35; // edx@34
  int v36; // eax@38
  int v37; // eax@39
  int v38; // edx@39
  int v39; // eax@42
  int v40; // esi@42
  signed int v41; // edx@42
  int v42; // ebx@42
  int v43; // edi@42
  int v44; // eax@42
  int v45; // ecx@43
  __int16 v46; // bp@44
  int v47; // eax@64
  signed int v48; // ebx@64
  int v49; // ecx@87
  int v50; // ecx@89
  int v51; // [sp+10h] [bp-1ECh]@15
  int v52; // [sp+10h] [bp-1ECh]@23
  int v53; // [sp+10h] [bp-1ECh]@41
  int v54; // [sp+14h] [bp-1E8h]@42
  int *v55; // [sp+18h] [bp-1E4h]@1
  __int64 v56; // [sp+1Ch] [bp-1E0h]@2
  int v57; // [sp+24h] [bp-1D8h]@1
  char v58; // [sp+2Bh] [bp-1D1h]@2
  int v59; // [sp+2Ch] [bp-1D0h]@4
  int v60; // [sp+30h] [bp-1CCh]@1
  char *v61; // [sp+34h] [bp-1C8h]@42
  int v62; // [sp+38h] [bp-1C4h]@1
  int v63; // [sp+3Ch] [bp-1C0h]@1
  int v64; // [sp+44h] [bp-1B8h]@17
  int v65[50]; // [sp+48h] [bp-1B4h]@12
  int v66; // [sp+110h] [bp-ECh]@25
  int v67[58]; // [sp+114h] [bp-E8h]@20

  v2 = a1;
  v57 = a1;
  v60 = a2;
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 12);
  v55 = &dword_6FB6BB00[2 * v3];
  v4 = dword_6FB6BB00[2 * v3];
  result = (int *)(v2 + 1616);
  v62 = v2 + 44;
  v63 = v2 + 1616;
  if ( v4 != 759 )
  {
    while ( 1 )
    {
      v6 = &aZEDG[v4];
      v58 = 1;
      v56 = 0i64;
      v7 = v62;
      if ( !(*((_BYTE *)v55 + 4) & 2) )
        v7 = v63;
      v59 = v7;
      while ( 1 )
      {
        v8 = *v6;
        if ( !*v6 )
          break;
        while ( 1 )
        {
          v9 = (unsigned __int8)v8;
          if ( (unsigned __int8)v8 <= 0x7Fu )
          {
            ++v6;
          }
          else if ( (unsigned __int8)v8 > 0xDFu )
          {
            if ( (unsigned __int8)v8 > 0xEFu )
            {
              v47 = v8 & 7;
              v48 = 3;
            }
            else
            {
              v47 = v8 & 0xF;
              v48 = 2;
            }
            v9 = (((v47 << 6) | v6[1] & 0x3F) << 6) | v6[2] & 0x3F;
            if ( v48 != 2 )
              v9 = v6[3] & 0x3F | (v9 << 6);
            v6 += v48 + 1;
          }
          else
          {
            v10 = v8;
            v11 = v6[1];
            v6 += 2;
            v9 = v11 & 0x3F | ((v10 & 0x1F) << 6);
          }
          if ( v9 != 124 )
            break;
          v8 = *v6;
          v58 = 0;
          if ( !*v6 )
            goto LABEL_11;
        }
        v36 = sub_6F76D560(**(_DWORD **)(v57 + 36));
        if ( v36 )
        {
          v37 = sub_6F76E6F0(v60, v36, 1);
          v38 = *(_DWORD *)(v60 + 84);
          if ( *(_WORD *)(v38 + 110) > 0 && !v37 )
          {
            v53 = *(_WORD *)(v38 + 108);
            if ( v53 <= 0 )
            {
              v42 = 0;
              goto LABEL_53;
            }
            v39 = *(_DWORD *)(v38 + 120);
            v40 = *(_DWORD *)(v38 + 112);
            v61 = v6;
            v41 = -1;
            v42 = 0;
            v43 = 0;
            v54 = v39;
            v44 = 0;
            do
            {
              v45 = *(_WORD *)(v54 + 2 * v43);
              if ( v45 <= v44 )
                goto LABEL_51;
              v46 = *((_WORD *)v55 + 2);
              if ( v46 & 2 )
              {
                if ( v46 & 1 )
                {
                  while ( v41 >= 0 )
                  {
                    if ( *(_DWORD *)(v40 + 8 * v44) > v42 )
                    {
                      v42 = *(_DWORD *)(v40 + 8 * v44);
LABEL_49:
                      v41 = v44;
                    }
                    if ( v45 < ++v44 )
                      goto LABEL_51;
                  }
                  v42 = *(_DWORD *)(v40 + 8 * v44);
                  goto LABEL_49;
                }
                while ( 1 )
                {
                  if ( v41 < 0 )
                  {
                    v42 = *(_DWORD *)(v40 + 8 * v44);
                  }
                  else
                  {
                    if ( *(_DWORD *)(v40 + 8 * v44) >= v42 )
                      goto LABEL_57;
                    v42 = *(_DWORD *)(v40 + 8 * v44);
                  }
                  v41 = v44;
LABEL_57:
                  if ( v45 < ++v44 )
                    goto LABEL_51;
                }
              }
              if ( !(v46 & 1) )
              {
                while ( 1 )
                {
                  if ( v41 < 0 )
                  {
                    v42 = *(_DWORD *)(v40 + 8 * v44 + 4);
                  }
                  else
                  {
                    if ( *(_DWORD *)(v40 + 8 * v44 + 4) >= v42 )
                      goto LABEL_78;
                    v42 = *(_DWORD *)(v40 + 8 * v44 + 4);
                  }
                  v41 = v44;
LABEL_78:
                  if ( v45 < ++v44 )
                    goto LABEL_51;
                }
              }
              if ( v41 >= 0 )
              {
LABEL_70:
                if ( *(_DWORD *)(v40 + 8 * v44 + 4) > v42 )
                {
                  v42 = *(_DWORD *)(v40 + 8 * v44 + 4);
                  goto LABEL_72;
                }
                goto LABEL_73;
              }
              while ( 1 )
              {
                v42 = *(_DWORD *)(v40 + 8 * v44 + 4);
LABEL_72:
                v41 = v44;
LABEL_73:
                if ( v45 < ++v44 )
                  break;
                if ( v41 >= 0 )
                  goto LABEL_70;
              }
LABEL_51:
              ++v43;
              v44 = v45 + 1;
            }
            while ( v43 != v53 );
            v6 = v61;
LABEL_53:
            if ( v58 )
            {
              v58 = 1;
              v65[HIDWORD(v56)++] = v42;
            }
            else
            {
              v67[(signed int)v56] = v42;
              LODWORD(v56) = v56 + 1;
            }
          }
        }
      }
LABEL_11:
      if ( v56 )
        break;
LABEL_36:
      v55 += 2;
      result = v55;
      v4 = *v55;
      if ( *v55 == 759 )
        return result;
    }
    v12 = v65;
    v13 = -1;
    v14 = 1;
    if ( HIDWORD(v56) > 1 )
    {
      do
      {
        if ( !v14 )
        {
          ++v12;
          --v13;
          v14 = 1;
        }
        v15 = v12[1];
        v16 = *v12;
        v51 = (int)(v12 + 1);
        if ( *v12 > v15 )
        {
          v17 = v14;
          v18 = (int)&v12[v13 + 1];
          v19 = (int)&v12[v13];
          do
          {
            *(_DWORD *)(v18 + 4 * v17) = v16;
            *(_DWORD *)(v19 + 4 * v17--) = v15;
            if ( !v17 )
              break;
            v16 = *(&v64 + v17);
          }
          while ( v16 > v15 );
        }
        ++v14;
        --v13;
        v12 = (int *)v51;
      }
      while ( HIDWORD(v56) != v14 );
    }
    v20 = v67;
    v21 = -1;
    v22 = 1;
    if ( (unsigned int)v56 <= 1 )
    {
      v28 = *(_DWORD *)(v59 + 216);
      *(_DWORD *)(v59 + 216) = v28 + 1;
      if ( !(_DWORD)v56 )
      {
        v30 = v65[HIDWORD(v56) >> 1];
        v50 = v59 + 28 * v28;
        *(_DWORD *)(v50 + 232) = v30;
        *(_DWORD *)(v50 + 220) = v30;
        v31 = v30;
LABEL_31:
        if ( v31 == v30 )
        {
          LOWORD(v32) = *((_WORD *)v55 + 2) & 1;
        }
        else
        {
          v32 = *((_WORD *)v55 + 2) & 1;
          if ( v32 != v31 < v30 )
          {
            v33 = v31 + v30;
            v34 = v59 + 28 * v28;
            *(_DWORD *)(v34 + 232) = v33 / 2;
            *(_DWORD *)(v34 + 220) = v33 / 2;
          }
        }
        v35 = 28 * v28;
        if ( (_WORD)v32 )
          *(_DWORD *)(v59 + v35 + 244) = 2;
        else
          *(_DWORD *)(v59 + v35 + 244) = 0;
        goto LABEL_36;
      }
    }
    else
    {
      do
      {
        if ( !v22 )
        {
          ++v20;
          --v21;
          v22 = 1;
        }
        v23 = v20[1];
        v24 = *v20;
        v52 = (int)(v20 + 1);
        if ( *v20 > v23 )
        {
          v25 = v22;
          v26 = (int)&v20[v21 + 1];
          v27 = (int)&v20[v21];
          do
          {
            *(_DWORD *)(v26 + 4 * v25) = v24;
            *(_DWORD *)(v27 + 4 * v25--) = v23;
            if ( !v25 )
              break;
            v24 = *(&v66 + v25);
          }
          while ( v23 < v24 );
        }
        ++v22;
        --v21;
        v20 = (int *)v52;
      }
      while ( (_DWORD)v56 != v22 );
      v28 = *(_DWORD *)(v59 + 216);
      *(_DWORD *)(v59 + 216) = v28 + 1;
    }
    if ( HIDWORD(v56) )
    {
      v49 = v59 + 28 * v28;
      v30 = v65[HIDWORD(v56) >> 1];
      v31 = v67[(unsigned int)v56 >> 1];
      *(_DWORD *)(v49 + 220) = v30;
      *(_DWORD *)(v49 + 232) = v31;
    }
    else
    {
      v29 = v59 + 28 * v28;
      v30 = v67[(unsigned int)v56 >> 1];
      *(_DWORD *)(v29 + 232) = v30;
      *(_DWORD *)(v29 + 220) = v30;
      v31 = v30;
    }
    goto LABEL_31;
  }
  return result;
}
