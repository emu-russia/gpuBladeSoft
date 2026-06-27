void __cdecl sub_6F84F077(int a1, int a2, int a3, int a4)
{
  int v4; // eax@3
  signed int v5; // eax@41
  signed int v6; // eax@44
  unsigned int v7; // eax@67
  char v8; // [sp+1Ch] [bp-BCh]@61
  int v9; // [sp+24h] [bp-B4h]@60
  size_t v10; // [sp+28h] [bp-B0h]@60
  int v11; // [sp+2Ch] [bp-ACh]@49
  unsigned __int8 v12; // [sp+33h] [bp-A5h]@48
  int v13; // [sp+34h] [bp-A4h]@38
  int v14; // [sp+38h] [bp-A0h]@27
  unsigned __int8 v15; // [sp+3Fh] [bp-99h]@26
  int v16; // [sp+40h] [bp-98h]@22
  int v17; // [sp+44h] [bp-94h]@11
  unsigned __int8 v18; // [sp+4Bh] [bp-8Dh]@10
  int v19; // [sp+4Ch] [bp-8Ch]@6
  int v20; // [sp+50h] [bp-88h]@3
  int jj; // [sp+54h] [bp-84h]@61
  unsigned int ii; // [sp+58h] [bp-80h]@60
  char *v23; // [sp+5Ch] [bp-7Ch]@60
  char *v24; // [sp+60h] [bp-78h]@60
  int l; // [sp+64h] [bp-74h]@48
  unsigned int k; // [sp+68h] [bp-70h]@47
  int v27; // [sp+6Ch] [bp-6Ch]@39
  int v28; // [sp+70h] [bp-68h]@39
  int v29; // [sp+74h] [bp-64h]@39
  int v30; // [sp+78h] [bp-60h]@39
  int v31; // [sp+7Ch] [bp-5Ch]@39
  _BYTE *v32; // [sp+80h] [bp-58h]@38
  _BYTE *v33; // [sp+84h] [bp-54h]@38
  int j; // [sp+88h] [bp-50h]@26
  unsigned int i; // [sp+8Ch] [bp-4Ch]@25
  int v36; // [sp+90h] [bp-48h]@23
  int v37; // [sp+94h] [bp-44h]@23
  int v38; // [sp+98h] [bp-40h]@23
  int v39; // [sp+9Ch] [bp-3Ch]@23
  int v40; // [sp+A0h] [bp-38h]@23
  _BYTE *v41; // [sp+A4h] [bp-34h]@22
  _BYTE *v42; // [sp+A8h] [bp-30h]@22
  int n; // [sp+ACh] [bp-2Ch]@10
  unsigned int m; // [sp+B0h] [bp-28h]@9
  int v45; // [sp+B4h] [bp-24h]@7
  int v46; // [sp+B8h] [bp-20h]@7
  int v47; // [sp+BCh] [bp-1Ch]@7
  int v48; // [sp+C0h] [bp-18h]@7
  int v49; // [sp+C4h] [bp-14h]@7
  _BYTE *v50; // [sp+C8h] [bp-10h]@6
  _BYTE *v51; // [sp+CCh] [bp-Ch]@6

  if ( a2 && a1 )
  {
    v20 = *(_DWORD *)a1 * dword_6FB9AE30[a3];
    v4 = *(_BYTE *)(a1 + 11);
    switch ( v4 )
    {
      case 2:
        v42 = (_BYTE *)(((unsigned int)(*(_DWORD *)a1 - 1) >> 2) + a2);
        v41 = (_BYTE *)(((unsigned int)(v20 - 1) >> 2) + a2);
        v16 = dword_6FB9AE30[a3];
        if ( a4 & 0x10000 )
        {
          v40 = 2 * (((unsigned __int8)*(_DWORD *)a1 + 3) & 3);
          v39 = 2 * (((_BYTE)v20 + 3) & 3);
          v38 = 6;
          v37 = 0;
          v36 = -2;
        }
        else
        {
          v40 = 2 * (~((unsigned __int8)*(_DWORD *)a1 + 3) & 3);
          v39 = 2 * (~((_BYTE)v20 + 3) & 3);
          v38 = 0;
          v37 = 6;
          v36 = 2;
        }
        for ( i = 0; *(_DWORD *)a1 > i; ++i )
        {
          v15 = ((signed int)*v42 >> v40) & 3;
          for ( j = 0; j < v16; ++j )
          {
            v14 = (v15 << v39) | *v41 & (16191 >> (6 - v39));
            *v41 = v14;
            if ( v39 == v37 )
            {
              v39 = v38;
              --v41;
            }
            else
            {
              v39 += v36;
            }
          }
          if ( v40 == v37 )
          {
            v40 = v38;
            --v42;
          }
          else
          {
            v40 += v36;
          }
        }
        break;
      case 4:
        v33 = (_BYTE *)(((unsigned int)(*(_DWORD *)a1 - 1) >> 1) + a2);
        v32 = (_BYTE *)(((unsigned int)(v20 - 1) >> 1) + a2);
        v13 = dword_6FB9AE30[a3];
        if ( a4 & 0x10000 )
        {
          v31 = 4 * (((unsigned __int8)*(_DWORD *)a1 + 1) & 1);
          v30 = 4 * (((_BYTE)v20 + 1) & 1);
          v29 = 4;
          v28 = 0;
          v27 = -4;
        }
        else
        {
          if ( ((unsigned __int8)*(_DWORD *)a1 + 1) & 1 )
            v5 = 0;
          else
            v5 = 4;
          v31 = v5;
          if ( ((_BYTE)v20 + 1) & 1 )
            v6 = 0;
          else
            v6 = 4;
          v30 = v6;
          v29 = 0;
          v28 = 4;
          v27 = 4;
        }
        for ( k = 0; *(_DWORD *)a1 > k; ++k )
        {
          v12 = ((signed int)*v33 >> v31) & 0xF;
          for ( l = 0; l < v13; ++l )
          {
            v11 = (v12 << v30) | *v32 & (3855 >> (4 - v30));
            *v32 = v11;
            if ( v30 == v28 )
            {
              v30 = v29;
              --v32;
            }
            else
            {
              v30 += v27;
            }
          }
          if ( v31 == v28 )
          {
            v31 = v29;
            --v33;
          }
          else
          {
            v31 += v27;
          }
        }
        break;
      case 1:
        v51 = (_BYTE *)(((unsigned int)(*(_DWORD *)a1 - 1) >> 3) + a2);
        v50 = (_BYTE *)(((unsigned int)(v20 - 1) >> 3) + a2);
        v19 = dword_6FB9AE30[a3];
        if ( a4 & 0x10000 )
        {
          v49 = ((unsigned __int8)*(_DWORD *)a1 + 7) & 7;
          v48 = ((_BYTE)v20 + 7) & 7;
          v47 = 7;
          v46 = 0;
          v45 = -1;
        }
        else
        {
          v49 = ~((unsigned __int8)*(_DWORD *)a1 + 7) & 7;
          v48 = ~((_BYTE)v20 + 7) & 7;
          v47 = 0;
          v46 = 7;
          v45 = 1;
        }
        for ( m = 0; *(_DWORD *)a1 > m; ++m )
        {
          v18 = ((signed int)*v51 >> v49) & 1;
          for ( n = 0; n < v19; ++n )
          {
            v17 = (v18 << v48) | *v50 & (32639 >> (7 - v48));
            *v50 = v17;
            if ( v48 == v46 )
            {
              v48 = v47;
              --v50;
            }
            else
            {
              v48 += v45;
            }
          }
          if ( v49 == v46 )
          {
            v49 = v47;
            --v51;
          }
          else
          {
            v49 += v45;
          }
        }
        break;
      default:
        v10 = (unsigned __int8)(*(_BYTE *)(a1 + 11) >> 3);
        v24 = (char *)(v10 * (*(_DWORD *)a1 - 1) + a2);
        v23 = (char *)(v10 * (v20 - 1) + a2);
        v9 = dword_6FB9AE30[a3];
        for ( ii = 0; *(_DWORD *)a1 > ii; ++ii )
        {
          memcpy(&v8, v24, v10);
          for ( jj = 0; jj < v9; ++jj )
          {
            memcpy(v23, &v8, v10);
            v23 -= v10;
          }
          v24 -= v10;
        }
        break;
    }
    *(_DWORD *)a1 = v20;
    if ( *(_BYTE *)(a1 + 11) <= 7u )
      v7 = (v20 * (unsigned int)*(_BYTE *)(a1 + 11) + 7) >> 3;
    else
      v7 = v20 * (unsigned __int8)(*(_BYTE *)(a1 + 11) >> 3);
    *(_DWORD *)(a1 + 4) = v7;
  }
}
