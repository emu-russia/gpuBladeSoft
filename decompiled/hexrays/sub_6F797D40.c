int __usercall sub_6F797D40@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // ebp@1
  int v5; // esi@2
  int v6; // edi@2
  int v7; // ebx@2
  int v8; // edx@2
  signed __int64 v9; // rax@2
  signed __int64 v10; // rax@2
  unsigned int v11; // eax@2
  signed int v12; // ecx@9
  int v13; // ebx@16
  signed __int64 v14; // rax@19
  signed int v15; // edx@22
  signed int v16; // eax@27
  int v17; // eax@29
  int v18; // edx@29
  int v19; // edx@32
  signed int v20; // ecx@35
  unsigned int v21; // eax@36
  int v22; // ecx@40
  int v23; // eax@40
  int v24; // ebx@41
  int v25; // edx@43
  int v26; // eax@43
  int v27; // ebx@47
  int v28; // edx@48
  int v29; // ecx@48
  int v30; // edx@49
  int v31; // ebx@51
  unsigned int v32; // edi@81
  int v33; // eax@81
  int v34; // eax@85
  unsigned int v35; // edx@86
  int v36; // edx@88
  signed int v37; // [sp+14h] [bp-58h]@2
  int v38; // [sp+18h] [bp-54h]@2
  unsigned int v39; // [sp+1Ch] [bp-50h]@2
  int v40; // [sp+20h] [bp-4Ch]@2
  signed int v41; // [sp+24h] [bp-48h]@2
  signed int v42; // [sp+28h] [bp-44h]@5
  signed int v43; // [sp+2Ch] [bp-40h]@2
  int v44; // [sp+30h] [bp-3Ch]@2
  signed int v45; // [sp+34h] [bp-38h]@15
  int v46; // [sp+34h] [bp-38h]@41
  int v47; // [sp+38h] [bp-34h]@15
  int v48; // [sp+38h] [bp-34h]@40
  int v49; // [sp+3Ch] [bp-30h]@49

  v4 = *(_DWORD *)(result + 16);
  if ( !(v4 & 8) )
  {
    v5 = result;
    v44 = a2;
    v6 = *(_DWORD *)result;
    v38 = a3;
    v7 = a2 + 204 * a3;
    v8 = *(_DWORD *)(v7 + 200);
    v40 = v8;
    v9 = (unsigned int)(((signed int)((unsigned __int64)(v8 * (signed __int64)v6) >> 32) >> 31) + 0x8000)
       + v8 * (signed __int64)v6;
    v43 = *(_DWORD *)(v5 + 4);
    v39 = *(_DWORD *)(v7 + 204) + (HIDWORD(v9) << 16) + ((unsigned int)v9 >> 16);
    v10 = (unsigned int)(((signed int)((unsigned __int64)(v40 * (signed __int64)v43) >> 32) >> 31) + 0x8000)
        + v40 * (signed __int64)v43;
    v11 = (HIDWORD(v10) << 16) + ((unsigned int)v10 >> 16);
    v37 = v11;
    v41 = v11;
    if ( !a3 )
    {
      if ( *(_BYTE *)(a4 + 120) )
      {
        if ( *(_BYTE *)(a4 + 122) )
        {
          v42 = 1;
          *(_DWORD *)(v5 + 12) = v11;
LABEL_15:
          v45 = 0;
          v47 = 0;
          goto LABEL_16;
        }
        v45 = 0;
        v42 = 0;
        v47 = 0;
        *(_DWORD *)(v5 + 12) = v11;
LABEL_16:
        v13 = *(_DWORD *)(v5 + 20);
        if ( v13 )
        {
          if ( !(*(_BYTE *)(v13 + 16) & 8) )
          {
            sub_6F797D40(v13, v44, v38, a4);
            v6 = *(_DWORD *)v5;
            v4 = *(_DWORD *)(v5 + 16);
            v43 = *(_DWORD *)(v5 + 4);
          }
          v14 = (unsigned int)(((signed int)((unsigned __int64)(v40
                                                              * (signed __int64)(v6
                                                                               + (v43 >> 1)
                                                                               - (*(_DWORD *)v13
                                                                                + (*(_DWORD *)(v13 + 4) >> 1)))) >> 32) >> 31)
                             + 0x8000)
              + v40 * (signed __int64)(v6 + (v43 >> 1) - (*(_DWORD *)v13 + (*(_DWORD *)(v13 + 4) >> 1)));
          v39 = *(_DWORD *)(v13 + 8)
              + (*(_DWORD *)(v13 + 12) >> 1)
              + (HIDWORD(v14) << 16)
              + ((unsigned int)v14 >> 16)
              - (v37 >> 1);
        }
        *(_DWORD *)(v5 + 8) = v39;
        *(_DWORD *)(v5 + 12) = v37;
        if ( !*(_BYTE *)(a4 + 124) )
          goto LABEL_27;
        if ( v37 <= 64 )
        {
          if ( v37 <= 31 )
          {
            if ( v37 <= 0 )
            {
              v39 = (v39 + 32) & 0xFFFFFFC0;
            }
            else
            {
              v32 = (v39 + 32) & 0xFFFFFFC0;
              v33 = v39 + v37;
              if ( abs(v32 - v39) > (signed int)((((signed int)(((v33 + 32) & 0xFFFFFFC0) - v33) >> 31) ^ (((v33 + 32) & 0xFFFFFFC0) - v33))
                                               - ((signed int)(((v33 + 32) & 0xFFFFFFC0) - v33) >> 31)) )
                v32 = (v39 + v37 + 32) & 0xFFFFFFC0;
              v39 = v32;
            }
          }
          else
          {
            v41 = 64;
            v39 = (v39 + (v37 >> 1)) & 0xFFFFFFC0;
          }
          goto LABEL_27;
        }
        v15 = *(_DWORD *)(v44 + 204 * v38 + 12);
        if ( (((v37 - v15) >> 31) ^ (v37 - v15)) - ((v37 - v15) >> 31) <= 39 )
        {
          v41 = 54;
          if ( v15 <= 47 )
          {
LABEL_27:
            v16 = ((v39 + v41 + 32) & 0xFFFFFFC0) - v39 - v41;
            if ( (signed int)(((((v39 + 32) & 0xFFFFFFC0) - v39) ^ ((signed int)(((v39 + 32) & 0xFFFFFFC0) - v39) >> 31))
                            - ((signed int)(((v39 + 32) & 0xFFFFFFC0) - v39) >> 31)) <= (v16 ^ (v16 >> 31))
                                                                                      - (v16 >> 31) )
              v16 = ((v39 + 32) & 0xFFFFFFC0) - v39;
            v17 = v39 + v16;
            *(_DWORD *)(v5 + 12) = v41;
            v18 = v41;
            *(_DWORD *)(v5 + 8) = v17;
LABEL_30:
            if ( !v42 )
              goto LABEL_11;
            if ( v18 <= 63 )
            {
              if ( v45 != 2 )
              {
                if ( v45 == 3 )
                {
LABEL_11:
                  result = v4 | 8;
                  *(_DWORD *)(v5 + 16) = v4 | 8;
                  return result;
                }
                if ( v45 != 1 )
                {
                  *(_DWORD *)(v5 + 12) = 64;
                  v20 = 32;
                  goto LABEL_66;
                }
                v12 = 64;
LABEL_10:
                *(_DWORD *)(v5 + 12) = v12;
                *(_DWORD *)(v5 + 8) = v47 - v12;
                goto LABEL_11;
              }
              v12 = 64;
            }
            else
            {
              v19 = v18 + 32;
              v12 = v19 & 0xFFFFFFC0;
              if ( v45 != 2 )
              {
                if ( v45 == 3 )
                  goto LABEL_11;
                if ( v45 != 1 )
                {
                  *(_DWORD *)(v5 + 12) = v12;
                  v20 = v12 >> 1;
                  if ( !(v19 & 0x40) )
                  {
                    v21 = (v17 + v20 + 32) & 0xFFFFFFC0;
LABEL_67:
                    *(_DWORD *)(v5 + 8) = v21 - v20;
                    goto LABEL_11;
                  }
LABEL_66:
                  v21 = ((v20 + v17) & 0xFFFFFFC0) + 32;
                  goto LABEL_67;
                }
                goto LABEL_10;
              }
            }
            *(_DWORD *)(v5 + 12) = v12;
            goto LABEL_11;
          }
          v41 = *(_DWORD *)(v44 + 204 * v38 + 12);
        }
        if ( v41 <= 191 )
        {
          v34 = v41 & 0x3F;
          if ( v34 > 9 )
          {
            v35 = v41 & 0xFFFFFFC0;
            if ( v34 > 31 )
            {
              v36 = v35 + 54;
              if ( v34 > 53 )
                v36 = v41;
              v41 = v36;
            }
            else
            {
              v41 = v35 + 10;
            }
          }
        }
        else
        {
          v41 = (v41 + 32) & 0xFFFFFFC0;
        }
        goto LABEL_27;
      }
LABEL_60:
      *(_DWORD *)(v5 + 8) = v39;
      *(_DWORD *)(v5 + 12) = v11;
      result = v4 | 8;
      *(_DWORD *)(v5 + 16) = v4 | 8;
      return result;
    }
    if ( a3 != 1 )
    {
      *(_DWORD *)(v5 + 12) = v11;
      v42 = 0;
      goto LABEL_15;
    }
    if ( !*(_BYTE *)(a4 + 121) )
      goto LABEL_60;
    if ( *(_BYTE *)(a4 + 123) )
    {
      v42 = 1;
      *(_DWORD *)(v5 + 12) = v11;
    }
    else
    {
      v42 = 0;
      *(_DWORD *)(v5 + 12) = v11;
    }
    v22 = v6 + v43;
    v23 = v44;
    v48 = v44 + 416;
    if ( !*(_DWORD *)(v44 + 412) )
      goto LABEL_93;
    v24 = v22 - *(_DWORD *)(v44 + 428);
    v46 = *(_DWORD *)(v44 + 2488);
    if ( -v46 > v24 )
      goto LABEL_93;
    if ( v22 > *(_DWORD *)(v44 + 424) + v46 )
    {
      v25 = *(_DWORD *)(v44 + 412);
      v26 = v44 + 416;
      do
      {
        v26 += 32;
        if ( --v25 )
        {
          v24 = v22 - *(_DWORD *)(v26 + 12);
          if ( v24 >= -v46 )
            continue;
        }
        v27 = v44;
        v47 = 0;
        v45 = 0;
        goto LABEL_48;
      }
      while ( v22 > *(_DWORD *)(v44 + 2488) + *(_DWORD *)(v26 + 8) );
      v48 = v26;
    }
    if ( *(_BYTE *)(v44 + 2492) || (v23 = v44, *(_DWORD *)(v44 + 2484) >= v24) )
    {
      v45 = 1;
      v27 = v44;
      v47 = *(_DWORD *)(v48 + 16);
    }
    else
    {
LABEL_93:
      v47 = 0;
      v45 = 0;
      v27 = v23;
    }
LABEL_48:
    v28 = *(_DWORD *)(v27 + 928);
    v29 = v27 + 32 * (v28 + 0x7FFFFFF) + 932;
    if ( v28 )
    {
      v49 = *(_DWORD *)(v27 + 2488);
      v30 = *(_DWORD *)(v27 + 32 * (v28 + 0x7FFFFFF) + 940) - v6;
      if ( -v49 <= v30 )
      {
        if ( v6 >= *(_DWORD *)(v29 + 12) - v49 )
        {
LABEL_72:
          if ( *(_BYTE *)(v44 + 2492) || (v17 = 0, *(_DWORD *)(v44 + 2484) > v30) )
          {
            v45 |= 2u;
            v17 = *(_DWORD *)(v29 + 16);
          }
          goto LABEL_56;
        }
        v31 = *(_DWORD *)(v27 + 928);
        while ( 1 )
        {
          v29 -= 32;
          if ( !--v31 )
            break;
          v30 = *(_DWORD *)(v29 + 8) - v6;
          if ( -v49 > v30 )
            break;
          if ( v6 >= *(_DWORD *)(v29 + 12) - v49 )
            goto LABEL_72;
        }
      }
    }
    v17 = 0;
LABEL_56:
    if ( v45 == 2 )
    {
      *(_DWORD *)(v5 + 8) = v17;
      v18 = v37;
      goto LABEL_30;
    }
    if ( v45 == 3 )
    {
      *(_DWORD *)(v5 + 8) = v17;
      v18 = v47 - v17;
      *(_DWORD *)(v5 + 12) = v47 - v17;
      goto LABEL_30;
    }
    if ( v45 == 1 )
    {
      v17 = v47 - v37;
      v18 = v37;
      *(_DWORD *)(v5 + 8) = v47 - v37;
      goto LABEL_30;
    }
    goto LABEL_16;
  }
  return result;
}
