int __usercall sub_6F8992C0@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // edx@1
  char v3; // al@1
  int v4; // eax@4
  int v5; // ebp@4
  bool v6; // cf@5
  bool v7; // zf@5
  char v8; // al@6
  char v10; // al@12
  int v11; // eax@15
  int v12; // edx@16
  char *v13; // edx@17
  int v14; // eax@17
  int v15; // eax@21
  _BYTE *v16; // edi@21
  _BYTE *v17; // esi@21
  signed int v18; // ecx@21
  int v19; // eax@25
  int v20; // ecx@31
  char v21; // al@35
  unsigned __int8 v22; // al@36
  int v23; // esi@37
  int v24; // eax@38
  signed int v25; // esi@45
  int v26; // eax@46
  int v27; // esi@56
  char *v28; // edx@57
  int v29; // eax@58
  int v30; // edx@59
  char *v31; // ecx@59
  int v32; // eax@60
  unsigned __int8 v33; // al@63

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_BYTE *)v2;
  if ( (unsigned __int8)(*(_BYTE *)v2 - 48) <= 9u )
  {
    v5 = sub_6F896ED0(v1);
    if ( **(_BYTE **)(v1 + 12) != 66 )
      return v5;
    return sub_6F897050(v1, v5);
  }
  if ( (unsigned __int8)(v3 - 97) <= 0x19u )
  {
    if ( v3 == 111 && *(_BYTE *)(v2 + 1) == 110 )
      *(_DWORD *)(v1 + 12) = v2 + 2;
    v4 = sub_6F898D30(v1);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_DWORD *)v4 < 0x31u;
      v7 = *(_DWORD *)v4 == 49;
      if ( *(_DWORD *)v4 == 49 )
      {
        v15 = *(_DWORD *)(v4 + 8);
        v16 = &unk_6FBA4A3C;
        v17 = *(_BYTE **)v15;
        v18 = 3;
        *(_DWORD *)(v1 + 44) += *(_DWORD *)(v15 + 8) + 7;
        do
        {
          if ( !v18 )
            break;
          v6 = *v17 < *v16;
          v7 = *v17++ == *v16++;
          --v18;
        }
        while ( v7 );
        if ( (!v6 && !v7) == v6 )
        {
          v19 = sub_6F896ED0(v1);
          v5 = sub_6F896B60(v1, 54, v5, v19);
        }
      }
    }
    goto LABEL_6;
  }
  if ( (unsigned __int8)(v3 - 67) <= 1u )
  {
    v20 = *(_DWORD *)(v1 + 40);
    if ( v20 && (!*(_DWORD *)v20 || *(_DWORD *)v20 == 24) )
    {
      *(_DWORD *)(v1 + 44) += *(_DWORD *)(v20 + 12);
      v8 = *(_BYTE *)v2;
      if ( *(_BYTE *)v2 == 67 )
      {
LABEL_35:
        v21 = *(_BYTE *)(v2 + 1);
        if ( v21 == 73 )
        {
          *(_DWORD *)(v1 + 12) = v2 + 1;
          v33 = *(_BYTE *)(v2 + 2) - 49;
          if ( v33 > 4u )
          {
            v8 = *(_BYTE *)(v2 + 1);
            v5 = 0;
            goto LABEL_7;
          }
          *(_DWORD *)(v1 + 12) = v2 + 3;
          v23 = dword_6FBA5158[v33];
          sub_6F898420(v1);
          v20 = *(_DWORD *)(v1 + 40);
        }
        else
        {
          v22 = v21 - 49;
          if ( v22 > 4u )
            return 0;
          *(_DWORD *)(v1 + 12) = v2 + 2;
          v23 = dword_6FBA5158[v22];
        }
        v24 = *(_DWORD *)(v1 + 20);
        if ( v24 >= *(_DWORD *)(v1 + 24) )
          goto LABEL_62;
        v5 = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
        *(_DWORD *)(v5 + 4) = 0;
        *(_DWORD *)(v1 + 20) = v24 + 1;
        if ( !v20 || (unsigned int)(v23 - 1) > 4 )
          goto LABEL_62;
        *(_DWORD *)(v5 + 4) = 0;
        *(_DWORD *)v5 = 7;
        *(_DWORD *)(v5 + 8) = v23;
        *(_DWORD *)(v5 + 12) = v20;
        goto LABEL_6;
      }
      if ( v8 != 68 )
      {
LABEL_54:
        v5 = 0;
        goto LABEL_7;
      }
    }
    else if ( v3 != 68 )
    {
      goto LABEL_35;
    }
    switch ( *(_BYTE *)(v2 + 1) )
    {
      default:
        return 0;
      case 0x30:
        v25 = 1;
        break;
      case 0x34:
        v25 = 4;
        break;
      case 0x35:
        v25 = 5;
        break;
      case 0x31:
        v25 = 2;
        break;
      case 0x32:
        v25 = 3;
        break;
    }
    *(_DWORD *)(v1 + 12) = v2 + 2;
    v26 = *(_DWORD *)(v1 + 20);
    if ( v26 < *(_DWORD *)(v1 + 24) )
    {
      v5 = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20);
      *(_DWORD *)(v5 + 4) = 0;
      *(_DWORD *)(v1 + 20) = v26 + 1;
      if ( v20 )
      {
        *(_DWORD *)(v5 + 4) = 0;
        *(_DWORD *)v5 = 8;
        *(_DWORD *)(v5 + 8) = v25;
        *(_DWORD *)(v5 + 12) = v20;
        v8 = *(_BYTE *)(v2 + 2);
        goto LABEL_7;
      }
    }
    v8 = *(_BYTE *)(v2 + 2);
    goto LABEL_54;
  }
  if ( v3 == 76 )
  {
    *(_DWORD *)(v1 + 12) = v2 + 1;
    v5 = sub_6F896ED0(v1);
    if ( v5 && sub_6F897340(v1) )
      goto LABEL_6;
  }
  else if ( v3 == 85 )
  {
    v10 = *(_BYTE *)(v2 + 1);
    if ( v10 == 108 )
    {
      v5 = 0;
      *(_DWORD *)(v1 + 12) = v2 + 1;
      v8 = *(_BYTE *)(v2 + 1);
      if ( v8 != 108 )
        goto LABEL_7;
      *(_DWORD *)(v1 + 12) = v2 + 2;
      v27 = sub_6F898EE0(v1);
      if ( v27 )
      {
        v28 = *(char **)(v1 + 12);
        v8 = *v28;
        if ( *v28 != 69 )
          goto LABEL_7;
        *(_DWORD *)(v1 + 12) = v28 + 1;
        v29 = sub_6F896E30(v1);
        if ( v29 >= 0 )
        {
          v30 = *(_DWORD *)(v1 + 20);
          v31 = *(char **)(v1 + 12);
          if ( v30 >= *(_DWORD *)(v1 + 24)
            || (v5 = *(_DWORD *)(v1 + 16) + 16 * *(_DWORD *)(v1 + 20),
                *(_DWORD *)(v5 + 4) = 0,
                *(_DWORD *)(v1 + 20) = v30 + 1,
                *(_DWORD *)(v5 + 12) = v29,
                v32 = *(_DWORD *)(v1 + 32),
                *(_DWORD *)v5 = 69,
                *(_DWORD *)(v5 + 8) = v27,
                v32 >= *(_DWORD *)(v1 + 36)) )
          {
            v8 = *v31;
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(*(_DWORD *)(v1 + 28) + 4 * v32) = v5;
            *(_DWORD *)(v1 + 32) = v32 + 1;
            v8 = *v31;
          }
LABEL_7:
          if ( v8 != 66 )
            return v5;
          return sub_6F897050(v1, v5);
        }
LABEL_62:
        v5 = 0;
        v8 = **(_BYTE **)(v1 + 12);
        goto LABEL_7;
      }
LABEL_6:
      v8 = **(_BYTE **)(v1 + 12);
      goto LABEL_7;
    }
    if ( v10 == 116 )
    {
      v5 = 0;
      *(_DWORD *)(v1 + 12) = v2 + 1;
      v8 = *(_BYTE *)(v2 + 1);
      if ( v8 != 116 )
        goto LABEL_7;
      *(_DWORD *)(v1 + 12) = v2 + 2;
      v11 = sub_6F896E30(v1);
      if ( v11 >= 0 )
      {
        v12 = *(_DWORD *)(v1 + 20);
        if ( v12 < *(_DWORD *)(v1 + 24) )
        {
          v5 = *(_DWORD *)(v1 + 16) + 16 * v12;
          *(_DWORD *)(v5 + 4) = 0;
          *(_DWORD *)(v1 + 20) = v12 + 1;
          v13 = *(char **)(v1 + 12);
          *(_DWORD *)(v5 + 8) = v11;
          v14 = *(_DWORD *)(v1 + 32);
          *(_DWORD *)v5 = 71;
          if ( v14 >= *(_DWORD *)(v1 + 36) )
          {
            v8 = *v13;
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(*(_DWORD *)(v1 + 28) + 4 * v14) = v5;
            *(_DWORD *)(v1 + 32) = v14 + 1;
            v8 = *v13;
          }
          goto LABEL_7;
        }
        goto LABEL_62;
      }
      goto LABEL_6;
    }
  }
  return 0;
}
