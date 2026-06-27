signed int __usercall sub_6F7CE900@<eax>(int a1@<eax>)
{
  int v1; // ebp@1
  int v2; // eax@1
  int v3; // ebx@3
  int (__cdecl *v4)(int, _DWORD, _BYTE *, signed int); // eax@3
  unsigned int v5; // eax@4
  _BYTE *v7; // esi@7
  int v8; // edi@11
  signed int v9; // edx@15
  int v10; // eax@16
  _BYTE *v11; // edx@17
  int v12; // eax@17
  int v13; // edx@17
  _BYTE *v14; // edx@19
  int v15; // eax@19
  int v16; // edx@19
  _BYTE *v17; // edx@21
  int v18; // eax@21
  int v19; // edx@21
  _BYTE *v20; // eax@22
  int v21; // eax@22
  bool v22; // zf@22
  int v23; // ecx@25
  int v24; // ebx@26
  _BYTE *v25; // edx@26
  int v26; // eax@26
  int v27; // eax@27
  int v28; // ecx@28
  int v29; // eax@29
  _BYTE *v30; // ebx@29
  int v31; // esi@29
  int v32; // eax@30
  int v33; // ebx@30
  int v34; // esi@30
  int v35; // ecx@34
  int v36; // eax@35
  _BYTE *v37; // edx@35
  int v38; // esi@35
  int v39; // edx@36
  int v40; // ecx@38
  int v41; // eax@39
  _BYTE *v42; // esi@39
  int v43; // esi@40
  int v44; // ecx@42
  signed int v45; // eax@42
  int v46; // eax@44
  _BYTE *v47; // eax@44
  unsigned int v48; // ebx@44
  int v49; // ecx@46
  char *v50; // eax@47
  unsigned __int8 v51; // al@47
  int v52; // eax@55
  int v53; // ecx@57
  int v54; // eax@58
  int v55; // eax@61
  int v56; // ebx@61
  int v57; // eax@63
  int v58; // eax@67
  int (__cdecl *v59)(_DWORD, _DWORD, _DWORD); // eax@67
  int v60; // eax@68
  int v61; // esi@71
  int v62; // eax@77
  int v63; // [sp+10h] [bp-2Ch]@1
  _BYTE *v64; // [sp+14h] [bp-28h]@1
  int v65; // [sp+18h] [bp-24h]@44

  v1 = a1;
  *(_DWORD *)(a1 + 28) = 4096;
  v63 = a1 + 12;
  v2 = a1 + 4168;
  *(_DWORD *)(v1 + 8268) = v2;
  *(_DWORD *)(v1 + 24) = v2;
  v64 = (_BYTE *)(v1 + 72);
  while ( 2 )
  {
    if ( !*(_DWORD *)(v1 + 16) )
    {
      v3 = *(_DWORD *)v1;
      v4 = *(int (__cdecl **)(int, _DWORD, _BYTE *, signed int))(*(_DWORD *)v1 + 20);
      if ( v4 )
      {
        v5 = v4(v3, *(_DWORD *)(v3 + 8), v64, 4096);
        if ( !v5 )
          return 85;
      }
      else
      {
        v61 = *(_DWORD *)(v3 + 8);
        v5 = *(_DWORD *)(v3 + 4) - v61;
        if ( v5 > 0x1000 )
        {
          v5 = 4096;
        }
        else if ( *(_DWORD *)(v3 + 4) == v61 )
        {
          return 85;
        }
        v7 = (_BYTE *)(*(_DWORD *)v3 + v61);
        if ( v5 < 4 )
        {
          if ( v5 )
          {
            *v64 = *v7;
            if ( v5 & 2 )
              *(_WORD *)&v64[v5 - 2] = *(_WORD *)&v7[v5 - 2];
          }
        }
        else
        {
          *(_DWORD *)v64 = *(_DWORD *)v7;
          *(_DWORD *)&v64[v5 - 4] = *(_DWORD *)&v7[v5 - 4];
          qmemcpy(
            (void *)((v1 + 76) & 0xFFFFFFFC),
            (const void *)(v7 - &v64[-((v1 + 76) & 0xFFFFFFFC)]),
            4 * ((unsigned int)(&v64[v5] - ((v1 + 76) & 0xFFFFFFFC)) >> 2));
        }
      }
      *(_DWORD *)(v3 + 8) += v5;
      *(_DWORD *)(v1 + 16) = v5;
      *(_DWORD *)(v1 + 12) = v64;
    }
    if ( !v63 )
      return 85;
    v8 = *(_DWORD *)(v1 + 40);
    if ( !v8 || !*(_DWORD *)(v1 + 12) || *(_DWORD *)v8 > 0xDu )
      return 85;
    switch ( *(_DWORD *)v8 )
    {
      case 0:
        v49 = *(_DWORD *)(v1 + 16);
        if ( !v49 )
          return 85;
        v50 = *(char **)(v1 + 12);
        ++*(_DWORD *)(v1 + 20);
        v44 = v49 - 1;
        *(_DWORD *)(v1 + 16) = v44;
        *(_DWORD *)(v1 + 12) = v50 + 1;
        v51 = *v50;
        *(_DWORD *)(v8 + 4) = v51;
        if ( (v51 & 0xF) != 8 )
        {
          *(_DWORD *)v8 = 13;
          *(_DWORD *)(v1 + 36) = "unknown compression method";
          *(_DWORD *)(v8 + 4) = 5;
          return 85;
        }
        if ( ((unsigned int)v51 >> 4) + 8 > *(_DWORD *)(v8 + 16) )
        {
          *(_DWORD *)v8 = 13;
          *(_DWORD *)(v1 + 36) = "invalid window size";
          *(_DWORD *)(v8 + 4) = 5;
          return 85;
        }
        *(_DWORD *)v8 = 1;
        v45 = 0;
LABEL_43:
        if ( !v44 )
        {
          v9 = v45;
LABEL_50:
          if ( v9 )
            return 85;
          goto LABEL_31;
        }
        v46 = *(_DWORD *)(v1 + 20);
        v40 = v44 - 1;
        *(_DWORD *)(v1 + 16) = v40;
        *(_DWORD *)(v1 + 20) = ++v46;
        v65 = v46;
        v47 = *(_BYTE **)(v1 + 12);
        v42 = v47 + 1;
        *(_DWORD *)(v1 + 12) = v47 + 1;
        v48 = (*(_DWORD *)(v8 + 4) << 8) + *v47;
        if ( v48 != 31 * (v48 / 0x1F) )
        {
          *(_DWORD *)v8 = 13;
          *(_DWORD *)(v1 + 36) = "incorrect header check";
          *(_DWORD *)(v8 + 4) = 5;
          return 85;
        }
        if ( *v47 & 0x20 )
        {
          *(_DWORD *)v8 = 2;
          if ( v40 )
          {
            v41 = v65;
LABEL_40:
            v37 = v42 + 1;
            v35 = v40 - 1;
            v36 = v41 + 1;
            *(_DWORD *)(v1 + 16) = v35;
            *(_DWORD *)(v1 + 20) = v36;
            *(_DWORD *)(v1 + 12) = v42 + 1;
            v43 = *v42;
            *(_DWORD *)v8 = 3;
            v38 = v43 << 24;
            *(_DWORD *)(v8 + 8) = v38;
            if ( v35 )
            {
LABEL_36:
              v30 = v37 + 1;
              v28 = v35 - 1;
              v29 = v36 + 1;
              *(_DWORD *)(v1 + 16) = v28;
              *(_DWORD *)(v1 + 20) = v29;
              *(_DWORD *)(v1 + 12) = v37 + 1;
              v39 = *v37;
              *(_DWORD *)v8 = 4;
              v31 = (v39 << 16) + v38;
              *(_DWORD *)(v8 + 8) = v31;
              if ( v28 )
              {
LABEL_30:
                v25 = v30 + 1;
                v23 = v28 - 1;
                v32 = v29 + 1;
                *(_DWORD *)(v1 + 16) = v23;
                *(_DWORD *)(v1 + 20) = v32;
                *(_DWORD *)(v1 + 12) = v30 + 1;
                v33 = *v30;
                *(_DWORD *)v8 = 5;
                v34 = (v33 << 8) + v31;
                *(_DWORD *)(v8 + 8) = v34;
                if ( v23 )
                {
                  v24 = v32;
                  v26 = v34;
LABEL_27:
                  *(_DWORD *)(v1 + 16) = v23 - 1;
                  *(_DWORD *)(v1 + 20) = v24 + 1;
                  *(_DWORD *)(v1 + 12) = v25 + 1;
                  v27 = *v25 + v26;
                  *(_DWORD *)(v8 + 8) = v27;
                  *(_DWORD *)(v1 + 60) = v27;
                  *(_DWORD *)v8 = 6;
                  return 85;
                }
              }
            }
          }
          goto LABEL_31;
        }
        *(_DWORD *)v8 = 7;
        v53 = 0;
LABEL_58:
        v54 = sub_6F7CC220(*(_DWORD *)(v8 + 20), v63, v53);
        if ( v54 == -3 )
        {
          v62 = *(_DWORD *)(v1 + 40);
          *(_DWORD *)v62 = 13;
          *(_DWORD *)(v62 + 4) = 0;
          return 85;
        }
        if ( !v54 )
        {
LABEL_31:
          if ( !*(_DWORD *)(v1 + 28) )
            return 0;
          continue;
        }
        if ( v54 != 1 )
          return 85;
        v55 = *(_DWORD *)(v1 + 40);
        v56 = *(_DWORD *)(v55 + 20);
        if ( v55 != -4 )
          *(_DWORD *)(v55 + 4) = *(_DWORD *)(v56 + 60);
        v57 = *(_DWORD *)v56;
        if ( (unsigned int)(*(_DWORD *)v56 - 4) <= 1 )
        {
          (*(void (__cdecl **)(_DWORD, _DWORD))(v1 + 48))(*(_DWORD *)(v1 + 52), *(_DWORD *)(v56 + 12));
          v57 = *(_DWORD *)v56;
        }
        if ( v57 == 6 )
          (*(void (__cdecl **)(_DWORD, _DWORD))(v1 + 48))(*(_DWORD *)(v1 + 52), *(_DWORD *)(v56 + 4));
        v58 = *(_DWORD *)(v56 + 40);
        *(_DWORD *)v56 = 0;
        *(_DWORD *)(v56 + 28) = 0;
        *(_DWORD *)(v56 + 32) = 0;
        *(_DWORD *)(v56 + 52) = v58;
        *(_DWORD *)(v56 + 48) = v58;
        v59 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD))(v56 + 56);
        if ( v59 )
        {
          v60 = v59(0, 0, 0);
          *(_DWORD *)(v56 + 60) = v60;
          *(_DWORD *)(v1 + 60) = v60;
        }
        v8 = *(_DWORD *)(v1 + 40);
        if ( *(_DWORD *)(v8 + 12) )
          goto LABEL_54;
        *(_DWORD *)v8 = 8;
        v9 = 0;
LABEL_16:
        v10 = *(_DWORD *)(v1 + 16);
        if ( !v10 )
          goto LABEL_50;
        v11 = *(_BYTE **)(v1 + 12);
        ++*(_DWORD *)(v1 + 20);
        v12 = v10 - 1;
        *(_DWORD *)(v1 + 16) = v12;
        *(_DWORD *)(v1 + 12) = v11 + 1;
        v13 = *v11;
        *(_DWORD *)v8 = 9;
        *(_DWORD *)(v8 + 8) = v13 << 24;
        v9 = 0;
LABEL_18:
        if ( !v12 )
          goto LABEL_50;
        v14 = *(_BYTE **)(v1 + 12);
        ++*(_DWORD *)(v1 + 20);
        v15 = v12 - 1;
        *(_DWORD *)(v1 + 16) = v15;
        *(_DWORD *)(v1 + 12) = v14 + 1;
        v16 = *v14;
        *(_DWORD *)v8 = 10;
        *(_DWORD *)(v8 + 8) += v16 << 16;
        v9 = 0;
LABEL_20:
        if ( !v15 )
          goto LABEL_50;
        v17 = *(_BYTE **)(v1 + 12);
        v18 = v15 - 1;
        ++*(_DWORD *)(v1 + 20);
        *(_DWORD *)(v1 + 16) = v18;
        *(_DWORD *)(v1 + 12) = v17 + 1;
        v19 = *v17;
        *(_DWORD *)v8 = 11;
        *(_DWORD *)(v8 + 8) += v19 << 8;
        v9 = 0;
        if ( !v18 )
          goto LABEL_50;
LABEL_22:
        ++*(_DWORD *)(v1 + 20);
        *(_DWORD *)(v1 + 16) = v18 - 1;
        v20 = *(_BYTE **)(v1 + 12);
        *(_DWORD *)(v1 + 12) = v20 + 1;
        v21 = *(_DWORD *)(v8 + 8) + *v20;
        v22 = v21 == *(_DWORD *)(v8 + 4);
        *(_DWORD *)(v8 + 8) = v21;
        if ( !v22 )
        {
          *(_DWORD *)v8 = 13;
          *(_DWORD *)(v1 + 36) = "incorrect data check";
          *(_DWORD *)(v8 + 4) = 5;
          return 85;
        }
LABEL_54:
        *(_DWORD *)v8 = 12;
LABEL_55:
        v52 = *(_DWORD *)(v1 + 24);
        v22 = v52 == *(_DWORD *)(v1 + 8268);
        *(_DWORD *)(v1 + 8272) = v52;
        if ( v22 )
          return 85;
        return 0;
      case 1:
        v44 = *(_DWORD *)(v1 + 16);
        v45 = -5;
        goto LABEL_43;
      case 2:
        v40 = *(_DWORD *)(v1 + 16);
        if ( !v40 )
          return 85;
        v41 = *(_DWORD *)(v1 + 20);
        v42 = *(_BYTE **)(v1 + 12);
        goto LABEL_40;
      case 3:
        v35 = *(_DWORD *)(v1 + 16);
        if ( !v35 )
          return 85;
        v36 = *(_DWORD *)(v1 + 20);
        v37 = *(_BYTE **)(v1 + 12);
        v38 = *(_DWORD *)(v8 + 8);
        goto LABEL_36;
      case 4:
        v28 = *(_DWORD *)(v1 + 16);
        if ( !v28 )
          return 85;
        v29 = *(_DWORD *)(v1 + 20);
        v30 = *(_BYTE **)(v1 + 12);
        v31 = *(_DWORD *)(v8 + 8);
        goto LABEL_30;
      case 5:
        v23 = *(_DWORD *)(v1 + 16);
        if ( !v23 )
          return 85;
        v24 = *(_DWORD *)(v1 + 20);
        v25 = *(_BYTE **)(v1 + 12);
        v26 = *(_DWORD *)(v8 + 8);
        goto LABEL_27;
      case 6:
        *(_DWORD *)v8 = 13;
        *(_DWORD *)(v1 + 36) = "need dictionary";
        *(_DWORD *)(v8 + 4) = 0;
        return 85;
      case 7:
        v53 = -5;
        goto LABEL_58;
      case 8:
        v9 = -5;
        goto LABEL_16;
      case 9:
        v12 = *(_DWORD *)(v1 + 16);
        v9 = -5;
        goto LABEL_18;
      case 0xA:
        v15 = *(_DWORD *)(v1 + 16);
        v9 = -5;
        goto LABEL_20;
      case 0xB:
        v18 = *(_DWORD *)(v1 + 16);
        v9 = -5;
        if ( !v18 )
          goto LABEL_50;
        goto LABEL_22;
      case 0xC:
        goto LABEL_55;
      case 0xD:
        return 85;
    }
  }
}
