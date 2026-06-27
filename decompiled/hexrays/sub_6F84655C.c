int __cdecl sub_6F84655C(int a1, int a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // eax@7
  _BYTE *v4; // ST68_4@7
  char *v5; // eax@7
  unsigned __int16 *v6; // eax@9
  unsigned __int16 *v7; // eax@12
  unsigned __int16 *v8; // eax@14
  unsigned __int16 *v9; // edx@14
  unsigned __int16 *v10; // eax@19
  _BYTE *v11; // ST58_4@19
  char *v12; // eax@19
  unsigned __int16 *v13; // eax@21
  unsigned __int16 *v14; // eax@22
  unsigned __int16 *v15; // eax@24
  unsigned __int16 *v16; // edx@24
  unsigned __int16 *v17; // ST4C_4@31
  unsigned __int16 v18; // ST0C_2@36
  _BYTE *v19; // eax@37
  _BYTE *v20; // eax@38
  _BYTE *v21; // edx@38
  unsigned __int16 *v22; // ST3C_4@43
  _BYTE *v23; // eax@46
  _BYTE *v24; // eax@47
  _BYTE *v25; // edx@47
  unsigned int v26; // eax@51
  unsigned __int16 v28; // [sp+6h] [bp-6Eh]@43
  unsigned __int16 v29; // [sp+8h] [bp-6Ch]@43
  unsigned __int16 v30; // [sp+Ah] [bp-6Ah]@43
  unsigned __int16 v31; // [sp+14h] [bp-60h]@31
  unsigned __int16 v32; // [sp+16h] [bp-5Eh]@31
  unsigned __int16 v33; // [sp+18h] [bp-5Ch]@31
  unsigned __int8 v34; // [sp+1Bh] [bp-59h]@19
  unsigned __int8 v35; // [sp+1Ch] [bp-58h]@19
  unsigned __int8 v36; // [sp+1Dh] [bp-57h]@19
  unsigned __int8 v37; // [sp+1Eh] [bp-56h]@7
  unsigned __int8 v38; // [sp+1Fh] [bp-55h]@7
  int v39; // [sp+20h] [bp-54h]@3
  unsigned int v40; // [sp+24h] [bp-50h]@3
  int v41; // [sp+28h] [bp-4Ch]@3
  int v42; // [sp+2Ch] [bp-48h]@3
  int v43; // [sp+30h] [bp-44h]@3
  unsigned int l; // [sp+34h] [bp-40h]@42
  unsigned __int16 *v45; // [sp+38h] [bp-3Ch]@42
  unsigned __int16 *v46; // [sp+3Ch] [bp-38h]@42
  unsigned __int16 v47; // [sp+42h] [bp-32h]@34
  unsigned int k; // [sp+44h] [bp-30h]@30
  unsigned __int16 *v49; // [sp+48h] [bp-2Ch]@30
  unsigned __int16 *v50; // [sp+4Ch] [bp-28h]@30
  unsigned int j; // [sp+50h] [bp-24h]@18
  unsigned __int16 *v52; // [sp+54h] [bp-20h]@18
  unsigned __int16 *v53; // [sp+58h] [bp-1Ch]@18
  unsigned __int8 v54; // [sp+5Fh] [bp-15h]@7
  unsigned int i; // [sp+60h] [bp-14h]@6
  unsigned __int16 *v56; // [sp+64h] [bp-10h]@6
  unsigned __int16 *v57; // [sp+68h] [bp-Ch]@6
  int v58; // [sp+6Ch] [bp-8h]@1

  v58 = 0;
  if ( !(*(_BYTE *)(a2 + 8) & 1) && *(_BYTE *)(a2 + 8) & 2 )
  {
    v43 = *(_WORD *)(a1 + 610);
    v42 = *(_WORD *)(a1 + 612);
    v41 = -v43 - v42 + 0x8000;
    v40 = *(_DWORD *)a2;
    v39 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    if ( *(_BYTE *)(a2 + 9) == 8 )
    {
      if ( *(_DWORD *)(a1 + 408) && *(_DWORD *)(a1 + 412) )
      {
        v57 = a3;
        v56 = a3;
        for ( i = 0; i < v40; ++i )
        {
          v3 = v57;
          v4 = (char *)v57 + 1;
          v54 = *(_BYTE *)v3;
          v38 = *v4;
          v5 = v4 + 1;
          v57 = (unsigned __int16 *)(v4 + 2);
          v37 = *v5;
          if ( v54 == v38 && v54 == v37 )
          {
            if ( *(_DWORD *)(a1 + 400) )
              v54 = *(_BYTE *)(*(_DWORD *)(a1 + 400) + v54);
            v7 = v56;
            v56 = (unsigned __int16 *)((char *)v56 + 1);
            *(_BYTE *)v7 = v54;
          }
          else
          {
            v58 |= 1u;
            v6 = v56;
            v56 = (unsigned __int16 *)((char *)v56 + 1);
            *(_BYTE *)v6 = *(_BYTE *)(*(_DWORD *)(a1 + 408)
                                    + ((v42 * *(_BYTE *)(*(_DWORD *)(a1 + 412) + v38)
                                      + v43 * *(_BYTE *)(*(_DWORD *)(a1 + 412) + v54)
                                      + v41 * (unsigned int)*(_BYTE *)(*(_DWORD *)(a1 + 412) + v37)
                                      + 0x4000) >> 15));
          }
          if ( v39 )
          {
            v8 = v56;
            v56 = (unsigned __int16 *)((char *)v56 + 1);
            v9 = v57;
            v57 = (unsigned __int16 *)((char *)v57 + 1);
            *(_BYTE *)v8 = *(_BYTE *)v9;
          }
        }
      }
      else
      {
        v53 = a3;
        v52 = a3;
        for ( j = 0; j < v40; ++j )
        {
          v10 = v53;
          v11 = (char *)v53 + 1;
          v36 = *(_BYTE *)v10;
          v35 = *v11;
          v12 = v11 + 1;
          v53 = (unsigned __int16 *)(v11 + 2);
          v34 = *v12;
          if ( v36 == v35 && v36 == v34 )
          {
            v14 = v52;
            v52 = (unsigned __int16 *)((char *)v52 + 1);
            *(_BYTE *)v14 = v36;
          }
          else
          {
            v58 |= 1u;
            v13 = v52;
            v52 = (unsigned __int16 *)((char *)v52 + 1);
            *(_BYTE *)v13 = (v42 * v35 + v43 * v36 + v41 * (unsigned int)v34) >> 15;
          }
          if ( v39 )
          {
            v15 = v52;
            v52 = (unsigned __int16 *)((char *)v52 + 1);
            v16 = v53;
            v53 = (unsigned __int16 *)((char *)v53 + 1);
            *(_BYTE *)v15 = *(_BYTE *)v16;
          }
        }
      }
    }
    else if ( *(_DWORD *)(a1 + 420) && *(_DWORD *)(a1 + 416) )
    {
      v50 = a3;
      v49 = a3;
      for ( k = 0; k < v40; ++k )
      {
        v33 = _byteswap_ushort(*v50);
        v17 = v50 + 1;
        v32 = _byteswap_ushort(*v17);
        ++v17;
        v31 = _byteswap_ushort(*v17);
        v50 = v17 + 1;
        if ( v33 != v32 || v33 != v31 )
        {
          v18 = (v42
               * *(_WORD *)(2 * (v32 >> 8)
                          + *(_DWORD *)(*(_DWORD *)(a1 + 420)
                                      + 4 * ((signed int)(unsigned __int8)v32 >> *(_DWORD *)(a1 + 392))))
               + v43
               * *(_WORD *)(2 * (v33 >> 8)
                          + *(_DWORD *)(*(_DWORD *)(a1 + 420)
                                      + 4 * ((signed int)(unsigned __int8)v33 >> *(_DWORD *)(a1 + 392))))
               + v41
               * (unsigned int)*(_WORD *)(2 * (v31 >> 8)
                                        + *(_DWORD *)(*(_DWORD *)(a1 + 420)
                                                    + 4 * ((signed int)(unsigned __int8)v31 >> *(_DWORD *)(a1 + 392))))
               + 0x4000) >> 15;
          v47 = *(_WORD *)(2 * (v18 >> 8)
                         + *(_DWORD *)(*(_DWORD *)(a1 + 416)
                                     + 4 * ((signed int)(unsigned __int8)v18 >> *(_DWORD *)(a1 + 392))));
          v58 |= 1u;
        }
        else if ( *(_DWORD *)(a1 + 404) )
        {
          v47 = *(_WORD *)(2 * (v33 >> 8)
                         + *(_DWORD *)(*(_DWORD *)(a1 + 404)
                                     + 4 * ((signed int)(unsigned __int8)v33 >> *(_DWORD *)(a1 + 392))));
        }
        else
        {
          v47 = v33;
        }
        *(_BYTE *)v49 = HIBYTE(v47);
        v19 = (char *)v49 + 1;
        ++v49;
        *v19 = v47;
        if ( v39 )
        {
          *(_BYTE *)v49 = *(_BYTE *)v50;
          v20 = (char *)v49 + 1;
          ++v49;
          v21 = (char *)v50 + 1;
          ++v50;
          *v20 = *v21;
        }
      }
    }
    else
    {
      v46 = a3;
      v45 = a3;
      for ( l = 0; l < v40; ++l )
      {
        v30 = _byteswap_ushort(*v46);
        v22 = v46 + 1;
        v29 = _byteswap_ushort(*v22);
        ++v22;
        v28 = _byteswap_ushort(*v22);
        v46 = v22 + 1;
        if ( v30 != v29 || v30 != v28 )
          v58 |= 1u;
        *(_BYTE *)v45 = (unsigned __int16)((v42 * v29 + v43 * v30 + v41 * (unsigned int)v28 + 0x4000) >> 15) >> 8;
        v23 = (char *)v45 + 1;
        ++v45;
        *v23 = (v42 * v29 + v43 * v30 + v41 * (unsigned int)v28 + 0x4000) >> 15;
        if ( v39 )
        {
          *(_BYTE *)v45 = *(_BYTE *)v46;
          v24 = (char *)v45 + 1;
          ++v45;
          v25 = (char *)v46 + 1;
          ++v46;
          *v24 = *v25;
        }
      }
    }
    *(_BYTE *)(a2 + 10) -= 2;
    *(_BYTE *)(a2 + 8) &= 0xFDu;
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 9) * *(_BYTE *)(a2 + 10);
    if ( *(_BYTE *)(a2 + 11) <= 7u )
      v26 = (v40 * *(_BYTE *)(a2 + 11) + 7) >> 3;
    else
      v26 = v40 * (unsigned __int8)(*(_BYTE *)(a2 + 11) >> 3);
    *(_DWORD *)(a2 + 4) = v26;
  }
  return v58;
}
