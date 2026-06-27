int __usercall sub_6F741150@<eax>(int result@<eax>, int a2@<edx>)
{
  signed int v2; // ecx@2
  signed int v3; // edi@2
  signed int v4; // ebx@5
  signed int v5; // esi@5
  signed int v6; // ecx@8
  signed int v7; // edi@10
  int v8; // ebx@13
  int v9; // ebp@13
  int v10; // ecx@16
  __int16 v11; // si@18
  int v12; // ebx@18
  int v13; // edi@21
  int v14; // ebp@21
  bool v15; // sf@21
  int v16; // edi@21
  int v17; // ecx@23
  int v18; // ebx@23
  signed int v19; // ebp@29
  int v20; // ebx@37
  int i; // ebp@38
  int v22; // ecx@39
  int v23; // edi@40
  int v24; // ebp@42
  int v25; // ecx@42
  int v26; // edi@42
  int v27; // esi@42
  int v28; // ebp@42
  int v29; // ebx@42
  int v30; // ST18_4@42
  unsigned int v31; // ecx@42
  int v32; // ST14_4@42
  int v33; // ST10_4@42
  int v34; // [sp+30h] [bp-ACh]@40
  int v35; // [sp+34h] [bp-A8h]@37
  int v36; // [sp+38h] [bp-A4h]@37
  int v37; // [sp+3Ch] [bp-A0h]@37
  int v38; // [sp+40h] [bp-9Ch]@37
  signed int v39; // [sp+44h] [bp-98h]@38
  int v40; // [sp+48h] [bp-94h]@13
  int v41; // [sp+4Ch] [bp-90h]@18
  int v42; // [sp+50h] [bp-8Ch]@27
  int v43; // [sp+54h] [bp-88h]@27
  int v44; // [sp+58h] [bp-84h]@40
  int v45; // [sp+5Ch] [bp-80h]@40
  signed int v46; // [sp+64h] [bp-78h]@8
  int v47; // [sp+68h] [bp-74h]@8
  int v48; // [sp+6Ch] [bp-70h]@12
  int v49; // [sp+70h] [bp-6Ch]@12
  signed int v50; // [sp+74h] [bp-68h]@10
  int v51; // [sp+78h] [bp-64h]@12
  signed int v52; // [sp+7Ch] [bp-60h]@12
  signed int v53; // [sp+80h] [bp-5Ch]@12
  signed int v54; // [sp+84h] [bp-58h]@12
  int v55; // [sp+88h] [bp-54h]@12
  int v56; // [sp+8Ch] [bp-50h]@12
  signed int v57; // [sp+90h] [bp-4Ch]@12
  int v58; // [sp+94h] [bp-48h]@25
  signed int v59; // [sp+98h] [bp-44h]@28
  int v60; // [sp+9Ch] [bp-40h]@40
  int v61; // [sp+A0h] [bp-3Ch]@39
  int v62; // [sp+A4h] [bp-38h]@29
  int v63; // [sp+A8h] [bp-34h]@29
  int v64; // [sp+ACh] [bp-30h]@40
  int v65; // [sp+B0h] [bp-2Ch]@18
  int v66; // [sp+B4h] [bp-28h]@27
  int v67; // [sp+B8h] [bp-24h]@28
  int v68; // [sp+BCh] [bp-20h]@28

  if ( dword_6FBB9564 )
  {
    v2 = 0;
    v3 = 0;
    if ( dword_6FBB9564 == 1 )
    {
      v2 = 255;
      if ( dword_6FBB9564 == 1 )
        v3 = 255;
    }
    v4 = 0;
    v5 = 0;
    if ( dword_6FBB9564 == 1 )
    {
      v4 = 255;
      if ( dword_6FBB9564 == 1 )
        v5 = 255;
    }
    v47 = 0;
    v46 = v2;
    v6 = 0;
    if ( dword_6FBB9564 == 1 )
      v6 = 255;
    v50 = v3;
    v7 = 0;
    if ( dword_6FBB9564 == 1 )
      v7 = 255;
    v48 = 0;
    v49 = 0;
    v51 = 0;
    v52 = v4;
    v53 = v5;
    v54 = v6;
    v55 = 0;
    v56 = 0;
    v57 = v7;
  }
  else
  {
    v46 = (unsigned __int8)dword_70041E70;
    v47 = BYTE1(dword_70041E70);
    v48 = (unsigned __int8)((unsigned int)dword_70041E70 >> 16);
    v57 = (unsigned __int8)((unsigned int)dword_70041E70 >> 16);
    v56 = BYTE1(dword_70041E70);
    v55 = (unsigned __int8)dword_70041E70;
    v54 = (unsigned __int8)((unsigned int)dword_70041E70 >> 16);
    v53 = BYTE1(dword_70041E70);
    v52 = (unsigned __int8)dword_70041E70;
    v51 = (unsigned __int8)((unsigned int)dword_70041E70 >> 16);
    v50 = BYTE1(dword_70041E70);
    v49 = (unsigned __int8)dword_70041E70;
  }
  v8 = dword_70041E6C;
  v9 = (signed __int16)((signed __int16)(32 * (dword_6FBBDB94 + word_70041E82)) >> 5);
  v40 = (signed __int16)((signed __int16)(32 * (dword_6FBBDB94 + word_70041E82)) >> 5);
  if ( dword_6FBBDB9C - v9 > 0 )
  {
    v8 = dword_70041E6C - (dword_6FBBDB9C - v9);
    v40 = (signed __int16)((signed __int16)(32 * dword_6FBBDB9C) >> 5);
  }
  if ( v40 - dword_6FBBDBA4 < 0 )
  {
    v10 = v8 + v40 - dword_6FBBDBA4;
    if ( v10 > 0 )
      v8 -= v10;
    v11 = (signed __int16)(32 * (dword_6FBBDB90 + word_70041E80)) >> 5;
    v65 = v8;
    v12 = dword_70041E68;
    v41 = v11;
    if ( dword_6FBBDB98 - v11 > 0 )
    {
      v12 = dword_70041E68 - (dword_6FBBDB98 - v11);
      v41 = (signed __int16)((signed __int16)(32 * dword_6FBBDB98) >> 5);
    }
    if ( v41 - dword_6FBBDBA0 < 0 )
    {
      v13 = v12 + v41 - dword_6FBBDBA0;
      v14 = v12 - v13;
      v15 = v13 < 0;
      v16 = v12;
      if ( !v15 && v12 + v41 != dword_6FBBDBA0 )
        v16 = v14;
      v17 = v65;
      v18 = 0;
      if ( v65 < 0 )
        v17 = 0;
      v58 = v16;
      if ( v16 >= 0 )
        v18 = v16;
      v42 = v17 - 1;
      v66 = v18;
      v43 = dword_6FBB52F8 * v40;
      if ( v65 > 0 )
      {
        v68 = a2;
        v67 = result;
        v59 = 0;
        do
        {
          result = dword_6FBB52F8;
          v19 = v43;
          v62 = dword_6FBB52F8 - 1;
          v63 = dword_6FBB52F8 + v43;
          if ( dword_6FBB52F8 )
          {
            do
            {
              result = sub_6F71F0C0(v19);
              if ( result )
              {
                result = v59 / v67;
                if ( v68 == v59 % v67 )
                {
                  v35 = dword_6FBB52F4 * v41;
                  v20 = dword_6FBB52F4 * v41 + dword_6FBB52F4 * (v19 << 10);
                  result = dword_6FBB5068 + 2 * v20;
                  v36 = dword_6FBB5068 + 2 * v20;
                  v37 = dword_6FBB505C + 4 * v20;
                  v38 = v66 - 1;
                  if ( v58 > 0 )
                  {
                    v39 = v19;
                    for ( i = dword_6FBB52F4; ; i = dword_6FBB52F4 )
                    {
                      v22 = i;
                      v61 = i - 1;
                      if ( i )
                      {
                        v64 = i;
                        v44 = v36;
                        v23 = v35;
                        v60 = v35 + i;
                        v45 = v37;
                        v34 = v35;
                        while ( 1 )
                        {
                          v24 = v22 * v41;
                          v25 = v58 * v22;
                          v26 = v23 - v24;
                          v27 = v39 - dword_6FBB52F8 * v40;
                          v28 = v25 - v26;
                          v29 = v65 * dword_6FBB52F8 - v27;
                          v30 = (unsigned __int8)((v26 * (v27 * v54 + v29 * v51) + (v25 - v26) * (v27 * v57 + v29 * v48))
                                                / (unsigned int)(v65 * dword_6FBB52F8 * v25));
                          v31 = v65 * dword_6FBB52F8 * v25;
                          v32 = (unsigned __int8)((v28 * (v27 * v56 + v29 * v47) + v26 * (v27 * v53 + v29 * v50)) / v31);
                          v33 = (unsigned __int8)(((v27 * v55 + v29 * v46) * v28 + (v49 * v29 + v52 * v27) * v26) / v31);
                          v23 = v34 + 1;
                          dword_6FBB5058(v44, v45, v34, v39, v33, v32, v30, 0, 0);
                          v44 += 2;
                          v45 += 4;
                          v34 = v23;
                          if ( v60 == v23 )
                            break;
                          v22 = dword_6FBB52F4;
                        }
                        v36 += 2 * v64;
                        v35 += v61 + 1;
                        v37 += 4 * v64;
                      }
                      result = --v38;
                      if ( v38 == -1 )
                        break;
                    }
                    v19 = v39;
                  }
                }
                ++v59;
              }
              ++v19;
            }
            while ( v19 != v63 );
            v43 += v62 + 1;
          }
          --v42;
        }
        while ( v42 != -1 );
      }
    }
  }
  return result;
}
