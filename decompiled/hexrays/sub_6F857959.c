unsigned int __cdecl sub_6F857959(int a1, _BYTE *a2)
{
  char *v2; // eax@4
  _BYTE *v3; // ST4C_4@4
  char v4; // ST1B_1@4
  _BYTE *v5; // eax@4
  _BYTE *v6; // ST48_4@4
  _BYTE *v7; // edx@4
  _BYTE *v8; // eax@4
  _BYTE *v9; // edx@4
  _BYTE *v10; // eax@4
  unsigned int result; // eax@5
  char *v12; // eax@8
  char *v13; // ST40_4@8
  char v14; // ST06_1@8
  char *v15; // eax@8
  char v16; // ST07_1@8
  char *v17; // eax@8
  char *v18; // ST3C_4@8
  char *v19; // edx@8
  char *v20; // eax@8
  char *v21; // edx@8
  char *v22; // eax@8
  char *v23; // edx@8
  char *v24; // eax@8
  char *v25; // edx@8
  char *v26; // eax@8
  char *v27; // eax@8
  char *v28; // edx@8
  _BYTE *v29; // eax@8
  char v30; // ST0F_1@14
  _BYTE *v31; // edx@14
  _BYTE *v32; // eax@14
  char *v33; // eax@18
  char *v34; // ST28_4@18
  char v35; // ST04_1@18
  char *v36; // eax@18
  char v37; // ST05_1@18
  char *v38; // eax@18
  _BYTE *v39; // ST24_4@18
  _BYTE *v40; // eax@18
  _BYTE *v41; // edx@18
  _BYTE *v42; // eax@18
  unsigned int v43; // [sp+8h] [bp-48h]@17
  unsigned int v44; // [sp+10h] [bp-40h]@13
  unsigned int v45; // [sp+14h] [bp-3Ch]@7
  unsigned int v46; // [sp+1Ch] [bp-34h]@3
  unsigned int v47; // [sp+20h] [bp-30h]@17
  _BYTE *v48; // [sp+24h] [bp-2Ch]@17
  _BYTE *v49; // [sp+28h] [bp-28h]@17
  unsigned int v50; // [sp+2Ch] [bp-24h]@13
  _BYTE *v51; // [sp+30h] [bp-20h]@13
  _BYTE *v52; // [sp+34h] [bp-1Ch]@13
  unsigned int v53; // [sp+38h] [bp-18h]@7
  _BYTE *v54; // [sp+3Ch] [bp-14h]@7
  _BYTE *v55; // [sp+40h] [bp-10h]@7
  unsigned int v56; // [sp+44h] [bp-Ch]@3
  _BYTE *v57; // [sp+48h] [bp-8h]@3
  _BYTE *v58; // [sp+4Ch] [bp-4h]@3

  if ( *(_BYTE *)(a1 + 8) == 6 )
  {
    if ( *(_BYTE *)(a1 + 9) == 8 )
    {
      v46 = *(_DWORD *)a1;
      v56 = 0;
      v57 = a2;
      v58 = a2;
      while ( 1 )
      {
        result = v56;
        if ( v56 >= v46 )
          break;
        v2 = v58;
        v3 = v58 + 1;
        v4 = *v2;
        v5 = v57;
        v6 = v57 + 1;
        v7 = v3++;
        *v5 = *v7;
        v8 = v6++;
        *v8 = *v3;
        v9 = v3 + 1;
        v58 = v3 + 2;
        *v6 = *v9;
        v10 = v6 + 1;
        v57 = v6 + 2;
        *v10 = v4;
        ++v56;
      }
    }
    else
    {
      v45 = *(_DWORD *)a1;
      v53 = 0;
      v54 = a2;
      v55 = a2;
      while ( 1 )
      {
        result = v53;
        if ( v53 >= v45 )
          break;
        v12 = v55;
        v13 = v55 + 1;
        v14 = *v12;
        v15 = v13++;
        v16 = *v15;
        v17 = v54;
        v18 = v54 + 1;
        v19 = v13++;
        *v17 = *v19;
        v20 = v18++;
        v21 = v13++;
        *v20 = *v21;
        v22 = v18++;
        v23 = v13++;
        *v22 = *v23;
        v24 = v18++;
        v25 = v13++;
        *v24 = *v25;
        v26 = v18++;
        *v26 = *v13;
        v27 = v18++;
        v28 = v13 + 1;
        v55 = v13 + 2;
        *v27 = *v28;
        *v18 = v14;
        v29 = v18 + 1;
        v54 = v18 + 2;
        *v29 = v16;
        ++v53;
      }
    }
  }
  else
  {
    result = *(_BYTE *)(a1 + 8);
    if ( (_BYTE)result == 4 )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        v44 = *(_DWORD *)a1;
        v50 = 0;
        v51 = a2;
        v52 = a2;
        while ( 1 )
        {
          result = v50;
          if ( v50 >= v44 )
            break;
          v30 = *v52;
          v31 = v52 + 1;
          v52 += 2;
          *v51 = *v31;
          v32 = v51 + 1;
          v51 += 2;
          *v32 = v30;
          ++v50;
        }
      }
      else
      {
        v43 = *(_DWORD *)a1;
        v47 = 0;
        v48 = a2;
        v49 = a2;
        while ( 1 )
        {
          result = v47;
          if ( v47 >= v43 )
            break;
          v33 = v49;
          v34 = v49 + 1;
          v35 = *v33;
          v36 = v34++;
          v37 = *v36;
          v38 = v48;
          v39 = v48 + 1;
          *v38 = *v34;
          v40 = v39++;
          v41 = v34 + 1;
          v49 = v34 + 2;
          *v40 = *v41;
          *v39 = v35;
          v42 = v39 + 1;
          v48 = v39 + 2;
          *v42 = v37;
          ++v47;
        }
      }
    }
  }
  return result;
}
