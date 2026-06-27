signed int __cdecl sub_6F79BE40(int a1, int a2, unsigned int a3, int (__cdecl *a4)(int, int), void (__cdecl *a5)(int, const char *), int a6)
{
  char *v6; // eax@1
  char *v7; // edi@1
  signed int result; // eax@1
  int v9; // esi@3
  const char *v10; // eax@4
  const char *v11; // ebx@4
  int v12; // eax@15
  int *v13; // edx@25
  char *v14; // eax@30
  unsigned int v15; // edi@41
  int v16; // edx@52
  int v17; // edx@53
  int v18; // edx@54
  int v19; // edx@55
  int v20; // edx@56
  int v21; // edx@57
  int v22; // edx@58
  int v23; // edx@59
  int v24; // edx@60
  int v25; // edx@61
  int v26; // edi@61
  int *v27; // eax@63
  signed int v28; // edx@63
  int v29; // [sp+2Ch] [bp-70h]@1
  int v30; // [sp+30h] [bp-6Ch]@1
  int v31; // [sp+34h] [bp-68h]@32
  int v32; // [sp+38h] [bp-64h]@33
  int v33; // [sp+3Ch] [bp-60h]@34
  int v34; // [sp+40h] [bp-5Ch]@35
  int v35; // [sp+44h] [bp-58h]@36
  int v36; // [sp+48h] [bp-54h]@37
  int v37; // [sp+4Ch] [bp-50h]@38
  int v38; // [sp+50h] [bp-4Ch]@39
  int v39; // [sp+54h] [bp-48h]@25
  int v40; // [sp+58h] [bp-44h]@52
  int v41; // [sp+5Ch] [bp-40h]@53
  int v42; // [sp+60h] [bp-3Ch]@54
  int v43; // [sp+64h] [bp-38h]@55
  int v44; // [sp+68h] [bp-34h]@56
  int v45; // [sp+6Ch] [bp-30h]@57
  int v46; // [sp+70h] [bp-2Ch]@58
  int v47; // [sp+74h] [bp-28h]@59
  int v48; // [sp+78h] [bp-24h]@60
  int v49; // [sp+7Ch] [bp-20h]@61

  memset(&v30, 0, 0x28u);
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  v6 = sub_6F773B30(a1, 8, 0, a3 + 10, 0, &v29);
  v7 = v6;
  *(_DWORD *)(a2 + 20) = v6;
  result = v29;
  if ( !v29 )
  {
    if ( a3 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = (const char *)a4(a6, v9);
        v11 = v10;
        if ( v10 )
          break;
LABEL_29:
        if ( a3 == ++v9 )
        {
          v14 = *(char **)(a2 + 20);
          goto LABEL_31;
        }
      }
      if ( !strcmp("Delta", v10) )
      {
        v27 = &v30;
        v28 = 0;
      }
      else if ( !strcmp("Omega", v11) )
      {
        v27 = &v31;
        v28 = 1;
      }
      else if ( !strcmp("fraction", v11) )
      {
        v27 = &v32;
        v28 = 2;
      }
      else if ( !strcmp("hyphen", v11) )
      {
        v27 = &v33;
        v28 = 3;
      }
      else if ( !strcmp("macron", v11) )
      {
        v27 = &v34;
        v28 = 4;
      }
      else if ( !strcmp("mu", v11) )
      {
        v27 = &v35;
        v28 = 5;
      }
      else if ( !strcmp("periodcentered", v11) )
      {
        v27 = &v36;
        v28 = 6;
      }
      else if ( !strcmp("space", v11) )
      {
        v27 = &v37;
        v28 = 7;
      }
      else if ( !strcmp("Tcommaaccent", v11) )
      {
        v27 = &v38;
        v28 = 8;
      }
      else
      {
        if ( strcmp("tcommaaccent", v11) )
          goto LABEL_15;
        v27 = &v39;
        v28 = 9;
      }
      if ( !*v27 )
      {
        *v27 = 1;
        *(int *)((char *)&v40 + v28 * 4) = v9;
      }
LABEL_15:
      v12 = sub_6F79BC60((unsigned int)v11);
      if ( !(v12 & 0x7FFFFFFF) )
        goto LABEL_27;
      if ( v12 == 916 )
      {
        v30 = 2;
        goto LABEL_26;
      }
      switch ( v12 )
      {
        case 937:
          v13 = &v31;
          break;
        case 8725:
          v13 = &v32;
          break;
        case 173:
          v13 = &v33;
          break;
        case 713:
          v13 = &v34;
          break;
        case 956:
          v13 = &v35;
          break;
        case 8729:
          v13 = &v36;
          break;
        case 160:
          v13 = &v37;
          break;
        case 538:
          v13 = &v38;
          break;
        default:
          v13 = &v39;
          if ( v12 != 539 )
          {
LABEL_26:
            *(_DWORD *)v7 = v12;
            *((_DWORD *)v7 + 1) = v9;
            v7 += 8;
LABEL_27:
            if ( a5 )
              a5(a6, v11);
            goto LABEL_29;
          }
          break;
      }
      *v13 = 2;
      goto LABEL_26;
    }
    v14 = v7;
LABEL_31:
    if ( v30 == 1 )
    {
      v16 = v40;
      *(_DWORD *)v7 = 916;
      v7 += 8;
      *((_DWORD *)v7 - 1) = v16;
      if ( v31 != 1 )
      {
LABEL_33:
        if ( v32 != 1 )
          goto LABEL_34;
        goto LABEL_54;
      }
    }
    else if ( v31 != 1 )
    {
      goto LABEL_33;
    }
    v17 = v41;
    *(_DWORD *)v7 = 937;
    v7 += 8;
    *((_DWORD *)v7 - 1) = v17;
    if ( v32 != 1 )
    {
LABEL_34:
      if ( v33 != 1 )
        goto LABEL_35;
      goto LABEL_55;
    }
LABEL_54:
    v18 = v42;
    *(_DWORD *)v7 = 8725;
    v7 += 8;
    *((_DWORD *)v7 - 1) = v18;
    if ( v33 != 1 )
    {
LABEL_35:
      if ( v34 != 1 )
        goto LABEL_36;
      goto LABEL_56;
    }
LABEL_55:
    v19 = v43;
    *(_DWORD *)v7 = 173;
    v7 += 8;
    *((_DWORD *)v7 - 1) = v19;
    if ( v34 != 1 )
    {
LABEL_36:
      if ( v35 != 1 )
        goto LABEL_37;
      goto LABEL_57;
    }
LABEL_56:
    v20 = v44;
    *(_DWORD *)v7 = 713;
    v7 += 8;
    *((_DWORD *)v7 - 1) = v20;
    if ( v35 != 1 )
    {
LABEL_37:
      if ( v36 != 1 )
        goto LABEL_38;
      goto LABEL_58;
    }
LABEL_57:
    v21 = v45;
    *(_DWORD *)v7 = 956;
    v7 += 8;
    *((_DWORD *)v7 - 1) = v21;
    if ( v36 != 1 )
    {
LABEL_38:
      if ( v37 != 1 )
        goto LABEL_39;
      goto LABEL_59;
    }
LABEL_58:
    v22 = v46;
    *(_DWORD *)v7 = 8729;
    v7 += 8;
    *((_DWORD *)v7 - 1) = v22;
    if ( v37 != 1 )
    {
LABEL_39:
      if ( v38 != 1 )
        goto LABEL_40;
      goto LABEL_60;
    }
LABEL_59:
    v23 = v47;
    *(_DWORD *)v7 = 160;
    v7 += 8;
    *((_DWORD *)v7 - 1) = v23;
    if ( v38 != 1 )
    {
LABEL_40:
      if ( v39 != 1 )
        goto LABEL_41;
      goto LABEL_61;
    }
LABEL_60:
    v24 = v48;
    *(_DWORD *)v7 = 538;
    v7 += 8;
    *((_DWORD *)v7 - 1) = v24;
    if ( v39 != 1 )
    {
LABEL_41:
      v15 = (v7 - v14) >> 3;
      if ( v15 )
      {
LABEL_42:
        if ( v15 < a3 >> 1 )
        {
          v14 = sub_6F773B30(a1, 8, a3, v15, v14, &v29);
          v29 = 0;
          *(_DWORD *)(a2 + 20) = v14;
        }
        qsort(v14, v15, 8u, (int (__cdecl *)(const void *, const void *))sub_6F79B8E0);
        result = v29;
LABEL_45:
        *(_DWORD *)(a2 + 16) = v15;
        return result;
      }
LABEL_49:
      sub_6F773D90(a1, (int)v14);
      *(_DWORD *)(a2 + 20) = 0;
      result = v29;
      if ( !v29 )
        result = 163;
      goto LABEL_45;
    }
LABEL_61:
    v25 = v49;
    *(_DWORD *)v7 = 539;
    v26 = (int)(v7 + 8);
    *(_DWORD *)(v26 - 4) = v25;
    v15 = (v26 - (signed int)v14) >> 3;
    if ( v15 )
      goto LABEL_42;
    goto LABEL_49;
  }
  return result;
}
