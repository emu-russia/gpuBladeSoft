int __usercall sub_6F867E14@<eax>(int a1@<eax>, signed int a2@<edx>, signed int a3@<ecx>, signed int a4)
{
  int v4; // eax@1
  int v5; // edx@1
  int v6; // eax@2
  int v7; // edx@2
  char *v8; // edi@2
  int v9; // eax@3
  int v10; // ecx@3
  int v11; // ebx@4
  int v12; // ecx@5
  int v13; // ebx@6
  int v14; // ecx@7
  int v15; // ecx@11
  int v16; // eax@27
  int v17; // edx@27
  int v18; // eax@34
  int v19; // ecx@35
  int v20; // eax@35
  int v21; // edx@35
  int v22; // eax@35
  int v23; // edi@36
  char *v24; // esi@36
  int v25; // ecx@37
  char *v26; // edx@37
  int v27; // eax@37
  char *v28; // edi@47
  int v29; // ebx@48
  char *v30; // ecx@48
  signed int v31; // esi@48
  int result; // eax@49
  int v33; // [sp+0h] [bp-5ECh]@37
  int v34; // [sp+Ch] [bp-5E0h]@1
  signed int v35; // [sp+10h] [bp-5DCh]@1
  signed int v36; // [sp+14h] [bp-5D8h]@1
  int v37; // [sp+18h] [bp-5D4h]@34
  int v38; // [sp+1Ch] [bp-5D0h]@34
  int v39; // [sp+20h] [bp-5CCh]@31
  int v40; // [sp+24h] [bp-5C8h]@1
  int v41; // [sp+24h] [bp-5C8h]@34
  int v42; // [sp+28h] [bp-5C4h]@34
  int v43; // [sp+2Ch] [bp-5C0h]@1
  int v44; // [sp+2Ch] [bp-5C0h]@35
  int v45; // [sp+30h] [bp-5BCh]@1
  int v46; // [sp+30h] [bp-5BCh]@35
  int v47; // [sp+34h] [bp-5B8h]@1
  int v48; // [sp+38h] [bp-5B4h]@1
  int v49; // [sp+3Ch] [bp-5B0h]@1
  int v50; // [sp+40h] [bp-5ACh]@2
  int v51; // [sp+40h] [bp-5ACh]@35
  int v52; // [sp+44h] [bp-5A8h]@2
  char *v53; // [sp+44h] [bp-5A8h]@35
  int v54; // [sp+48h] [bp-5A4h]@2
  char *v55; // [sp+48h] [bp-5A4h]@35
  int v56; // [sp+4Ch] [bp-5A0h]@1
  int v57; // [sp+4Ch] [bp-5A0h]@35
  int v58; // [sp+50h] [bp-59Ch]@1
  int v59; // [sp+50h] [bp-59Ch]@35
  int v60; // [sp+54h] [bp-598h]@1
  char v61; // [sp+54h] [bp-598h]@35
  int v62; // [sp+58h] [bp-594h]@1
  int v63; // [sp+58h] [bp-594h]@36
  signed int v64; // [sp+5Ch] [bp-590h]@2
  char *v65; // [sp+5Ch] [bp-590h]@36
  _DWORD *v66; // [sp+5Ch] [bp-590h]@47
  char v67[512]; // [sp+60h] [bp-58Ch]@2
  char v68; // [sp+260h] [bp-38Ch]@32
  char v69[256]; // [sp+460h] [bp-18Ch]@29
  char v70; // [sp+560h] [bp-8Ch]@35
  char v71; // [sp+5E0h] [bp-Ch]@44
  signed int v72; // [sp+5F4h] [bp+8h]@1

  v40 = a1;
  v34 = *(_DWORD *)(*(_DWORD *)(a1 + 440) + 24);
  v36 = a2 >> 2;
  v35 = a3 >> 3;
  v72 = a4 >> 2;
  v4 = 32 * (a2 >> 2);
  v49 = v4 + 4;
  v5 = 32 * (a3 >> 3);
  v48 = v5 + 2;
  v47 = 32 * v72 + 4;
  v56 = *(_DWORD *)(v40 + 112);
  v62 = v4 + 28;
  v45 = (v4 + 4 + v4 + 28) >> 1;
  v60 = v5 + 30;
  v43 = (v5 + 2 + v5 + 30) >> 1;
  v58 = 32 * v72 + 28;
  if ( v56 <= 0 )
  {
    v39 = 0;
    v8 = v67;
  }
  else
  {
    v6 = *(_DWORD *)(v40 + 116);
    v54 = *(_DWORD *)v6;
    v52 = *(_DWORD *)(v6 + 4);
    v50 = *(_DWORD *)(v6 + 8);
    v64 = 0x7FFFFFFF;
    v7 = 0;
    v8 = v67;
    do
    {
      v15 = *(_BYTE *)(v54 + v7);
      if ( v49 > v15 )
      {
        v9 = 2 * (v15 - v49) * 2 * (v15 - v49);
        v10 = 2 * (v15 - v62) * 2 * (v15 - v62);
      }
      else if ( v62 >= v15 )
      {
        if ( v45 < v15 )
        {
          v10 = 2 * (v15 - v49) * 2 * (v15 - v49);
          v9 = 0;
        }
        else
        {
          v10 = 2 * (v15 - v62) * 2 * (v15 - v62);
          v9 = 0;
        }
      }
      else
      {
        v9 = 2 * (v15 - v62) * 2 * (v15 - v62);
        v10 = 2 * (v15 - v49) * 2 * (v15 - v49);
      }
      v11 = *(_BYTE *)(v52 + v7);
      if ( v48 <= v11 )
      {
        if ( v60 >= v11 )
        {
          if ( v43 < v11 )
            v12 = 3 * (v11 - v48) * 3 * (v11 - v48) + v10;
          else
            v12 = 3 * (v11 - v60) * 3 * (v11 - v60) + v10;
        }
        else
        {
          v9 += 3 * (v11 - v60) * 3 * (v11 - v60);
          v12 = 3 * (v11 - v48) * 3 * (v11 - v48) + v10;
        }
      }
      else
      {
        v9 += 3 * (v11 - v48) * 3 * (v11 - v48);
        v12 = 3 * (v11 - v60) * 3 * (v11 - v60) + v10;
      }
      v13 = *(_BYTE *)(v50 + v7);
      if ( v47 <= v13 )
      {
        if ( v58 >= v13 )
        {
          if ( (v47 + v58) >> 1 < v13 )
            v14 = (v13 - v47) * (v13 - v47) + v12;
          else
            v14 = (v13 - v58) * (v13 - v58) + v12;
        }
        else
        {
          v9 += (v13 - v58) * (v13 - v58);
          v14 = (v13 - v47) * (v13 - v47) + v12;
        }
      }
      else
      {
        v9 += (v13 - v47) * (v13 - v47);
        v14 = (v13 - v58) * (v13 - v58) + v12;
      }
      *(_DWORD *)&v67[4 * v7] = v9;
      if ( v64 > v14 )
        v64 = v14;
      ++v7;
    }
    while ( v7 != v56 );
    v16 = 0;
    v17 = 0;
    do
    {
      if ( *(_DWORD *)&v67[4 * v16] <= v64 )
        v69[v17++] = v16;
      ++v16;
    }
    while ( v16 != v56 );
    v39 = v17;
  }
  do
  {
    *(_DWORD *)v8 = 0x7FFFFFFF;
    v8 += 4;
  }
  while ( v8 != &v68 );
  if ( v39 )
  {
    v18 = *(_DWORD *)(v40 + 116);
    v41 = *(_DWORD *)v18;
    v38 = *(_DWORD *)(v18 + 4);
    v37 = *(_DWORD *)(v18 + 8);
    v42 = 0;
    do
    {
      v61 = v69[v42];
      v19 = 2 * (v49 - *(_BYTE *)(v41 + (unsigned __int8)v61));
      v20 = 3 * (v48 - *(_BYTE *)(v38 + (unsigned __int8)v61));
      v21 = v47 - *(_BYTE *)(v37 + (unsigned __int8)v61);
      v46 = v21 * v21 + v20 * v20 + v19 * v19;
      v51 = 32 * (v19 + 8);
      v22 = 72 * (v48 - *(_BYTE *)(v38 + (unsigned __int8)v61));
      v44 = v22 + 144;
      v59 = 16 * (v21 + 4);
      v55 = &v70;
      v53 = v67;
      v57 = v22 + 2160;
      while ( 1 )
      {
        v23 = v44;
        v63 = v46;
        v24 = v55;
        v65 = v53;
        while ( 1 )
        {
          v25 = v63;
          v26 = v65;
          v27 = 0;
          v33 = v59;
          if ( *(_DWORD *)v65 <= v63 )
            goto LABEL_39;
          while ( 1 )
          {
            *(_DWORD *)v26 = v25;
            v24[v27] = v61;
LABEL_39:
            v26 += 4;
            if ( ++v27 == 4 )
              break;
            while ( 1 )
            {
              v25 += v33;
              v33 += 128;
              if ( *(_DWORD *)v26 > v25 )
                break;
              v26 += 4;
              if ( ++v27 == 4 )
                goto LABEL_42;
            }
          }
LABEL_42:
          v65 += 16;
          v24 += 4;
          if ( v23 == v57 )
            break;
          v63 += v23;
          v23 += 288;
        }
        v53 += 128;
        v55 += 32;
        if ( v55 == &v71 )
          break;
        v46 += v51;
        v51 += 512;
      }
      ++v42;
    }
    while ( v42 != v39 );
  }
  v66 = (_DWORD *)(v34 + 16 * v36);
  v28 = &v70;
  do
  {
    v29 = *v66 + 2 * ((v35 << 8) + 4 * v72);
    v30 = v28;
    v31 = 8;
    do
    {
      result = 0;
      do
      {
        *(_WORD *)(v29 + 2 * result) = (unsigned __int8)v30[result] + 1;
        ++result;
      }
      while ( result != 4 );
      v30 += 4;
      v29 += 64;
      --v31;
    }
    while ( v31 );
    v28 += 32;
    ++v66;
  }
  while ( v28 != &v71 );
  return result;
}
