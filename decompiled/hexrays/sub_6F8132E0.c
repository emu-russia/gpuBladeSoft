int __usercall sub_6F8132E0@<eax>(int a1@<ebp>, int a2, int a3, int a4, int a5)
{
  int result; // eax@1
  int v6; // edi@1
  int v7; // ebp@2
  int v8; // ecx@4
  signed int v9; // esi@7
  signed int v10; // edi@7
  int v11; // eax@7
  int v12; // edx@11
  int v13; // ecx@12
  int v14; // esi@13
  signed int v15; // ebx@13
  int *v16; // esi@15
  int v17; // ebx@15
  int v18; // edx@16
  int v19; // esi@19
  int v20; // ebx@19
  int v21; // esi@23
  int v22; // esi@23
  int v23; // ebx@24
  int v24; // ebx@36
  int v25; // ebx@40
  int v26; // eax@40
  int v27; // ebp@40
  int v28; // ebp@40
  unsigned int v29; // edx@40
  __int16 v30; // si@41
  _WORD *v31; // ecx@41
  int v32; // esi@42
  int v33; // edi@42
  __int16 v34; // bx@47
  _WORD *v35; // edx@47
  __int16 v36; // bx@50
  _WORD *v37; // ecx@50
  __int16 v38; // bx@53
  _WORD *v39; // ecx@53
  int v40; // eax@56
  _WORD *v41; // edx@56
  int v42; // eax@57
  int v43; // ebx@57
  int v44; // edx@58
  _WORD *v45; // ecx@58
  int v46; // edx@60
  _WORD *v47; // edi@60
  int v48; // edx@62
  _WORD *v49; // edi@62
  int v50; // [sp+0h] [bp-CF88h]@8
  int v51; // [sp+4h] [bp-CF84h]@7
  int v52; // [sp+4h] [bp-CF84h]@40
  int v53; // [sp+8h] [bp-CF80h]@4
  int v54; // [sp+Ch] [bp-CF7Ch]@1
  int v55; // [sp+10h] [bp-CF78h]@11
  int v56; // [sp+10h] [bp-CF78h]@23
  int v57; // [sp+14h] [bp-CF74h]@1
  int v58; // [sp+18h] [bp-CF70h]@1
  int v59; // [sp+1Ch] [bp-CF6Ch]@1
  int v60; // [sp+20h] [bp-CF68h]@1
  int v61; // [sp+24h] [bp-CF64h]@4
  int v62; // [sp+28h] [bp-CF60h]@23
  int v63; // [sp+2Ch] [bp-CF5Ch]@23

  result = a2 + 32 * a3;
  v57 = *(_DWORD *)(a2 + 204);
  v6 = *(_DWORD *)(result + 108);
  v59 = *(_DWORD *)(a2 + 51576);
  v60 = a1;
  v54 = *(_DWORD *)(result + 108);
  v58 = v57 - 4 * v6;
  if ( a4 < a5 )
  {
    v7 = v6 * a4 + *(_DWORD *)(result + 116);
    do
    {
      if ( a4 )
      {
        v61 = v7;
        v53 = -1;
        v8 = v58 + 4 * v7;
        if ( *(_BYTE *)v8 & 1 )
          v53 = (268505377 >> 4 * (*(_BYTE *)(v8 + 1) & 7)) & 0xF;
        if ( v54 > 0 )
        {
          v9 = -1;
          v10 = -1;
          v51 = v58 + 4 * v7 + 4;
          v11 = 0;
          while ( 1 )
          {
            ++v11;
            v50 = -1;
            if ( v54 > v11 && *(_BYTE *)v51 & 1 )
              v50 = (268505377 >> 4 * (*(_BYTE *)(v51 + 1) & 7)) & 0xF;
            v55 = 4 * v7;
            v12 = 4 * v7 + v57;
            if ( *(_BYTE *)v12 & 1 )
            {
              v13 = (268505377 >> 4 * (*(_BYTE *)(v12 + 1) & 7)) & 0xF;
              switch ( 4 * (v53 == v13) | 2 * (v9 == v13) | (v10 == v13) | 8 * (v50 == v13) )
              {
                case 0:
                  v16 = (int *)(v60 + 4 * v13);
                  v17 = *v16;
                  break;
                case 1:
                case 3:
                  LOWORD(v17) = *(_WORD *)(v57 + v55 - 2);
                  v16 = (int *)(v60 + 4 * v13);
                  break;
                case 2:
                  LOWORD(v17) = *(_WORD *)(v58 + v55 - 2);
                  v16 = (int *)(v60 + 4 * v13);
                  break;
                case 4:
                case 6:
                case 0xC:
                  LOWORD(v17) = *(_WORD *)(v58 + v55 + 2);
                  v16 = (int *)(v60 + 4 * v13);
                  break;
                case 5:
                  v19 = *(_WORD *)(v57 + v55 - 2);
                  v20 = *(_WORD *)(v58 + v55 + 2);
                  goto LABEL_20;
                case 7:
                case 0xF:
                  v63 = *(_WORD *)(v57 + v55 - 2);
                  v62 = *(_WORD *)(v58 + v55 - 4 + 2);
                  v17 = *(_WORD *)(v58 + v55 + 2);
                  v21 = (29 * (v63 + v17) + -26 * v62) / 32;
                  v56 = v21;
                  v22 = (((v21 - v17) >> 31) ^ (v21 - v17)) - ((v21 - v17) >> 31);
                  if ( !((unsigned __int8)((v22 - 128 < 0) ^ __OFADD__(-128, v22)) | (v22 == 128)) )
                    goto LABEL_21;
                  v23 = (((v56 - v63) >> 31) ^ (v56 - v63)) - ((v56 - v63) >> 31);
                  if ( (unsigned __int8)((v23 - 128 < 0) ^ __OFADD__(-128, v23)) | (v23 == 128) )
                  {
                    v16 = (int *)(v60 + 4 * v13);
                    v24 = (((v56 - v62) >> 31) ^ (v56 - v62)) - ((v56 - v62) >> 31);
                    if ( (unsigned __int8)((v24 - 128 < 0) ^ __OFADD__(-128, v24)) | (v24 == 128) )
                      LOWORD(v17) = v56;
                    else
                      LOWORD(v17) = v62;
                  }
                  else
                  {
                    LOWORD(v17) = v63;
                    v16 = (int *)(v60 + 4 * v13);
                  }
                  break;
                case 8:
                  LOWORD(v17) = *(_WORD *)(v58 + v55 + 6);
                  v16 = (int *)(v60 + 4 * v13);
                  break;
                case 9:
                case 0xB:
                case 0xD:
                  v16 = (int *)(v60 + 4 * v13);
                  v17 = (75 * *(_WORD *)(v57 + v55 - 2) + 53 * *(_WORD *)(v58 + v55 + 6)) / 128;
                  break;
                case 0xA:
                  v19 = *(_WORD *)(v58 + v55 - 2);
                  v20 = *(_WORD *)(v58 + v55 + 6);
LABEL_20:
                  v17 = (v19 + v20) / 2;
LABEL_21:
                  v16 = (int *)(v60 + 4 * v13);
                  break;
                case 0xE:
                  v14 = 3 * (*(_WORD *)(v58 + v55 - 2) + *(_WORD *)(v58 + v55 + 6)) + 10 * *(_WORD *)(v58 + v55 + 2);
                  v15 = v14 + 15;
                  if ( v14 >= 0 )
                    v15 = 3 * (*(_WORD *)(v58 + v55 - 2) + *(_WORD *)(v58 + v55 + 6)) + 10 * *(_WORD *)(v58 + v55 + 2);
                  v16 = (int *)(v60 + 4 * v13);
                  v17 = v15 >> 4;
                  break;
              }
              v18 = *(_WORD *)(v12 + 2);
              *(_WORD *)(v59 + 2 * v7++) = v18 - v17;
              *v16 = v18;
              v10 = v13;
            }
            else
            {
              v10 = -1;
            }
            v51 += 4;
            v9 = v53;
            if ( v11 == v54 )
              break;
            v53 = v50;
          }
          v7 = v54 + v61;
        }
      }
      else if ( v54 > 0 )
      {
        v25 = v57 + 4 * v7;
        v26 = v59 + 2 * v7;
        v27 = v54 + v7;
        v52 = v27;
        v28 = v57 + 4 * v27;
        v29 = ((unsigned int)(v28 - v25 - 4) >> 2) & 3;
        if ( *(_BYTE *)v25 & 1 )
        {
          v30 = *(_WORD *)(v25 + 2);
          v31 = (_WORD *)(v60 + 4 * ((268505377 >> 4 * (*(_BYTE *)(v25 + 1) & 7)) & 0xF));
          *(_WORD *)v26 = *(_WORD *)(v25 + 2) - *v31;
          *(_DWORD *)v31 = v30;
        }
        v32 = v25 + 4;
        v33 = v26 + 2;
        if ( v25 + 4 != v28 )
        {
          if ( !v29 )
            goto LABEL_67;
          if ( v29 != 1 )
          {
            if ( v29 != 2 )
            {
              if ( *(_BYTE *)(v25 + 4) & 1 )
              {
                v34 = *(_WORD *)(v25 + 6);
                v35 = (_WORD *)(v60 + 4 * ((268505377 >> 4 * (*(_BYTE *)(v32 + 1) & 7)) & 0xF));
                *(_WORD *)(v26 + 2) = v34 - *v35;
                *(_DWORD *)v35 = v34;
              }
              v32 += 4;
              v33 = v26 + 4;
            }
            if ( *(_BYTE *)v32 & 1 )
            {
              v36 = *(_WORD *)(v32 + 2);
              v37 = (_WORD *)(v60 + 4 * ((268505377 >> 4 * (*(_BYTE *)(v32 + 1) & 7)) & 0xF));
              *(_WORD *)v33 = *(_WORD *)(v32 + 2) - *v37;
              *(_DWORD *)v37 = v36;
            }
            v32 += 4;
            v33 += 2;
          }
          if ( *(_BYTE *)v32 & 1 )
          {
            v38 = *(_WORD *)(v32 + 2);
            v39 = (_WORD *)(v60 + 4 * ((268505377 >> 4 * (*(_BYTE *)(v32 + 1) & 7)) & 0xF));
            *(_WORD *)v33 = *(_WORD *)(v32 + 2) - *v39;
            *(_DWORD *)v39 = v38;
          }
          v32 += 4;
          v33 += 2;
          if ( v32 != v28 )
          {
LABEL_67:
            do
            {
              if ( *(_BYTE *)v32 & 1 )
              {
                v40 = *(_WORD *)(v32 + 2);
                v41 = (_WORD *)(v60 + 4 * ((268505377 >> 4 * (*(_BYTE *)(v32 + 1) & 7)) & 0xF));
                *(_WORD *)v33 = *(_WORD *)(v32 + 2) - *v41;
                *(_DWORD *)v41 = v40;
              }
              v42 = v32 + 4;
              v43 = v33 + 2;
              if ( *(_BYTE *)(v32 + 4) & 1 )
              {
                v44 = *(_WORD *)(v32 + 6);
                v45 = (_WORD *)(v60 + 4 * ((268505377 >> 4 * (*(_BYTE *)(v32 + 5) & 7)) & 0xF));
                *(_WORD *)(v33 + 2) = *(_WORD *)(v32 + 6) - *v45;
                *(_DWORD *)v45 = v44;
              }
              if ( *(_BYTE *)(v32 + 8) & 1 )
              {
                v46 = *(_WORD *)(v32 + 10);
                v47 = (_WORD *)(v60 + 4 * ((268505377 >> 4 * (*(_BYTE *)(v32 + 9) & 7)) & 0xF));
                *(_WORD *)(v43 + 2) = *(_WORD *)(v32 + 10) - *v47;
                *(_DWORD *)v47 = v46;
              }
              if ( *(_BYTE *)(v32 + 12) & 1 )
              {
                v48 = *(_WORD *)(v32 + 14);
                v49 = (_WORD *)(v60 + 4 * ((268505377 >> 4 * (*(_BYTE *)(v32 + 13) & 7)) & 0xF));
                *(_WORD *)(v43 + 4) = *(_WORD *)(v32 + 14) - *v49;
                *(_DWORD *)v49 = v48;
              }
              v32 += 16;
              v33 = v43 + 6;
            }
            while ( v42 + 12 != v28 );
          }
        }
        v7 = v52;
      }
      ++a4;
      result = a5;
    }
    while ( a4 != a5 );
  }
  return result;
}
