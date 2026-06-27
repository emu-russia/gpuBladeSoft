int __cdecl sub_6F87210C(int a1)
{
  int v1; // ebx@1
  int result; // eax@1
  int v3; // edx@3
  int v4; // eax@3
  int v5; // eax@12
  int v6; // ecx@15
  int v7; // esi@19
  int v8; // eax@19
  int v9; // eax@62
  int v10; // edi@63
  int v11; // esi@63
  double v12; // st6@64
  int v13; // edx@64
  int v14; // eax@64
  int v15; // edi@68
  int v16; // eax@68
  unsigned int v17; // eax@91
  int v18; // eax@94
  int v19; // [sp+20h] [bp-2Ch]@1
  int (__cdecl *v20)(int, int, int, int, int); // [sp+24h] [bp-28h]@2
  signed int v21; // [sp+28h] [bp-24h]@2
  int v22; // [sp+2Ch] [bp-20h]@2

  v19 = *(_DWORD *)(a1 + 428);
  v1 = *(_DWORD *)(a1 + 196);
  result = *(_DWORD *)(a1 + 36);
  if ( result > 0 )
  {
    v20 = 0;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      v3 = *(_DWORD *)(v1 + 36);
      v4 = *(_DWORD *)(v1 + 40) + (*(_DWORD *)(v1 + 36) << 8);
      if ( v4 == 1799 )
      {
        v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F87FA94;
        v21 = 0;
        goto LABEL_13;
      }
      if ( v4 <= 1799 )
      {
        if ( v4 == 1026 )
        {
          v20 = sub_6F888484;
          v21 = 0;
          goto LABEL_13;
        }
        if ( v4 > 1026 )
        {
          if ( v4 == 1290 )
          {
            v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F889E2C;
            v21 = 0;
            goto LABEL_13;
          }
          if ( v4 <= 1290 )
          {
            if ( v4 == 1032 )
            {
              v20 = sub_6F88A394;
              v21 = 0;
              goto LABEL_13;
            }
            if ( v4 == 1285 )
            {
              v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F8803F4;
              v21 = 0;
              goto LABEL_13;
            }
            if ( v4 == 1028 )
            {
              v20 = sub_6F880710;
              v21 = 0;
              goto LABEL_13;
            }
          }
          else
          {
            if ( v4 == 1542 )
            {
              v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F8800BC;
              v21 = 0;
              goto LABEL_13;
            }
            if ( v4 == 1548 )
            {
              v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F889844;
              v21 = 0;
              goto LABEL_13;
            }
            if ( v4 == 1539 )
            {
              v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F8882AC;
              v21 = 0;
              goto LABEL_13;
            }
          }
        }
        else
        {
          if ( v4 == 514 )
          {
            v20 = sub_6F880A28;
            v21 = 0;
            goto LABEL_13;
          }
          if ( v4 <= 514 )
          {
            if ( v4 == 258 )
            {
              v20 = sub_6F88ACF0;
              v21 = 0;
              goto LABEL_13;
            }
            if ( v4 == 513 )
            {
              v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F8885BC;
              v21 = 0;
              goto LABEL_13;
            }
            if ( v4 == 257 )
            {
              v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F880AD0;
              v21 = 0;
              goto LABEL_13;
            }
          }
          else
          {
            if ( v4 == 771 )
            {
              v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F8808DC;
              v21 = 0;
              goto LABEL_13;
            }
            if ( v4 == 774 )
            {
              v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F88A9C8;
              v21 = 0;
              goto LABEL_13;
            }
            if ( v4 == 516 )
            {
              v20 = sub_6F88ABCC;
              v21 = 0;
              goto LABEL_13;
            }
          }
        }
        goto LABEL_12;
      }
      if ( v4 == 2827 )
      {
        v20 = sub_6F881904;
        v21 = 0;
        goto LABEL_13;
      }
      if ( v4 > 2827 )
        break;
      if ( v4 == 2064 )
      {
        v20 = sub_6F888614;
        v21 = 0;
        goto LABEL_13;
      }
      if ( v4 > 2064 )
      {
        if ( v4 == 2565 )
        {
          v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F88785C;
          v21 = 0;
          goto LABEL_13;
        }
        if ( v4 == 2570 )
        {
          v20 = sub_6F881180;
          v21 = 0;
          goto LABEL_13;
        }
        if ( v4 == 2313 )
        {
          v20 = sub_6F880B0C;
          v21 = 0;
          goto LABEL_13;
        }
        goto LABEL_12;
      }
      if ( v4 == 2052 )
      {
        v20 = sub_6F887DFC;
        v21 = 0;
        goto LABEL_13;
      }
      if ( v4 != 2056 )
      {
        if ( v4 == 1806 )
        {
          v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F889044;
          v21 = 0;
          goto LABEL_13;
        }
LABEL_12:
        v5 = *(_DWORD *)a1;
        *(_DWORD *)(v5 + 20) = 7;
        *(_DWORD *)(v5 + 24) = v3;
        *(_DWORD *)(*(_DWORD *)a1 + 28) = *(_DWORD *)(v1 + 40);
        (**(void (__cdecl ***)(_DWORD))a1)(a1);
        goto LABEL_13;
      }
      v17 = *(_DWORD *)(a1 + 68);
      if ( v17 == 1 )
      {
        v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F87E92C;
        v21 = 1;
      }
      else if ( v17 < 1 )
      {
        v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F87F0C0;
        v21 = 0;
      }
      else if ( v17 == 2 )
      {
        v20 = sub_6F87E43C;
        v21 = 2;
      }
      else
      {
        v18 = *(_DWORD *)a1;
        *(_DWORD *)(v18 + 20) = 49;
        (*(void (__cdecl **)(int))v18)(a1);
      }
LABEL_13:
      *(_DWORD *)(v19 + 4 * v22 + 4) = v20;
      if ( *(_BYTE *)(v1 + 52) )
      {
        if ( *(_DWORD *)(v19 + 4 * v22 + 44) != v21 )
        {
          v6 = *(_DWORD *)(v1 + 80);
          if ( v6 )
          {
            *(_DWORD *)(v19 + 4 * v22 + 44) = v21;
            if ( v21 == 1 )
            {
              v15 = *(_DWORD *)(v1 + 84);
              v16 = 0;
              do
              {
                *(_DWORD *)(v15 + 4 * v16) = (*(_WORD *)(v6 + 2 * v16) * word_6FB9E780[v16] + 2048) >> 12;
                ++v16;
              }
              while ( v16 != 64 );
            }
            else if ( v21 == 2 )
            {
              v10 = *(_DWORD *)(v1 + 84);
              v11 = 0;
              do
              {
                v12 = dbl_6FB9E740[v11];
                v13 = v11 * 8;
                v14 = 0;
                do
                {
                  *(float *)(v10 + 4 * v13) = v12 * (double)*(_WORD *)(v6 + 2 * v13) * dbl_6FB9E740[v14] * 0.125;
                  ++v13;
                  ++v14;
                }
                while ( v14 != 8 );
                ++v11;
              }
              while ( v11 != 8 );
            }
            else if ( v21 )
            {
              v9 = *(_DWORD *)a1;
              *(_DWORD *)(v9 + 20) = 49;
              (*(void (__cdecl **)(int))v9)(a1);
            }
            else
            {
              v7 = *(_DWORD *)(v1 + 84);
              v8 = 0;
              do
              {
                *(_DWORD *)(v7 + 4 * v8) = *(_WORD *)(v6 + 2 * v8);
                ++v8;
              }
              while ( v8 != 64 );
            }
          }
        }
      }
      result = ++v22;
      if ( *(_DWORD *)(a1 + 36) <= v22 )
        return result;
      v1 += 88;
    }
    if ( v4 == 3591 )
    {
      v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F8868E4;
      v21 = 0;
      goto LABEL_13;
    }
    if ( v4 > 3591 )
    {
      if ( v4 == 3855 )
      {
        v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F8844FC;
        v21 = 0;
        goto LABEL_13;
      }
      if ( v4 <= 3855 )
      {
        if ( v4 == 3598 )
        {
          v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F883A48;
          v21 = 0;
          goto LABEL_13;
        }
      }
      else
      {
        if ( v4 == 4104 )
        {
          v20 = sub_6F885D70;
          v21 = 0;
          goto LABEL_13;
        }
        if ( v4 == 4112 )
        {
          v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F885034;
          v21 = 0;
          goto LABEL_13;
        }
      }
    }
    else
    {
      if ( v4 == 3084 )
      {
        v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F882470;
        v21 = 0;
        goto LABEL_13;
      }
      if ( v4 == 3341 )
      {
        v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F882DC0;
        v21 = 0;
        goto LABEL_13;
      }
      if ( v4 == 3078 )
      {
        v20 = (int (__cdecl *)(int, int, int, int, int))sub_6F8871C8;
        v21 = 0;
        goto LABEL_13;
      }
    }
    goto LABEL_12;
  }
  return result;
}
