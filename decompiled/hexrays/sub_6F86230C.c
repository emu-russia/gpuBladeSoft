signed int __cdecl sub_6F86230C(int a1)
{
  int v1; // edi@1
  int v2; // eax@2
  int v3; // edx@2
  int v4; // esi@3
  int v6; // eax@6
  int v7; // eax@9
  int v8; // eax@18
  int v9; // eax@14
  int v10; // ST14_4@14
  int v11; // eax@21
  int v12; // ST14_4@21
  int v13; // eax@22
  int v14; // ecx@23
  int v15; // ST14_4@23
  signed int v16; // eax@24
  int v17; // esi@26
  int v18; // edi@27
  int v19; // eax@29
  signed int v20; // edx@30
  int v21; // eax@32
  signed int v22; // eax@42
  signed int v23; // eax@49
  int v24; // esi@50
  int v25; // edi@51
  int v26; // ST14_4@55
  int v27; // ecx@25
  int v28; // ST14_4@25
  int v29; // eax@66
  int v30; // ST14_4@66
  int v31; // [sp+18h] [bp-20h]@27
  int v32; // [sp+18h] [bp-20h]@51
  int v33; // [sp+1Ch] [bp-1Ch]@27
  int v34; // [sp+1Ch] [bp-1Ch]@51

  v1 = *(_DWORD *)(a1 + 416);
  if ( *(_BYTE *)(v1 + 17) )
    return 2;
  while ( 1 )
  {
    v2 = (*(int (__cdecl **)(int))(*(_DWORD *)(a1 + 420) + 4))(a1);
    v3 = v2;
    if ( v2 != 1 )
      break;
    v7 = *(_DWORD *)(v1 + 20);
    if ( v7 )
    {
      if ( v7 != 1 )
        goto LABEL_11;
      if ( *(_DWORD *)(a1 + 32) > 65500 || *(_DWORD *)(a1 + 28) > 65500 )
      {
        v11 = *(_DWORD *)a1;
        *(_DWORD *)(v11 + 20) = 42;
        *(_DWORD *)(v11 + 24) = 65500;
        v12 = v3;
        (**(void (__cdecl ***)(_DWORD))a1)(a1);
        v3 = v12;
      }
      v13 = *(_DWORD *)(a1 + 192);
      if ( v13 != 8 )
      {
        v14 = *(_DWORD *)a1;
        *(_DWORD *)(v14 + 20) = 16;
        *(_DWORD *)(v14 + 24) = v13;
        v15 = v3;
        (**(void (__cdecl ***)(_DWORD))a1)(a1);
        v3 = v15;
      }
      v16 = *(_DWORD *)(a1 + 36);
      if ( v16 > 10 )
      {
        v27 = *(_DWORD *)a1;
        *(_DWORD *)(v27 + 20) = 27;
        *(_DWORD *)(v27 + 24) = v16;
        *(_DWORD *)(*(_DWORD *)a1 + 28) = 10;
        v28 = v3;
        (**(void (__cdecl ***)(_DWORD))a1)(a1);
        v16 = *(_DWORD *)(a1 + 36);
        v3 = v28;
      }
      *(_DWORD *)(a1 + 272) = 1;
      *(_DWORD *)(a1 + 276) = 1;
      v17 = *(_DWORD *)(a1 + 196);
      if ( v16 > 0 )
      {
        v33 = v3;
        v31 = v1;
        v18 = 0;
        while ( 1 )
        {
          v19 = *(_DWORD *)(v17 + 8);
          if ( (unsigned int)(v19 - 1) > 3 || (v20 = *(_DWORD *)(v17 + 12), v20 <= 0) || v20 > 4 )
          {
            v21 = *(_DWORD *)a1;
            *(_DWORD *)(v21 + 20) = 19;
            (*(void (__cdecl **)(int))v21)(a1);
            v19 = *(_DWORD *)(v17 + 8);
            v20 = *(_DWORD *)(v17 + 12);
          }
          if ( v19 < *(_DWORD *)(a1 + 272) )
            v19 = *(_DWORD *)(a1 + 272);
          *(_DWORD *)(a1 + 272) = v19;
          if ( v20 < *(_DWORD *)(a1 + 276) )
            v20 = *(_DWORD *)(a1 + 276);
          *(_DWORD *)(a1 + 276) = v20;
          if ( ++v18 >= *(_DWORD *)(a1 + 36) )
            break;
          v17 += 88;
        }
        v3 = v33;
        v1 = v31;
      }
      if ( *(_BYTE *)(a1 + 200)
        || *(_BYTE *)(a1 + 201) && *(_DWORD *)(a1 + 296)
        || (v22 = *(_DWORD *)(a1 + 372), v22 == 63) )
      {
        *(_DWORD *)(a1 + 384) = 8;
        *(_DWORD *)(a1 + 388) = dword_6FB9E080;
        *(_DWORD *)(a1 + 392) = 63;
        v23 = 8;
      }
      else
      {
        if ( v22 > 63 )
        {
          if ( v22 == 143 )
          {
            *(_DWORD *)(a1 + 384) = 12;
            *(_DWORD *)(a1 + 388) = dword_6FB9E080;
            *(_DWORD *)(a1 + 392) = 63;
            v23 = 12;
            goto LABEL_50;
          }
          if ( v22 > 143 )
          {
            if ( v22 == 195 )
            {
              *(_DWORD *)(a1 + 384) = 14;
              *(_DWORD *)(a1 + 388) = dword_6FB9E080;
              *(_DWORD *)(a1 + 392) = 63;
              v23 = 14;
              goto LABEL_50;
            }
            if ( v22 > 195 )
            {
              if ( v22 == 224 )
              {
                *(_DWORD *)(a1 + 384) = 15;
                *(_DWORD *)(a1 + 388) = dword_6FB9E080;
                *(_DWORD *)(a1 + 392) = 63;
                v23 = 15;
                goto LABEL_50;
              }
              if ( v22 == 255 )
              {
                *(_DWORD *)(a1 + 384) = 16;
                *(_DWORD *)(a1 + 388) = dword_6FB9E080;
                *(_DWORD *)(a1 + 392) = 63;
                v23 = 16;
                goto LABEL_50;
              }
            }
            else if ( v22 == 168 )
            {
              *(_DWORD *)(a1 + 384) = 13;
              *(_DWORD *)(a1 + 388) = dword_6FB9E080;
              *(_DWORD *)(a1 + 392) = 63;
              v23 = 13;
              goto LABEL_50;
            }
          }
          else
          {
            if ( v22 == 99 )
            {
              *(_DWORD *)(a1 + 384) = 10;
              *(_DWORD *)(a1 + 388) = dword_6FB9E080;
              *(_DWORD *)(a1 + 392) = 63;
              v23 = 10;
              goto LABEL_50;
            }
            if ( v22 == 120 )
            {
              *(_DWORD *)(a1 + 384) = 11;
              *(_DWORD *)(a1 + 388) = dword_6FB9E080;
              *(_DWORD *)(a1 + 392) = 63;
              v23 = 11;
              goto LABEL_50;
            }
            if ( v22 == 80 )
            {
              *(_DWORD *)(a1 + 384) = 9;
              *(_DWORD *)(a1 + 388) = dword_6FB9E080;
              *(_DWORD *)(a1 + 392) = 63;
              v23 = 9;
              goto LABEL_50;
            }
          }
          goto LABEL_66;
        }
        if ( v22 == 15 )
        {
          *(_DWORD *)(a1 + 384) = 4;
          *(_DWORD *)(a1 + 388) = &unk_6FB9E480;
          *(_DWORD *)(a1 + 392) = 15;
          v23 = 4;
          goto LABEL_50;
        }
        if ( v22 > 15 )
        {
          if ( v22 == 35 )
          {
            *(_DWORD *)(a1 + 384) = 6;
            *(_DWORD *)(a1 + 388) = &unk_6FB9E2E0;
            *(_DWORD *)(a1 + 392) = 35;
            v23 = 6;
            goto LABEL_50;
          }
          if ( v22 == 48 )
          {
            *(_DWORD *)(a1 + 384) = 7;
            *(_DWORD *)(a1 + 388) = &unk_6FB9E1C0;
            *(_DWORD *)(a1 + 392) = 48;
            v23 = 7;
            goto LABEL_50;
          }
          if ( v22 == 24 )
          {
            *(_DWORD *)(a1 + 384) = 5;
            *(_DWORD *)(a1 + 388) = &unk_6FB9E3C0;
            *(_DWORD *)(a1 + 392) = 24;
            v23 = 5;
            goto LABEL_50;
          }
LABEL_66:
          v29 = *(_DWORD *)a1;
          *(_DWORD *)(v29 + 20) = 17;
          *(_DWORD *)(v29 + 24) = *(_DWORD *)(a1 + 368);
          *(_DWORD *)(*(_DWORD *)a1 + 28) = *(_DWORD *)(a1 + 372);
          *(_DWORD *)(*(_DWORD *)a1 + 32) = *(_DWORD *)(a1 + 376);
          *(_DWORD *)(*(_DWORD *)a1 + 36) = *(_DWORD *)(a1 + 380);
          v30 = v3;
          (**(void (__cdecl ***)(_DWORD))a1)(a1);
          v23 = *(_DWORD *)(a1 + 384);
          v3 = v30;
          goto LABEL_50;
        }
        if ( v22 == 3 )
        {
          *(_DWORD *)(a1 + 384) = 2;
          *(_DWORD *)(a1 + 388) = &unk_6FB9E580;
          *(_DWORD *)(a1 + 392) = 3;
          v23 = 2;
          goto LABEL_50;
        }
        if ( v22 == 8 )
        {
          *(_DWORD *)(a1 + 384) = 3;
          *(_DWORD *)(a1 + 388) = &unk_6FB9E500;
          *(_DWORD *)(a1 + 392) = 8;
          v23 = 3;
          goto LABEL_50;
        }
        if ( v22 )
          goto LABEL_66;
        *(_DWORD *)(a1 + 384) = 1;
        *(_DWORD *)(a1 + 388) = dword_6FB9E080;
        *(_DWORD *)(a1 + 392) = 0;
        v23 = 1;
      }
LABEL_50:
      *(_DWORD *)(a1 + 280) = v23;
      *(_DWORD *)(a1 + 284) = v23;
      v24 = *(_DWORD *)(a1 + 196);
      if ( *(_DWORD *)(a1 + 36) > 0 )
      {
        v34 = v3;
        v32 = v1;
        v25 = 0;
        while ( 1 )
        {
          *(_DWORD *)(v24 + 36) = v23;
          *(_DWORD *)(v24 + 40) = v23;
          *(_DWORD *)(v24 + 28) = sub_6F868CC4(*(_DWORD *)(v24 + 8) * *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 272) * v23);
          *(_DWORD *)(v24 + 32) = sub_6F868CC4(
                                    *(_DWORD *)(v24 + 12) * *(_DWORD *)(a1 + 32),
                                    *(_DWORD *)(a1 + 276) * *(_DWORD *)(a1 + 384));
          *(_DWORD *)(v24 + 44) = sub_6F868CC4(*(_DWORD *)(v24 + 8) * *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 272));
          *(_DWORD *)(v24 + 48) = sub_6F868CC4(*(_DWORD *)(v24 + 12) * *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 276));
          *(_BYTE *)(v24 + 52) = 1;
          *(_DWORD *)(v24 + 80) = 0;
          ++v25;
          v24 += 88;
          if ( v25 >= *(_DWORD *)(a1 + 36) )
            break;
          v23 = *(_DWORD *)(a1 + 384);
        }
        v3 = v34;
        v1 = v32;
        v23 = *(_DWORD *)(a1 + 384);
      }
      v26 = v3;
      *(_DWORD *)(a1 + 288) = sub_6F868CC4(*(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 276) * v23);
      v3 = v26;
      *(_BYTE *)(*(_DWORD *)(a1 + 416) + 16) = *(_DWORD *)(a1 + 296) < *(_DWORD *)(a1 + 36) || *(_BYTE *)(a1 + 201);
LABEL_11:
      if ( *(_DWORD *)(a1 + 296) )
      {
        v4 = v3;
        *(_DWORD *)(v1 + 20) = 0;
        return v4;
      }
      *(_DWORD *)(v1 + 20) = 2;
    }
    else
    {
      if ( !*(_BYTE *)(v1 + 16) )
      {
        v9 = *(_DWORD *)a1;
        *(_DWORD *)(v9 + 20) = 36;
        v10 = v3;
        (*(void (__cdecl **)(int))v9)(a1);
        v3 = v10;
      }
      if ( *(_DWORD *)(a1 + 296) )
      {
        v4 = v3;
        sub_6F8620A0(a1);
        return v4;
      }
    }
  }
  v4 = v2;
  if ( v2 == 2 )
  {
    *(_BYTE *)(v1 + 17) = 1;
    if ( *(_DWORD *)(v1 + 20) )
    {
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 420) + 13) )
      {
        v8 = *(_DWORD *)a1;
        *(_DWORD *)(v8 + 20) = 61;
        (*(void (__cdecl **)(int))v8)(a1);
      }
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 124);
      if ( *(_DWORD *)(a1 + 132) > v6 )
        *(_DWORD *)(a1 + 132) = v6;
    }
  }
  return v4;
}
