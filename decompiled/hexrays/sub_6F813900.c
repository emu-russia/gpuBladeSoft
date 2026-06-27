void __cdecl sub_6F813900(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx@2
  int v7; // eax@2
  int v8; // edi@2
  int v9; // ebp@2
  int v10; // edx@2
  signed int v11; // esi@2
  signed int v12; // edi@2
  __int16 v13; // si@4
  int v14; // eax@5
  int v15; // esi@7
  unsigned int v16; // edx@7
  signed int v17; // esi@7
  int v18; // ebp@8
  signed int v19; // ebx@10
  int v20; // edx@10
  int v21; // eax@12
  unsigned int v22; // ebx@12
  char v23; // al@15
  __int16 v24; // di@15
  unsigned int v25; // ecx@17
  unsigned int v26; // edi@17
  int v27; // ebx@17
  int v28; // eax@20
  __int16 v29; // dx@25
  char v30; // bl@25
  int v31; // ecx@26
  int v32; // edi@27
  int v33; // ebp@28
  int v34; // eax@28
  int v35; // eax@32
  char v36; // cl@32
  int v37; // ecx@38
  char v38; // dl@41
  __int16 v39; // di@41
  int v40; // eax@35
  int v41; // ebx@35
  char v42; // dl@35
  int v43; // eax@44
  int v44; // edx@44
  int v45; // eax@46
  int v46; // edx@46
  int v47; // eax@49
  int v48; // ecx@49
  int v49; // edi@51
  int v50; // ebx@51
  int v51; // eax@65
  int v52; // ecx@65
  int v53; // edi@68
  int v54; // [sp+14h] [bp-48h]@2
  char v55; // [sp+18h] [bp-44h]@4
  signed int v56; // [sp+18h] [bp-44h]@7
  int v57; // [sp+1Ch] [bp-40h]@2
  int v58; // [sp+20h] [bp-3Ch]@2
  signed int v59; // [sp+24h] [bp-38h]@0
  int v60; // [sp+28h] [bp-34h]@0
  int v61; // [sp+2Ch] [bp-30h]@2
  int v62; // [sp+30h] [bp-2Ch]@2
  int v63; // [sp+34h] [bp-28h]@2
  int v64; // [sp+38h] [bp-24h]@7

  if ( a4 > 0 )
  {
    v6 = a1 + 4 * a2;
    v7 = *(_DWORD *)(v6 + 51772);
    v8 = *(_DWORD *)(v6 + 51760);
    v61 = *(_DWORD *)(a1 + 51576);
    v63 = *(_DWORD *)v7;
    v62 = *(_DWORD *)v8;
    v57 = *(_DWORD *)(v8 + 4);
    v9 = *(_DWORD *)(v8 + 4);
    v58 = *(_DWORD *)(v7 + 4);
    v10 = a1 + (a2 << 7);
    v11 = *(_WORD *)(v10 + 52554);
    v12 = *(_WORD *)(v10 + 52552);
    v54 = *(_DWORD *)(a1 + (a2 << 8) + 51784);
    if ( *(_WORD *)(v10 + 52554) )
    {
      if ( v11 > 3 )
      {
        v51 = sub_6F8095C0(v11);
        v52 = v51 - 3 + (v51 - 3 > 3 ? 6 - v51 : 0);
        v9 = *(_DWORD *)(*(_DWORD *)(v6 + 51760) + 4);
        v55 = v52 + 3;
        v13 = v11 - (char)(1050628 >> 8 * v52);
      }
      else
      {
        v55 = v11 - 1;
        v13 = 0;
      }
      v14 = *(_DWORD *)(a1 + (a2 << 8) + 51788);
      *(_DWORD *)(a1 + (a2 << 8) + 51788) = v14 + 1;
      *(_BYTE *)(v9 + v14) = v55;
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 51772) + 4) + 2 * v14) = v13;
    }
    if ( a6 <= 0 )
    {
      v17 = 0;
      v56 = 0;
      v64 = a5;
    }
    else
    {
      v15 = *(_WORD *)(v58 + 2 * a5);
      v64 = a5 + 1;
      v59 = *(_BYTE *)(v57 + a5);
      v60 = v15;
      v16 = v15 + ((0x20820C41u >> 5 * *(_BYTE *)(v57 + a5)) & 0x1F);
      v17 = v16 - a6;
      v56 = v16;
    }
    v18 = 0;
    while ( 1 )
    {
      if ( v17 )
        goto LABEL_12;
      v19 = *(_BYTE *)(v57 + v64);
      v20 = *(_WORD *)(v58 + 2 * v64++);
      v59 = v19;
      v60 = v20;
      if ( v19 > 6 )
      {
        v37 = *(_DWORD *)(a3 + 4 * v18);
        v22 = *(_WORD *)(v61 + 2 * v37);
        if ( *(_WORD *)(v61 + 2 * v37) )
        {
LABEL_13:
          if ( v12 )
          {
            if ( v12 > 3 )
            {
              v43 = sub_6F8095C0(v12);
              v44 = (v43 - 3 > 3 ? 6 - v43 : 0) + v43 - 3;
              v23 = v44 + 3;
              v24 = v12 - (char)(1050628 >> 8 * v44);
            }
            else
            {
              v23 = v12 - 1;
              v24 = 0;
            }
            *(_BYTE *)(v62 + v54) = v23;
            *(_WORD *)(v63 + 2 * v54++) = v24;
          }
          v25 = v22 >> 31;
          v26 = v22 >> 31;
          v27 = (((signed int)v22 >> 31) ^ v22) - ((signed int)v22 >> 31);
          if ( v27 <= 2 )
          {
            v28 = v26 + 2 * v27 + 7;
            LOWORD(v27) = 0;
          }
          else if ( v27 <= 6 )
          {
            LOBYTE(v28) = v27 + 10;
            LOWORD(v27) = (unsigned __int8)v25;
          }
          else if ( v27 > 8 )
          {
            if ( v27 > 12 )
            {
              if ( v27 > 20 )
              {
                if ( v27 > 36 )
                {
                  if ( v27 > 68 )
                  {
                    LOBYTE(v28) = 22;
                    v27 = (v26 << 9) + v27 - 69;
                  }
                  else
                  {
                    LOBYTE(v28) = 21;
                    v27 = 32 * v26 + v27 - 37;
                  }
                }
                else
                {
                  LOBYTE(v28) = 20;
                  v27 = 16 * v26 + v27 - 21;
                }
              }
              else
              {
                v27 = v27 + 8 * v26 - 13;
                LOBYTE(v28) = 19;
              }
            }
            else
            {
              v27 = v27 + 4 * v26 - 9;
              LOBYTE(v28) = 18;
            }
          }
          else
          {
            v27 = v27 + 2 * v26 - 7;
            LOBYTE(v28) = 17;
          }
          *(_BYTE *)(v62 + v54) = v28;
          *(_WORD *)(v63 + 2 * v54++) = v27;
          goto LABEL_22;
        }
LABEL_39:
        if ( v12 )
        {
          if ( v12 > 3 )
          {
            v47 = sub_6F8095C0(v12);
            v48 = (v47 - 3 > 3 ? 6 - v47 : 0) + v47 - 3;
            v38 = v48 + 3;
            v39 = v12 - (char)(1050628 >> 8 * v48);
          }
          else
          {
            v38 = v12 - 1;
            v39 = 0;
          }
          *(_BYTE *)(v62 + v54) = v38;
          *(_WORD *)(v63 + 2 * v54++) = v39;
        }
        switch ( v59 )
        {
          case 30:
            v60 = 2 * v60 - 1;
            goto LABEL_51;
          case 31:
LABEL_51:
            v49 = v54;
            LOWORD(v50) = v60 + 1;
            *(_BYTE *)(v62 + v54) = 31;
            goto LABEL_52;
          case 28:
            if ( (v60 & 3) == 3 )
            {
              v60 = 2 * (v60 & 4) - 1;
LABEL_55:
              v49 = v54;
              *(_BYTE *)(v62 + v54) = 29;
              LOWORD(v50) = v60 + 1;
LABEL_52:
              *(_WORD *)(v63 + 2 * v49) = v50;
              v54 = v49 + 1;
              v12 = 0;
            }
            else
            {
              v53 = v54;
              *(_BYTE *)(v62 + v54) = 28;
LABEL_69:
              *(_WORD *)(v63 + 2 * v53) = v60 + 1;
              v54 = v53 + 1;
              v12 = 0;
            }
            goto LABEL_36;
          case 29:
            goto LABEL_55;
          case 7:
            if ( v60 > 6 )
              goto LABEL_57;
            v53 = v54;
            *(_BYTE *)(v62 + v54) = 7;
            goto LABEL_69;
          case 8:
LABEL_57:
            v49 = v54;
            LOWORD(v50) = v60 + 1;
            *(_BYTE *)(v62 + v54) = 8;
            goto LABEL_52;
          case 9:
          case 10:
            v49 = v54;
            *(_BYTE *)(v62 + v54) = 23;
            LOWORD(v50) = v59 - 9;
            goto LABEL_52;
          case 11:
          case 12:
            v49 = v54;
            v50 = 2 * (unsigned __int16)v59 - 22;
            *(_BYTE *)(v62 + v54) = 30;
            goto LABEL_52;
          case 13:
            v49 = v54;
            v50 = 2 * (unsigned __int16)v60 + 1;
            *(_BYTE *)(v62 + v54) = 30;
            goto LABEL_52;
          case 23:
          case 24:
          case 25:
          case 26:
            *(_BYTE *)(v62 + v54) = v59 + 1;
            *(_WORD *)(v63 + 2 * v54++) = v60;
            v12 = 0;
            goto LABEL_36;
          case 27:
            v49 = v54;
            *(_BYTE *)(v62 + v54) = 28;
            LOWORD(v50) = 4 * v60;
            goto LABEL_52;
          default:
            *(_BYTE *)(v62 + v54) = 7;
            *(_WORD *)(v63 + 2 * v54++) = 0;
            break;
        }
LABEL_22:
        if ( v17 )
        {
          v12 = 0;
          goto LABEL_34;
        }
        if ( v56 > 0 )
        {
          if ( v56 > 3 )
          {
            v45 = sub_6F8095C0(v56);
            v46 = (v45 - 3 > 3 ? 6 - v45 : 0) + v45 - 3;
            v30 = v46 + 3;
            v29 = v56 - (char)(1050628 >> 8 * v46);
          }
          else
          {
            v29 = 0;
            v30 = v56 - 1;
          }
          v31 = a5++;
          v56 = 0;
          *(_BYTE *)(v57 + v31) = v30;
          *(_WORD *)(v58 + 2 * v31) = v29;
        }
        ++v18;
        v32 = a5++;
        *(_BYTE *)(v57 + v32) = v59;
        *(_WORD *)(v58 + 2 * v32) = v60;
        v12 = 0;
        if ( v18 == a4 )
          goto LABEL_28;
      }
      else
      {
        v17 = v20 + ((0x20820C41u >> 5 * v19) & 0x1F);
        v56 += v17;
LABEL_12:
        v21 = *(_DWORD *)(a3 + 4 * v18);
        v22 = *(_WORD *)(v61 + 2 * v21);
        if ( *(_WORD *)(v61 + 2 * v21) )
          goto LABEL_13;
        if ( v17 <= 0 )
          goto LABEL_39;
        if ( ++v12 > 4094 )
        {
          v35 = sub_6F8095C0(v12);
          v36 = (v35 - 3 > 3 ? (unsigned __int8)(6 - v35) : 0) + v35 - 3;
          *(_BYTE *)(v62 + v54) = v36 + 3;
          *(_WORD *)(v63 + 2 * v54) = v12 - (char)(1050628 >> 8 * v36);
          v12 = 0;
          ++v54;
        }
        --v56;
LABEL_34:
        if ( v56 - --v17 > 4094 )
        {
          v40 = sub_6F8095C0(0xFFFu);
          v56 -= 4095;
          v41 = a5++;
          v42 = (v40 - 3 > 3 ? (unsigned __int8)(6 - v40) : 0) + v40 - 3;
          *(_BYTE *)(v57 + v41) = v42 + 3;
          *(_WORD *)(v58 + 2 * v41) = 4095 - (char)(1050628 >> 8 * v42);
        }
LABEL_36:
        if ( ++v18 == a4 )
        {
LABEL_28:
          v33 = a1 + (a2 << 8);
          v34 = a1 + (a2 << 7);
          *(_DWORD *)(v33 + 51784) = v54;
          *(_DWORD *)(v33 + 51788) = a5;
          *(_WORD *)(v34 + 52552) = v12;
          *(_WORD *)(v34 + 52554) = v56;
          return;
        }
      }
    }
  }
}
