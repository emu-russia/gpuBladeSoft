int __cdecl sub_6F86C2F4(int a1)
{
  int result; // eax@1
  int v2; // edx@3
  int v3; // eax@3
  int v4; // eax@12
  unsigned int v5; // edi@13
  int v6; // esi@14
  int v7; // ebx@14
  int v8; // eax@17
  int v9; // edx@19
  int v10; // eax@33
  int v11; // eax@34
  int v12; // edx@36
  int v13; // edi@70
  int v14; // eax@70
  int v15; // edi@72
  double v16; // st6@73
  int v17; // ecx@73
  int v18; // edx@73
  unsigned int v19; // eax@85
  int v20; // eax@88
  int v21; // [sp+1Ch] [bp-30h]@1
  signed int v22; // [sp+20h] [bp-2Ch]@2
  int v23; // [sp+24h] [bp-28h]@2
  int v24; // [sp+28h] [bp-24h]@2
  int v25; // [sp+2Ch] [bp-20h]@1

  result = *(_DWORD *)(a1 + 400);
  v21 = *(_DWORD *)(a1 + 400);
  v25 = *(_DWORD *)(a1 + 84);
  if ( *(_DWORD *)(a1 + 76) > 0 )
  {
    v24 = *(_DWORD *)(a1 + 400);
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      v2 = *(_DWORD *)(v25 + 36);
      v3 = *(_DWORD *)(v25 + 40) + (*(_DWORD *)(v25 + 36) << 8);
      if ( v3 == 1799 )
      {
        *(_DWORD *)(v24 + 44) = sub_6F875828;
        v22 = 0;
        goto LABEL_13;
      }
      if ( v3 <= 1799 )
        break;
      if ( v3 == 2827 )
      {
        *(_DWORD *)(v24 + 44) = sub_6F876DB0;
        v22 = 0;
        goto LABEL_13;
      }
      if ( v3 > 2827 )
      {
        if ( v3 == 3591 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F87B144;
          v22 = 0;
          goto LABEL_13;
        }
        if ( v3 <= 3591 )
        {
          if ( v3 == 3084 )
          {
            *(_DWORD *)(v24 + 44) = sub_6F877728;
            v22 = 0;
            goto LABEL_13;
          }
          if ( v3 == 3341 )
          {
            *(_DWORD *)(v24 + 44) = sub_6F877FE0;
            v22 = 0;
            goto LABEL_13;
          }
          if ( v3 == 3078 )
          {
            *(_DWORD *)(v24 + 44) = sub_6F87B6BC;
            v22 = 0;
            goto LABEL_13;
          }
          goto LABEL_12;
        }
        if ( v3 == 3855 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F8794C4;
          v22 = 0;
          goto LABEL_13;
        }
        if ( v3 <= 3855 )
        {
          if ( v3 != 3598 )
            goto LABEL_12;
          *(_DWORD *)(v24 + 44) = sub_6F878BA8;
          v22 = 0;
        }
        else
        {
          if ( v3 != 4104 )
          {
            if ( v3 == 4112 )
            {
              *(_DWORD *)(v24 + 44) = sub_6F879E90;
              v22 = 0;
              goto LABEL_13;
            }
            goto LABEL_12;
          }
          *(_DWORD *)(v24 + 44) = sub_6F87AA98;
          v22 = 0;
        }
LABEL_13:
        v5 = *(_DWORD *)(v25 + 16);
        if ( v5 > 3 )
          goto LABEL_32;
        goto LABEL_14;
      }
      if ( v3 == 2064 )
      {
        *(_DWORD *)(v24 + 44) = sub_6F87C48C;
        v22 = 0;
        goto LABEL_13;
      }
      if ( v3 <= 2064 )
      {
        if ( v3 == 2052 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F87BEEC;
          v22 = 0;
          goto LABEL_13;
        }
        if ( v3 != 2056 )
        {
          if ( v3 == 1806 )
          {
            *(_DWORD *)(v24 + 44) = sub_6F87CD80;
            v22 = 0;
            goto LABEL_13;
          }
          goto LABEL_12;
        }
        v19 = *(_DWORD *)(a1 + 220);
        if ( v19 == 1 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F875178;
          v22 = 1;
        }
        else if ( v19 < 1 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F8753E4;
          v22 = 0;
        }
        else if ( v19 == 2 )
        {
          *(_DWORD *)(v24 + 100) = sub_6F874F6C;
          v22 = 2;
        }
        else
        {
          v20 = *(_DWORD *)a1;
          *(_DWORD *)(v20 + 20) = 49;
          (*(void (__cdecl **)(int))v20)(a1);
        }
        goto LABEL_13;
      }
      if ( v3 == 2565 )
      {
        *(_DWORD *)(v24 + 44) = sub_6F87BB48;
        v22 = 0;
        goto LABEL_13;
      }
      if ( v3 == 2570 )
      {
        *(_DWORD *)(v24 + 44) = sub_6F87683C;
        v22 = 0;
        goto LABEL_13;
      }
      if ( v3 != 2313 )
        goto LABEL_12;
      *(_DWORD *)(v24 + 44) = sub_6F8763F8;
      v22 = 0;
      v5 = *(_DWORD *)(v25 + 16);
      if ( v5 > 3 )
      {
LABEL_32:
        v6 = v5 + 20;
        goto LABEL_33;
      }
LABEL_14:
      v6 = v5 + 20;
      v7 = *(_DWORD *)(a1 + 4 * (v5 + 20) + 8);
      if ( v7 )
      {
        if ( v22 == 1 )
          goto LABEL_34;
        goto LABEL_16;
      }
LABEL_33:
      v10 = *(_DWORD *)a1;
      *(_DWORD *)(v10 + 20) = 54;
      *(_DWORD *)(v10 + 24) = v5;
      (**(void (__cdecl ***)(_DWORD))a1)(a1);
      v7 = *(_DWORD *)(a1 + 4 * v6 + 8);
      if ( v22 == 1 )
      {
LABEL_34:
        v11 = *(_DWORD *)(v21 + 4 * v6 + 4);
        if ( !v11 )
        {
          v11 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 256);
          *(_DWORD *)(v21 + 4 * v6 + 4) = v11;
        }
        v12 = 0;
        do
        {
          *(_DWORD *)(v11 + 4 * v12) = (*(_WORD *)(v7 + 2 * v12) * word_6FB9E680[v12] + 1024) >> 11;
          ++v12;
        }
        while ( v12 != 64 );
        goto LABEL_21;
      }
LABEL_16:
      if ( v22 != 2 )
      {
        v8 = *(_DWORD *)(v21 + 4 * v6 + 4);
        if ( !v8 )
        {
          v8 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 256);
          *(_DWORD *)(v21 + 4 * v6 + 4) = v8;
        }
        v9 = 0;
        do
        {
          *(_DWORD *)(v8 + 4 * v9) = 8 * *(_WORD *)(v7 + 2 * v9);
          ++v9;
        }
        while ( v9 != 64 );
LABEL_21:
        *(_DWORD *)(v24 + 4) = sub_6F86C0F4;
        goto LABEL_22;
      }
      v13 = v5 + 32;
      v14 = *(_DWORD *)(v21 + 4 * v13 + 12);
      if ( !v14 )
      {
        v14 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 256);
        *(_DWORD *)(v21 + 4 * v13 + 12) = v14;
      }
      v15 = 0;
      do
      {
        v16 = dbl_6FB9E640[v15];
        v17 = v15 * 8;
        v18 = 0;
        do
        {
          *(float *)(v14 + 4 * v17) = 1.0 / (v16 * (double)*(_WORD *)(v7 + 2 * v17) * dbl_6FB9E640[v18] * 8.0);
          ++v17;
          ++v18;
        }
        while ( v18 != 8 );
        ++v15;
      }
      while ( v15 != 8 );
      *(_DWORD *)(v24 + 4) = sub_6F86C1F0;
LABEL_22:
      ++v23;
      v24 += 4;
      result = a1;
      if ( *(_DWORD *)(a1 + 76) <= v23 )
        return result;
      v25 += 88;
    }
    if ( v3 == 1026 )
    {
      *(_DWORD *)(v24 + 44) = sub_6F87C36C;
      v22 = 0;
      goto LABEL_13;
    }
    if ( v3 <= 1026 )
    {
      if ( v3 == 514 )
      {
        *(_DWORD *)(v24 + 44) = sub_6F876368;
        v22 = 0;
        goto LABEL_13;
      }
      if ( v3 <= 514 )
      {
        if ( v3 == 258 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F87E3FC;
          v22 = 0;
          goto LABEL_13;
        }
        if ( v3 == 513 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F87C450;
          v22 = 0;
          goto LABEL_13;
        }
        if ( v3 == 257 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F8763CC;
          v22 = 0;
          goto LABEL_13;
        }
      }
      else
      {
        if ( v3 == 771 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F876240;
          v22 = 0;
          goto LABEL_13;
        }
        if ( v3 == 774 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F87E14C;
          v22 = 0;
          goto LABEL_13;
        }
        if ( v3 == 516 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F87E330;
          v22 = 0;
          goto LABEL_13;
        }
      }
LABEL_12:
      v4 = *(_DWORD *)a1;
      *(_DWORD *)(v4 + 20) = 7;
      *(_DWORD *)(v4 + 24) = v2;
      *(_DWORD *)(*(_DWORD *)a1 + 28) = *(_DWORD *)(v25 + 40);
      (**(void (__cdecl ***)(_DWORD))a1)(a1);
      goto LABEL_13;
    }
    if ( v3 == 1290 )
    {
      *(_DWORD *)(v24 + 44) = sub_6F87DA70;
      v22 = 0;
      goto LABEL_13;
    }
    if ( v3 <= 1290 )
    {
      if ( v3 == 1032 )
      {
        *(_DWORD *)(v24 + 44) = sub_6F87DE84;
        v22 = 0;
      }
      else
      {
        if ( v3 != 1285 )
        {
          if ( v3 == 1028 )
          {
            *(_DWORD *)(v24 + 44) = sub_6F8760F8;
            v22 = 0;
            goto LABEL_13;
          }
          goto LABEL_12;
        }
        *(_DWORD *)(v24 + 44) = sub_6F875E9C;
        v22 = 0;
      }
    }
    else if ( v3 == 1542 )
    {
      *(_DWORD *)(v24 + 44) = sub_6F875C38;
      v22 = 0;
    }
    else
    {
      if ( v3 != 1548 )
      {
        if ( v3 == 1539 )
        {
          *(_DWORD *)(v24 + 44) = sub_6F87C1C4;
          v22 = 0;
          goto LABEL_13;
        }
        goto LABEL_12;
      }
      *(_DWORD *)(v24 + 44) = sub_6F87D4A0;
      v22 = 0;
    }
    goto LABEL_13;
  }
  return result;
}
