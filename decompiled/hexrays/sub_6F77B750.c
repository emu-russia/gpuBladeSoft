int __cdecl sub_6F77B750(int a1)
{
  int (__cdecl **v1)(int); // ebx@1
  int v2; // eax@1
  int v3; // ebx@5
  int result; // eax@5
  int v5; // ebp@88
  int v6; // ebx@89
  int v7; // edx@91
  int (__cdecl **v8)(_DWORD, _DWORD, _DWORD); // [sp+10h] [bp-FCh]@4
  int v9; // [sp+14h] [bp-F8h]@87
  int v10; // [sp+18h] [bp-F4h]@89
  char *v11; // [sp+1Ch] [bp-F0h]@5
  int v12; // [sp+28h] [bp-E4h]@1
  char v13; // [sp+2Ch] [bp-E0h]@7
  int v14; // [sp+30h] [bp-DCh]@87
  char v15; // [sp+34h] [bp-D8h]@7
  char v16; // [sp+35h] [bp-D7h]@22
  char v17; // [sp+36h] [bp-D6h]@33
  char v18; // [sp+37h] [bp-D5h]@48
  __int16 v19; // [sp+38h] [bp-D4h]@8
  __int16 v20; // [sp+3Ah] [bp-D2h]@9
  __int16 v21; // [sp+3Ch] [bp-D0h]@10
  __int16 v22; // [sp+3Eh] [bp-CEh]@11
  __int16 v23; // [sp+40h] [bp-CCh]@12
  __int16 v24; // [sp+42h] [bp-CAh]@13
  __int16 v25; // [sp+44h] [bp-C8h]@14
  __int16 v26; // [sp+46h] [bp-C6h]@15
  __int16 v27; // [sp+48h] [bp-C4h]@16
  __int16 v28; // [sp+4Ah] [bp-C2h]@17
  __int16 v29; // [sp+4Ch] [bp-C0h]@18
  __int16 v30; // [sp+4Eh] [bp-BEh]@19
  __int16 v31; // [sp+50h] [bp-BCh]@20
  __int16 v32; // [sp+52h] [bp-BAh]@21
  __int16 v33; // [sp+54h] [bp-B8h]@23
  __int16 v34; // [sp+56h] [bp-B6h]@24
  __int16 v35; // [sp+58h] [bp-B4h]@25
  __int16 v36; // [sp+5Ah] [bp-B2h]@26
  __int16 v37; // [sp+5Ch] [bp-B0h]@27
  __int16 v38; // [sp+5Eh] [bp-AEh]@28
  __int16 v39; // [sp+60h] [bp-ACh]@29
  __int16 v40; // [sp+62h] [bp-AAh]@30
  __int16 v41; // [sp+64h] [bp-A8h]@31
  __int16 v42; // [sp+66h] [bp-A6h]@32
  __int16 v43; // [sp+68h] [bp-A4h]@34
  __int16 v44; // [sp+6Ah] [bp-A2h]@35
  __int16 v45; // [sp+6Ch] [bp-A0h]@36
  __int16 v46; // [sp+6Eh] [bp-9Eh]@37
  __int16 v47; // [sp+70h] [bp-9Ch]@38
  __int16 v48; // [sp+72h] [bp-9Ah]@39
  __int16 v49; // [sp+74h] [bp-98h]@40
  __int16 v50; // [sp+76h] [bp-96h]@41
  __int16 v51; // [sp+78h] [bp-94h]@42
  __int16 v52; // [sp+7Ah] [bp-92h]@43
  __int16 v53; // [sp+7Ch] [bp-90h]@44
  __int16 v54; // [sp+7Eh] [bp-8Eh]@45
  __int16 v55; // [sp+80h] [bp-8Ch]@46
  __int16 v56; // [sp+82h] [bp-8Ah]@47
  __int16 v57; // [sp+84h] [bp-88h]@49
  __int16 v58; // [sp+86h] [bp-86h]@50
  __int16 v59; // [sp+88h] [bp-84h]@51
  __int16 v60; // [sp+8Ah] [bp-82h]@52
  __int16 v61; // [sp+8Ch] [bp-80h]@53
  __int16 v62; // [sp+8Eh] [bp-7Eh]@54
  __int16 v63; // [sp+90h] [bp-7Ch]@55
  __int16 v64; // [sp+92h] [bp-7Ah]@56
  __int16 v65; // [sp+94h] [bp-78h]@57
  __int16 v66; // [sp+96h] [bp-76h]@58
  int v67; // [sp+98h] [bp-74h]@59
  int v68; // [sp+9Ch] [bp-70h]@59
  int v69; // [sp+A0h] [bp-6Ch]@59
  __int16 v70; // [sp+A4h] [bp-68h]@59
  __int16 v71; // [sp+A6h] [bp-66h]@59
  char v72; // [sp+A8h] [bp-64h]@59
  char v73; // [sp+A9h] [bp-63h]@73
  char v74; // [sp+AAh] [bp-62h]@87
  __int16 v75; // [sp+ACh] [bp-60h]@60
  __int16 v76; // [sp+AEh] [bp-5Eh]@61
  __int16 v77; // [sp+B0h] [bp-5Ch]@62
  __int16 v78; // [sp+B2h] [bp-5Ah]@63
  __int16 v79; // [sp+B4h] [bp-58h]@64
  __int16 v80; // [sp+B6h] [bp-56h]@65
  __int16 v81; // [sp+B8h] [bp-54h]@66
  __int16 v82; // [sp+BAh] [bp-52h]@67
  __int16 v83; // [sp+BCh] [bp-50h]@68
  __int16 v84; // [sp+BEh] [bp-4Eh]@69
  __int16 v85; // [sp+C0h] [bp-4Ch]@70
  __int16 v86; // [sp+C2h] [bp-4Ah]@71
  __int16 v87; // [sp+C4h] [bp-48h]@72
  __int16 v88; // [sp+C6h] [bp-46h]@74
  __int16 v89; // [sp+C8h] [bp-44h]@75
  __int16 v90; // [sp+CAh] [bp-42h]@76
  __int16 v91; // [sp+CCh] [bp-40h]@77
  __int16 v92; // [sp+CEh] [bp-3Eh]@78
  __int16 v93; // [sp+D0h] [bp-3Ch]@79
  __int16 v94; // [sp+D2h] [bp-3Ah]@80
  __int16 v95; // [sp+D4h] [bp-38h]@81
  __int16 v96; // [sp+D6h] [bp-36h]@82
  __int16 v97; // [sp+D8h] [bp-34h]@83
  __int16 v98; // [sp+DAh] [bp-32h]@84
  __int16 v99; // [sp+DCh] [bp-30h]@85
  __int16 v100; // [sp+DEh] [bp-2Eh]@86
  int v101; // [sp+E4h] [bp-28h]@87

  v12 = 0;
  v1 = *(int (__cdecl ***)(int))(*(_DWORD *)(*(_DWORD *)a1 + 656) + 2952);
  v2 = sub_6F76F030(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 96) + 4), "pshinter");
  if ( !v2 || !v1 || !*v1 || (v8 = (int (__cdecl **)(_DWORD, _DWORD, _DWORD))(*v1)(v2)) == 0 )
  {
    v9 = v12;
LABEL_174:
    *(_DWORD *)(a1 + 44) = -1;
    return v9;
  }
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 656);
  v11 = (char *)sub_6F773A50(*(_DWORD *)(*(_DWORD *)a1 + 100), 1028, &v12);
  result = v12;
  if ( v12 )
    return result;
  memset(&v13, 0, 0xC4u);
  v15 = *(_BYTE *)(v3 + 1500);
  if ( v15 )
  {
    v19 = *(_DWORD *)(v3 + 1504);
    if ( v15 != 1 )
    {
      v20 = *(_DWORD *)(v3 + 1508);
      if ( v15 != 2 )
      {
        v21 = *(_DWORD *)(v3 + 1512);
        if ( v15 != 3 )
        {
          v22 = *(_DWORD *)(v3 + 1516);
          if ( v15 != 4 )
          {
            v23 = *(_DWORD *)(v3 + 1520);
            if ( v15 != 5 )
            {
              v24 = *(_DWORD *)(v3 + 1524);
              if ( v15 != 6 )
              {
                v25 = *(_DWORD *)(v3 + 1528);
                if ( v15 != 7 )
                {
                  v26 = *(_DWORD *)(v3 + 1532);
                  if ( v15 != 8 )
                  {
                    v27 = *(_DWORD *)(v3 + 1536);
                    if ( v15 != 9 )
                    {
                      v28 = *(_DWORD *)(v3 + 1540);
                      if ( v15 != 10 )
                      {
                        v29 = *(_DWORD *)(v3 + 1544);
                        if ( v15 != 11 )
                        {
                          v30 = *(_DWORD *)(v3 + 1548);
                          if ( v15 != 12 )
                          {
                            v31 = *(_DWORD *)(v3 + 1552);
                            if ( v15 != 13 )
                              v32 = *(_DWORD *)(v3 + 1556);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v16 = *(_BYTE *)(v3 + 1501);
  if ( v16 )
  {
    v33 = *(_DWORD *)(v3 + 1560);
    if ( v16 != 1 )
    {
      v34 = *(_DWORD *)(v3 + 1564);
      if ( v16 != 2 )
      {
        v35 = *(_DWORD *)(v3 + 1568);
        if ( v16 != 3 )
        {
          v36 = *(_DWORD *)(v3 + 1572);
          if ( v16 != 4 )
          {
            v37 = *(_DWORD *)(v3 + 1576);
            if ( v16 != 5 )
            {
              v38 = *(_DWORD *)(v3 + 1580);
              if ( v16 != 6 )
              {
                v39 = *(_DWORD *)(v3 + 1584);
                if ( v16 != 7 )
                {
                  v40 = *(_DWORD *)(v3 + 1588);
                  if ( v16 != 8 )
                  {
                    v41 = *(_DWORD *)(v3 + 1592);
                    if ( v16 != 9 )
                      v42 = *(_DWORD *)(v3 + 1596);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v17 = *(_BYTE *)(v3 + 1502);
  if ( v17 )
  {
    v43 = *(_DWORD *)(v3 + 1600);
    if ( v17 != 1 )
    {
      v44 = *(_DWORD *)(v3 + 1604);
      if ( v17 != 2 )
      {
        v45 = *(_DWORD *)(v3 + 1608);
        if ( v17 != 3 )
        {
          v46 = *(_DWORD *)(v3 + 1612);
          if ( v17 != 4 )
          {
            v47 = *(_DWORD *)(v3 + 1616);
            if ( v17 != 5 )
            {
              v48 = *(_DWORD *)(v3 + 1620);
              if ( v17 != 6 )
              {
                v49 = *(_DWORD *)(v3 + 1624);
                if ( v17 != 7 )
                {
                  v50 = *(_DWORD *)(v3 + 1628);
                  if ( v17 != 8 )
                  {
                    v51 = *(_DWORD *)(v3 + 1632);
                    if ( v17 != 9 )
                    {
                      v52 = *(_DWORD *)(v3 + 1636);
                      if ( v17 != 10 )
                      {
                        v53 = *(_DWORD *)(v3 + 1640);
                        if ( v17 != 11 )
                        {
                          v54 = *(_DWORD *)(v3 + 1644);
                          if ( v17 != 12 )
                          {
                            v55 = *(_DWORD *)(v3 + 1648);
                            if ( v17 != 13 )
                              v56 = *(_DWORD *)(v3 + 1652);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v18 = *(_BYTE *)(v3 + 1503);
  if ( v18 )
  {
    v57 = *(_DWORD *)(v3 + 1656);
    if ( v18 != 1 )
    {
      v58 = *(_DWORD *)(v3 + 1660);
      if ( v18 != 2 )
      {
        v59 = *(_DWORD *)(v3 + 1664);
        if ( v18 != 3 )
        {
          v60 = *(_DWORD *)(v3 + 1668);
          if ( v18 != 4 )
          {
            v61 = *(_DWORD *)(v3 + 1672);
            if ( v18 != 5 )
            {
              v62 = *(_DWORD *)(v3 + 1676);
              if ( v18 != 6 )
              {
                v63 = *(_DWORD *)(v3 + 1680);
                if ( v18 != 7 )
                {
                  v64 = *(_DWORD *)(v3 + 1684);
                  if ( v18 != 8 )
                  {
                    v65 = *(_DWORD *)(v3 + 1688);
                    if ( v18 != 9 )
                      v66 = *(_DWORD *)(v3 + 1692);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v67 = *(_DWORD *)(v3 + 1696);
  v68 = *(_DWORD *)(v3 + 1700);
  v69 = *(_DWORD *)(v3 + 1704);
  v70 = *(_DWORD *)(v3 + 1708);
  v71 = *(_DWORD *)(v3 + 1712);
  v72 = *(_BYTE *)(v3 + 1716);
  if ( v72 )
  {
    v75 = *(_DWORD *)(v3 + 1720);
    if ( v72 != 1 )
    {
      v76 = *(_DWORD *)(v3 + 1724);
      if ( v72 != 2 )
      {
        v77 = *(_DWORD *)(v3 + 1728);
        if ( v72 != 3 )
        {
          v78 = *(_DWORD *)(v3 + 1732);
          if ( v72 != 4 )
          {
            v79 = *(_DWORD *)(v3 + 1736);
            if ( v72 != 5 )
            {
              v80 = *(_DWORD *)(v3 + 1740);
              if ( v72 != 6 )
              {
                v81 = *(_DWORD *)(v3 + 1744);
                if ( v72 != 7 )
                {
                  v82 = *(_DWORD *)(v3 + 1748);
                  if ( v72 != 8 )
                  {
                    v83 = *(_DWORD *)(v3 + 1752);
                    if ( v72 != 9 )
                    {
                      v84 = *(_DWORD *)(v3 + 1756);
                      if ( v72 != 10 )
                      {
                        v85 = *(_DWORD *)(v3 + 1760);
                        if ( v72 != 11 )
                        {
                          v86 = *(_DWORD *)(v3 + 1764);
                          if ( v72 != 12 )
                            v87 = *(_DWORD *)(v3 + 1768);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v73 = *(_BYTE *)(v3 + 1717);
  if ( v73 )
  {
    v88 = *(_DWORD *)(v3 + 1772);
    if ( v73 != 1 )
    {
      v89 = *(_DWORD *)(v3 + 1776);
      if ( v73 != 2 )
      {
        v90 = *(_DWORD *)(v3 + 1780);
        if ( v73 != 3 )
        {
          v91 = *(_DWORD *)(v3 + 1784);
          if ( v73 != 4 )
          {
            v92 = *(_DWORD *)(v3 + 1788);
            if ( v73 != 5 )
            {
              v93 = *(_DWORD *)(v3 + 1792);
              if ( v73 != 6 )
              {
                v94 = *(_DWORD *)(v3 + 1796);
                if ( v73 != 7 )
                {
                  v95 = *(_DWORD *)(v3 + 1800);
                  if ( v73 != 8 )
                  {
                    v96 = *(_DWORD *)(v3 + 1804);
                    if ( v73 != 9 )
                    {
                      v97 = *(_DWORD *)(v3 + 1808);
                      if ( v73 != 10 )
                      {
                        v98 = *(_DWORD *)(v3 + 1812);
                        if ( v73 != 11 )
                        {
                          v99 = *(_DWORD *)(v3 + 1816);
                          if ( v73 != 12 )
                            v100 = *(_DWORD *)(v3 + 1820);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v74 = *(_BYTE *)(v3 + 1824);
  v101 = *(_DWORD *)(v3 + 1836);
  v14 = *(_DWORD *)(v3 + 1832);
  result = (*v8)(*(_DWORD *)(*(_DWORD *)a1 + 100), &v13, v11);
  v9 = result;
  v12 = result;
  if ( result )
    return result;
  v5 = *(_DWORD *)(v3 + 1896);
  if ( !v5 )
  {
LABEL_175:
    *(_DWORD *)(a1 + 40) = v11;
    goto LABEL_174;
  }
  v10 = v3;
  v6 = (int)&v11[4 * v5];
  while ( 1 )
  {
    v7 = *(_DWORD *)(v10 + 4 * --v5 + 1900);
    memset(&v13, 0, 0xC4u);
    v15 = *(_BYTE *)(v7 + 176);
    if ( v15 )
    {
      v19 = *(_DWORD *)(v7 + 180);
      if ( v15 != 1 )
      {
        v20 = *(_DWORD *)(v7 + 184);
        if ( v15 != 2 )
        {
          v21 = *(_DWORD *)(v7 + 188);
          if ( v15 != 3 )
          {
            v22 = *(_DWORD *)(v7 + 192);
            if ( v15 != 4 )
            {
              v23 = *(_DWORD *)(v7 + 196);
              if ( v15 != 5 )
              {
                v24 = *(_DWORD *)(v7 + 200);
                if ( v15 != 6 )
                {
                  v25 = *(_DWORD *)(v7 + 204);
                  if ( v15 != 7 )
                  {
                    v26 = *(_DWORD *)(v7 + 208);
                    if ( v15 != 8 )
                    {
                      v27 = *(_DWORD *)(v7 + 212);
                      if ( v15 != 9 )
                      {
                        v28 = *(_DWORD *)(v7 + 216);
                        if ( v15 != 10 )
                        {
                          v29 = *(_DWORD *)(v7 + 220);
                          if ( v15 != 11 )
                          {
                            v30 = *(_DWORD *)(v7 + 224);
                            if ( v15 != 12 )
                            {
                              v31 = *(_DWORD *)(v7 + 228);
                              if ( v15 != 13 )
                                v32 = *(_DWORD *)(v7 + 232);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v16 = *(_BYTE *)(v7 + 177);
    if ( v16 )
    {
      v33 = *(_DWORD *)(v7 + 236);
      if ( v16 != 1 )
      {
        v34 = *(_DWORD *)(v7 + 240);
        if ( v16 != 2 )
        {
          v35 = *(_DWORD *)(v7 + 244);
          if ( v16 != 3 )
          {
            v36 = *(_DWORD *)(v7 + 248);
            if ( v16 != 4 )
            {
              v37 = *(_DWORD *)(v7 + 252);
              if ( v16 != 5 )
              {
                v38 = *(_DWORD *)(v7 + 256);
                if ( v16 != 6 )
                {
                  v39 = *(_DWORD *)(v7 + 260);
                  if ( v16 != 7 )
                  {
                    v40 = *(_DWORD *)(v7 + 264);
                    if ( v16 != 8 )
                    {
                      v41 = *(_DWORD *)(v7 + 268);
                      if ( v16 != 9 )
                        v42 = *(_DWORD *)(v7 + 272);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v17 = *(_BYTE *)(v7 + 178);
    if ( v17 )
    {
      v43 = *(_DWORD *)(v7 + 276);
      if ( v17 != 1 )
      {
        v44 = *(_DWORD *)(v7 + 280);
        if ( v17 != 2 )
        {
          v45 = *(_DWORD *)(v7 + 284);
          if ( v17 != 3 )
          {
            v46 = *(_DWORD *)(v7 + 288);
            if ( v17 != 4 )
            {
              v47 = *(_DWORD *)(v7 + 292);
              if ( v17 != 5 )
              {
                v48 = *(_DWORD *)(v7 + 296);
                if ( v17 != 6 )
                {
                  v49 = *(_DWORD *)(v7 + 300);
                  if ( v17 != 7 )
                  {
                    v50 = *(_DWORD *)(v7 + 304);
                    if ( v17 != 8 )
                    {
                      v51 = *(_DWORD *)(v7 + 308);
                      if ( v17 != 9 )
                      {
                        v52 = *(_DWORD *)(v7 + 312);
                        if ( v17 != 10 )
                        {
                          v53 = *(_DWORD *)(v7 + 316);
                          if ( v17 != 11 )
                          {
                            v54 = *(_DWORD *)(v7 + 320);
                            if ( v17 != 12 )
                            {
                              v55 = *(_DWORD *)(v7 + 324);
                              if ( v17 != 13 )
                                v56 = *(_DWORD *)(v7 + 328);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v18 = *(_BYTE *)(v7 + 179);
    if ( v18 )
    {
      v57 = *(_DWORD *)(v7 + 332);
      if ( v18 != 1 )
      {
        v58 = *(_DWORD *)(v7 + 336);
        if ( v18 != 2 )
        {
          v59 = *(_DWORD *)(v7 + 340);
          if ( v18 != 3 )
          {
            v60 = *(_DWORD *)(v7 + 344);
            if ( v18 != 4 )
            {
              v61 = *(_DWORD *)(v7 + 348);
              if ( v18 != 5 )
              {
                v62 = *(_DWORD *)(v7 + 352);
                if ( v18 != 6 )
                {
                  v63 = *(_DWORD *)(v7 + 356);
                  if ( v18 != 7 )
                  {
                    v64 = *(_DWORD *)(v7 + 360);
                    if ( v18 != 8 )
                    {
                      v65 = *(_DWORD *)(v7 + 364);
                      if ( v18 != 9 )
                        v66 = *(_DWORD *)(v7 + 368);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v67 = *(_DWORD *)(v7 + 372);
    v68 = *(_DWORD *)(v7 + 376);
    v69 = *(_DWORD *)(v7 + 380);
    v70 = *(_DWORD *)(v7 + 384);
    v71 = *(_DWORD *)(v7 + 388);
    v72 = *(_BYTE *)(v7 + 392);
    if ( v72 )
    {
      v75 = *(_DWORD *)(v7 + 396);
      if ( v72 != 1 )
      {
        v76 = *(_DWORD *)(v7 + 400);
        if ( v72 != 2 )
        {
          v77 = *(_DWORD *)(v7 + 404);
          if ( v72 != 3 )
          {
            v78 = *(_DWORD *)(v7 + 408);
            if ( v72 != 4 )
            {
              v79 = *(_DWORD *)(v7 + 412);
              if ( v72 != 5 )
              {
                v80 = *(_DWORD *)(v7 + 416);
                if ( v72 != 6 )
                {
                  v81 = *(_DWORD *)(v7 + 420);
                  if ( v72 != 7 )
                  {
                    v82 = *(_DWORD *)(v7 + 424);
                    if ( v72 != 8 )
                    {
                      v83 = *(_DWORD *)(v7 + 428);
                      if ( v72 != 9 )
                      {
                        v84 = *(_DWORD *)(v7 + 432);
                        if ( v72 != 10 )
                        {
                          v85 = *(_DWORD *)(v7 + 436);
                          if ( v72 != 11 )
                          {
                            v86 = *(_DWORD *)(v7 + 440);
                            if ( v72 != 12 )
                              v87 = *(_DWORD *)(v7 + 444);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v73 = *(_BYTE *)(v7 + 393);
    if ( v73 )
    {
      v88 = *(_DWORD *)(v7 + 448);
      if ( v73 != 1 )
      {
        v89 = *(_DWORD *)(v7 + 452);
        if ( v73 != 2 )
        {
          v90 = *(_DWORD *)(v7 + 456);
          if ( v73 != 3 )
          {
            v91 = *(_DWORD *)(v7 + 460);
            if ( v73 != 4 )
            {
              v92 = *(_DWORD *)(v7 + 464);
              if ( v73 != 5 )
              {
                v93 = *(_DWORD *)(v7 + 468);
                if ( v73 != 6 )
                {
                  v94 = *(_DWORD *)(v7 + 472);
                  if ( v73 != 7 )
                  {
                    v95 = *(_DWORD *)(v7 + 476);
                    if ( v73 != 8 )
                    {
                      v96 = *(_DWORD *)(v7 + 480);
                      if ( v73 != 9 )
                      {
                        v97 = *(_DWORD *)(v7 + 484);
                        if ( v73 != 10 )
                        {
                          v98 = *(_DWORD *)(v7 + 488);
                          if ( v73 != 11 )
                          {
                            v99 = *(_DWORD *)(v7 + 492);
                            if ( v73 != 12 )
                              v100 = *(_DWORD *)(v7 + 496);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v74 = *(_BYTE *)(v7 + 500);
    v101 = *(_DWORD *)(v7 + 512);
    v14 = *(_DWORD *)(v7 + 508);
    result = (*v8)(*(_DWORD *)(*(_DWORD *)a1 + 100), &v13, v6);
    v12 = result;
    if ( result )
      return result;
    v6 -= 4;
    if ( !v5 )
      goto LABEL_175;
  }
}
