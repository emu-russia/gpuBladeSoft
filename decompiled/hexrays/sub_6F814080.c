signed int __usercall sub_6F814080@<eax>(int a1@<edi>, int a2)
{
  int v2; // esi@1
  int v3; // ebx@2
  __int16 v4; // di@3
  int v5; // eax@4
  int v6; // eax@4
  int v7; // ebx@5
  signed int v8; // edi@5
  __int16 v9; // di@7
  int v10; // eax@8
  int v11; // eax@9
  int v12; // edi@9
  signed int v13; // edx@9
  int v14; // eax@12
  int v15; // edi@13
  signed int v16; // edx@13
  int v17; // eax@16
  signed int v18; // edi@18
  int v19; // eax@20
  int v20; // ecx@20
  __int16 v21; // ST20_2@21
  int v22; // eax@21
  int v23; // eax@21
  __int16 v24; // ST20_2@22
  int v25; // eax@22
  int v26; // eax@22
  int v27; // eax@23
  int v28; // ecx@23
  int v29; // edi@25
  int v30; // ebp@29
  int v31; // eax@29
  signed int v32; // edx@29
  int v33; // ecx@30
  int v34; // ebx@32
  int v35; // edx@34
  int v36; // ebx@39
  unsigned int v37; // eax@39
  unsigned int v38; // ecx@39
  _WORD *v39; // edx@39
  int v40; // ebp@39
  char v41; // dl@41
  __int16 v42; // bp@41
  signed int result; // eax@43
  int v44; // eax@53
  int v45; // ecx@53
  int v46; // [sp+14h] [bp-48h]@2
  signed int v47; // [sp+14h] [bp-48h]@26
  int v48; // [sp+18h] [bp-44h]@2
  signed int v49; // [sp+18h] [bp-44h]@29
  char v50; // [sp+1Ch] [bp-40h]@3
  char v51; // [sp+1Ch] [bp-40h]@7
  char v52; // [sp+1Ch] [bp-40h]@11
  char v53; // [sp+1Ch] [bp-40h]@15
  int v54; // [sp+1Ch] [bp-40h]@26
  __int16 v55; // [sp+20h] [bp-3Ch]@11
  __int16 v56; // [sp+20h] [bp-3Ch]@15
  int v57; // [sp+20h] [bp-3Ch]@26
  int v58; // [sp+24h] [bp-38h]@1
  int v59; // [sp+24h] [bp-38h]@25
  int v60; // [sp+28h] [bp-34h]@26
  int v61; // [sp+2Ch] [bp-30h]@26
  signed int v62; // [sp+30h] [bp-2Ch]@28
  int v63; // [sp+38h] [bp-24h]@39

  v2 = 0;
  v58 = a1;
  do
  {
    v3 = 0;
    v46 = (v2 << 7) + a2;
    v48 = v46 + (v2 << 7);
    do
    {
      v6 = (v2 << 7) + a2;
      v18 = *(_WORD *)(v46 + 2 * v3 + 52552);
      if ( *(_WORD *)(v46 + 2 * v3 + 52552) )
      {
        if ( v18 <= 3 )
        {
          v50 = v18 - 1;
          v4 = 0;
        }
        else
        {
          v19 = sub_6F8095C0(*(_WORD *)(v46 + 2 * v3 + 52552));
          v20 = (v19 - 3 > 3 ? 6 - v19 : 0) + v19 - 3;
          v50 = v20 + 3;
          v4 = v18 - (char)(1050628 >> 8 * v20);
        }
        v5 = *(_DWORD *)(v48 + 4 * v3 + 51784);
        *(_DWORD *)(v48 + 4 * v3 + 51784) = v5 + 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 4 * v2 + 51760) + 4 * v3) + v5) = v50;
        *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 4 * v2 + 51772) + 4 * v3) + 2 * v5) = v4;
        v6 = (v2 << 7) + a2;
      }
      v7 = v3 + 1;
      v8 = *(_WORD *)(v6 + 2 * v7 + 52552);
      if ( *(_WORD *)(v6 + 2 * v7 + 52552) )
      {
        if ( v8 > 3 )
        {
          v27 = sub_6F8095C0(*(_WORD *)(v6 + 2 * v7 + 52552));
          v28 = (v27 - 3 > 3 ? 6 - v27 : 0) + v27 - 3;
          v51 = v28 + 3;
          v9 = v8 - (char)(1050628 >> 8 * v28);
        }
        else
        {
          v51 = v8 - 1;
          v9 = 0;
        }
        v10 = *(_DWORD *)(v48 + 4 * v7 + 51784);
        *(_DWORD *)(v48 + 4 * v7 + 51784) = v10 + 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 4 * v2 + 51760) + 4 * v7) + v10) = v51;
        *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 4 * v2 + 51772) + 4 * v7) + 2 * v10) = v9;
      }
      v11 = (v2 << 7) + a2;
      v12 = v7 + 1;
      v13 = *(_WORD *)(v46 + 2 * (v7 + 1) + 52552);
      if ( *(_WORD *)(v46 + 2 * (v7 + 1) + 52552) )
      {
        if ( v13 > 3 )
        {
          v21 = *(_WORD *)(v46 + 2 * (v7 + 1) + 52552);
          v22 = sub_6F8095C0(*(_WORD *)(v46 + 2 * (v7 + 1) + 52552));
          v23 = v22 - 3 + (v22 - 3 > 3 ? 6 - v22 : 0);
          v52 = v23 + 3;
          v55 = v21 - (char)(1050628 >> 8 * v23);
        }
        else
        {
          v55 = 0;
          v52 = v13 - 1;
        }
        v14 = *(_DWORD *)(v48 + 4 * v12 + 51784);
        *(_DWORD *)(v48 + 4 * v12 + 51784) = v14 + 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 4 * v2 + 51760) + 4 * v12) + v14) = v52;
        *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 4 * v2 + 51772) + 4 * v12) + 2 * v14) = v55;
        v11 = (v2 << 7) + a2;
      }
      v15 = v7 + 2;
      v16 = *(_WORD *)(v11 + 2 * (v7 + 2) + 52552);
      if ( *(_WORD *)(v11 + 2 * (v7 + 2) + 52552) )
      {
        if ( v16 > 3 )
        {
          v24 = *(_WORD *)(v11 + 2 * (v7 + 2) + 52552);
          v25 = sub_6F8095C0(*(_WORD *)(v11 + 2 * (v7 + 2) + 52552));
          v26 = v25 - 3 + (v25 - 3 > 3 ? 6 - v25 : 0);
          v53 = v26 + 3;
          v56 = v24 - (char)(1050628 >> 8 * v26);
        }
        else
        {
          v56 = 0;
          v53 = v16 - 1;
        }
        v17 = *(_DWORD *)(v48 + 4 * v15 + 51784);
        *(_DWORD *)(v48 + 4 * v15 + 51784) = v17 + 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 4 * v2 + 51760) + 4 * v15) + v17) = v53;
        *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 4 * v2 + 51772) + 4 * v15) + 2 * v17) = v56;
      }
      v3 = v7 + 3;
    }
    while ( v3 != 64 );
    ++v2;
  }
  while ( v2 != 3 );
  v29 = v58;
  v59 = 0;
  do
  {
    v47 = 0;
    v57 = a2 + 51760;
    v60 = 4 * v59;
    v61 = a2 + v59;
    v54 = a2 + 4 * v59;
    do
    {
      if ( *(_DWORD *)(v54 + 51784) <= 0 )
        goto LABEL_43;
      v62 = **(_BYTE **)(*(_DWORD *)v57 + v60);
      if ( v62 > 6 )
        goto LABEL_43;
      v30 = 4 * v59;
      v31 = v59;
      v32 = v47;
      v49 = 7;
      do
      {
        v33 = v32 - 1;
        if ( !v32 )
          goto LABEL_36;
        v29 = *(_DWORD *)(a2 + 4 * (v31 + (v33 << 6) + 12944) + 8) - 1;
        if ( v29 >= *(_BYTE *)(v31 + a2 + (v33 << 6) + 52936) )
        {
          v34 = v32 - 1;
        }
        else
        {
          v34 = v32 - 2;
          if ( v32 == 1 )
            goto LABEL_47;
          v29 = *(_DWORD *)(a2 + 4 * (v31 + (v34 << 6) + 12944) + 8) - 1;
          if ( v29 < *(_BYTE *)(v31 + a2 + (v34 << 6) + 52936) )
          {
            v35 = v32 - 3;
            if ( v34 != 1 )
            {
              v34 = v35;
LABEL_47:
              if ( v34 >= 0 )
                goto LABEL_38;
              goto LABEL_36;
            }
            v29 = *(_DWORD *)(a2 + 4 * (v31 + (v35 << 6) + 12944) + 8) - 1;
            if ( v29 < *(_BYTE *)(v31 + a2 + (v35 << 6) + 52936) )
              goto LABEL_36;
            v34 = v35;
          }
        }
        v49 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 4 * v34 + 51760) + v30) + v29);
        if ( v34 >= 0 )
          goto LABEL_38;
LABEL_36:
        --v31;
        v30 -= 4;
        v32 = 3;
      }
      while ( v31 != -1 );
      v34 = 3;
LABEL_38:
      if ( v49 <= 6 )
      {
        v36 = a2 + 4 * v34;
        v63 = 4 * v31;
        v37 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v36 + 51772) + 4 * v31) + 2 * v29) + ((0x20820C41u >> 5 * v49) & 0x1F);
        v38 = (0x20820C41u >> 5 * v62) & 0x1F;
        v39 = *(_WORD **)(*(_DWORD *)(v57 + 12) + v60);
        v40 = v37 + v38 + *v39;
        if ( v40 <= 4095 )
        {
          if ( v40 > 3 )
          {
            v44 = sub_6F8095C0(v37 + v38 + *v39);
            v45 = (v44 - 3 > 3 ? 6 - v44 : 0) + v44 - 3;
            v41 = v45 + 3;
            v42 = v40 - (char)(1050628 >> 8 * v45);
          }
          else
          {
            v41 = v40 - 1;
            v42 = 0;
          }
          *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v36 + 51760) + v63) + v29) = v41;
          *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v36 + 51772) + v63) + 2 * v29) = v42;
          ++*(_BYTE *)(v61 + 52936);
        }
      }
LABEL_43:
      result = ++v47;
      v54 += 256;
      v61 += 64;
      v57 += 4;
    }
    while ( v47 != 3 );
    ++v59;
  }
  while ( v59 != 64 );
  return result;
}
