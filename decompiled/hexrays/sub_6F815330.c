int __cdecl sub_6F815330(int a1, int a2, int a3)
{
  int v3; // eax@1
  int result; // eax@3
  int v5; // edx@3
  int v6; // esi@5
  int v7; // ebx@5
  int v8; // ecx@5
  int v9; // eax@5
  int v10; // ebp@5
  int v11; // ecx@5
  int v12; // eax@5
  int v13; // ebp@5
  int v14; // ecx@5
  int v15; // eax@5
  int v16; // ebp@5
  int v17; // ecx@5
  int v18; // eax@5
  int v19; // ebp@5
  int v20; // ecx@5
  int v21; // eax@5
  _WORD *v22; // edi@7
  unsigned int v23; // ebx@8
  unsigned int v24; // esi@10
  _WORD *v25; // edi@10
  signed int v26; // ecx@10
  unsigned int v27; // edx@11
  unsigned int v28; // edx@11
  __int16 v29; // ax@11
  __int16 v30; // bx@11
  int v31; // edx@11
  unsigned int v32; // edx@11
  unsigned int v33; // edx@11
  __int16 v34; // ax@11
  __int16 v35; // si@11
  int v36; // edx@11
  int v37; // ebx@11
  unsigned int v38; // edx@11
  unsigned int v39; // edx@11
  const void *v40; // ebx@12
  const void **v41; // ebp@12
  signed int v42; // esi@13
  int v43; // esi@15
  const void *v44; // edi@16
  int v45; // ebx@22
  int v46; // edi@22
  int v47; // ebx@22
  int v48; // esi@22
  int v49; // ecx@22
  int v50; // [sp+14h] [bp-A8h]@7
  signed int v51; // [sp+18h] [bp-A4h]@12
  int v52; // [sp+18h] [bp-A4h]@22
  const void **v53; // [sp+1Ch] [bp-A0h]@12
  signed int v54; // [sp+1Ch] [bp-A0h]@22
  signed int v55; // [sp+20h] [bp-9Ch]@1
  int v56; // [sp+24h] [bp-98h]@4
  int v57; // [sp+24h] [bp-98h]@10
  signed int v58; // [sp+28h] [bp-94h]@2
  int v59; // [sp+2Ch] [bp-90h]@4
  int v60; // [sp+30h] [bp-8Ch]@6
  int v61; // [sp+34h] [bp-88h]@7
  int v62; // [sp+38h] [bp-84h]@2
  int v63; // [sp+3Ch] [bp-80h]@6
  int v64; // [sp+40h] [bp-7Ch]@5
  int v65; // [sp+44h] [bp-78h]@7
  unsigned int v66; // [sp+48h] [bp-74h]@4
  int v67; // [sp+4Ch] [bp-70h]@7
  unsigned int v68; // [sp+54h] [bp-68h]@4
  int v69; // [sp+58h] [bp-64h]@4
  int i; // [sp+5Ch] [bp-60h]@1
  int v71; // [sp+60h] [bp-5Ch]@5
  int v72; // [sp+64h] [bp-58h]@5
  int v73; // [sp+68h] [bp-54h]@5
  int v74; // [sp+6Ch] [bp-50h]@5
  int v75; // [sp+70h] [bp-4Ch]@5
  int v76; // [sp+74h] [bp-48h]@5
  int v77; // [sp+78h] [bp-44h]@5
  int v78; // [sp+7Ch] [bp-40h]@5
  int v79; // [sp+80h] [bp-3Ch]@5
  int v80; // [sp+84h] [bp-38h]@5
  int v81; // [sp+88h] [bp-34h]@5
  int v82; // [sp+8Ch] [bp-30h]@5
  int v83; // [sp+90h] [bp-2Ch]@5
  int v84; // [sp+94h] [bp-28h]@5
  int v85; // [sp+98h] [bp-24h]@5
  int v86; // [sp+9Ch] [bp-20h]@5

  v3 = a3;
  v55 = 0;
  for ( i = a3; ; v3 = i )
  {
    v62 = v3;
    v58 = 0;
    do
    {
      result = v62;
      v5 = *(_DWORD *)(v62 + 320);
      if ( v5 >= 0 )
      {
        v69 = 0;
        v56 = 0;
        v59 = v55 + 2 * v58;
        v66 = dword_6FB8E988[v55];
        v68 = dword_6FB8E980[v55];
        do
        {
          v6 = v69;
          v7 = *(_DWORD *)(v62 + 328);
          v64 = v69 << 6;
          v8 = *(_DWORD *)(v7 + (v69 << 6) + 8);
          v9 = *(_DWORD *)(v7 + (v69 << 6) + 4);
          v71 = *(_DWORD *)(v7 + (v69 << 6));
          v73 = v8;
          v10 = *(_DWORD *)(v7 + (v69 << 6) + 12);
          v11 = *(_DWORD *)(v7 + (v69 << 6) + 20);
          v72 = v9;
          v12 = *(_DWORD *)(v7 + (v69 << 6) + 16);
          v74 = v10;
          v76 = v11;
          v13 = *(_DWORD *)(v7 + (v69 << 6) + 24);
          v14 = *(_DWORD *)(v7 + (v69 << 6) + 32);
          v75 = v12;
          v15 = *(_DWORD *)(v7 + (v69 << 6) + 28);
          v77 = v13;
          v79 = v14;
          v16 = *(_DWORD *)(v7 + (v69 << 6) + 36);
          v17 = *(_DWORD *)(v7 + (v69 << 6) + 44);
          v78 = v15;
          v18 = *(_DWORD *)(v7 + (v69 << 6) + 40);
          v80 = v16;
          v82 = v17;
          v19 = *(_DWORD *)(v7 + (v69 << 6) + 48);
          v81 = v18;
          v20 = *(_DWORD *)(v7 + (v69 << 6) + 56);
          v21 = *(_DWORD *)(v7 + (v69 << 6) + 52);
          v83 = v19;
          v84 = v21;
          v85 = v20;
          v86 = *(_DWORD *)(v7 + (v69 << 6) + 60);
          if ( v69 == v5 )
          {
            v6 = v69;
            v60 = v56 + 1;
            v63 = v56 + 1;
          }
          else
          {
            v60 = v56 + 1;
            v63 = v56 + *(_DWORD *)(*(_DWORD *)(v62 + 324) + 4 * v69);
          }
          v67 = 4 * v6;
          v22 = (_WORD *)(a3 + 2 * v56);
          v65 = v56;
          v50 = a3 + 2 * v56;
          v61 = v63 + ~v56;
          while ( 2 )
          {
            v23 = (unsigned __int8)v71 * *v22;
            if ( a2 )
              *(_DWORD *)(a2 + 4 * v56) = v23 / 0xA0;
            v57 = a1 + 24 * v56;
            v24 = (4 * (v23 / 0x64) > 0x1000 ? 4096 - 4 * (v23 / 0x64) : 0) + 4 * (v23 / 0x64);
            v25 = *(_WORD **)(v57 + 4 * v59);
            v26 = 1;
            *v25 = v66 - (v24 > v66 ? (unsigned __int16)(v66 - v24) : 0);
            do
            {
              v27 = 4
                  * (*(_WORD *)(v50 + 128)
                   * (unsigned int)*((_BYTE *)&v71 + (unsigned __int8)byte_6FB8E900[v26])
                   / 0x64);
              v28 = (v27 > 0x1000 ? 4096 - v27 : 0) + v27;
              v29 = v28 > v68;
              v30 = v68 - v28;
              v31 = (unsigned __int8)byte_6FB8E901[v26];
              v25[v26] = v68 - (v30 & -v29);
              v32 = 4 * (*(_WORD *)(v50 + 128) * (unsigned int)*((_BYTE *)&v71 + v31) / 0x64);
              v33 = (v32 > 0x1000 ? 4096 - v32 : 0) + v32;
              v34 = v33 > v68;
              v35 = v68 - v33;
              v36 = (unsigned __int8)byte_6FB8E902[v26];
              v25[v26 + 1] = v68 - (v35 & -v34);
              v37 = v26 + 2;
              v38 = 4 * (*(_WORD *)(v50 + 128) * (unsigned int)*((_BYTE *)&v71 + v36) / 0x64);
              v39 = (v38 > 0x1000 ? 4096 - v38 : 0) + v38;
              v26 += 3;
              v25[v37] = v68 - (v39 > v68 ? v68 - v39 : 0);
            }
            while ( v26 != 64 );
            v40 = v25;
            v51 = 0;
            v53 = (const void **)v57;
            v41 = (const void **)v57;
LABEL_13:
            v42 = 3;
            if ( v55 <= v51 )
              v42 = v58;
            result = v51 + 2 * v42;
            v43 = v57 + 4 * result;
            do
            {
              if ( v41 == (const void **)v43 )
              {
                ++v53;
                if ( v55 <= v51 )
                  goto LABEL_21;
                v51 = 1;
                v41 = v53;
                goto LABEL_13;
              }
              v44 = *v41;
              v41 += 2;
              result = memcmp(v40, v44, 0x80u);
            }
            while ( result );
            result = v55 + 2 * v58;
            *(_DWORD *)(v57 + 4 * v59) = v44;
LABEL_21:
            v56 = v60;
            if ( v60 < v63 )
            {
              v45 = *(_DWORD *)(v62 + 328);
              v52 = v60 - v65;
              v46 = v45 + v64;
              v47 = v64 + 64 + v45;
              v48 = *(_DWORD *)(*(_DWORD *)(v62 + 324) + v67);
              v54 = 2 * v48;
              v49 = 0;
              do
              {
                *((_BYTE *)&v71 + v49) = (v48 + 2 * (v61 * *(_BYTE *)(v46 + v49) + v52 * *(_BYTE *)(v47 + v49))) / v54;
                *((_BYTE *)&v71 + v49 + 1) = (v48
                                            + 2 * (v61 * *(_BYTE *)(v46 + v49 + 1) + v52 * *(_BYTE *)(v47 + v49 + 1)))
                                           / v54;
                *((_BYTE *)&v71 + v49 + 2) = (v48
                                            + 2 * (v61 * *(_BYTE *)(v46 + v49 + 2) + v52 * *(_BYTE *)(v47 + v49 + 2)))
                                           / v54;
                *((_BYTE *)&v71 + v49 + 3) = (v48
                                            + 2 * (v61 * *(_BYTE *)(v46 + v49 + 3) + v52 * *(_BYTE *)(v47 + v49 + 3)))
                                           / v54;
                *((_BYTE *)&v72 + v49) = (v48 + 2 * (v61 * *(_BYTE *)(v46 + v49 + 4) + v52 * *(_BYTE *)(v47 + v49 + 4)))
                                       / v54;
                *((_BYTE *)&v72 + v49 + 1) = (v48
                                            + 2 * (v61 * *(_BYTE *)(v46 + v49 + 5) + v52 * *(_BYTE *)(v47 + v49 + 5)))
                                           / v54;
                *((_BYTE *)&v72 + v49 + 2) = (v48
                                            + 2 * (v61 * *(_BYTE *)(v46 + v49 + 6) + v52 * *(_BYTE *)(v47 + v49 + 6)))
                                           / v54;
                *((_BYTE *)&v72 + v49 + 3) = (v48
                                            + 2 * (v61 * *(_BYTE *)(v46 + v49 + 7) + v52 * *(_BYTE *)(v47 + v49 + 7)))
                                           / v54;
                v49 += 8;
              }
              while ( v49 != 64 );
              v50 += 2;
              --v61;
              v22 = (_WORD *)v50;
              ++v60;
              continue;
            }
            break;
          }
          ++v69;
          v5 = *(_DWORD *)(v62 + 320);
        }
        while ( v5 >= v69 );
      }
      ++v58;
      v62 += 12;
    }
    while ( v58 != 3 );
    i += 36;
    if ( v55 == 1 )
      break;
    v55 = 1;
  }
  return result;
}
