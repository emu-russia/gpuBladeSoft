int __cdecl sub_6F870FC0(int a1, int a2)
{
  int v2; // eax@2
  int v3; // edx@2
  int v4; // ecx@3
  int v6; // esi@8
  unsigned int v7; // ecx@11
  unsigned int v8; // ebx@12
  int v9; // eax@12
  int v10; // eax@15
  int v11; // edx@15
  int v12; // ecx@15
  int v13; // ebx@15
  _WORD *v14; // edx@17
  _WORD *v15; // eax@19
  _WORD *v16; // ecx@22
  _WORD *v17; // ebx@23
  int v18; // edi@23
  int v19; // ecx@25
  int v20; // eax@27
  int v21; // eax@28
  int v22; // ecx@32
  int v23; // eax@34
  int v24; // eax@35
  int v25; // ecx@39
  int v26; // eax@41
  int v27; // eax@42
  int v28; // ecx@46
  int v29; // eax@48
  int v30; // eax@49
  int v31; // ecx@53
  int v32; // eax@55
  int v33; // eax@56
  int v34; // eax@67
  int v35; // eax@75
  int v36; // eax@79
  int v37; // eax@83
  unsigned int v38; // eax@94
  unsigned int v39; // [sp+28h] [bp-140h]@1
  int v40; // [sp+2Ch] [bp-13Ch]@1
  int v41; // [sp+30h] [bp-138h]@9
  int v42; // [sp+38h] [bp-130h]@9
  char v43; // [sp+3Eh] [bp-12Ah]@12
  char v44; // [sp+3Fh] [bp-129h]@14
  int v45; // [sp+40h] [bp-128h]@12
  int v46; // [sp+44h] [bp-124h]@16
  int v47; // [sp+48h] [bp-120h]@16
  int v48; // [sp+4Ch] [bp-11Ch]@16
  int v49; // [sp+50h] [bp-118h]@16
  int v50; // [sp+54h] [bp-114h]@16
  int v51; // [sp+58h] [bp-110h]@16
  _WORD **v52; // [sp+5Ch] [bp-10Ch]@14
  int v53; // [sp+60h] [bp-108h]@16
  signed int v54; // [sp+64h] [bp-104h]@16
  signed int v55; // [sp+68h] [bp-100h]@16
  signed int v56; // [sp+6Ch] [bp-FCh]@16
  signed int v57; // [sp+70h] [bp-F8h]@16
  signed int v58; // [sp+74h] [bp-F4h]@16
  int v59; // [sp+78h] [bp-F0h]@16
  int v60; // [sp+7Ch] [bp-ECh]@16
  int *v61; // [sp+80h] [bp-E8h]@16
  int *v62; // [sp+84h] [bp-E4h]@16
  int *v63; // [sp+88h] [bp-E0h]@16
  int *v64; // [sp+8Ch] [bp-DCh]@16
  int *v65; // [sp+90h] [bp-D8h]@16
  void (__cdecl *v66)(int, int, char *, int, int); // [sp+94h] [bp-D4h]@15
  int v67; // [sp+98h] [bp-D0h]@15
  int v68; // [sp+9Ch] [bp-CCh]@23
  int v69; // [sp+A0h] [bp-C8h]@23
  int v70; // [sp+A4h] [bp-C4h]@23
  int v71; // [sp+A4h] [bp-C4h]@71
  unsigned int v72; // [sp+A8h] [bp-C0h]@23
  int v73; // [sp+ACh] [bp-BCh]@24
  int v74; // [sp+B0h] [bp-B8h]@24
  int v75; // [sp+B4h] [bp-B4h]@24
  _WORD *v76; // [sp+B8h] [bp-B0h]@23
  _WORD *v77; // [sp+BCh] [bp-ACh]@23
  int v78; // [sp+C0h] [bp-A8h]@15
  int v79; // [sp+C0h] [bp-A8h]@23
  int v80; // [sp+C4h] [bp-A4h]@15
  int v81; // [sp+C4h] [bp-A4h]@23
  int v82; // [sp+C8h] [bp-A0h]@15
  int v83; // [sp+C8h] [bp-A0h]@23
  int v84; // [sp+CCh] [bp-9Ch]@15
  unsigned int v85; // [sp+CCh] [bp-9Ch]@23
  char v86; // [sp+D0h] [bp-98h]@60
  __int16 v87; // [sp+D2h] [bp-96h]@26
  __int16 v88; // [sp+D4h] [bp-94h]@54
  __int16 v89; // [sp+E0h] [bp-88h]@33
  __int16 v90; // [sp+E2h] [bp-86h]@47
  __int16 v91; // [sp+F0h] [bp-78h]@40

  v40 = *(_DWORD *)(a1 + 408);
  v39 = *(_DWORD *)(a1 + 288) - 1;
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 124);
    v3 = *(_DWORD *)(a1 + 132);
    if ( v2 > v3 )
      break;
    v4 = *(_DWORD *)(a1 + 416);
    if ( *(_BYTE *)(v4 + 17)
      || v2 == v3 && *(_DWORD *)(a1 + 128) > *(_DWORD *)(a1 + 136) + (unsigned int)(*(_DWORD *)(a1 + 368) == 0) )
    {
      break;
    }
    if ( !(*(int (__cdecl **)(int))v4)(a1) )
      return 0;
  }
  v6 = *(_DWORD *)(a1 + 196);
  if ( *(_DWORD *)(a1 + 36) > 0 )
  {
    v41 = 0;
    v42 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(v6 + 52) )
      {
        v7 = *(_DWORD *)(a1 + 136);
        if ( v39 <= v7 )
        {
          v8 = *(_DWORD *)(v6 + 12);
          v45 = *(_DWORD *)(v6 + 32) % v8;
          if ( v45 )
          {
            v9 = *(_DWORD *)(v6 + 32) % v8;
            v43 = 1;
          }
          else
          {
            v9 = *(_DWORD *)(v6 + 12);
            v45 = *(_DWORD *)(v6 + 12);
            v43 = 1;
          }
        }
        else
        {
          v8 = *(_DWORD *)(v6 + 12);
          v45 = v8;
          v9 = 2 * v8;
          v43 = 0;
        }
        if ( v7 )
        {
          v52 = (_WORD **)((*(int (__cdecl **)(int, _DWORD, int, int, _DWORD))(*(_DWORD *)(a1 + 4) + 32))(
                             a1,
                             *(_DWORD *)(v40 + 4 * v42 + 72),
                             (v7 - 1) * v8,
                             v8 + v9,
                             0)
                         + 4 * *(_DWORD *)(v6 + 12));
          v44 = 0;
        }
        else
        {
          v52 = (_WORD **)(*(int (__cdecl **)(int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)(a1 + 4) + 32))(
                            a1,
                            *(_DWORD *)(v40 + 4 * v42 + 72),
                            0,
                            v9,
                            0);
          v44 = 1;
        }
        v80 = *(_DWORD *)(v40 + 112);
        v10 = *(_DWORD *)(v6 + 80);
        v11 = *(_WORD *)v10;
        v12 = *(_WORD *)(v10 + 2);
        v13 = *(_WORD *)(v10 + 16);
        v78 = *(_WORD *)(v10 + 32);
        v84 = *(_WORD *)(v10 + 18);
        v82 = *(_WORD *)(v10 + 4);
        v66 = *(void (__cdecl **)(int, int, char *, int, int))(*(_DWORD *)(a1 + 428) + 4 * v42 + 4);
        v67 = *(_DWORD *)(a2 + 4 * v42);
        if ( v45 > 0 )
        {
          v62 = (int *)(v41 + v80 + 4);
          v61 = (int *)(v41 + v80 + 8);
          v65 = (int *)(v41 + v80 + 12);
          v64 = (int *)(v41 + v80 + 16);
          v63 = (int *)(v41 + v80 + 20);
          v59 = 9 * v11;
          v53 = 36 * v11;
          v51 = v12 << 7;
          v58 = v12 << 8;
          v50 = v13 << 7;
          v57 = v13 << 8;
          v49 = v78 << 7;
          v56 = v78 << 8;
          v46 = 5 * v11;
          v48 = v84 << 7;
          v55 = v84 << 8;
          v47 = v82 << 7;
          v54 = v82 << 8;
          v60 = 0;
          while ( 1 )
          {
            v14 = v52[v60];
            if ( !v44 || v60 )
              v15 = v52[v60 - 1];
            else
              v15 = *v52;
            v16 = v43 && v45 - 1 == v60 ? v52[v60] : v52[v60 + 1];
            v72 = *(_DWORD *)(v6 + 28) - 1;
            v76 = v15 + 64;
            v17 = v14 + 64;
            v77 = v16 + 64;
            v18 = *v16;
            v69 = *v16;
            v81 = *v14;
            v70 = *v14;
            v83 = *v15;
            v68 = *v15;
            v79 = 0;
            v85 = 0;
            while ( 1 )
            {
              sub_6F868D3C(v17 - 64, &v86, 1);
              if ( v72 > v85 )
              {
                v74 = *v76;
                v75 = *v17;
                v73 = *v77;
              }
              else
              {
                v73 = v18;
                v75 = v81;
                v74 = v83;
              }
              v19 = *v62;
              if ( *v62 && !v87 )
              {
                v20 = v53 * (v70 - v75);
                if ( v20 < 0 )
                {
                  v34 = (v51 - v20) / v58;
                  if ( v19 > 0 && v34 >= 1 << v19 )
                    v34 = (1 << v19) - 1;
                  v21 = -v34;
                }
                else
                {
                  v21 = (v51 + v20) / v58;
                  if ( v19 > 0 && v21 >= 1 << v19 )
                    v21 = (1 << v19) - 1;
                }
                v87 = v21;
              }
              v22 = *v61;
              if ( *v61 && !v89 )
              {
                v23 = v53 * (v83 - v18);
                if ( v23 < 0 )
                {
                  v37 = (v50 - v23) / v57;
                  if ( v22 > 0 && v37 >= 1 << v22 )
                    v37 = (1 << v22) - 1;
                  v24 = -v37;
                }
                else
                {
                  v24 = (v50 + v23) / v57;
                  if ( v22 > 0 && v24 >= 1 << v22 )
                    v24 = (1 << v22) - 1;
                }
                v89 = v24;
              }
              v25 = *v65;
              if ( *v65 && !v91 )
              {
                v26 = v59 * (v18 + v83 + -2 * v81);
                if ( v26 < 0 )
                {
                  v36 = (v49 - v26) / v56;
                  if ( v25 > 0 && v36 >= 1 << v25 )
                    v36 = (1 << v25) - 1;
                  v27 = -v36;
                }
                else
                {
                  v27 = (v49 + v26) / v56;
                  if ( v25 > 0 && v27 >= 1 << v25 )
                    v27 = (1 << v25) - 1;
                }
                v91 = v27;
              }
              v28 = *v64;
              if ( *v64 && !v90 )
              {
                v29 = v46 * (v73 + v68 - v69 - v74);
                if ( v29 < 0 )
                {
                  v35 = (v48 - v29) / v55;
                  if ( v28 > 0 && v35 >= 1 << v28 )
                    v35 = (1 << v28) - 1;
                  v30 = -v35;
                }
                else
                {
                  v30 = (v48 + v29) / v55;
                  if ( v28 > 0 && v30 >= 1 << v28 )
                    v30 = (1 << v28) - 1;
                }
                v90 = v30;
              }
              v31 = *v63;
              if ( *v63 && !v88 )
              {
                v32 = v59 * (v75 + v70 + -2 * v81);
                if ( v32 < 0 )
                {
                  v71 = (v47 - v32) / v54;
                  if ( v31 > 0 && v71 >= 1 << v31 )
                    v71 = (1 << v31) - 1;
                  v33 = -v71;
                }
                else
                {
                  v33 = (v47 + v32) / v54;
                  if ( v31 > 0 && v33 >= 1 << v31 )
                    v33 = (1 << v31) - 1;
                }
                v88 = v33;
              }
              v66(a1, v6, &v86, v67, v79);
              ++v85;
              v76 += 64;
              v17 += 64;
              v77 += 64;
              if ( v72 < v85 )
                break;
              v79 += *(_DWORD *)(v6 + 36);
              v68 = v83;
              v83 = v74;
              v70 = v81;
              v81 = v75;
              v69 = v18;
              v18 = v73;
            }
            if ( v45 <= ++v60 )
              break;
            v67 += 4 * *(_DWORD *)(v6 + 40);
          }
        }
      }
      ++v42;
      v41 += 24;
      if ( *(_DWORD *)(a1 + 36) <= v42 )
        break;
      v6 += 88;
    }
  }
  v38 = *(_DWORD *)(a1 + 136) + 1;
  *(_DWORD *)(a1 + 136) = v38;
  return 4 - (v38 < *(_DWORD *)(a1 + 288));
}
