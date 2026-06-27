_BYTE *__cdecl sub_6F8379E2(int a1, _BYTE *a2, unsigned int a3, double a4, int a5)
{
  _BYTE *v5; // eax@7
  _BYTE *v6; // eax@51
  _BYTE *v7; // eax@53
  _BYTE *v8; // eax@57
  _BYTE *v9; // edx@59
  _BYTE *v10; // eax@65
  _BYTE *result; // eax@67
  _BYTE *v12; // eax@68
  _BYTE *v13; // eax@69
  int v14; // ecx@72
  _BYTE *v15; // eax@76
  _BYTE *v16; // eax@82
  double v17; // [sp+18h] [bp-60h]@1
  double v18; // [sp+18h] [bp-60h]@15
  double v19; // [sp+18h] [bp-60h]@23
  double v20; // [sp+28h] [bp-50h]@24
  char v21[10]; // [sp+36h] [bp-42h]@72
  int v22; // [sp+40h] [bp-38h]@10
  int v23; // [sp+44h] [bp-34h]@39
  double v24; // [sp+48h] [bp-30h]@11
  unsigned int v25; // [sp+54h] [bp-24h]@69
  int v26; // [sp+58h] [bp-20h]@30
  int v27; // [sp+5Ch] [bp-1Ch]@22
  int v28; // [sp+60h] [bp-18h]@22
  int v29; // [sp+64h] [bp-14h]@20
  double i; // [sp+68h] [bp-10h]@10
  _BYTE *v31; // [sp+84h] [bp+Ch]@68
  _BYTE *v32; // [sp+84h] [bp+Ch]@82
  unsigned int v33; // [sp+88h] [bp+10h]@68
  int v34; // [sp+88h] [bp+10h]@68

  v17 = a4;
  if ( !a5 )
    a5 = 15;
  if ( (unsigned int)a5 > 0x10 )
    a5 = 16;
  if ( a5 + 5 > a3 )
    goto LABEL_86;
  if ( a4 < 0.0 )
  {
    v17 = -a4;
    v5 = a2++;
    *v5 = 45;
    --a3;
  }
  if ( v17 < 2.225073858507201e-308 || v17 > 1.797693134862316e308 )
  {
    if ( v17 < 2.225073858507201e-308 )
    {
      *a2 = 48;
      result = a2 + 1;
      a2[1] = 0;
    }
    else
    {
      v16 = a2;
      v32 = a2 + 1;
      *v16 = 105;
      *v32 = 110;
      v32[1] = 102;
      result = v32 + 2;
      v32[2] = 0;
    }
    return result;
  }
  frexp(v17, &v22);
  v22 = 77 * v22 >> 8;
  for ( i = sub_6F83796C(v22); i < 2.225073858507201e-308 || v17 > i; i = v24 )
  {
    v24 = sub_6F83796C(v22 + 1);
    if ( v24 > 1.797693134862316e308 )
      break;
    ++v22;
  }
  v18 = v17 / i;
  while ( v18 >= 1.0 )
  {
    v18 = v18 / 10.0;
    ++v22;
  }
  if ( v22 >= 0 || v22 < -2 )
  {
    v29 = 0;
  }
  else
  {
    v29 = -v22;
    v22 = 0;
  }
  v28 = v29;
  v27 = 0;
  do
  {
    v19 = v18 * 10.0;
    if ( v27 + v29 - v28 + 1 >= a5 )
    {
      v20 = sub_6F8A7260(v19 + 0.5);
      if ( v20 > 9.0 )
      {
        if ( v29 <= 0 )
        {
          while ( v27 > 0 && v20 > 9.0 )
          {
            v26 = *--a2;
            if ( v22 == -1 )
            {
              if ( v26 == 46 )
              {
                v26 = *--a2;
                ++a3;
                v22 = 1;
              }
            }
            else
            {
              ++v22;
            }
            --v27;
            v20 = (double)(v26 - 47);
          }
          if ( v20 > 9.0 )
          {
            if ( v22 == -1 )
            {
              v23 = *--a2;
              if ( v23 == 46 )
              {
                ++a3;
                v22 = 1;
              }
            }
            else
            {
              ++v22;
            }
            v20 = 1.0;
          }
        }
        else
        {
          --v29;
          v20 = 1.0;
          if ( !v27 )
            --v28;
        }
      }
      v18 = 0.0;
    }
    else
    {
      v18 = sub_6F8A20F0(v19, (int)&v20);
    }
    if ( 0.0 == v20 )
    {
      ++v29;
      if ( !v27 )
        ++v28;
    }
    else
    {
      v27 += v29 - v28;
      v28 = 0;
      while ( v29 > 0 )
      {
        if ( v22 != -1 )
        {
          if ( !v22 )
          {
            v6 = a2++;
            *v6 = 46;
            --a3;
          }
          --v22;
        }
        v7 = a2++;
        *v7 = 48;
        --v29;
      }
      if ( v22 != -1 )
      {
        if ( !v22 )
        {
          v8 = a2++;
          *v8 = 46;
          --a3;
        }
        --v22;
      }
      v9 = a2++;
      *v9 = (signed int)v20 + 48;
      ++v27;
    }
  }
  while ( v27 + v29 - v28 < a5 && v18 > 2.225073858507201e-308 );
  if ( v22 >= -1 && v22 <= 2 )
  {
    while ( --v22 >= 0 )
    {
      v10 = a2++;
      *v10 = 48;
    }
    result = a2;
    *a2 = 0;
    return result;
  }
  v33 = a3 - v27;
  v12 = a2;
  v31 = a2 + 1;
  *v12 = 69;
  v34 = v33 - 1;
  if ( v22 >= 0 )
  {
    v25 = v22;
  }
  else
  {
    v13 = v31++;
    *v13 = 45;
    --v34;
    v25 = -v22;
  }
  v27 = 0;
  while ( v25 )
  {
    v14 = v27++;
    v21[v14] = v25 % 0xA + 48;
    v25 /= 0xAu;
  }
  if ( v34 <= v27 )
LABEL_86:
    sub_6F839044(a1, (int)"ASCII conversion buffer too small");
  while ( v27 > 0 )
  {
    v15 = v31++;
    *v15 = v21[--v27];
  }
  result = v31;
  *v31 = 0;
  return result;
}
