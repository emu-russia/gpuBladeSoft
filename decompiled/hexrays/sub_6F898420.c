int __usercall sub_6F898420@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // esi@1
  int v3; // ecx@1
  int v4; // edx@2
  int v5; // esi@3
  int v6; // eax@3
  int result; // eax@3
  _BYTE *v8; // edx@4
  int *v9; // esi@8
  int v10; // eax@10
  int v11; // edx@10
  int v12; // ecx@13
  int v13; // edx@15
  int v14; // edx@20
  int v15; // eax@22
  int v16; // eax@23
  int v17; // edx@23
  char **v18; // ecx@23
  char *v19; // edx@24
  int v20; // eax@25
  int v21; // ecx@25
  int v22; // esi@25
  _BYTE *v23; // eax@25
  int v24; // eax@27
  int v25; // ecx@28
  _BYTE *v26; // esi@28
  int v27; // ecx@31
  int v28; // ecx@32
  int v29; // eax@32
  int v30; // edx@33
  char v31; // al@36
  _BYTE *v32; // edx@39
  int v33; // eax@41
  int v34; // eax@42
  int v35; // eax@43
  int v36; // eax@44
  int v37; // eax@48
  int v38; // edi@49
  char v39; // al@49
  int v40; // esi@50
  char *v41; // edx@53
  int v42; // eax@54
  int v43; // ebp@55
  char v44; // al@56
  int v45; // eax@58
  int v46; // esi@59
  int v47; // eax@60
  int v48; // esi@63
  _BYTE *v49; // eax@65
  int v50; // eax@66
  int v51; // edx@67
  int v52; // edx@69
  int v53; // edx@71
  int v54; // edx@73
  int v55; // edx@75
  int v56; // edx@77
  int v57; // edx@79
  int v58; // edx@81
  int v59; // edx@83
  int v60; // eax@85
  int v61; // edi@86
  unsigned __int8 v62; // al@86
  char *v63; // eax@89
  char v64; // dl@89
  int v65; // eax@92
  int v66; // eax@26
  int v67; // esi@51
  int v68; // eax@51
  int v69; // ebp@99
  int v70; // edi@99
  int v71; // eax@99
  int v72; // ecx@101
  int v73; // edx@102
  int v74; // edi@104
  int v75; // eax@104
  int v76; // [sp+1Ch] [bp-30h]@99
  int v77; // [sp+2Ch] [bp-20h]@3

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  if ( sub_6F8972F0(*(_DWORD *)(a1 + 12)) )
  {
    v9 = sub_6F898FC0(v1, &v77, 0);
    if ( !v9 )
      goto LABEL_6;
    if ( **(_BYTE **)(v1 + 12) == 70 )
    {
      v11 = sub_6F899250(v1);
      *v9 = v11;
    }
    else
    {
      v10 = sub_6F898420(v1);
      *v9 = v10;
      v11 = v10;
    }
    if ( !v11 )
      goto LABEL_6;
    result = v77;
    if ( (unsigned int)(*(_DWORD *)v11 - 31) <= 1 )
    {
      v12 = *(_DWORD *)(v11 + 8);
      *(_DWORD *)(v11 + 8) = v77;
      v77 = *v9;
      *v9 = v12;
      result = v77;
    }
    if ( result && (v13 = *(_DWORD *)(v1 + 32), v13 < *(_DWORD *)(v1 + 36)) )
    {
      *(_DWORD *)(*(_DWORD *)(v1 + 28) + 4 * v13) = result;
      *(_DWORD *)(v1 + 32) = v13 + 1;
    }
    else
    {
LABEL_6:
      result = 0;
    }
  }
  else
  {
    v4 = *(_BYTE *)v2;
    switch ( (_BYTE)v4 )
    {
      default:
        goto LABEL_6;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x4E:
      case 0x5A:
        result = sub_6F897F40(v1, v3);
        v77 = result;
        goto LABEL_19;
      case 0x75:
        *(_DWORD *)(v1 + 12) = v2 + 1;
        v15 = sub_6F896ED0(v1);
        result = sub_6F896B60(v1, 40, v15, 0);
        v77 = result;
        goto LABEL_19;
      case 0x61:
      case 0x62:
      case 0x63:
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6C:
      case 0x6D:
      case 0x6E:
      case 0x6F:
      case 0x73:
      case 0x74:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7A:
        v16 = 5 * v4 - 485;
        v17 = *(_DWORD *)(v1 + 20);
        v18 = &(&off_6FBA5AE0)[4 * v16];
        if ( v17 >= *(_DWORD *)(v1 + 24) )
        {
LABEL_105:
          v77 = 0;
          BUG();
        }
        result = *(_DWORD *)(v1 + 16) + 16 * v17;
        *(_DWORD *)(result + 4) = 0;
        *(_DWORD *)(v1 + 20) = v17 + 1;
        v19 = v18[1];
        *(_DWORD *)result = 39;
        *(_DWORD *)(result + 8) = v18;
        *(_DWORD *)(v1 + 44) += v19;
        *(_DWORD *)(v1 + 12) = v2 + 1;
        return result;
      case 0x55:
        *(_DWORD *)(v1 + 12) = v2 + 1;
        v20 = sub_6F896ED0(v1);
        v77 = v20;
        v22 = v20;
        v23 = *(_BYTE **)(v1 + 12);
        if ( *v23 == 73 )
        {
          *(_DWORD *)(v1 + 12) = v23 + 1;
          v66 = sub_6F897E00(v1, v21);
          v22 = sub_6F896B60(v1, 4, v77, v66);
          v77 = v22;
        }
        v24 = sub_6F898420(v1);
        result = sub_6F896B60(v1, 33, v24, v22);
        v77 = result;
        goto LABEL_19;
      case 0x54:
        result = sub_6F896E70(v1);
        v26 = *(_BYTE **)(v1 + 12);
        v77 = result;
        if ( *v26 != 73 )
          goto LABEL_19;
        if ( *(_DWORD *)(v1 + 52) )
        {
          v69 = *(_DWORD *)(v1 + 20);
          v70 = *(_DWORD *)(v1 + 32);
          v76 = *(_DWORD *)(v1 + 44);
          *(_DWORD *)(v1 + 12) = v26 + 1;
          v71 = sub_6F897E00(v1, v25);
          if ( **(_BYTE **)(v1 + 12) != 73 )
          {
            *(_DWORD *)(v1 + 12) = v26;
            *(_DWORD *)(v1 + 20) = v69;
            *(_DWORD *)(v1 + 44) = v76;
            result = v77;
            *(_DWORD *)(v1 + 32) = v70;
            goto LABEL_19;
          }
          v72 = v77;
          if ( v77 )
          {
            v73 = *(_DWORD *)(v1 + 32);
            if ( v73 < *(_DWORD *)(v1 + 36) )
            {
              *(_DWORD *)(*(_DWORD *)(v1 + 28) + 4 * v73) = v77;
              *(_DWORD *)(v1 + 32) = v73 + 1;
              result = sub_6F896B60(v1, 4, v72, v71);
              v77 = result;
              goto LABEL_19;
            }
          }
          goto LABEL_6;
        }
        if ( !result )
          goto LABEL_6;
        v27 = *(_DWORD *)(v1 + 32);
        if ( v27 >= *(_DWORD *)(v1 + 36) )
          goto LABEL_6;
        *(_DWORD *)(*(_DWORD *)(v1 + 28) + 4 * v27) = result;
        *(_DWORD *)(v1 + 32) = v27 + 1;
        v28 = *v26 - 73;
        v29 = 0;
        if ( (unsigned __int8)v28 > 1u )
          goto LABEL_35;
        v30 = (int)(v26 + 1);
        goto LABEL_34;
      case 0x53:
        v31 = *(_BYTE *)(v2 + 1);
        if ( (unsigned __int8)(v31 - 48) <= 9u || v31 == 95 || (unsigned __int8)(v31 - 65) <= 0x19u )
        {
          result = sub_6F8970A0(v1, 0);
          v32 = *(_BYTE **)(v1 + 12);
          v77 = result;
          if ( *v32 != 73 )
            return result;
          v30 = (int)(v32 + 1);
LABEL_34:
          *(_DWORD *)(v1 + 12) = v30;
          v29 = sub_6F897E00(v1, v28);
LABEL_35:
          result = sub_6F896B60(v1, 4, v77, v29);
          v77 = result;
          goto LABEL_19;
        }
        result = sub_6F897F40(v1, v3);
        v77 = result;
        if ( !result )
          goto LABEL_6;
        if ( *(_DWORD *)result == 24 )
          return result;
        goto LABEL_20;
      case 0x52:
        *(_DWORD *)(v1 + 12) = v2 + 1;
        v33 = sub_6F898420(v1);
        result = sub_6F896B60(v1, 35, v33, 0);
        v77 = result;
        goto LABEL_19;
      case 0x50:
        *(_DWORD *)(v1 + 12) = v2 + 1;
        v34 = sub_6F898420(v1);
        result = sub_6F896B60(v1, 34, v34, 0);
        v77 = result;
        goto LABEL_19;
      case 0x4F:
        *(_DWORD *)(v1 + 12) = v2 + 1;
        v35 = sub_6F898420(v1);
        result = sub_6F896B60(v1, 36, v35, 0);
        v77 = result;
        goto LABEL_19;
      case 0x47:
        *(_DWORD *)(v1 + 12) = v2 + 1;
        v36 = sub_6F898420(v1);
        result = sub_6F896B60(v1, 38, v36, 0);
        v77 = result;
        goto LABEL_19;
      case 0x46:
        result = sub_6F899250(v1);
        v77 = result;
        goto LABEL_19;
      case 0x44:
        *(_DWORD *)(v1 + 12) = v2 + 1;
        if ( !*(_BYTE *)(v2 + 1) )
          goto LABEL_6;
        *(_DWORD *)(v1 + 12) = v2 + 2;
        switch ( *(_BYTE *)(v2 + 1) )
        {
          case 0x54:
          case 0x74:
            v5 = *(_DWORD *)(v1 + 48);
            *(_DWORD *)(v1 + 48) = 1;
            v6 = sub_6F8976D0(v1, v3);
            *(_DWORD *)(v1 + 48) = v5;
            result = sub_6F896B60(v1, 66, v6, 0);
            v77 = result;
            if ( !result )
              goto LABEL_6;
            v8 = *(_BYTE **)(v1 + 12);
            if ( !*v8 )
              goto LABEL_6;
            *(_DWORD *)(v1 + 12) = v8 + 1;
            if ( *v8 != 69 )
              goto LABEL_6;
            goto LABEL_20;
          default:
            goto LABEL_6;
          case 0x76:
            if ( *(_BYTE *)(v2 + 2) == 95 )
            {
              v74 = *(_DWORD *)(v1 + 48);
              *(_DWORD *)(v1 + 48) = 1;
              *(_DWORD *)(v1 + 12) = v2 + 3;
              v75 = sub_6F8976D0(v1, v3);
              *(_DWORD *)(v1 + 48) = v74;
              v48 = v75;
            }
            else
            {
              v48 = sub_6F896DF0(v1);
            }
            if ( !v48 )
              goto LABEL_6;
            v49 = *(_BYTE **)(v1 + 12);
            if ( *v49 != 95 )
              goto LABEL_6;
            *(_DWORD *)(v1 + 12) = v49 + 1;
            v50 = sub_6F898420(v1);
            result = sub_6F896B60(v1, 45, v48, v50);
            v77 = result;
            goto LABEL_19;
          case 0x73:
            v51 = *(_DWORD *)(v1 + 20);
            if ( v51 >= *(_DWORD *)(v1 + 24) )
              goto LABEL_105;
            result = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(v1 + 20) = v51 + 1;
            *(_DWORD *)result = 39;
            *(_DWORD *)(result + 8) = &off_6FBA5D38;
            *(_DWORD *)(v1 + 44) += 8;
            return result;
          case 0x6E:
            v52 = *(_DWORD *)(v1 + 20);
            if ( v52 >= *(_DWORD *)(v1 + 24) )
              goto LABEL_105;
            result = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(v1 + 20) = v52 + 1;
            *(_DWORD *)result = 39;
            *(_DWORD *)(result + 8) = &off_6FBA5D60;
            *(_DWORD *)(v1 + 44) += 17;
            return result;
          case 0x69:
            v53 = *(_DWORD *)(v1 + 20);
            if ( v53 >= *(_DWORD *)(v1 + 24) )
              goto LABEL_105;
            result = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(v1 + 20) = v53 + 1;
            *(_DWORD *)result = 39;
            *(_DWORD *)(result + 8) = &off_6FBA5D4C;
            *(_DWORD *)(v1 + 44) += 8;
            return result;
          case 0x68:
            v54 = *(_DWORD *)(v1 + 20);
            if ( v54 >= *(_DWORD *)(v1 + 24) )
              goto LABEL_105;
            result = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(v1 + 20) = v54 + 1;
            *(_DWORD *)result = 39;
            *(_DWORD *)(result + 8) = &off_6FBA5D24;
            *(_DWORD *)(v1 + 44) += 4;
            return result;
          case 0x66:
            v55 = *(_DWORD *)(v1 + 20);
            if ( v55 >= *(_DWORD *)(v1 + 24) )
              goto LABEL_105;
            result = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(v1 + 20) = v55 + 1;
            *(_DWORD *)result = 39;
            *(_DWORD *)(result + 8) = &off_6FBA5CE8;
            *(_DWORD *)(v1 + 44) += 9;
            return result;
          case 0x65:
            v56 = *(_DWORD *)(v1 + 20);
            if ( v56 >= *(_DWORD *)(v1 + 24) )
              goto LABEL_105;
            result = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(v1 + 20) = v56 + 1;
            *(_DWORD *)result = 39;
            *(_DWORD *)(result + 8) = &off_6FBA5D10;
            *(_DWORD *)(v1 + 44) += 10;
            return result;
          case 0x64:
            v57 = *(_DWORD *)(v1 + 20);
            if ( v57 >= *(_DWORD *)(v1 + 24) )
              goto LABEL_105;
            result = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(v1 + 20) = v57 + 1;
            *(_DWORD *)result = 39;
            *(_DWORD *)(result + 8) = &off_6FBA5CFC;
            *(_DWORD *)(v1 + 44) += 9;
            return result;
          case 0x63:
            v58 = *(_DWORD *)(v1 + 20);
            if ( v58 >= *(_DWORD *)(v1 + 24) )
              goto LABEL_6;
            result = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
            *(_DWORD *)(v1 + 20) = v58 + 1;
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)result = 0;
            *(_DWORD *)(result + 8) = "decltype(auto)";
            *(_DWORD *)(result + 12) = 14;
            return result;
          case 0x61:
            v59 = *(_DWORD *)(v1 + 20);
            if ( v59 >= *(_DWORD *)(v1 + 24) )
              goto LABEL_6;
            result = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
            *(_DWORD *)(v1 + 20) = v59 + 1;
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)result = 0;
            *(_DWORD *)(result + 8) = "auto";
            *(_DWORD *)(result + 12) = 4;
            return result;
          case 0x46:
            v60 = *(_DWORD *)(v1 + 20);
            if ( v60 >= *(_DWORD *)(v1 + 24) )
            {
              v0 = 0;
              BUG();
            }
            v61 = *(_DWORD *)(v1 + 16) + 16 * v60;
            *(_DWORD *)(v61 + 4) = 0;
            v77 = v61;
            *(_DWORD *)(v1 + 20) = v60 + 1;
            *(_DWORD *)v61 = 44;
            v62 = *(_BYTE *)(v2 + 2) - 48;
            *(_WORD *)(v61 + 12) = v62 <= 9u;
            if ( v62 <= 9u )
            {
              sub_6F896D30((_DWORD *)(v1 + 12));
              v61 = v77;
            }
            *(_DWORD *)(v61 + 8) = sub_6F898420(v1);
            if ( !*(_DWORD *)(v77 + 8) )
              goto LABEL_6;
            sub_6F896D30((_DWORD *)(v1 + 12));
            v63 = *(char **)(v1 + 12);
            v64 = 0;
            if ( *v63 )
            {
              *(_DWORD *)(v1 + 12) = v63 + 1;
              v64 = *v63;
            }
            result = v77;
            *(_WORD *)(v77 + 14) = v64 == 115;
            return result;
          case 0x70:
            v65 = sub_6F898420(v1);
            result = sub_6F896B60(v1, 74, v65, 0);
            v77 = result;
            break;
        }
        goto LABEL_19;
      case 0x43:
        *(_DWORD *)(v1 + 12) = v2 + 1;
        v37 = sub_6F898420(v1);
        result = sub_6F896B60(v1, 37, v37, 0);
        v77 = result;
        goto LABEL_19;
      case 0x41:
        v38 = v2 + 1;
        *(_DWORD *)(v1 + 12) = v2 + 1;
        v39 = *(_BYTE *)(v2 + 1);
        if ( v39 == 95 )
        {
          v43 = 0;
        }
        else
        {
          v40 = v2 + 1;
          if ( (unsigned __int8)(v39 - 48) <= 9u )
          {
            while ( 1 )
            {
              v41 = (char *)(v40 + 1);
              *(_DWORD *)(v1 + 12) = v40 + 1;
              if ( (unsigned __int8)(*(_BYTE *)(v40 + 1) - 48) > 9u )
                break;
              ++v40;
            }
            v42 = *(_DWORD *)(v1 + 20);
            if ( v42 >= *(_DWORD *)(v1 + 24) )
              goto LABEL_6;
            v43 = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
            *(_DWORD *)(v43 + 4) = 0;
            *(_DWORD *)(v1 + 20) = v42 + 1;
            if ( v41 == (char *)v38 )
              goto LABEL_6;
            *(_DWORD *)(v43 + 4) = 0;
            *(_DWORD *)v43 = 0;
            *(_DWORD *)(v43 + 8) = v38;
            *(_DWORD *)(v43 + 12) = &v41[-v38];
            v44 = *(_BYTE *)(v40 + 1);
          }
          else
          {
            v67 = *(_DWORD *)(v1 + 48);
            *(_DWORD *)(v1 + 48) = 1;
            v68 = sub_6F8976D0(v1, v3);
            *(_DWORD *)(v1 + 48) = v67;
            v43 = v68;
            if ( !v68 )
              goto LABEL_6;
            v41 = *(char **)(v1 + 12);
            v44 = *v41;
          }
          v38 = (int)v41;
          if ( v44 != 95 )
            goto LABEL_6;
        }
        *(_DWORD *)(v1 + 12) = v38 + 1;
        v45 = sub_6F898420(v1);
        result = sub_6F896B60(v1, 42, v43, v45);
        v77 = result;
LABEL_19:
        if ( !result )
          goto LABEL_6;
LABEL_20:
        v14 = *(_DWORD *)(v1 + 32);
        if ( v14 >= *(_DWORD *)(v1 + 36) )
          goto LABEL_6;
        *(_DWORD *)(*(_DWORD *)(v1 + 28) + 4 * v14) = result;
        result = v77;
        *(_DWORD *)(v1 + 32) = v14 + 1;
        break;
      case 0x4D:
        *(_DWORD *)(v1 + 12) = v2 + 1;
        v46 = sub_6F898420(v1);
        if ( !v46 )
          goto LABEL_6;
        v47 = sub_6F898420(v1);
        if ( !v47 )
          goto LABEL_6;
        result = sub_6F896B60(v1, 43, v46, v47);
        v77 = result;
        goto LABEL_19;
    }
  }
  return result;
}
