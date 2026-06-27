int __cdecl sub_6F874180(int a1)
{
  int v1; // esi@1
  int v2; // eax@2
  int v3; // edi@2
  int v4; // edx@4
  int v5; // edx@7
  _DWORD *v6; // esi@7
  int v7; // eax@13
  int v8; // eax@15
  int v9; // eax@19
  int v10; // edi@23
  int v11; // eax@28
  int v12; // edx@29
  int v13; // ecx@30
  int v14; // edx@30
  unsigned int v15; // ecx@31
  unsigned int v16; // edx@33
  int result; // eax@37
  int v18; // edx@38
  int v19; // edx@41
  unsigned int v20; // ecx@50
  int v21; // edi@52
  unsigned int v22; // ecx@55
  unsigned int v23; // edx@57
  unsigned int v24; // ecx@60
  unsigned int v25; // edx@62
  unsigned int v26; // ecx@65
  unsigned int v27; // edx@67
  unsigned int v28; // ecx@70
  unsigned int v29; // edx@72
  unsigned int v30; // ecx@75
  unsigned int v31; // edx@77
  int v32; // edi@89
  int v33; // eax@90
  signed int v34; // eax@97
  unsigned int v35; // ecx@102
  int v36; // ST1C_4@102
  int v37; // eax@9
  int v38; // [sp+14h] [bp-24h]@6
  int v39; // [sp+18h] [bp-20h]@6
  int v40; // [sp+1Ch] [bp-1Ch]@7
  int v41; // [sp+1Ch] [bp-1Ch]@24
  int v42; // [sp+1Ch] [bp-1Ch]@27

  v1 = *(_DWORD *)(a1 + 424);
  if ( *(_BYTE *)(a1 + 201) )
  {
    v2 = *(_DWORD *)(a1 + 368);
    v3 = v2;
    if ( v2 )
    {
      v18 = *(_DWORD *)(a1 + 372);
      if ( v2 > v18 || v18 > *(_DWORD *)(a1 + 392) || *(_DWORD *)(a1 + 296) != 1 )
        goto LABEL_4;
    }
    else if ( *(_DWORD *)(a1 + 372) )
    {
      goto LABEL_4;
    }
    v19 = *(_DWORD *)(a1 + 376);
    if ( (!v19 || v19 - 1 == *(_DWORD *)(a1 + 380)) && *(_DWORD *)(a1 + 380) <= 13 )
    {
LABEL_5:
      if ( *(_DWORD *)(a1 + 296) > 0 )
      {
        v39 = 0;
        v38 = v1;
        while ( 1 )
        {
          v5 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v39 + 300) + 4);
          v40 = v5;
          v6 = (_DWORD *)(*(_DWORD *)(a1 + 140) + (v5 << 8));
          if ( v2 && *v6 < 0 )
          {
            v37 = *(_DWORD *)a1;
            *(_DWORD *)(v37 + 20) = 118;
            *(_DWORD *)(v37 + 24) = v5;
            *(_DWORD *)(*(_DWORD *)a1 + 28) = 0;
            (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, -1);
            v2 = *(_DWORD *)(a1 + 368);
            v3 = *(_DWORD *)(a1 + 368);
          }
          if ( *(_DWORD *)(a1 + 372) >= v2 )
          {
            do
            {
              v8 = v6[v3];
              if ( v8 < 0 )
                v8 = 0;
              if ( *(_DWORD *)(a1 + 376) != v8 )
              {
                v7 = *(_DWORD *)a1;
                *(_DWORD *)(v7 + 20) = 118;
                *(_DWORD *)(v7 + 24) = v40;
                *(_DWORD *)(*(_DWORD *)a1 + 28) = v3;
                (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, -1);
              }
              v6[v3++] = *(_DWORD *)(a1 + 380);
            }
            while ( *(_DWORD *)(a1 + 372) >= v3 );
            v2 = *(_DWORD *)(a1 + 368);
          }
          if ( *(_DWORD *)(a1 + 296) <= ++v39 )
            break;
          v3 = v2;
        }
        v1 = v38;
      }
      if ( *(_DWORD *)(a1 + 376) )
      {
        if ( v2 )
          *(_DWORD *)(v1 + 4) = sub_6F872FEC;
        else
          *(_DWORD *)(v1 + 4) = sub_6F872EFC;
      }
      else
      {
        if ( !v2 )
        {
          *(_DWORD *)(v1 + 4) = sub_6F872A08;
          if ( *(_DWORD *)(a1 + 296) <= 0 )
          {
LABEL_85:
            *(_DWORD *)(v1 + 16) = 0;
            goto LABEL_37;
          }
LABEL_89:
          v32 = 0;
          do
          {
            v33 = *(_DWORD *)(a1 + 4 * v32 + 300);
            if ( *(_DWORD *)(a1 + 368) )
            {
              v35 = *(_DWORD *)(v33 + 24);
              v36 = v35 + 8;
              sub_6F873E40((_DWORD *)a1, 0, v35, (int *)(v1 + 4 * (v35 + 8) + 12));
              *(_DWORD *)(v1 + 60) = *(_DWORD *)(v1 + 4 * v36 + 12);
            }
            else if ( !*(_DWORD *)(a1 + 376) )
            {
              sub_6F873E40((_DWORD *)a1, 1, *(_DWORD *)(v33 + 20), (int *)(v1 + 4 * *(_DWORD *)(v33 + 20) + 44));
            }
            *(_DWORD *)(v1 + 4 * v32++ + 20) = 0;
          }
          while ( *(_DWORD *)(a1 + 296) > v32 );
          goto LABEL_85;
        }
        *(_DWORD *)(v1 + 4) = sub_6F872C7C;
      }
      if ( *(_DWORD *)(a1 + 296) <= 0 )
        goto LABEL_85;
      goto LABEL_89;
    }
LABEL_4:
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 17;
    *(_DWORD *)(v4 + 24) = v2;
    *(_DWORD *)(*(_DWORD *)a1 + 28) = *(_DWORD *)(a1 + 372);
    *(_DWORD *)(*(_DWORD *)a1 + 32) = *(_DWORD *)(a1 + 376);
    *(_DWORD *)(*(_DWORD *)a1 + 36) = *(_DWORD *)(a1 + 380);
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    v2 = *(_DWORD *)(a1 + 368);
    v3 = *(_DWORD *)(a1 + 368);
    goto LABEL_5;
  }
  if ( !*(_DWORD *)(a1 + 368) && !*(_DWORD *)(a1 + 376) && !*(_DWORD *)(a1 + 380) )
  {
    if ( *(_BYTE *)(a1 + 200) )
    {
      v34 = *(_DWORD *)(a1 + 372);
    }
    else
    {
      v34 = *(_DWORD *)(a1 + 372);
      if ( v34 > 63 )
        goto LABEL_20;
    }
    if ( *(_DWORD *)(a1 + 392) == v34 )
      goto LABEL_20;
  }
  v9 = *(_DWORD *)a1;
  *(_DWORD *)(v9 + 20) = 125;
  (*(void (__cdecl **)(int, signed int))(v9 + 4))(a1, -1);
LABEL_20:
  if ( *(_DWORD *)(a1 + 392) == 63 )
    *(_DWORD *)(v1 + 4) = sub_6F8739CC;
  else
    *(_DWORD *)(v1 + 4) = sub_6F87352C;
  if ( *(_DWORD *)(a1 + 296) > 0 )
  {
    v10 = 0;
    do
    {
      v41 = *(_DWORD *)(a1 + 4 * v10 + 300);
      sub_6F873E40((_DWORD *)a1, 1, *(_DWORD *)(v41 + 20), (int *)(v1 + 4 * *(_DWORD *)(v41 + 20) + 64));
      if ( *(_DWORD *)(a1 + 392) )
        sub_6F873E40((_DWORD *)a1, 0, *(_DWORD *)(v41 + 24), (int *)(v1 + 4 * *(_DWORD *)(v41 + 24) + 80));
      *(_DWORD *)(v1 + 4 * v10++ + 20) = 0;
    }
    while ( *(_DWORD *)(a1 + 296) > v10 );
  }
  v42 = *(_DWORD *)(a1 + 324);
  if ( v42 > 0 )
  {
    v11 = 0;
    do
    {
      v12 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 4 * v11 + 328) + 300);
      *(_DWORD *)(v1 + 4 * v11 + 96) = *(_DWORD *)(v1 + 4 * *(_DWORD *)(v12 + 20) + 64);
      *(_DWORD *)(v1 + 4 * v11 + 136) = *(_DWORD *)(v1 + 4 * *(_DWORD *)(v12 + 24) + 80);
      if ( *(_BYTE *)(v12 + 52) )
      {
        v13 = *(_DWORD *)(v12 + 40);
        v14 = *(_DWORD *)(v12 + 36);
        if ( *(_DWORD *)(a1 + 392) <= 0x30u )
        {
          switch ( *(_DWORD *)(a1 + 392) )
          {
            case 0:
              *(_DWORD *)(v1 + 4 * v11 + 176) = 1;
              break;
            case 1:
            case 2:
            case 4:
            case 5:
            case 6:
            case 7:
            case 9:
            case 0xA:
            case 0xB:
            case 0xC:
            case 0xD:
            case 0xE:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x19:
            case 0x1A:
            case 0x1B:
            case 0x1C:
            case 0x1D:
            case 0x1E:
            case 0x1F:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2A:
            case 0x2B:
            case 0x2C:
            case 0x2D:
            case 0x2E:
            case 0x2F:
              goto LABEL_31;
            case 3:
              v30 = v13 - 1;
              if ( v30 > 1 )
                v30 = 1;
              v31 = v14 - 1;
              if ( v31 > 1 )
                v31 = 1;
              *(_DWORD *)(v1 + 4 * v11 + 176) = dword_6FB9E8E4[v31 + 2 * v30] + 1;
              break;
            case 8:
              v28 = v13 - 1;
              if ( v28 > 2 )
                v28 = 2;
              v29 = v14 - 1;
              if ( v29 > 2 )
                v29 = 2;
              *(_DWORD *)(v1 + 4 * v11 + 176) = dword_6FB9E900[3 * v28 + v29] + 1;
              break;
            case 0xF:
              v26 = v13 - 1;
              if ( v26 > 3 )
                v26 = 3;
              v27 = v14 - 1;
              if ( v27 > 3 )
                v27 = 3;
              *(_DWORD *)(v1 + 4 * v11 + 176) = dword_6FB9E940[v27 + 4 * v26] + 1;
              break;
            case 0x18:
              v24 = v13 - 1;
              if ( v24 > 4 )
                v24 = 4;
              v25 = v14 - 1;
              if ( v25 > 4 )
                v25 = 4;
              *(_DWORD *)(v1 + 4 * v11 + 176) = dword_6FB9E980[5 * v24 + v25] + 1;
              break;
            case 0x23:
              v22 = v13 - 1;
              if ( v22 > 5 )
                v22 = 5;
              v23 = v14 - 1;
              if ( v23 > 5 )
                v23 = 5;
              *(_DWORD *)(v1 + 4 * v11 + 176) = dword_6FB9EA00[v23 + 6 * v22] + 1;
              break;
            case 0x30:
              v20 = v13 - 1;
              if ( v20 > 6 )
                v20 = 6;
              v21 = v14 - 1;
              if ( (unsigned int)(v14 - 1) > 6 )
                v21 = 6;
              *(_DWORD *)(v1 + 4 * v11 + 176) = dword_6FB9EAA0[v21 + 7 * v20] + 1;
              break;
          }
        }
        else
        {
LABEL_31:
          v15 = v13 - 1;
          if ( v15 > 7 )
            v15 = 7;
          v16 = v14 - 1;
          if ( v16 > 7 )
            v16 = 7;
          *(_DWORD *)(v1 + 4 * v11 + 176) = dword_6FB9EB80[v16 + 8 * v15] + 1;
        }
      }
      else
      {
        *(_DWORD *)(v1 + 4 * v11 + 176) = 0;
      }
      ++v11;
    }
    while ( v11 < v42 );
  }
LABEL_37:
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  *(_BYTE *)(v1 + 36) = 0;
  result = *(_DWORD *)(a1 + 252);
  *(_DWORD *)(v1 + 40) = result;
  return result;
}
