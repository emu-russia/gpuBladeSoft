signed int __cdecl sub_6F840C8C(int *a1)
{
  int v1; // edx@88
  int v2; // eax@90
  void *v3; // eax@90
  signed int result; // eax@90
  int v5; // eax@92
  void *v6; // eax@92
  int v7; // eax@96
  char v8; // [sp+26h] [bp-82h]@33
  __int16 v9; // [sp+28h] [bp-80h]@33
  __int16 v10; // [sp+2Ah] [bp-7Eh]@33
  __int16 v11; // [sp+2Ch] [bp-7Ch]@33
  __int16 v12; // [sp+2Eh] [bp-7Ah]@33
  int v13; // [sp+30h] [bp-78h]@16
  int v14; // [sp+34h] [bp-74h]@93
  int v15; // [sp+38h] [bp-70h]@92
  int v16; // [sp+3Ch] [bp-6Ch]@92
  int v17; // [sp+40h] [bp-68h]@90
  int v18; // [sp+44h] [bp-64h]@90
  int v19; // [sp+48h] [bp-60h]@88
  unsigned int v20; // [sp+4Ch] [bp-5Ch]@1
  int v21; // [sp+50h] [bp-58h]@1
  int v22; // [sp+54h] [bp-54h]@1
  int v23; // [sp+58h] [bp-50h]@1
  int v24; // [sp+5Ch] [bp-4Ch]@1
  int *v25; // [sp+60h] [bp-48h]@1
  int i; // [sp+64h] [bp-44h]@94
  int v27; // [sp+68h] [bp-40h]@94
  int v28; // [sp+6Ch] [bp-3Ch]@85
  int v29; // [sp+70h] [bp-38h]@85
  int v30; // [sp+74h] [bp-34h]@61
  int v31; // [sp+78h] [bp-30h]@39
  int v32; // [sp+7Ch] [bp-2Ch]@36
  int v33; // [sp+80h] [bp-28h]@10
  int v34; // [sp+84h] [bp-24h]@13
  int v35; // [sp+88h] [bp-20h]@13
  unsigned int v36; // [sp+8Ch] [bp-1Ch]@1
  int v37; // [sp+90h] [bp-18h]@1
  int v38; // [sp+94h] [bp-14h]@1
  int v39; // [sp+98h] [bp-10h]@1
  int v40; // [sp+9Ch] [bp-Ch]@1

  v25 = a1;
  v24 = *a1;
  v23 = **(_DWORD **)v24;
  v22 = *(_DWORD *)(*(_DWORD *)v24 + 4);
  v40 = *(_DWORD *)(v24 + 16);
  v21 = (v40 & 4) != 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  sub_6F842BA7(v23);
  v20 = sub_6F83CEFC(v23) & 0xFFFFFFF7;
  v36 = v40 ^ v20;
  if ( ((unsigned __int8)v40 ^ (unsigned __int8)v20) & 2 )
  {
    if ( v40 & 2 )
    {
      sub_6F842CA9(v23);
    }
    else
    {
      if ( v20 & 1 )
        v38 = 1;
      sub_6F842CE6(v23, 1, -1, -1);
    }
    v36 &= 0xFFFFFFFD;
  }
  if ( !(v20 & 4) || *(_DWORD *)(v24 + 20) & 4 )
    v33 = -1;
  else
    v33 = 100000;
  sub_6F841A8D(v23, 0, v33);
  if ( v21 )
  {
    v34 = (v20 & 1) != 0;
    v35 = 100000;
  }
  else
  {
    v34 = 0;
    v35 = -1;
  }
  if ( v38 )
  {
    if ( !sub_6F8380D8(&v13, v35, *(_DWORD *)(v23 + 732), 100000) || sub_6F83823E(v13) )
    {
      if ( v34 == 1 )
      {
        v38 = 2;
        v34 = 0;
      }
    }
    else
    {
      v38 = 0;
    }
  }
  if ( v36 & 4 )
  {
    if ( v21 )
      sub_6F842C75(v23);
    else
      sub_6F8418E7(v23);
    v36 &= 0xFFFFFFFB;
  }
  if ( v36 & 1 )
  {
    if ( v20 & 1 )
    {
      if ( v38 )
      {
        v38 = 2;
      }
      else if ( v21 )
      {
        sub_6F84194D(v23);
      }
      else if ( v25[4] )
      {
        v8 = 0;
        v9 = *(_BYTE *)v25[4];
        v10 = *(_BYTE *)(v25[4] + 1);
        v11 = *(_BYTE *)(v25[4] + 2);
        v12 = *(_BYTE *)(v25[4] + 1);
        sub_6F8417B0(v23, (int)&v8, 1, 0, 0);
      }
      else
      {
        v39 = 1;
        v34 = 2;
      }
    }
    else
    {
      if ( v21 )
        v32 = 0xFFFF;
      else
        v32 = 255;
      if ( v40 & 0x20 )
      {
        v31 = 0;
        v36 &= 0xFFFFFFDF;
      }
      else
      {
        v31 = 1;
      }
      sub_6F852E68(v23, v32, v31);
    }
    v36 &= 0xFFFFFFFE;
  }
  sub_6F841A8D(v23, v34, v35);
  if ( v36 & 0x10 )
  {
    if ( v40 & 2 )
      sub_6F852C7C(v23);
    else
      v40 &= 0xFFFFFFEF;
    v36 &= 0xFFFFFFEF;
  }
  if ( v36 & 0x20 )
  {
    if ( v40 & 1 )
    {
      if ( v38 != 2 )
        sub_6F852EB3(v23);
    }
    else
    {
      v40 &= 0xFFFFFFDF;
    }
    v36 &= 0xFFFFFFDF;
  }
  if ( v21 )
    sub_6F852C9A(v23);
  if ( v36 )
    sub_6F839044(v23, (int)"png_read_image: unsupported transformation");
  sub_6F83D3D8(v23);
  if ( !v39 && v38 != 2 )
    v37 = sub_6F852D60(v23);
  sub_6F83BBF7(v23, v22);
  v30 = 0;
  if ( *(_BYTE *)(v22 + 25) & 2 )
    v30 |= 2u;
  if ( *(_BYTE *)(v22 + 25) & 4 )
  {
    if ( !v39 && (v38 != 2 || v40 & 1) )
      v30 |= 1u;
  }
  else if ( v39 )
  {
    sub_6F839044(v23, (int)"png_image_read: alpha channel lost");
  }
  if ( *(_BYTE *)(v22 + 24) == 16 )
    v30 |= 4u;
  if ( *(_DWORD *)(v23 + 124) & 1 )
    v30 |= 0x10u;
  if ( v38 == 2 && v40 & 0x20 )
    v30 |= 0x20u;
  if ( *(_DWORD *)(v23 + 124) & 0x20000 || *(_DWORD *)(v23 + 124) & 0x1000000 && !(*(_DWORD *)(v23 + 120) & 0x80) )
  {
    if ( v38 == 2 )
      sub_6F839044(v23, (int)"unexpected alpha swap transformation");
    v30 |= 0x20u;
  }
  if ( v30 != v40 )
    sub_6F839044(v23, (int)"png_read_image: invalid transformations");
  v29 = v25[1];
  v28 = v25[2];
  if ( v21 )
    v28 *= 2;
  if ( v28 < 0 )
  {
    v19 = v29;
    v1 = 1 - *(_DWORD *)(v24 + 12);
    v19 = v1 * v28 + v29;
    v29 += v1 * v28;
  }
  v25[6] = v29;
  v25[7] = v28;
  if ( v39 )
  {
    v2 = sub_6F839DE9(v23, v22);
    v3 = sub_6F83B4D4(v23, v2);
    v18 = (int)v3;
    v25[5] = (int)v3;
    v17 = sub_6F839D4E(v24, sub_6F8400E2, (int)v25);
    v25[5] = 0;
    sub_6F83B5A7(v23, v18);
    result = v17;
  }
  else if ( v38 == 2 )
  {
    v5 = sub_6F839DE9(v23, v22);
    v6 = sub_6F83B4D4(v23, v5);
    v16 = (int)v6;
    v25[5] = (int)v6;
    v15 = sub_6F839D4E(v24, sub_6F840427, (int)v25);
    v25[5] = 0;
    sub_6F83B5A7(v23, v16);
    result = v15;
  }
  else
  {
    v14 = v25[7];
    while ( --v37 >= 0 )
    {
      v27 = *(_DWORD *)(v24 + 12);
      for ( i = v25[6]; ; i += v14 )
      {
        v7 = v27--;
        if ( !v7 )
          break;
        sub_6F83BC7F(v23, i, 0);
      }
    }
    result = 1;
  }
  return result;
}
