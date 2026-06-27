int __usercall sub_6F897F40@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v2; // ebx@1
  int v3; // edx@1
  char v4; // al@1
  int v5; // ecx@5
  int v6; // edi@5
  int v7; // eax@6
  char v8; // dl@7
  _DWORD *v9; // eax@9
  int v10; // esi@9
  int v11; // esi@12
  int *v12; // edi@14
  int v13; // ebp@15
  int v14; // eax@15
  int v15; // ecx@15
  int v16; // edx@15
  int v17; // eax@15
  signed int v18; // ebx@15
  int v19; // esi@15
  int v20; // eax@20
  int v21; // edx@21
  int v22; // eax@26
  int v24; // eax@37
  int v25; // eax@39
  int v26; // eax@41
  int v27; // edx@41
  int v28; // ecx@42
  int v29; // eax@43
  int v30; // ecx@56
  _DWORD *v31; // eax@57
  int v32; // edx@57
  _DWORD *v33; // ebp@57
  int v34; // eax@59
  int v35; // ebx@67
  int v36; // eax@69
  int v37; // eax@72
  int v38; // eax@77
  signed int v39; // eax@87
  int v40; // [sp+1Ch] [bp-30h]@15
  int v41; // [sp+1Ch] [bp-30h]@56
  int v42; // [sp+2Ch] [bp-20h]@14

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_BYTE *)v3;
  if ( *(_BYTE *)v3 == 83 )
  {
    if ( *(_BYTE *)(v3 + 1) != 116 )
    {
      v11 = sub_6F8970A0(v2, 0);
      if ( **(_BYTE **)(v2 + 12) != 73 )
        return v11;
      goto LABEL_39;
    }
    *(_DWORD *)(v2 + 12) = v3 + 2;
    v26 = sub_6F8992C0(v2);
    v27 = *(_DWORD *)(v2 + 20);
    if ( v27 >= *(_DWORD *)(v2 + 24) )
    {
      v28 = 0;
    }
    else
    {
      v28 = *(_DWORD *)(v2 + 16) + 16 * *(_DWORD *)(v2 + 20);
      *(_DWORD *)(v2 + 20) = v27 + 1;
      *(_DWORD *)(v28 + 4) = 0;
      *(_DWORD *)v28 = 0;
      *(_DWORD *)(v28 + 8) = "std";
      *(_DWORD *)(v28 + 12) = 3;
    }
    v29 = sub_6F896B60(v2, 1, v28, v26);
    *(_DWORD *)(v2 + 44) += 3;
    v11 = v29;
    if ( **(_BYTE **)(v2 + 12) != 73 )
      return v11;
LABEL_36:
    if ( !v11 )
      return 0;
    v24 = *(_DWORD *)(v2 + 32);
    if ( v24 >= *(_DWORD *)(v2 + 36) )
      return 0;
    *(_DWORD *)(*(_DWORD *)(v2 + 28) + 4 * v24) = v11;
    *(_DWORD *)(v2 + 32) = v24 + 1;
LABEL_39:
    v25 = sub_6F897F10(v2);
    return sub_6F896B60(v2, 4, v11, v25);
  }
  if ( v4 <= 83 )
  {
    if ( v4 != 78 )
    {
LABEL_35:
      v11 = sub_6F8992C0(v2);
      if ( **(_BYTE **)(v2 + 12) != 73 )
        return v11;
      goto LABEL_36;
    }
    *(_DWORD *)(v2 + 12) = v3 + 1;
    v12 = sub_6F898FC0(v2, &v42, 1u);
    if ( !v12 )
      return 0;
    v13 = 0;
    v14 = sub_6F896BC0(v2, 0);
    v16 = *(_DWORD *)(v2 + 12);
    v40 = v14;
    v17 = v2;
    v18 = *(_BYTE *)v16;
    v19 = v17;
    while ( 1 )
    {
LABEL_16:
      if ( !(_BYTE)v18 )
        goto LABEL_29;
      if ( (_BYTE)v18 == 68 )
        break;
      while ( 1 )
      {
        if ( (unsigned __int8)(v18 - 48) > 0x1Cu )
        {
          if ( (unsigned __int8)(v18 - 97) > 0x19u )
          {
            if ( (_BYTE)v18 == 85 )
            {
              v20 = sub_6F8992C0(v19);
              if ( !v13 )
              {
LABEL_48:
                v16 = *(_DWORD *)(v19 + 12);
                v13 = v20;
                v15 = *(_BYTE *)v16;
                goto LABEL_24;
              }
              goto LABEL_21;
            }
            if ( (_BYTE)v18 == 83 )
            {
              v20 = sub_6F8970A0(v19, 1);
              if ( !v13 )
              {
                v16 = *(_DWORD *)(v19 + 12);
                v13 = v20;
                v15 = *(_BYTE *)v16;
                v18 = *(_BYTE *)v16;
                goto LABEL_16;
              }
LABEL_21:
              v21 = 1;
LABEL_22:
              v13 = sub_6F896B60(v19, v21, v13, v20);
              goto LABEL_23;
            }
LABEL_61:
            if ( (_BYTE)v18 == 73 )
            {
              if ( !v13 )
                goto LABEL_29;
              *(_DWORD *)(v19 + 12) = v16 + 1;
              v20 = sub_6F897E00(v19, v15);
              v21 = 4;
              goto LABEL_22;
            }
            if ( (_BYTE)v18 != 84 )
            {
              if ( (_BYTE)v18 == 69 )
              {
                v35 = v19;
                *v12 = v13;
                if ( v13 )
                {
                  if ( v40 )
                  {
                    v36 = v42;
                    v42 = v40;
                    *(_DWORD *)(v40 + 8) = v36;
                  }
                  if ( *(_BYTE *)v16 == 69 )
                  {
                    v11 = v42;
                    *(_DWORD *)(v35 + 12) = v16 + 1;
                    return v11;
                  }
                }
                return 0;
              }
              if ( !v13 || (_BYTE)v18 != 77 )
              {
LABEL_29:
                *v12 = 0;
                return 0;
              }
              *(_DWORD *)(v19 + 12) = v16 + 1;
              v15 = *(_BYTE *)(v16++ + 1);
              v18 = v15;
              goto LABEL_16;
            }
            v20 = sub_6F896E70(v19);
LABEL_47:
            v21 = 1;
            if ( !v13 )
              goto LABEL_48;
            goto LABEL_22;
          }
        }
        else
        {
          v15 = 268960767;
          if ( !_bittest(&v15, v18 - 48) )
            goto LABEL_61;
        }
        v20 = sub_6F8992C0(v19);
        if ( v13 )
          goto LABEL_21;
        v13 = v20;
LABEL_23:
        v16 = *(_DWORD *)(v19 + 12);
        v15 = *(_BYTE *)v16;
        if ( (_BYTE)v18 == 83 )
          goto LABEL_28;
LABEL_24:
        if ( (_BYTE)v15 != 69 )
          break;
        v18 = 69;
      }
      if ( !v13 )
        goto LABEL_29;
      v22 = *(_DWORD *)(v19 + 32);
      if ( v22 >= *(_DWORD *)(v19 + 36) )
        goto LABEL_29;
      *(_DWORD *)(*(_DWORD *)(v19 + 28) + 4 * v22) = v13;
      *(_DWORD *)(v19 + 32) = v22 + 1;
      v15 = *(_BYTE *)v16;
LABEL_28:
      v18 = v15;
    }
    if ( (*(_BYTE *)(v16 + 1) & 0xDF) == 84 )
      v20 = sub_6F898420(v19);
    else
      v20 = sub_6F8992C0(v19);
    goto LABEL_47;
  }
  if ( v4 != 85 )
  {
    if ( v4 == 90 )
    {
      *(_DWORD *)(v2 + 12) = v3 + 1;
      v6 = sub_6F8996C0(v2, 0, a2);
      if ( !v6 )
        return 0;
      v7 = *(_DWORD *)(v2 + 12);
      if ( *(_BYTE *)v7 != 69 )
        return 0;
      *(_DWORD *)(v2 + 12) = v7 + 1;
      v8 = *(_BYTE *)(v7 + 1);
      if ( v8 == 115 )
      {
        *(_DWORD *)(v2 + 12) = v7 + 2;
        if ( !sub_6F897340(v2) )
          return 0;
        v38 = *(_DWORD *)(v2 + 20);
        if ( v38 < *(_DWORD *)(v2 + 24) )
        {
          v10 = *(_DWORD *)(v2 + 16) + 16 * *(_DWORD *)(v2 + 20);
          *(_DWORD *)(v2 + 20) = v38 + 1;
          *(_DWORD *)(v10 + 4) = 0;
          *(_DWORD *)v10 = 0;
          *(_DWORD *)(v10 + 8) = "string literal";
          *(_DWORD *)(v10 + 12) = 14;
          goto LABEL_11;
        }
      }
      else
      {
        if ( v8 != 100 )
        {
          v9 = (_DWORD *)sub_6F897F40(v2, v5);
          v10 = (int)v9;
          if ( v9 && (*v9 & 0xFFFFFFFD) != 69 && !sub_6F897340(v2) )
            return 0;
          goto LABEL_11;
        }
        *(_DWORD *)(v2 + 12) = v7 + 2;
        v41 = sub_6F896E30(v2);
        if ( v41 < 0 )
          return 0;
        v31 = (_DWORD *)sub_6F897F40(v2, v30);
        v32 = v41;
        v33 = v31;
        if ( v31 )
        {
          if ( (*v31 & 0xFFFFFFFD) != 69 )
          {
            v39 = sub_6F897340(v2);
            v32 = v41;
            if ( !v39 )
              return 0;
          }
        }
        v34 = *(_DWORD *)(v2 + 20);
        if ( v34 < *(_DWORD *)(v2 + 24) )
        {
          v10 = *(_DWORD *)(v2 + 16) + 16 * *(_DWORD *)(v2 + 20);
          *(_DWORD *)(v10 + 4) = 0;
          *(_DWORD *)(v2 + 20) = v34 + 1;
          *(_DWORD *)v10 = 70;
          *(_DWORD *)(v10 + 12) = v32;
          *(_DWORD *)(v10 + 8) = v33;
LABEL_11:
          if ( *(_DWORD *)v6 == 3 )
          {
            v37 = *(_DWORD *)(v6 + 12);
            if ( *(_DWORD *)v37 == 41 )
              *(_DWORD *)(v37 + 8) = 0;
          }
          return sub_6F896B60(v2, 2, v6, v10);
        }
      }
      v10 = 0;
      goto LABEL_11;
    }
    goto LABEL_35;
  }
  return sub_6F8992C0(v2);
}
