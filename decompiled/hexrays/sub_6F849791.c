unsigned int __cdecl sub_6F849791(unsigned int a1, int a2, int a3)
{
  __int16 v3; // ax@3
  unsigned int result; // eax@5
  int v5; // eax@6
  signed int v6; // eax@27
  _BYTE *v7; // eax@40
  _BYTE *v8; // eax@41
  _BYTE *v9; // eax@42
  _BYTE *v10; // edx@42
  _BYTE *v11; // eax@49
  _BYTE *v12; // eax@50
  _BYTE *v13; // eax@51
  _BYTE *v14; // edx@51
  _BYTE *v15; // eax@65
  _BYTE *v16; // eax@66
  _BYTE *v17; // eax@67
  _BYTE *v18; // ST24_4@67
  _BYTE *v19; // edx@67
  _BYTE *v20; // ST28_4@67
  _BYTE *v21; // eax@67
  _BYTE *v22; // edx@67
  _BYTE *v23; // eax@78
  _BYTE *v24; // eax@79
  _BYTE *v25; // eax@80
  _BYTE *v26; // ST24_4@80
  _BYTE *v27; // edx@80
  _BYTE *v28; // ST28_4@80
  _BYTE *v29; // eax@80
  _BYTE *v30; // edx@80
  _BYTE *v31; // eax@80
  _BYTE *v32; // edx@80
  _BYTE *v33; // eax@80
  _BYTE *v34; // edx@80
  _BYTE *v35; // eax@80
  _BYTE *v36; // edx@80
  char v37; // [sp+3h] [bp-2Dh]@71
  char v38; // [sp+4h] [bp-2Ch]@71
  char v39; // [sp+5h] [bp-2Bh]@71
  char v40; // [sp+6h] [bp-2Ah]@71
  char v41; // [sp+7h] [bp-29h]@71
  char v42; // [sp+8h] [bp-28h]@71
  char v43; // [sp+9h] [bp-27h]@61
  char v44; // [sp+Ah] [bp-26h]@61
  char v45; // [sp+Bh] [bp-25h]@61
  unsigned int v46; // [sp+18h] [bp-18h]@1
  int v47; // [sp+1Ch] [bp-14h]@5
  unsigned int m; // [sp+20h] [bp-10h]@9
  unsigned int k; // [sp+20h] [bp-10h]@19
  unsigned int l; // [sp+20h] [bp-10h]@29
  unsigned int n; // [sp+20h] [bp-10h]@38
  unsigned int ii; // [sp+20h] [bp-10h]@46
  unsigned int i; // [sp+20h] [bp-10h]@61
  unsigned int j; // [sp+20h] [bp-10h]@71
  _BYTE *v55; // [sp+24h] [bp-Ch]@9
  _BYTE *v56; // [sp+24h] [bp-Ch]@19
  _BYTE *v57; // [sp+24h] [bp-Ch]@26
  int v58; // [sp+24h] [bp-Ch]@38
  int v59; // [sp+24h] [bp-Ch]@40
  _BYTE *v60; // [sp+24h] [bp-Ch]@46
  _BYTE *v61; // [sp+24h] [bp-Ch]@49
  int v62; // [sp+24h] [bp-Ch]@61
  int v63; // [sp+24h] [bp-Ch]@65
  _BYTE *v64; // [sp+24h] [bp-Ch]@71
  int v65; // [sp+24h] [bp-Ch]@78
  _BYTE *v66; // [sp+28h] [bp-8h]@9
  _BYTE *v67; // [sp+28h] [bp-8h]@19
  _BYTE *v68; // [sp+28h] [bp-8h]@26
  _BYTE *v69; // [sp+28h] [bp-8h]@38
  _BYTE *v70; // [sp+28h] [bp-8h]@46
  _BYTE *v71; // [sp+28h] [bp-8h]@61
  _BYTE *v72; // [sp+28h] [bp-8h]@71
  int v73; // [sp+2Ch] [bp-4h]@9
  int v74; // [sp+2Ch] [bp-4h]@19
  signed int v75; // [sp+2Ch] [bp-4h]@29

  v46 = *(_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    result = *(_BYTE *)(a1 + 8);
    if ( (_BYTE)result == 2 && a3 )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        v45 = *(_WORD *)(a3 + 2);
        v44 = *(_WORD *)(a3 + 4);
        v43 = *(_WORD *)(a3 + 6);
        v71 = (_BYTE *)(*(_DWORD *)(a1 + 4) - 1 + a2);
        v62 = 4 * v46 - 1 + a2;
        for ( i = 0; i < v46; ++i )
        {
          if ( *(v71 - 2) != v45 || *(v71 - 1) != v44 || *v71 != v43 )
          {
            v16 = (_BYTE *)v62;
            v63 = v62 - 1;
            *v16 = -1;
          }
          else
          {
            v15 = (_BYTE *)v62;
            v63 = v62 - 1;
            *v15 = 0;
          }
          v17 = (_BYTE *)v63;
          v18 = (_BYTE *)(v63 - 1);
          v19 = v71;
          v20 = v71 - 1;
          *v17 = *v19;
          *v18 = *v20;
          v21 = v18 - 1;
          v62 = (int)(v18 - 2);
          v22 = v20 - 1;
          v71 = v20 - 2;
          *v21 = *v22;
        }
      }
      else if ( *(_BYTE *)(a1 + 9) == 16 )
      {
        v42 = *(_WORD *)(a3 + 2) >> 8;
        v41 = *(_WORD *)(a3 + 4) >> 8;
        v40 = *(_WORD *)(a3 + 6) >> 8;
        v39 = *(_WORD *)(a3 + 2);
        v38 = *(_WORD *)(a3 + 4);
        v37 = *(_WORD *)(a3 + 6);
        v72 = (_BYTE *)(*(_DWORD *)(a1 + 4) - 1 + a2);
        v64 = (_BYTE *)(8 * v46 - 1 + a2);
        for ( j = 0; j < v46; ++j )
        {
          if ( *(v72 - 5) != v42
            || *(v72 - 4) != v39
            || *(v72 - 3) != v41
            || *(v72 - 2) != v38
            || *(v72 - 1) != v40
            || *v72 != v37 )
          {
            *v64 = -1;
            v24 = v64 - 1;
            v65 = (int)(v64 - 2);
            *v24 = -1;
          }
          else
          {
            *v64 = 0;
            v23 = v64 - 1;
            v65 = (int)(v64 - 2);
            *v23 = 0;
          }
          v25 = (_BYTE *)v65;
          v26 = (_BYTE *)(v65 - 1);
          v27 = v72;
          v28 = v72 - 1;
          *v25 = *v27;
          v29 = v26--;
          v30 = v28--;
          *v29 = *v30;
          v31 = v26--;
          v32 = v28--;
          *v31 = *v32;
          v33 = v26--;
          v34 = v28--;
          *v33 = *v34;
          *v26 = *v28;
          v35 = v26 - 1;
          v64 = v26 - 2;
          v36 = v28 - 1;
          v72 = v28 - 2;
          *v35 = *v36;
        }
      }
      *(_BYTE *)(a1 + 8) = 6;
      *(_BYTE *)(a1 + 10) = 4;
      *(_BYTE *)(a1 + 11) = 4 * *(_BYTE *)(a1 + 9);
      if ( *(_BYTE *)(a1 + 11) <= 7u )
        result = (v46 * *(_BYTE *)(a1 + 11) + 7) >> 3;
      else
        result = v46 * (unsigned __int8)(*(_BYTE *)(a1 + 11) >> 3);
      *(_DWORD *)(a1 + 4) = result;
    }
  }
  else
  {
    if ( a3 )
      v3 = *(_WORD *)(a3 + 8);
    else
      v3 = 0;
    LOWORD(v47) = v3;
    result = *(_BYTE *)(a1 + 9);
    if ( (unsigned __int8)result <= 7u )
    {
      v5 = *(_BYTE *)(a1 + 9);
      switch ( v5 )
      {
        case 2:
          LOWORD(v47) = 85 * (v47 & 3);
          v67 = (_BYTE *)(((v46 - 1) >> 2) + a2);
          v56 = (_BYTE *)(v46 - 1 + a2);
          v74 = 2 * (~((_BYTE)v46 + 3) & 3);
          for ( k = 0; k < v46; ++k )
          {
            *v56 = 16 * (((signed int)*v67 >> v74) & 3) | 4 * (((signed int)*v67 >> v74) & 3) | ((signed int)*v67 >> v74) & 3 | ((((signed int)*v67 >> v74) & 3) << 6);
            if ( v74 == 6 )
            {
              v74 = 0;
              --v67;
            }
            else
            {
              v74 += 2;
            }
            --v56;
          }
          break;
        case 4:
          LOWORD(v47) = 17 * (v47 & 0xF);
          v68 = (_BYTE *)(((v46 - 1) >> 1) + a2);
          v57 = (_BYTE *)(v46 - 1 + a2);
          if ( ((_BYTE)v46 + 1) & 1 )
            v6 = 0;
          else
            v6 = 4;
          v75 = v6;
          for ( l = 0; l < v46; ++l )
          {
            *v57 = ((signed int)*v68 >> v75) & 0xF | 16 * (((signed int)*v68 >> v75) & 0xF);
            if ( v75 == 4 )
            {
              v75 = 0;
              --v68;
            }
            else
            {
              v75 = 4;
            }
            --v57;
          }
          break;
        case 1:
          LOWORD(v47) = 255 * (v47 & 1);
          v66 = (_BYTE *)(((v46 - 1) >> 3) + a2);
          v55 = (_BYTE *)(v46 - 1 + a2);
          v73 = ~((_BYTE)v46 + 7) & 7;
          for ( m = 0; m < v46; ++m )
          {
            if ( ((signed int)*v66 >> v73) & 1 )
              *v55 = -1;
            else
              *v55 = 0;
            if ( v73 == 7 )
            {
              v73 = 0;
              --v66;
            }
            else
            {
              ++v73;
            }
            --v55;
          }
          break;
      }
      *(_BYTE *)(a1 + 9) = 8;
      *(_BYTE *)(a1 + 11) = 8;
      result = a1;
      *(_DWORD *)(a1 + 4) = v46;
    }
    if ( a3 )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        v47 = (unsigned __int8)v47;
        v69 = (_BYTE *)(v46 - 1 + a2);
        v58 = 2 * v46 - 1 + a2;
        for ( n = 0; n < v46; ++n )
        {
          if ( *v69 == v47 )
          {
            v7 = (_BYTE *)v58;
            v59 = v58 - 1;
            *v7 = 0;
          }
          else
          {
            v8 = (_BYTE *)v58;
            v59 = v58 - 1;
            *v8 = -1;
          }
          v9 = (_BYTE *)v59;
          v58 = v59 - 1;
          v10 = v69--;
          *v9 = *v10;
        }
      }
      else if ( *(_BYTE *)(a1 + 9) == 16 )
      {
        v70 = (_BYTE *)(*(_DWORD *)(a1 + 4) - 1 + a2);
        v60 = (_BYTE *)(2 * *(_DWORD *)(a1 + 4) - 1 + a2);
        for ( ii = 0; ii < v46; ++ii )
        {
          if ( *(v70 - 1) != (unsigned __int16)v47 >> 8 || *v70 != (unsigned __int8)v47 )
          {
            *v60 = -1;
            v12 = v60 - 1;
            v61 = v60 - 2;
            *v12 = -1;
          }
          else
          {
            *v60 = 0;
            v11 = v60 - 1;
            v61 = v60 - 2;
            *v11 = 0;
          }
          *v61 = *v70;
          v13 = v61 - 1;
          v60 = v61 - 2;
          v14 = v70 - 1;
          v70 -= 2;
          *v13 = *v14;
        }
      }
      *(_BYTE *)(a1 + 8) = 4;
      *(_BYTE *)(a1 + 10) = 2;
      *(_BYTE *)(a1 + 11) = 2 * *(_BYTE *)(a1 + 9);
      if ( *(_BYTE *)(a1 + 11) <= 7u )
        result = (v46 * *(_BYTE *)(a1 + 11) + 7) >> 3;
      else
        result = v46 * (unsigned __int8)(*(_BYTE *)(a1 + 11) >> 3);
      *(_DWORD *)(a1 + 4) = result;
    }
  }
  return result;
}
