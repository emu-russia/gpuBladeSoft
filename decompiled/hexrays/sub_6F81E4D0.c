int __usercall sub_6F81E4D0@<eax>(int a1@<eax>, _DWORD *a2@<edx>)
{
  signed __int16 v2; // di@1
  char v3; // bl@1
  int v4; // ebp@1
  int v5; // edx@1
  unsigned __int8 v6; // si@1
  char v7; // al@1
  char v8; // cl@1
  int v9; // eax@2
  int v10; // ebx@3
  char v11; // al@3
  signed int v12; // eax@4
  signed int v13; // esi@4
  int v14; // eax@11
  int v15; // edx@12
  int v16; // eax@14
  int v17; // eax@20
  int v18; // eax@23
  int v19; // edi@23
  int v20; // ebp@23
  int v21; // esi@23
  int v22; // edx@24
  unsigned __int8 v23; // bl@25
  int v24; // ebx@26
  int v25; // ecx@26
  int v26; // edx@27
  signed int v27; // ecx@31
  signed int v28; // ebp@31
  int v29; // ebp@38
  int v30; // edx@39
  int v31; // ecx@40
  int v32; // esi@46
  int v34; // edi@49
  signed int v35; // ebx@55
  char v36; // di@55
  signed int v37; // eax@55
  int v38; // eax@62
  int v39; // eax@65
  int v40; // eax@71
  signed int v41; // ecx@78
  char v42; // bp@78
  signed int v43; // eax@78
  int v44; // eax@85
  int v45; // ecx@87
  int v46; // ecx@93
  int v47; // edi@108
  int v48; // eax@111
  int v49; // ebp@117
  int v50; // esi@125
  int v51; // esi@133
  int v52; // edi@143
  int v53; // eax@151
  int v54; // ecx@159
  int v55; // esi@160
  int v56; // ebp@167
  char v57; // [sp+3h] [bp-1Dh]@1
  char v58; // [sp+4h] [bp-1Ch]@1
  _DWORD *v59; // [sp+8h] [bp-18h]@1
  char v60; // [sp+Ch] [bp-14h]@4
  char v61; // [sp+Dh] [bp-13h]@1
  signed __int16 v62; // [sp+Eh] [bp-12h]@1

  v2 = *(_WORD *)(a1 + 6);
  v3 = *(_BYTE *)(a1 + 8);
  v59 = a2;
  LOBYTE(v4) = *(_BYTE *)(a1 + 9);
  v5 = *(_DWORD *)a1;
  v6 = *(_BYTE *)(a1 + 10);
  v7 = *(_BYTE *)(a1 + 11);
  v62 = v2;
  v61 = v3;
  v8 = (char)(v7 << 6) >> 6;
  v57 = (char)(16 * v7) >> 6;
  v58 = (char)(4 * v7) >> 6;
  if ( v7 >> 6 )
  {
    v9 = v6 + 1;
    if ( v9 > 15 )
    {
      v10 = 1;
      v11 = 1;
      v4 = 0;
      goto LABEL_4;
    }
    v21 = 2;
    v34 = 0;
    v10 = 1;
    v4 = 0;
LABEL_50:
    v15 = (unsigned __int8)byte_6FB889FC[v4] + v5;
    goto LABEL_51;
  }
  v4 = (unsigned __int8)v4;
  v9 = v6 + 1;
  v10 = (unsigned __int8)v4 + 1;
  v5 -= (unsigned __int8)byte_6FB889FB[(unsigned __int8)v4];
  if ( v9 <= 15 )
  {
    v10 = (unsigned __int8)v10;
    v34 = (unsigned __int8)v10 - 1;
    v21 = (unsigned __int8)v10 + 1;
    goto LABEL_50;
  }
  if ( v10 > 15 )
  {
    if ( v10 != 16 )
      v5 += (unsigned __int8)byte_6FB889EC[v4];
    v13 = 0;
    v10 = (unsigned __int8)v61;
    v12 = 1;
    v60 = 0;
    if ( v8 )
      goto LABEL_5;
LABEL_103:
    if ( v13 < 2 )
    {
      v47 = 0;
    }
    else if ( v13 < 4 )
    {
      v47 = 1;
    }
    else if ( v13 < 6 )
    {
      v47 = 2;
    }
    else if ( v13 < 10 )
    {
      v47 = 3;
    }
    else if ( v13 < 18 )
    {
      v47 = 4;
    }
    else
    {
      v47 = (v13 >= 34) + 5;
    }
    v5 -= (unsigned __int8)byte_6FB88A1A[v47];
    goto LABEL_6;
  }
  v11 = v4 + 1;
LABEL_4:
  v61 = v11;
  v60 = 1;
  v12 = 2;
  v58 = 0;
  v5 += (unsigned __int8)byte_6FB889FC[v4];
  v13 = 1;
  if ( 1 == v8 )
    goto LABEL_103;
LABEL_5:
  v12 = 1;
LABEL_6:
  if ( v12 < 2 )
  {
    v14 = 0;
  }
  else if ( v12 < 4 )
  {
    v14 = 1;
  }
  else if ( v12 < 6 )
  {
    v14 = 2;
  }
  else if ( v12 < 10 )
  {
    v14 = 3;
  }
  else if ( v12 < 18 )
  {
    v14 = 4;
  }
  else
  {
    v14 = (v12 >= 34) + 5;
  }
  v15 = (unsigned __int8)byte_6FB88A1A[v14] + v5;
  if ( !v13 )
  {
    if ( v57 )
    {
      v16 = 1;
      v62 = 1;
    }
    else if ( (signed int)(unsigned __int16)v62 > 4128 )
    {
      ++v15;
      v62 = 1;
      v16 = 1;
    }
    else
    {
      if ( (signed int)(unsigned __int16)v62 < 2 )
      {
        v52 = 0;
      }
      else if ( (signed int)(unsigned __int16)v62 < 4 )
      {
        v52 = 1;
      }
      else if ( (signed int)(unsigned __int16)v62 < 6 )
      {
        v52 = 2;
      }
      else if ( (signed int)(unsigned __int16)v62 < 10 )
      {
        v52 = 3;
      }
      else if ( (signed int)(unsigned __int16)v62 < 18 )
      {
        v52 = 4;
      }
      else
      {
        v52 = ((signed int)(unsigned __int16)v62 >= 34) + 5;
      }
      v16 = (unsigned __int16)v62++ + 1;
      v15 -= (unsigned __int8)byte_6FB88A1A[v52];
    }
    if ( v16 < 2 )
    {
      v17 = 0;
    }
    else if ( v16 < 4 )
    {
      v17 = 1;
    }
    else if ( v16 < 6 )
    {
      v17 = 2;
    }
    else if ( v16 < 10 )
    {
      v17 = 3;
    }
    else if ( v16 < 18 )
    {
      v17 = 4;
    }
    else
    {
      v17 = (v16 >= 34) + 5;
    }
    v57 = 0;
    v15 += (unsigned __int8)byte_6FB88A1A[v17];
  }
  if ( v58 )
  {
    v18 = 2;
    v19 = 2;
    v20 = 0;
    v21 = 1;
    v10 = 0;
    goto LABEL_24;
  }
  v34 = v10 - 1;
  v21 = v10 + 1;
  v8 = v60;
  LOBYTE(v9) = 0;
LABEL_51:
  v15 -= (unsigned __int8)byte_6FB889FC[v34];
  if ( (unsigned __int8)v9 != 15 )
  {
    v60 = v8;
    v21 = (unsigned __int8)v21;
    v18 = (unsigned __int8)v9 + 2;
    v20 = (unsigned __int8)v21 - 1;
    v19 = (unsigned __int8)v21 + 1;
LABEL_24:
    v22 = (unsigned __int8)byte_6FB889FC[v10] + v15 - (unsigned __int8)byte_6FB889FC[v20];
    if ( v18 != 16 )
    {
      v23 = v19;
LABEL_26:
      v19 = v23;
      v24 = v23 - 1;
      v25 = v19 + 1;
      goto LABEL_27;
    }
    if ( v19 <= 15 )
    {
      v41 = 1;
      v42 = 0;
      v43 = 2;
      v22 += (unsigned __int8)byte_6FB889FC[v21];
      if ( 1 != v60 )
      {
LABEL_79:
        v43 = 1;
LABEL_80:
        if ( v43 < 2 )
        {
          v44 = 0;
        }
        else if ( v43 < 4 )
        {
          v44 = 1;
        }
        else if ( v43 < 6 )
        {
          v44 = 2;
        }
        else if ( v43 < 10 )
        {
          v44 = 3;
        }
        else if ( v43 < 18 )
        {
          v44 = 4;
        }
        else
        {
          v44 = (v43 >= 34) + 5;
        }
        v26 = (unsigned __int8)byte_6FB88A1A[v44] + v22;
        if ( !v41 )
        {
          v45 = 1;
          if ( !v57 )
          {
            if ( (signed int)(unsigned __int16)v62 > 4128 )
            {
              ++v26;
            }
            else
            {
              if ( (signed int)(unsigned __int16)v62 < 2 )
              {
                v53 = 0;
              }
              else if ( (signed int)(unsigned __int16)v62 < 4 )
              {
                v53 = 1;
              }
              else if ( (signed int)(unsigned __int16)v62 < 6 )
              {
                v53 = 2;
              }
              else if ( (signed int)(unsigned __int16)v62 < 10 )
              {
                v53 = 3;
              }
              else if ( (signed int)(unsigned __int16)v62 < 18 )
              {
                v53 = 4;
              }
              else
              {
                v53 = ((signed int)(unsigned __int16)v62 >= 34) + 5;
              }
              v45 = (unsigned __int16)v62 + 1;
              v26 -= (unsigned __int8)byte_6FB88A1A[v53];
            }
          }
          if ( v45 < 2 )
          {
            v46 = 0;
          }
          else if ( v45 < 4 )
          {
            v46 = 1;
          }
          else if ( v45 < 6 )
          {
            v46 = 2;
          }
          else if ( v45 < 10 )
          {
            v46 = 3;
          }
          else if ( v45 < 18 )
          {
            v46 = 4;
          }
          else
          {
            v46 = (v45 >= 34) + 5;
          }
          v26 += (unsigned __int8)byte_6FB88A1A[v46];
        }
        if ( v42 )
          v19 = 0;
        else
          v26 -= (unsigned __int8)byte_6FB889FB[v19];
        return *v59 - ((unsigned __int8)byte_6FB889FC[v19] + v26);
      }
    }
    else
    {
      if ( v19 != 16 )
        v22 += (unsigned __int8)byte_6FB889EC[v21];
      v41 = 0;
      v19 = (unsigned __int8)v61;
      v42 = v58;
      v43 = 1;
      if ( v60 )
        goto LABEL_79;
    }
    if ( v41 < 2 )
    {
      v50 = 0;
    }
    else if ( v41 < 4 )
    {
      v50 = 1;
    }
    else if ( v41 < 6 )
    {
      v50 = 2;
    }
    else if ( v41 < 10 )
    {
      v50 = 3;
    }
    else if ( v41 < 18 )
    {
      v50 = 4;
    }
    else
    {
      v50 = (v41 >= 34) + 5;
    }
    v22 -= (unsigned __int8)byte_6FB88A1A[v50];
    goto LABEL_80;
  }
  if ( v21 <= 15 )
  {
    v48 = (unsigned __int8)byte_6FB889FC[v10];
    v35 = 1;
    v36 = 0;
    v60 = 1;
    v15 += v48;
    v37 = 2;
    if ( 1 != v8 )
    {
LABEL_56:
      v37 = 1;
      goto LABEL_57;
    }
  }
  else
  {
    if ( v21 != 16 )
      v15 += (unsigned __int8)byte_6FB889EC[v10];
    v35 = 0;
    LOBYTE(v21) = v61;
    v36 = v58;
    v37 = 1;
    v60 = 0;
    if ( v8 )
      goto LABEL_56;
  }
  if ( v35 < 2 )
  {
    v49 = 0;
  }
  else if ( v35 < 4 )
  {
    v49 = 1;
  }
  else if ( v35 < 6 )
  {
    v49 = 2;
  }
  else if ( v35 < 10 )
  {
    v49 = 3;
  }
  else if ( v35 < 18 )
  {
    v49 = 4;
  }
  else
  {
    v49 = (v35 >= 34) + 5;
  }
  v15 -= (unsigned __int8)byte_6FB88A1A[v49];
LABEL_57:
  if ( v37 < 2 )
  {
    v38 = 0;
  }
  else if ( v37 < 4 )
  {
    v38 = 1;
  }
  else if ( v37 < 6 )
  {
    v38 = 2;
  }
  else if ( v37 < 10 )
  {
    v38 = 3;
  }
  else if ( v37 < 18 )
  {
    v38 = 4;
  }
  else
  {
    v38 = (v37 >= 34) + 5;
  }
  v22 = (unsigned __int8)byte_6FB88A1A[v38] + v15;
  if ( !v35 )
  {
    if ( v57 )
    {
      v39 = 1;
      v62 = 1;
    }
    else if ( (signed int)(unsigned __int16)v62 > 4128 )
    {
      ++v22;
      v62 = 1;
      v39 = 1;
    }
    else
    {
      if ( (signed int)(unsigned __int16)v62 < 2 )
      {
        v56 = 0;
      }
      else if ( (signed int)(unsigned __int16)v62 < 4 )
      {
        v56 = 1;
      }
      else if ( (signed int)(unsigned __int16)v62 < 6 )
      {
        v56 = 2;
      }
      else if ( (signed int)(unsigned __int16)v62 < 10 )
      {
        v56 = 3;
      }
      else if ( (signed int)(unsigned __int16)v62 < 18 )
      {
        v56 = 4;
      }
      else
      {
        v56 = ((signed int)(unsigned __int16)v62 >= 34) + 5;
      }
      v39 = (unsigned __int16)v62++ + 1;
      v22 -= (unsigned __int8)byte_6FB88A1A[v56];
    }
    if ( v39 < 2 )
    {
      v40 = 0;
    }
    else if ( v39 < 4 )
    {
      v40 = 1;
    }
    else if ( v39 < 6 )
    {
      v40 = 2;
    }
    else if ( v39 < 10 )
    {
      v40 = 3;
    }
    else if ( v39 < 18 )
    {
      v40 = 4;
    }
    else
    {
      v40 = (v39 >= 34) + 5;
    }
    v57 = 0;
    v22 += (unsigned __int8)byte_6FB88A1A[v40];
  }
  if ( !v36 )
  {
    v21 = (unsigned __int8)v21;
    v18 = 1;
    v23 = v21 + 1;
    v22 -= (unsigned __int8)byte_6FB889FB[(unsigned __int8)v21];
    goto LABEL_26;
  }
  v18 = 1;
  v25 = 2;
  v24 = 0;
  v19 = 1;
  v21 = 0;
LABEL_27:
  v26 = (unsigned __int8)byte_6FB889FC[v21] + v22 - (unsigned __int8)byte_6FB889FC[v24];
  if ( v18 <= 14 )
    return *v59 - ((unsigned __int8)byte_6FB889FC[v19] + v26);
  if ( v25 > 15 )
  {
    if ( v25 != 16 )
      v26 += (unsigned __int8)byte_6FB889EC[v19];
    v27 = 0;
    v28 = 1;
    if ( v60 )
      goto LABEL_32;
LABEL_128:
    if ( v27 < 2 )
    {
      v51 = 0;
    }
    else if ( v27 < 4 )
    {
      v51 = 1;
    }
    else if ( v27 < 6 )
    {
      v51 = 2;
    }
    else if ( v27 < 10 )
    {
      v51 = 3;
    }
    else if ( v27 < 18 )
    {
      v51 = 4;
    }
    else
    {
      v51 = (v27 >= 34) + 5;
    }
    v26 -= (unsigned __int8)byte_6FB88A1A[v51];
    goto LABEL_33;
  }
  v27 = 1;
  v28 = 2;
  v26 += (unsigned __int8)byte_6FB889FC[v19];
  if ( 1 == v60 )
    goto LABEL_128;
LABEL_32:
  v28 = 1;
LABEL_33:
  if ( v28 < 2 )
  {
    v29 = 0;
  }
  else if ( v28 < 4 )
  {
    v29 = 1;
  }
  else if ( v28 < 6 )
  {
    v29 = 2;
  }
  else if ( v28 < 10 )
  {
    v29 = 3;
  }
  else if ( v28 < 18 )
  {
    v29 = 4;
  }
  else
  {
    v29 = (v28 >= 34) + 5;
  }
  v30 = (unsigned __int8)byte_6FB88A1A[v29] + v26;
  if ( !v27 )
  {
    v31 = 1;
    if ( !v57 )
    {
      if ( (signed int)(unsigned __int16)v62 > 4128 )
      {
        ++v30;
      }
      else
      {
        if ( (signed int)(unsigned __int16)v62 < 2 )
        {
          v54 = 0;
        }
        else if ( (signed int)(unsigned __int16)v62 < 4 )
        {
          v54 = 1;
        }
        else if ( (signed int)(unsigned __int16)v62 < 6 )
        {
          v54 = 2;
        }
        else if ( (signed int)(unsigned __int16)v62 < 10 )
        {
          v54 = 3;
        }
        else if ( (signed int)(unsigned __int16)v62 < 18 )
        {
          v54 = 4;
        }
        else
        {
          v54 = ((signed int)(unsigned __int16)v62 >= 34) + 5;
        }
        v55 = (unsigned __int8)byte_6FB88A1A[v54];
        v31 = (unsigned __int16)v62 + 1;
        v30 -= v55;
      }
    }
    if ( v31 < 2 )
    {
      v32 = 0;
    }
    else if ( v31 < 4 )
    {
      v32 = 1;
    }
    else if ( v31 < 6 )
    {
      v32 = 2;
    }
    else if ( v31 < 10 )
    {
      v32 = 3;
    }
    else if ( v31 < 18 )
    {
      v32 = 4;
    }
    else
    {
      v32 = (v31 >= 34) + 5;
    }
    v30 += (unsigned __int8)byte_6FB88A1A[v32];
  }
  return *v59 - v30;
}
