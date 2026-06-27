signed int __cdecl sub_6F840427(int a1)
{
  int v1; // eax@16
  int v2; // eax@22
  unsigned int v3; // edx@24
  int v4; // eax@25
  signed int v5; // eax@29
  int v6; // eax@65
  unsigned int v7; // edx@67
  int v8; // eax@68
  signed int v9; // eax@72
  unsigned __int16 v11; // [sp+16h] [bp-A2h]@77
  int v12; // [sp+1Ch] [bp-9Ch]@59
  int v13; // [sp+20h] [bp-98h]@59
  int v14; // [sp+24h] [bp-94h]@59
  int v15; // [sp+28h] [bp-90h]@59
  unsigned __int8 v16; // [sp+2Fh] [bp-89h]@47
  __int16 v17; // [sp+34h] [bp-84h]@45
  unsigned __int8 v18; // [sp+36h] [bp-82h]@45
  unsigned __int8 v19; // [sp+37h] [bp-81h]@36
  int v20; // [sp+3Ch] [bp-7Ch]@19
  int v21; // [sp+40h] [bp-78h]@19
  int v22; // [sp+44h] [bp-74h]@1
  unsigned int v23; // [sp+48h] [bp-70h]@1
  int v24; // [sp+4Ch] [bp-6Ch]@1
  int v25; // [sp+50h] [bp-68h]@1
  int **v26; // [sp+54h] [bp-64h]@1
  unsigned int v27; // [sp+5Ch] [bp-5Ch]@77
  unsigned int j; // [sp+60h] [bp-58h]@76
  int v29; // [sp+64h] [bp-54h]@76
  unsigned int v30; // [sp+68h] [bp-50h]@71
  signed int v31; // [sp+6Ch] [bp-4Ch]@74
  int v32; // [sp+70h] [bp-48h]@71
  int v33; // [sp+74h] [bp-44h]@71
  signed int v34; // [sp+78h] [bp-40h]@59
  unsigned int v35; // [sp+7Ch] [bp-3Ch]@48
  unsigned __int8 *l; // [sp+80h] [bp-38h]@46
  int v37; // [sp+84h] [bp-34h]@46
  unsigned int v38; // [sp+88h] [bp-30h]@37
  _BYTE *m; // [sp+8Ch] [bp-2Ch]@35
  int v40; // [sp+90h] [bp-28h]@35
  unsigned int v41; // [sp+94h] [bp-24h]@28
  signed int v42; // [sp+98h] [bp-20h]@31
  signed int v43; // [sp+9Ch] [bp-1Ch]@28
  int v44; // [sp+A0h] [bp-18h]@28
  int v45; // [sp+A4h] [bp-14h]@20
  signed int v46; // [sp+A8h] [bp-10h]@13
  signed int k; // [sp+ACh] [bp-Ch]@19
  signed int i; // [sp+ACh] [bp-Ch]@62

  v26 = *(int ***)a1;
  v25 = ***(_DWORD ***)a1;
  v24 = *(_DWORD *)(**(_DWORD **)a1 + 4);
  v23 = *(_DWORD *)(*(_DWORD *)a1 + 12);
  v22 = *(_DWORD *)(*(_DWORD *)a1 + 8);
  if ( !(*(_DWORD *)(v25 + 124) & 0x600000) )
    sub_6F839044(v25, (int)"lost rgb to gray");
  if ( *(_DWORD *)(v25 + 124) & 0x80 )
    sub_6F839044(v25, (int)"unexpected compose");
  if ( (unsigned __int8)sub_6F83A477(v25, v24) != 2 )
    sub_6F839044(v25, (int)"lost/gained channels");
  if ( !((unsigned int)v26[4] & 4) && (unsigned int)v26[4] & 1 )
    sub_6F839044(v25, (int)"unexpected 8-bit transformation");
  if ( *(_BYTE *)(v25 + 340) )
  {
    if ( *(_BYTE *)(v25 + 340) != 1 )
      sub_6F839044(v25, (int)"unknown interlace type");
    v46 = 7;
  }
  else
  {
    v46 = 1;
  }
  v1 = (unsigned __int8)sub_6F839E63(v25, v24);
  if ( (unsigned __int8)v1 != 8 )
  {
    if ( v1 != 16 )
      sub_6F839044(v25, (int)"unexpected bit depth");
    v15 = *(_DWORD *)(a1 + 24);
    v14 = *(_DWORD *)(a1 + 28) / 2;
    v13 = ((unsigned int)v26[4] & 1) != 0;
    v12 = v13 + 1;
    v34 = 0;
    if ( ((unsigned int)v26[4] & 1) != 0 && (unsigned int)v26[4] & 0x20 )
      v34 = 1;
    for ( i = 0; ; ++i )
    {
      if ( i >= v46 )
        return 1;
      if ( *(_BYTE *)(v25 + 340) == 1 )
      {
        if ( i <= 1 )
          v6 = 7;
        else
          v6 = (1 << ((7 - i) >> 1)) - 1;
        v7 = v22 + v6 - (((i & 1) << (3 - ((i + 1) >> 1))) & 7);
        if ( i <= 1 )
          LOBYTE(v8) = 3;
        else
          v8 = (7 - i) >> 1;
        if ( !(v7 >> v8) )
          continue;
        v33 = v12 * (((i & 1) << (3 - ((i + 1) >> 1))) & 7);
        v32 = v12 << ((7 - i) >> 1);
        v30 = (((i & 1) == 0) << (3 - (i >> 1))) & 7;
        if ( i <= 2 )
          v9 = 8;
        else
          v9 = 8 >> ((i - 1) >> 1);
        v31 = v9;
      }
      else
      {
        v30 = 0;
        v33 = 0;
        v32 = v13 + 1;
        v31 = 1;
      }
      while ( v30 < v23 )
      {
        sub_6F83BC7F(v25, *(_DWORD *)(a1 + 20), 0);
        v29 = *(_DWORD *)(a1 + 20);
        for ( j = 2 * v33 + 2 * v30 * v14 + v15; j < 2 * v12 * v22 + 2 * v30 * v14 + v15; j += 2 * v32 )
        {
          v27 = *(_WORD *)v29;
          v11 = *(_WORD *)(v29 + 2);
          if ( v11 )
          {
            if ( v11 != -1 )
              v27 = (v27 * v11 + 0x7FFF) / 0xFFFF;
          }
          else
          {
            LOWORD(v27) = 0;
          }
          *(_WORD *)(j + 2 * v34) = v27;
          if ( v13 )
            *(_WORD *)(j + 2 * (v34 ^ 1)) = v11;
          v29 += 4;
        }
        v30 += v31;
      }
    }
  }
  v21 = *(_DWORD *)(a1 + 24);
  v20 = *(_DWORD *)(a1 + 28);
  for ( k = 0; k < v46; ++k )
  {
    v45 = *(_DWORD *)(a1 + 24);
    if ( *(_BYTE *)(v25 + 340) == 1 )
    {
      if ( k <= 1 )
        v2 = 7;
      else
        v2 = (1 << ((7 - k) >> 1)) - 1;
      v3 = v22 + v2 - (((k & 1) << (3 - ((k + 1) >> 1))) & 7);
      if ( k <= 1 )
        LOBYTE(v4) = 3;
      else
        v4 = (7 - k) >> 1;
      if ( !(v3 >> v4) )
        continue;
      v44 = ((k & 1) << (3 - ((k + 1) >> 1))) & 7;
      v43 = 1 << ((7 - k) >> 1);
      v41 = (((k & 1) == 0) << (3 - (k >> 1))) & 7;
      if ( k <= 2 )
        v5 = 8;
      else
        v5 = 8 >> ((k - 1) >> 1);
      v42 = v5;
    }
    else
    {
      v41 = 0;
      v44 = 0;
      v42 = 1;
      v43 = 1;
    }
    if ( *(_DWORD *)(a1 + 16) )
    {
      v18 = *(_BYTE *)(*(_DWORD *)(a1 + 16) + 1);
      v17 = word_6FB99080[v18];
      while ( v41 < v23 )
      {
        v37 = *(_DWORD *)(a1 + 20);
        sub_6F83BC7F(v25, *(_DWORD *)(a1 + 20), 0);
        for ( l = (unsigned __int8 *)(v44 + v41 * v20 + v21); (unsigned int)l < v41 * v20 + v21 + v22; l += v43 )
        {
          v16 = *(_BYTE *)(v37 + 1);
          if ( v16 )
          {
            v35 = *(_BYTE *)v37;
            if ( v16 != -1 )
            {
              v35 = (255 - v16) * (unsigned __int16)v17 + (unsigned __int16)word_6FB99080[v35] * v16;
              LOBYTE(v35) = (((v35 & 0x7FFF) * (unsigned __int8)byte_6FB99680[v35 >> 15] >> 12)
                           + (unsigned __int16)word_6FB99280[v35 >> 15]) >> 8;
            }
            *l = v35;
          }
          else
          {
            *l = v18;
          }
          v37 += 2;
        }
        v45 += *(_DWORD *)(a1 + 28);
        v41 += v42;
      }
    }
    else
    {
      while ( v41 < v23 )
      {
        v40 = *(_DWORD *)(a1 + 20);
        sub_6F83BC7F(v25, *(_DWORD *)(a1 + 20), 0);
        for ( m = (_BYTE *)(v44 + v41 * v20 + v21); (unsigned int)m < v41 * v20 + v21 + v22; m += v43 )
        {
          v19 = *(_BYTE *)(v40 + 1);
          if ( v19 )
          {
            v38 = *(_BYTE *)v40;
            if ( v19 != -1 )
            {
              v38 = (255 - v19) * (unsigned __int16)word_6FB99080[*m] + (unsigned __int16)word_6FB99080[v38] * v19;
              LOBYTE(v38) = (((v38 & 0x7FFF) * (unsigned __int8)byte_6FB99680[v38 >> 15] >> 12)
                           + (unsigned __int16)word_6FB99280[v38 >> 15]) >> 8;
            }
            *m = v38;
          }
          v40 += 2;
        }
        v41 += v42;
      }
    }
  }
  return 1;
}
