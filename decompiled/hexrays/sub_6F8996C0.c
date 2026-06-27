int __usercall sub_6F8996C0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi@1
  int v4; // ebx@1
  int v5; // eax@1
  int v6; // esi@3
  int v7; // eax@6
  int v9; // ecx@11
  int v10; // ecx@14
  char v11; // al@15
  int v12; // edx@17
  unsigned int v13; // eax@18
  int v14; // edx@22
  unsigned int v15; // eax@23
  int v16; // edx@27
  int v17; // eax@31
  signed int v18; // eax@47
  _BYTE *v19; // edx@48
  int v20; // esi@49
  int v21; // edi@50
  int v22; // ecx@50
  char v23; // al@53
  signed int v24; // edx@56
  int v25; // eax@57
  int v26; // ebp@58
  int v27; // eax@63
  int v28; // eax@64
  int v29; // eax@67
  int v30; // esi@68
  int v31; // eax@68
  int v32; // edx@69
  unsigned int v33; // eax@69
  bool v34; // cf@69
  bool v35; // zf@69
  int v36; // eax@74
  int v37; // eax@75
  int v38; // eax@76
  int v39; // eax@77
  int v40; // esi@78
  _BYTE *v41; // eax@79
  int v42; // eax@80
  int v43; // ecx@81
  int v44; // eax@82
  int v45; // ecx@83
  int v46; // eax@84
  int v47; // ecx@86
  int v48; // eax@87
  int v49; // eax@88
  int v50; // eax@89
  int v51; // eax@90
  int v52; // eax@91
  int v53; // edx@95
  char v54; // al@96
  int v55; // eax@99
  int v56; // esi@100
  int v57; // eax@106

  v3 = a2;
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)v5 == 71 || *(_BYTE *)v5 == 84 )
  {
    v9 = *(_DWORD *)(v4 + 44);
    *(_DWORD *)(v4 + 44) = v9 + 20;
    if ( *(_BYTE *)v5 == 84 )
    {
      *(_DWORD *)(v4 + 12) = v5 + 1;
      if ( *(_BYTE *)(v5 + 1) )
      {
        *(_DWORD *)(v4 + 12) = v5 + 2;
        switch ( *(_BYTE *)(v5 + 1) )
        {
          default:
            return 0;
          case 0x4A:
            v36 = sub_6F898420(v4);
            return sub_6F896B60(v4, 18, v36, 0);
          case 0x49:
            v37 = sub_6F898420(v4);
            return sub_6F896B60(v4, 12, v37, 0);
          case 0x48:
            v38 = sub_6F897F40(v4, v9);
            return sub_6F896B60(v4, 20, v38, 0);
          case 0x46:
            v39 = sub_6F898420(v4);
            return sub_6F896B60(v4, 14, v39, 0);
          case 0x43:
            v40 = sub_6F898420(v4);
            if ( sub_6F896D30((_DWORD *)(v4 + 12)) < 0 )
              return 0;
            v41 = *(_BYTE **)(v4 + 12);
            if ( *v41 != 95 )
              return 0;
            *(_DWORD *)(v4 + 12) = v41 + 1;
            v42 = sub_6F898420(v4);
            *(_DWORD *)(v4 + 44) += 5;
            return sub_6F896B60(v4, 11, v42, v40);
          case 0x76:
            if ( !sub_6F897280(v4, 118) )
              return 0;
            v44 = sub_6F8996C0(v4, 0, v43);
            return sub_6F896B60(v4, 16, v44, 0);
          case 0x68:
            if ( !sub_6F897280(v4, 104) )
              return 0;
            v46 = sub_6F8996C0(v4, 0, v45);
            return sub_6F896B60(v4, 15, v46, 0);
          case 0x63:
            if ( !sub_6F897280(v4, 0) || !sub_6F897280(v4, 0) )
              return 0;
            v48 = sub_6F8996C0(v4, 0, v47);
            v6 = sub_6F896B60(v4, 17, v48, 0);
            break;
          case 0x57:
            v49 = sub_6F897F40(v4, v9);
            v6 = sub_6F896B60(v4, 21, v49, 0);
            break;
          case 0x56:
            *(_DWORD *)(v4 + 44) = v9 + 15;
            v50 = sub_6F898420(v4);
            v6 = sub_6F896B60(v4, 9, v50, 0);
            break;
          case 0x54:
            *(_DWORD *)(v4 + 44) = v9 + 10;
            v51 = sub_6F898420(v4);
            v6 = sub_6F896B60(v4, 10, v51, 0);
            break;
          case 0x53:
            v52 = sub_6F898420(v4);
            v6 = sub_6F896B60(v4, 13, v52, 0);
            break;
        }
        return v6;
      }
      return 0;
    }
    if ( *(_BYTE *)v5 != 71 )
      return 0;
    *(_DWORD *)(v4 + 12) = v5 + 1;
    if ( !*(_BYTE *)(v5 + 1) )
      return 0;
    *(_DWORD *)(v4 + 12) = v5 + 2;
    v10 = *(_BYTE *)(v5 + 1);
    switch ( (_BYTE)v10 )
    {
      default:
        return 0;
      case 0x72:
        v18 = sub_6F896D30((_DWORD *)(v4 + 12));
        if ( v18 <= 1 )
          return 0;
        v19 = *(_BYTE **)(v4 + 12);
        if ( !*v19 )
          return 0;
        v20 = (int)(v19 + 1);
        *(_DWORD *)(v4 + 12) = v19 + 1;
        if ( *v19 != 95 )
          return 0;
        v21 = v18 - 1;
        v22 = 0;
        break;
      case 0x56:
        v27 = sub_6F897F40(v4, v10);
        return sub_6F896B60(v4, 19, v27, 0);
      case 0x41:
        v28 = sub_6F8996C0(v4, 0, v10);
        return sub_6F896B60(v4, 23, v28, 0);
      case 0x54:
        if ( *(_BYTE *)(v5 + 2) && (*(_DWORD *)(v4 + 12) = v5 + 3, *(_BYTE *)(v5 + 2) == 110) )
        {
          v57 = sub_6F8996C0(v4, 0, v10);
          v6 = sub_6F896B60(v4, 73, v57, 0);
        }
        else
        {
          v29 = sub_6F8996C0(v4, 0, v10);
          v6 = sub_6F896B60(v4, 72, v29, 0);
        }
        return v6;
      case 0x52:
        v30 = sub_6F897F40(v4, v10);
        v31 = sub_6F896DF0(v4);
        return sub_6F896B60(v4, 22, v30, v31);
    }
    while ( 1 )
    {
      if ( !*(_BYTE *)v20 )
        return 0;
      if ( *(_BYTE *)v20 == 36 )
      {
        v23 = *(_BYTE *)(v20 + 1);
        if ( v23 == 83 )
        {
          v24 = 47;
        }
        else if ( v23 == 95 )
        {
          v24 = 46;
        }
        else
        {
          if ( v23 != 36 )
            return 0;
          v24 = 36;
        }
        v25 = *(_DWORD *)(v4 + 20);
        v20 = *(_DWORD *)(v4 + 12) + 2;
        if ( v25 >= *(_DWORD *)(v4 + 24) )
        {
          *(_DWORD *)(v4 + 12) = v20;
          return 0;
        }
        v21 -= 2;
        v26 = *(_DWORD *)(v4 + 16) + 16 * *(_DWORD *)(v4 + 20);
        *(_DWORD *)(v26 + 4) = 0;
        *(_DWORD *)(v4 + 20) = v25 + 1;
        *(_DWORD *)v26 = 64;
        *(_DWORD *)(v26 + 8) = v24;
        *(_DWORD *)(v4 + 12) = v20;
      }
      else
      {
        v53 = 0;
        while ( ++v53 < v21 )
        {
          v54 = *(_BYTE *)(v20 + v53);
          if ( v54 == 36 || !v54 )
          {
            v55 = *(_DWORD *)(v4 + 20);
            if ( v55 >= *(_DWORD *)(v4 + 24) )
              goto LABEL_103;
            goto LABEL_100;
          }
        }
        v55 = *(_DWORD *)(v4 + 20);
        if ( *(_DWORD *)(v4 + 24) <= v55 )
        {
LABEL_103:
          *(_DWORD *)(v4 + 12) += v53;
          return 0;
        }
LABEL_100:
        v21 -= v53;
        v26 = *(_DWORD *)(v4 + 16) + 16 * v55;
        *(_DWORD *)(v26 + 4) = 0;
        *(_DWORD *)(v4 + 20) = v55 + 1;
        *(_DWORD *)(v26 + 8) = v20;
        v56 = *(_DWORD *)(v4 + 12);
        *(_DWORD *)(v26 + 4) = 0;
        v20 = v53 + v56;
        *(_DWORD *)v26 = 0;
        *(_DWORD *)(v26 + 12) = v53;
        *(_DWORD *)(v4 + 12) = v20;
      }
      if ( v22 )
      {
        v22 = sub_6F896B60(v4, 63, v22, v26);
        if ( !v22 )
          return 0;
      }
      else
      {
        v22 = v26;
      }
      if ( v21 <= 0 )
        return sub_6F896B60(v4, 62, v22, 0);
    }
  }
  v6 = sub_6F897F40(v4, a3);
  if ( !v6 )
    return 0;
  if ( !v3 || *(_BYTE *)(v4 + 8) & 1 )
  {
    v11 = **(_BYTE **)(v4 + 12);
    if ( !v11 || v11 == 69 )
      return v6;
    v12 = v6;
    while ( 1 )
    {
      v13 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 > 0x20u )
        break;
      if ( v13 >= 0x1C )
        goto LABEL_40;
      if ( v13 != 2 )
      {
        if ( v13 == 4 )
        {
          v14 = *(_DWORD *)(v12 + 8);
          if ( v14 )
          {
            while ( 1 )
            {
              v15 = *(_DWORD *)v14;
              if ( *(_DWORD *)v14 > 8u )
                break;
              if ( v15 >= 7 )
                goto LABEL_42;
              if ( v15 - 1 <= 1 )
              {
                v14 = *(_DWORD *)(v14 + 12);
                if ( v14 )
                  continue;
              }
              goto LABEL_27;
            }
            v16 = v15 != 52;
          }
          else
          {
LABEL_27:
            v16 = 1;
          }
        }
        else
        {
LABEL_42:
          v16 = 0;
        }
        v17 = sub_6F8991E0(v4, v16);
        if ( v17 )
        {
          if ( !v3 && *(_DWORD *)v6 == 2 && *(_DWORD *)v17 == 41 )
            *(_DWORD *)(v17 + 8) = 0;
          return sub_6F896B60(v4, 3, v6, v17);
        }
        return 0;
      }
      v12 = *(_DWORD *)(v12 + 12);
LABEL_41:
      if ( !v12 )
        goto LABEL_42;
    }
    if ( v13 != 76 && (v13 < 0x4C || v13 - 78 > 1) )
      goto LABEL_42;
LABEL_40:
    v12 = *(_DWORD *)(v12 + 8);
    goto LABEL_41;
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 == 76 )
      goto LABEL_44;
    if ( *(_DWORD *)v6 > 0x4Cu )
      break;
    if ( (unsigned int)(v7 - 28) > 4 )
      goto LABEL_9;
LABEL_44:
    v6 = *(_DWORD *)(v6 + 8);
  }
  if ( (unsigned int)(v7 - 78) <= 1 )
    goto LABEL_44;
LABEL_9:
  if ( v7 == 2 )
  {
    v32 = *(_DWORD *)(v6 + 12);
    v33 = *(_DWORD *)v32;
    v34 = *(_DWORD *)v32 < 0x4Cu;
    v35 = *(_DWORD *)v32 == 76;
    if ( *(_DWORD *)v32 == 76 )
      goto LABEL_72;
    while ( 1 )
    {
      if ( v34 || v35 )
      {
        if ( v33 - 28 > 4 )
          return v6;
      }
      else if ( v33 - 78 > 1 )
      {
        return v6;
      }
      do
      {
LABEL_72:
        v32 = *(_DWORD *)(v32 + 8);
        v33 = *(_DWORD *)v32;
        *(_DWORD *)(v6 + 12) = v32;
        v34 = v33 < 0x4C;
        v35 = v33 == 76;
      }
      while ( v33 == 76 );
    }
  }
  return v6;
}
