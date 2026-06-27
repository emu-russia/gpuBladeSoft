signed int __cdecl sub_6F8301E0(int a1, int a2)
{
  int v2; // eax@1
  int v3; // ebx@1
  _BYTE *v4; // esi@5
  signed int v5; // edx@7
  signed int v6; // ebp@7
  signed int v7; // edi@7
  int v8; // ecx@8
  int v9; // ecx@8
  int v10; // ecx@12
  char v11; // di@15
  int v12; // ebp@15
  signed int result; // eax@16
  int v14; // edx@19
  char v15; // dl@24
  signed int v16; // eax@29
  signed int v17; // edx@29
  signed int v18; // eax@29
  int v19; // edx@29
  signed int v20; // edx@31
  char v21; // al@31
  int v22; // edi@31
  int v23; // eax@32
  int v24; // edx@33
  int v25; // eax@34
  unsigned int v26; // edx@34
  int v27; // ebx@34
  int v28; // esi@34
  unsigned int v29; // eax@34
  _BYTE *v30; // edx@35
  int v31; // ebx@35
  int v32; // edi@36
  unsigned int v33; // ecx@36
  int v34; // edi@38
  int v35; // ebx@38
  _BYTE *v36; // edx@39
  int v37; // ebx@39
  int v38; // edi@40
  unsigned int v39; // ecx@40
  unsigned __int64 v40; // [sp+10h] [bp-3Ch]@7
  int v41; // [sp+1Ch] [bp-30h]@1
  int v42; // [sp+20h] [bp-2Ch]@1
  int v43; // [sp+24h] [bp-28h]@15
  int v44; // [sp+28h] [bp-24h]@15
  int v45; // [sp+2Ch] [bp-20h]@14

  v2 = 255;
  v3 = a1;
  v41 = *(_DWORD *)(a1 + 28);
  v42 = *(_DWORD *)a1;
  if ( *(_DWORD *)(a1 + 28) <= 255 )
    v2 = *(_DWORD *)(a1 + 28);
  if ( v2 && *(_DWORD *)a1 )
  {
    v4 = *(_BYTE **)(a1 + 16);
    if ( !*(_DWORD *)(a1 + 332) )
    {
      if ( v2 <= 0 )
      {
        v44 = 0;
        v43 = 0;
        v12 = 27;
        v11 = 0;
        v2 = 0;
        goto LABEL_23;
      }
      if ( *v4 != -1 )
      {
        v44 = 8;
        v43 = 4;
        v12 = 28;
        v11 = 1;
        v2 = 1;
        goto LABEL_23;
      }
      v14 = 0;
      while ( ++v14 != v2 )
      {
        if ( v4[4 * v14] != -1 )
        {
          v2 = v14 + 1;
          v12 = v14 + 28;
          v11 = v14 + 1;
          v43 = 4 * (v14 + 1);
          v44 = 8 * (v14 + 1);
          goto LABEL_23;
        }
      }
      v12 = v2 + 27;
      v11 = v2;
      v43 = 4 * v2;
      v44 = 8 * v2;
LABEL_23:
      *(_DWORD *)(a1 + 40) = 1399285583;
      *(_BYTE *)(a1 + 44) = 0;
      *(_BYTE *)(a1 + 45) = 0;
      v45 = a1 + 40;
      if ( *(_DWORD *)v4 & 0x100 )
      {
        v15 = 2;
        v40 = 0i64;
      }
      else
      {
        v40 = 0i64;
        v15 = 3;
      }
      *(_BYTE *)(a1 + 45) = v15;
      v9 = v2;
      goto LABEL_26;
    }
    if ( v2 > 0 )
    {
      v5 = 1;
      v40 = -1i64;
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v10 = v4[4 * v5 - 4];
        v7 += v10;
        if ( v10 == 255 )
        {
          if ( v2 <= v5 )
          {
            v3 = a1;
            v9 = v5;
            *(_DWORD *)(a1 + 40) = 1399285583;
            *(_BYTE *)(a1 + 44) = 0;
            *(_BYTE *)(a1 + 45) = 0;
            v45 = a1 + 40;
            if ( !(*(_DWORD *)v4 & 0x100) )
            {
              v11 = v5;
              v12 = v5 + 27;
              v43 = 4 * v5;
              v44 = 8 * v5;
              goto LABEL_45;
            }
            v11 = v5;
            v12 = v5 + 27;
            v15 = 0;
            v43 = 4 * v9;
            v44 = 8 * v9;
            goto LABEL_26;
          }
        }
        else
        {
          ++v6;
          v8 = *(_DWORD *)(a1 + 20);
          HIDWORD(v40) = *(_DWORD *)(v8 + 8 * v5 - 4);
          LODWORD(v40) = *(_DWORD *)(v8 + 8 * v5 - 8);
          v9 = v5;
          if ( v2 <= v5 || v7 > 4096 && v6 > 3 )
          {
            v3 = a1;
            v12 = v5 + 27;
            v11 = v5;
            v43 = 4 * v5;
            v44 = 8 * v5;
            goto LABEL_44;
          }
        }
        ++v5;
      }
    }
    v44 = 0;
    v43 = 0;
    v12 = 27;
    v11 = 0;
    v40 = -1i64;
    v9 = 0;
LABEL_44:
    *(_DWORD *)(v3 + 40) = 1399285583;
    *(_BYTE *)(v3 + 44) = 0;
    v15 = 0;
    *(_BYTE *)(v3 + 45) = 0;
    v45 = v3 + 40;
    if ( !(*(_DWORD *)v4 & 0x100) )
    {
LABEL_45:
      *(_BYTE *)(v3 + 45) = 1;
      v15 = 1;
    }
LABEL_26:
    if ( v41 == v9 && *(_DWORD *)(v3 + 328) )
      *(_BYTE *)(v3 + 45) = v15 | 4;
    *(_DWORD *)(v3 + 332) = 1;
    *(_BYTE *)(v3 + 46) = v40;
    *(_BYTE *)(v3 + 47) = BYTE1(v40);
    *(_BYTE *)(v3 + 48) = v40 >> 16;
    *(_BYTE *)(v3 + 49) = v40 >> 24;
    *(_BYTE *)(v3 + 50) = BYTE4(v40);
    *(_BYTE *)(v3 + 51) = BYTE5(v40);
    *(_BYTE *)(v3 + 52) = (unsigned __int64)SHIDWORD(v40) >> 16;
    *(_BYTE *)(v3 + 53) = (unsigned __int64)SHIDWORD(v40) >> 24;
    v16 = *(_DWORD *)(v3 + 336);
    *(_BYTE *)(v3 + 54) = v16;
    *(_BYTE *)(v3 + 55) = BYTE1(v16);
    v17 = v16;
    *(_BYTE *)(v3 + 57) = BYTE3(v16);
    v18 = *(_DWORD *)(v3 + 340);
    *(_BYTE *)(v3 + 56) = v17 >> 16;
    v19 = v18 + 1;
    if ( v18 == -1 )
    {
      v19 = 1;
      v18 = 0;
    }
    *(_DWORD *)(v3 + 340) = v19;
    *(_BYTE *)(v3 + 58) = v18;
    *(_BYTE *)(v3 + 62) = 0;
    *(_BYTE *)(v3 + 63) = 0;
    *(_BYTE *)(v3 + 59) = BYTE1(v18);
    v20 = v18 >> 16;
    *(_BYTE *)(v3 + 61) = BYTE3(v18);
    v21 = v11;
    v22 = 0;
    *(_BYTE *)(v3 + 60) = v20;
    *(_BYTE *)(v3 + 64) = 0;
    *(_BYTE *)(v3 + 65) = 0;
    *(_BYTE *)(v3 + 66) = v21;
    if ( v9 > 0 )
    {
      v23 = 0;
      do
      {
        v24 = *(_DWORD *)&v4[4 * v23];
        *(_BYTE *)(v3 + v23++ + 67) = v24;
        v22 += (unsigned __int8)v24;
      }
      while ( v23 != v9 );
    }
    *(_DWORD *)a2 = v45;
    *(_DWORD *)(v3 + 324) = v12;
    *(_DWORD *)(a2 + 4) = v12;
    v25 = *(_DWORD *)(v3 + 12) + v42;
    *(_DWORD *)(a2 + 12) = v22;
    *(_DWORD *)(a2 + 8) = v25;
    *(_DWORD *)(v3 + 28) = v41 - v9;
    memmove(v4, &v4[v43], 4 * (v41 - v9));
    memmove(*(void **)(v3 + 20), (const void *)(*(_DWORD *)(v3 + 20) + v44), 8 * *(_DWORD *)(v3 + 28));
    *(_DWORD *)(v3 + 12) += v22;
    LOBYTE(v26) = 0;
    *(_BYTE *)(*(_DWORD *)a2 + 22) = 0;
    *(_BYTE *)(*(_DWORD *)a2 + 23) = 0;
    *(_BYTE *)(*(_DWORD *)a2 + 24) = 0;
    *(_BYTE *)(*(_DWORD *)a2 + 25) = 0;
    v27 = *(_DWORD *)(a2 + 4);
    v28 = *(_DWORD *)a2;
    v29 = 0;
    if ( v27 > 0 )
    {
      v30 = *(_BYTE **)a2;
      v31 = v28 + v27;
      v29 = 0;
      do
      {
        v32 = *v30++;
        v33 = dword_6FB97F40[v32 ^ (v29 >> 24)] ^ (v29 << 8);
        v29 = dword_6FB97F40[v32 ^ (v29 >> 24)] ^ (v29 << 8);
      }
      while ( v30 != (_BYTE *)v31 );
      v26 = v33 >> 24;
    }
    v34 = a2;
    v35 = *(_DWORD *)(a2 + 12);
    if ( v35 > 0 )
    {
      v36 = *(_BYTE **)(a2 + 8);
      v37 = (int)&v36[v35];
      do
      {
        v38 = *v36++;
        v39 = dword_6FB97F40[v38 ^ (v29 >> 24)] ^ (v29 << 8);
        v29 = dword_6FB97F40[v38 ^ (v29 >> 24)] ^ (v29 << 8);
      }
      while ( v36 != (_BYTE *)v37 );
      v34 = a2;
      v26 = v39 >> 24;
    }
    *(_BYTE *)(v28 + 22) = v29;
    *(_BYTE *)(*(_DWORD *)v34 + 23) = BYTE1(v29);
    *(_BYTE *)(*(_DWORD *)v34 + 24) = v29 >> 16;
    *(_BYTE *)(*(_DWORD *)v34 + 25) = v26;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
