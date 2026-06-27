int __cdecl sub_6F8432D9(int a1)
{
  int v1; // eax@9
  int v2; // eax@10
  int v3; // eax@13
  int v4; // eax@15
  int v5; // eax@20
  int v6; // eax@25
  int v7; // eax@56
  int v8; // eax@73
  unsigned __int16 v9; // ST50_2@74
  unsigned __int16 v10; // ST4C_2@74
  unsigned __int16 v11; // ST4A_2@74
  int v12; // eax@79
  int v13; // eax@106
  int v14; // eax@112
  unsigned __int16 v15; // ST62_2@114
  unsigned __int16 v16; // ST60_2@114
  unsigned __int16 v17; // ST5E_2@114
  int v18; // eax@117
  int result; // eax@118
  __int16 v20; // [sp+1Bh] [bp-7Dh]@110
  unsigned __int8 v21; // [sp+1Dh] [bp-7Bh]@110
  unsigned __int8 v22; // [sp+1Eh] [bp-7Ah]@55
  unsigned __int8 v23; // [sp+1Fh] [bp-79h]@55
  unsigned __int8 v24; // [sp+20h] [bp-78h]@55
  __int16 v25; // [sp+21h] [bp-77h]@55
  char v26; // [sp+23h] [bp-75h]@55
  int v27; // [sp+30h] [bp-68h]@121
  int v28; // [sp+30h] [bp-68h]@126
  int v29; // [sp+30h] [bp-68h]@131
  int v30; // [sp+34h] [bp-64h]@121
  int v31; // [sp+38h] [bp-60h]@103
  int v32; // [sp+3Ch] [bp-5Ch]@103
  BOOL v33; // [sp+40h] [bp-58h]@86
  BOOL v34; // [sp+44h] [bp-54h]@86
  signed int v35; // [sp+54h] [bp-44h]@54
  int v36; // [sp+58h] [bp-40h]@54
  int v37; // [sp+64h] [bp-34h]@110
  int v38; // [sp+68h] [bp-30h]@110
  int l; // [sp+6Ch] [bp-2Ch]@123
  int m; // [sp+6Ch] [bp-2Ch]@128
  int n; // [sp+6Ch] [bp-2Ch]@133
  int k; // [sp+70h] [bp-28h]@110
  int j; // [sp+74h] [bp-24h]@103
  signed int v44; // [sp+78h] [bp-20h]@79
  signed int v45; // [sp+7Ch] [bp-1Ch]@82
  signed int v46; // [sp+80h] [bp-18h]@59
  signed int v47; // [sp+84h] [bp-14h]@59
  signed int i; // [sp+88h] [bp-10h]@69
  BOOL v49; // [sp+8Ch] [bp-Ch]@1

  v49 = 0;
  if ( *(_DWORD *)(a1 + 732) )
  {
    if ( *(_DWORD *)(a1 + 396) )
      v49 = sub_6F842EED(*(_DWORD *)(a1 + 732), *(_DWORD *)(a1 + 396));
    else
      *(_DWORD *)(a1 + 396) = sub_6F8381D3(*(_DWORD *)(a1 + 732));
  }
  else if ( *(_DWORD *)(a1 + 396) )
  {
    *(_DWORD *)(a1 + 732) = sub_6F8381D3(*(_DWORD *)(a1 + 396));
  }
  else
  {
    *(_DWORD *)(a1 + 732) = 100000;
    *(_DWORD *)(a1 + 396) = *(_DWORD *)(a1 + 732);
  }
  *(_WORD *)(a1 + 806) |= 1u;
  if ( v49 )
  {
    v1 = *(_DWORD *)(a1 + 124);
    BYTE1(v1) |= 0x20u;
    *(_DWORD *)(a1 + 124) = v1;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 124);
    BYTE1(v2) &= 0xDFu;
    *(_DWORD *)(a1 + 124) = v2;
  }
  if ( *(_DWORD *)(a1 + 124) & 0x40000 && !(*(_DWORD *)(a1 + 124) & 0x80) )
  {
    *(_DWORD *)(a1 + 124) &= 0xFD7FFEFF;
    v3 = *(_DWORD *)(a1 + 120);
    BYTE1(v3) &= 0xDFu;
    *(_DWORD *)(a1 + 120) = v3;
    *(_WORD *)(a1 + 336) = 0;
  }
  if ( !sub_6F83823E(*(_DWORD *)(a1 + 396)) )
  {
    *(_DWORD *)(a1 + 124) &= 0xFF7FFFFF;
    v4 = *(_DWORD *)(a1 + 120);
    BYTE1(v4) &= 0xDFu;
    *(_DWORD *)(a1 + 120) = v4;
  }
  if ( *(_DWORD *)(a1 + 124) & 0x600000 )
    sub_6F83726F(a1);
  if ( *(_DWORD *)(a1 + 124) & 0x100 )
  {
    if ( !(*(_BYTE *)(a1 + 343) & 2) )
    {
      v5 = *(_DWORD *)(a1 + 116);
      BYTE1(v5) |= 8u;
      *(_DWORD *)(a1 + 116) = v5;
    }
  }
  else if ( *(_DWORD *)(a1 + 124) & 0x80
         && *(_DWORD *)(a1 + 124) & 0x4000
         && *(_WORD *)(a1 + 362) == *(_WORD *)(a1 + 364)
         && *(_WORD *)(a1 + 362) == *(_WORD *)(a1 + 366) )
  {
    v6 = *(_DWORD *)(a1 + 116);
    BYTE1(v6) |= 8u;
    *(_DWORD *)(a1 + 116) = v6;
    *(_WORD *)(a1 + 368) = *(_WORD *)(a1 + 362);
  }
  if ( *(_BYTE *)(a1 + 343) == 3 )
    sub_6F842F35(a1);
  else
    sub_6F843119(a1);
  if ( *(_DWORD *)(a1 + 124) & 0x200
    && *(_DWORD *)(a1 + 124) & 0x80
    && !(*(_DWORD *)(a1 + 124) & 0x100)
    && *(_BYTE *)(a1 + 344) != 16 )
  {
    *(_WORD *)(a1 + 362) = (255 * (unsigned int)*(_WORD *)(a1 + 362) + 32895) >> 16;
    *(_WORD *)(a1 + 364) = (255 * (unsigned int)*(_WORD *)(a1 + 364) + 32895) >> 16;
    *(_WORD *)(a1 + 366) = (255 * (unsigned int)*(_WORD *)(a1 + 366) + 32895) >> 16;
    *(_WORD *)(a1 + 368) = (255 * (unsigned int)*(_WORD *)(a1 + 368) + 32895) >> 16;
  }
  if ( *(_DWORD *)(a1 + 124) & 0x4000400
    && *(_DWORD *)(a1 + 124) & 0x80
    && !(*(_DWORD *)(a1 + 124) & 0x100)
    && *(_BYTE *)(a1 + 344) == 16 )
  {
    *(_WORD *)(a1 + 362) *= 257;
    *(_WORD *)(a1 + 364) *= 257;
    *(_WORD *)(a1 + 366) *= 257;
    *(_WORD *)(a1 + 368) *= 257;
  }
  *(_DWORD *)(a1 + 370) = *(_DWORD *)(a1 + 360);
  *(_DWORD *)(a1 + 374) = *(_DWORD *)(a1 + 364);
  *(_WORD *)(a1 + 378) = *(_WORD *)(a1 + 368);
  if ( *(_DWORD *)(a1 + 124) & 0x2000
    || *(_DWORD *)(a1 + 124) & 0x600000 && (sub_6F83823E(*(_DWORD *)(a1 + 732)) || sub_6F83823E(*(_DWORD *)(a1 + 396)))
    || *(_DWORD *)(a1 + 124) & 0x80
    && (sub_6F83823E(*(_DWORD *)(a1 + 732))
     || sub_6F83823E(*(_DWORD *)(a1 + 396))
     || *(_BYTE *)(a1 + 354) == 3 && sub_6F83823E(*(_DWORD *)(a1 + 356)))
    || *(_DWORD *)(a1 + 124) & 0x800000 && sub_6F83823E(*(_DWORD *)(a1 + 396)) )
  {
    sub_6F838AD0(a1, *(_BYTE *)(a1 + 344));
    if ( *(_DWORD *)(a1 + 124) & 0x80 )
    {
      if ( *(_DWORD *)(a1 + 124) & 0x600000 )
        sub_6F839262(a1, "libpng does not support gamma+background+rgb_to_gray");
      if ( *(_BYTE *)(a1 + 343) == 3 )
      {
        v36 = *(_DWORD *)(a1 + 324);
        v35 = *(_WORD *)(a1 + 328);
        if ( *(_BYTE *)(a1 + 354) == 2 )
        {
          LOBYTE(v25) = *(_BYTE *)(*(_DWORD *)(a1 + 400) + *(_WORD *)(a1 + 362));
          HIBYTE(v25) = *(_BYTE *)(*(_DWORD *)(a1 + 400) + *(_WORD *)(a1 + 364));
          v26 = *(_BYTE *)(*(_DWORD *)(a1 + 400) + *(_WORD *)(a1 + 366));
          v22 = *(_BYTE *)(*(_DWORD *)(a1 + 412) + *(_WORD *)(a1 + 362));
          v23 = *(_BYTE *)(*(_DWORD *)(a1 + 412) + *(_WORD *)(a1 + 364));
          v24 = *(_BYTE *)(*(_DWORD *)(a1 + 412) + *(_WORD *)(a1 + 366));
        }
        else
        {
          v7 = *(_BYTE *)(a1 + 354);
          switch ( v7 )
          {
            case 2:
              v47 = sub_6F8381D3(*(_DWORD *)(a1 + 732));
              v46 = sub_6F8382DD(*(_DWORD *)(a1 + 732), *(_DWORD *)(a1 + 396));
              break;
            case 3:
              v47 = sub_6F8381D3(*(_DWORD *)(a1 + 356));
              v46 = sub_6F8382DD(*(_DWORD *)(a1 + 356), *(_DWORD *)(a1 + 396));
              break;
            case 1:
              v47 = *(_DWORD *)(a1 + 396);
              v46 = 100000;
              break;
            default:
              v47 = 100000;
              v46 = 100000;
              break;
          }
          if ( sub_6F83823E(v46) )
          {
            LOBYTE(v25) = sub_6F838359(*(_WORD *)(a1 + 362), v46);
            HIBYTE(v25) = sub_6F838359(*(_WORD *)(a1 + 364), v46);
            v26 = sub_6F838359(*(_WORD *)(a1 + 366), v46);
          }
          else
          {
            LOBYTE(v25) = *(_WORD *)(a1 + 362);
            HIBYTE(v25) = *(_WORD *)(a1 + 364);
            v26 = *(_WORD *)(a1 + 366);
          }
          if ( sub_6F83823E(v47) )
          {
            v22 = sub_6F838359(*(_WORD *)(a1 + 362), v47);
            v23 = sub_6F838359(*(_WORD *)(a1 + 364), v47);
            v24 = sub_6F838359(*(_WORD *)(a1 + 366), v47);
          }
          else
          {
            v22 = *(_WORD *)(a1 + 362);
            v23 = *(_WORD *)(a1 + 364);
            v24 = *(_WORD *)(a1 + 366);
          }
        }
        for ( i = 0; i < v35; ++i )
        {
          if ( *(_WORD *)(a1 + 336) <= i || *(_BYTE *)(*(_DWORD *)(a1 + 436) + i) == -1 )
          {
            *(_BYTE *)(3 * i + v36) = *(_BYTE *)(*(_DWORD *)(a1 + 400) + *(_BYTE *)(3 * i + v36));
            *(_BYTE *)(3 * i + v36 + 1) = *(_BYTE *)(*(_DWORD *)(a1 + 400) + *(_BYTE *)(3 * i + v36 + 1));
            *(_BYTE *)(3 * i + v36 + 2) = *(_BYTE *)(*(_DWORD *)(a1 + 400) + *(_BYTE *)(3 * i + v36 + 2));
          }
          else if ( *(_BYTE *)(*(_DWORD *)(a1 + 436) + i) )
          {
            v9 = *(_BYTE *)(*(_DWORD *)(a1 + 436) + i) * *(_BYTE *)(*(_DWORD *)(a1 + 412) + *(_BYTE *)(3 * i + v36))
               + v22 * (255 - *(_BYTE *)(*(_DWORD *)(a1 + 436) + i))
               + 128;
            *(_BYTE *)(v36 + 3 * i) = *(_BYTE *)(*(_DWORD *)(a1 + 408) + ((unsigned __int16)(v9 + (v9 >> 8)) >> 8));
            v10 = *(_BYTE *)(*(_DWORD *)(a1 + 436) + i)
                * *(_BYTE *)(*(_DWORD *)(a1 + 412) + *(_BYTE *)(3 * i + v36 + 1))
                + v23 * (255 - *(_BYTE *)(*(_DWORD *)(a1 + 436) + i))
                + 128;
            *(_BYTE *)(v36 + 3 * i + 1) = *(_BYTE *)(*(_DWORD *)(a1 + 408) + ((unsigned __int16)(v10 + (v10 >> 8)) >> 8));
            v11 = *(_BYTE *)(*(_DWORD *)(a1 + 436) + i)
                * *(_BYTE *)(*(_DWORD *)(a1 + 412) + *(_BYTE *)(3 * i + v36 + 2))
                + v24 * (255 - *(_BYTE *)(*(_DWORD *)(a1 + 436) + i))
                + 128;
            *(_BYTE *)(v36 + 3 * i + 2) = *(_BYTE *)(*(_DWORD *)(a1 + 408) + ((unsigned __int16)(v11 + (v11 >> 8)) >> 8));
          }
          else
          {
            v8 = 3 * i + v36;
            *(_WORD *)v8 = v25;
            *(_BYTE *)(v8 + 2) = v26;
          }
        }
        *(_DWORD *)(a1 + 124) &= 0xFFFFDF7F;
      }
      else
      {
        v44 = 100000;
        v12 = *(_BYTE *)(a1 + 354);
        if ( v12 == 2 )
        {
          v45 = sub_6F8381D3(*(_DWORD *)(a1 + 732));
          v44 = sub_6F8382DD(*(_DWORD *)(a1 + 732), *(_DWORD *)(a1 + 396));
        }
        else if ( v12 == 3 )
        {
          v45 = sub_6F8381D3(*(_DWORD *)(a1 + 356));
          v44 = sub_6F8382DD(*(_DWORD *)(a1 + 356), *(_DWORD *)(a1 + 396));
        }
        else
        {
          if ( v12 != 1 )
            sub_6F839044(a1, (int)"invalid background gamma type");
          v45 = *(_DWORD *)(a1 + 396);
        }
        v34 = sub_6F83823E(v45);
        v33 = sub_6F83823E(v44);
        if ( v34 )
          *(_WORD *)(a1 + 378) = sub_6F838464(a1, *(_WORD *)(a1 + 368), v45);
        if ( v33 )
          *(_WORD *)(a1 + 368) = sub_6F838464(a1, *(_WORD *)(a1 + 368), v44);
        if ( *(_WORD *)(a1 + 362) == *(_WORD *)(a1 + 364)
          && *(_WORD *)(a1 + 362) == *(_WORD *)(a1 + 366)
          && *(_WORD *)(a1 + 362) == *(_WORD *)(a1 + 368) )
        {
          *(_WORD *)(a1 + 376) = *(_WORD *)(a1 + 378);
          *(_WORD *)(a1 + 374) = *(_WORD *)(a1 + 376);
          *(_WORD *)(a1 + 372) = *(_WORD *)(a1 + 374);
          *(_WORD *)(a1 + 366) = *(_WORD *)(a1 + 368);
          *(_WORD *)(a1 + 364) = *(_WORD *)(a1 + 366);
          *(_WORD *)(a1 + 362) = *(_WORD *)(a1 + 364);
        }
        else
        {
          if ( v34 )
          {
            *(_WORD *)(a1 + 372) = sub_6F838464(a1, *(_WORD *)(a1 + 362), v45);
            *(_WORD *)(a1 + 374) = sub_6F838464(a1, *(_WORD *)(a1 + 364), v45);
            *(_WORD *)(a1 + 376) = sub_6F838464(a1, *(_WORD *)(a1 + 366), v45);
          }
          if ( v33 )
          {
            *(_WORD *)(a1 + 362) = sub_6F838464(a1, *(_WORD *)(a1 + 362), v44);
            *(_WORD *)(a1 + 364) = sub_6F838464(a1, *(_WORD *)(a1 + 364), v44);
            *(_WORD *)(a1 + 366) = sub_6F838464(a1, *(_WORD *)(a1 + 366), v44);
          }
        }
        *(_BYTE *)(a1 + 354) = 1;
      }
    }
    else if ( *(_BYTE *)(a1 + 343) == 3 && (!(*(_DWORD *)(a1 + 124) & 0x1000) || !(*(_DWORD *)(a1 + 124) & 0x600000)) )
    {
      v32 = *(_DWORD *)(a1 + 324);
      v31 = *(_WORD *)(a1 + 328);
      for ( j = 0; j < v31; ++j )
      {
        *(_BYTE *)(3 * j + v32) = *(_BYTE *)(*(_DWORD *)(a1 + 400) + *(_BYTE *)(3 * j + v32));
        *(_BYTE *)(3 * j + v32 + 1) = *(_BYTE *)(*(_DWORD *)(a1 + 400) + *(_BYTE *)(3 * j + v32 + 1));
        *(_BYTE *)(3 * j + v32 + 2) = *(_BYTE *)(*(_DWORD *)(a1 + 400) + *(_BYTE *)(3 * j + v32 + 2));
      }
      v13 = *(_DWORD *)(a1 + 124);
      BYTE1(v13) &= 0xDFu;
      *(_DWORD *)(a1 + 124) = v13;
    }
  }
  else if ( *(_DWORD *)(a1 + 124) & 0x80 && *(_BYTE *)(a1 + 343) == 3 )
  {
    v38 = *(_WORD *)(a1 + 336);
    v37 = *(_DWORD *)(a1 + 324);
    LOBYTE(v20) = *(_WORD *)(a1 + 362);
    HIBYTE(v20) = *(_WORD *)(a1 + 364);
    v21 = *(_WORD *)(a1 + 366);
    for ( k = 0; k < v38; ++k )
    {
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 436) + k) )
      {
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 436) + k) != -1 )
        {
          v15 = *(_BYTE *)(*(_DWORD *)(a1 + 436) + k) * *(_BYTE *)(3 * k + v37)
              + (unsigned __int8)v20 * (255 - *(_BYTE *)(*(_DWORD *)(a1 + 436) + k))
              + 128;
          *(_BYTE *)(v37 + 3 * k) = (unsigned __int16)(v15 + (v15 >> 8)) >> 8;
          v16 = *(_BYTE *)(*(_DWORD *)(a1 + 436) + k) * *(_BYTE *)(3 * k + v37 + 1)
              + HIBYTE(v20) * (255 - *(_BYTE *)(*(_DWORD *)(a1 + 436) + k))
              + 128;
          *(_BYTE *)(v37 + 3 * k + 1) = (unsigned __int16)(v16 + (v16 >> 8)) >> 8;
          v17 = *(_BYTE *)(*(_DWORD *)(a1 + 436) + k) * *(_BYTE *)(3 * k + v37 + 2)
              + v21 * (255 - *(_BYTE *)(*(_DWORD *)(a1 + 436) + k))
              + 128;
          *(_BYTE *)(v37 + 3 * k + 2) = (unsigned __int16)(v17 + (v17 >> 8)) >> 8;
        }
      }
      else
      {
        v14 = 3 * k + v37;
        *(_WORD *)v14 = v20;
        *(_BYTE *)(v14 + 2) = v21;
      }
    }
    v18 = *(_DWORD *)(a1 + 124);
    LOBYTE(v18) = v18 & 0x7F;
    *(_DWORD *)(a1 + 124) = v18;
  }
  result = *(_DWORD *)(a1 + 124) & 8;
  if ( result )
  {
    result = *(_DWORD *)(a1 + 124) & 0x1000;
    if ( !result )
    {
      result = *(_BYTE *)(a1 + 343);
      if ( (_BYTE)result == 3 )
      {
        v30 = *(_WORD *)(a1 + 328);
        v27 = 8 - *(_BYTE *)(a1 + 424);
        *(_DWORD *)(a1 + 124) &= 0xFFFFFFF7;
        if ( v27 > 0 && v27 <= 7 )
        {
          for ( l = 0; l < v30; ++l )
            *(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * l) = (signed int)*(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * l) >> v27;
        }
        v28 = 8 - *(_BYTE *)(a1 + 425);
        if ( v28 > 0 && v28 <= 7 )
        {
          for ( m = 0; m < v30; ++m )
            *(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * m + 1) = (signed int)*(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * m + 1) >> v28;
        }
        result = 8 - *(_BYTE *)(a1 + 426);
        v29 = 8 - *(_BYTE *)(a1 + 426);
        if ( v29 > 0 && v29 <= 7 )
        {
          for ( n = 0; ; ++n )
          {
            result = n;
            if ( n >= v30 )
              break;
            *(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * n + 2) = (signed int)*(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * n + 2) >> v29;
          }
        }
      }
    }
  }
  return result;
}
