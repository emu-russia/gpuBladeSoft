signed int __cdecl sub_6F7719D0(int a1, int a2, int a3, int *a4, unsigned __int32 *a5)
{
  signed int result; // eax@1
  unsigned __int32 v6; // eax@4
  unsigned __int32 v7; // edi@4
  unsigned int v8; // edi@4
  signed int v9; // ecx@8
  int v10; // ebx@8
  unsigned __int16 v11; // dx@69
  int v12; // edi@70
  int v13; // [sp+1Ch] [bp-30h]@1
  unsigned int v14; // [sp+20h] [bp-2Ch]@3
  unsigned int v15; // [sp+24h] [bp-28h]@4
  unsigned int v16; // [sp+28h] [bp-24h]@4
  char v17; // [sp+2Ch] [bp-20h]@54
  char v18; // [sp+2Dh] [bp-1Fh]@58
  char v19; // [sp+2Eh] [bp-1Eh]@62
  char v20; // [sp+2Fh] [bp-1Dh]@7
  unsigned __int8 v21; // [sp+30h] [bp-1Ch]@7
  char v22; // [sp+31h] [bp-1Bh]@8
  char v23; // [sp+32h] [bp-1Ah]@12
  char v24; // [sp+33h] [bp-19h]@16
  char v25; // [sp+34h] [bp-18h]@20
  char v26; // [sp+35h] [bp-17h]@24
  char v27; // [sp+36h] [bp-16h]@28
  char v28; // [sp+37h] [bp-15h]@32
  char v29; // [sp+38h] [bp-14h]@36
  char v30; // [sp+39h] [bp-13h]@40
  char v31; // [sp+3Ah] [bp-12h]@44
  char v32; // [sp+3Bh] [bp-11h]@48
  char v33; // [sp+3Ch] [bp-10h]@52
  char v34; // [sp+3Dh] [bp-Fh]@56
  char v35; // [sp+3Eh] [bp-Eh]@60
  char v36; // [sp+3Fh] [bp-Dh]@7

  result = sub_6F771FF0(a2, a3);
  v13 = result;
  if ( !result )
  {
    result = sub_6F7720B0(a2, &v14, 0x10u);
    v13 = result;
    if ( !result )
    {
      v6 = a3 + _byteswap_ulong(v14);
      v7 = _byteswap_ulong(v15);
      *a5 = v6;
      v8 = a3 + v7;
      if ( _byteswap_ulong(v16) + v6 != v8 || a3 == v8 )
        return 2;
      result = sub_6F771FF0(a2, v8);
      v13 = result;
      if ( result )
        return result;
      v36 = v20 + 1;
      result = sub_6F7720B0(a2, &v21, 0x10u);
      v13 = result;
      if ( result )
        return result;
      v9 = v21 < 1u;
      v10 = v21 == (_BYTE)v14;
      if ( v22 )
        v9 = 0;
      if ( v22 != BYTE1(v14) )
        v10 = 0;
      if ( v23 )
        v9 = 0;
      if ( v23 != BYTE2(v14) )
        v10 = 0;
      if ( v24 )
        v9 = 0;
      if ( BYTE3(v14) != v24 )
        v10 = 0;
      if ( v25 )
        v9 = 0;
      if ( (_BYTE)v15 != v25 )
        v10 = 0;
      if ( v26 )
        v9 = 0;
      if ( v26 != BYTE1(v15) )
        v10 = 0;
      if ( v27 )
        v9 = 0;
      if ( v27 != BYTE2(v15) )
        v10 = 0;
      if ( v28 )
        v9 = 0;
      if ( v28 != BYTE3(v15) )
        v10 = 0;
      if ( v29 )
        v9 = 0;
      if ( v29 != (_BYTE)v16 )
        v10 = 0;
      if ( v30 )
        v9 = 0;
      if ( v30 != BYTE1(v16) )
        v10 = 0;
      if ( v31 )
        v9 = 0;
      if ( v31 != BYTE2(v16) )
        v10 = 0;
      if ( v32 )
        v9 = 0;
      if ( v32 != BYTE3(v16) )
        v10 = 0;
      if ( v33 )
        v9 = 0;
      if ( v33 != v17 )
        v10 = 0;
      if ( v34 )
        v9 = 0;
      if ( v34 != v18 )
        v10 = 0;
      if ( v35 )
        v9 = 0;
      if ( v35 != v19 )
        v10 = 0;
      if ( v36 != v20 )
        v10 = 0;
      if ( !v36 )
        result = v9;
      if ( !(result | v10) )
        return 2;
      v13 = sub_6F772040(a2, 8);
      v11 = sub_6F772620(a2, &v13);
      result = v13;
      if ( !v13 )
      {
        v12 = v11 + v8;
        result = sub_6F771FF0(a2, v12);
        if ( !result )
          *a4 = v12;
      }
    }
  }
  return result;
}
