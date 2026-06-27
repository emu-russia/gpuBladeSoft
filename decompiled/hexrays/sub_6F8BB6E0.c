int __thiscall sub_6F8BB6E0(int this, int a2, int a3, int a4, char *a5, int a6, char *a7, int a8)
{
  char *v8; // eax@5
  int i; // edi@8
  int v10; // ebx@13
  signed int v11; // edx@16
  int v12; // ecx@21
  int v13; // eax@22
  int v14; // eax@30
  int v15; // ebx@30
  signed int v16; // eax@30
  signed int v17; // edx@30
  char *v18; // edx@32
  char v19; // bl@37
  int v20; // esi@37
  int v21; // edx@37
  int v22; // ecx@37
  int v23; // eax@38
  signed int v24; // ST48_4@49
  int v26; // edx@58
  int v27; // eax@70
  int v28; // eax@85
  int v29; // [sp+44h] [bp-54h]@1
  int v30; // [sp+48h] [bp-50h]@26
  signed int v31; // [sp+4Ch] [bp-4Ch]@19
  char v32; // [sp+4Ch] [bp-4Ch]@30
  char *v33; // [sp+50h] [bp-48h]@7
  char v34; // [sp+59h] [bp-3Fh]@5
  char v35; // [sp+5Ah] [bp-3Eh]@5
  char v36; // [sp+5Bh] [bp-3Dh]@5
  int v37; // [sp+68h] [bp-30h]@10
  int v38; // [sp+6Ch] [bp-2Ch]@23
  int v39; // [sp+70h] [bp-28h]@30
  int v40; // [sp+74h] [bp-24h]@30
  int v41; // [sp+78h] [bp-20h]@30

  v29 = this;
  if ( *(_BYTE *)(a8 + 16) & 0x10 )
    *(_DWORD *)(a8 + 16) = *(_DWORD *)(this + 8);
  if ( a5 == a7 && sub_6F8FD070(this, a6) )
  {
    *(_DWORD *)(a8 + 8) = a3;
    return 0;
  }
  if ( !sub_6F8FD070(v29, a4) )
  {
    v8 = 0;
    v34 = 0;
    v36 = 0;
    v35 = 1;
    if ( a2 >= 0 )
      v8 = &a7[-a2];
    v33 = v8;
LABEL_8:
    for ( i = *(_DWORD *)(v29 + 12); ; --i )
    {
      if ( !i )
      {
        v36 &= v35;
        v35 = 0;
        if ( v36 )
          goto LABEL_8;
        return (unsigned __int8)v34;
      }
      v14 = *(_DWORD *)(a8 + 16);
      v37 = 0;
      v38 = 0;
      v15 = a3;
      v32 = v14;
      v41 = v14;
      v39 = 0;
      v16 = *(_DWORD *)(v29 + 8 * i + 12);
      v40 = 0;
      v17 = v16 >> 8;
      if ( v16 & 1 )
      {
        v15 = a3 | 1;
        v17 = *(_DWORD *)(*(_DWORD *)a5 + v17);
      }
      v18 = &a5[v17];
      if ( v33 && v35 == v33 < v18 )
      {
        v36 = 1;
        continue;
      }
      if ( !(v16 & 2) )
      {
        if ( a2 == -2 && !(v32 & 3) )
          continue;
        v15 &= 0xFFFFFFFD;
      }
      v19 = (*(int (__stdcall **)(int, int, int, char *, int, char *, int *))(**(_DWORD **)(v29 + 8 * i + 8) + 28))(
              a2,
              v15,
              a4,
              v18,
              a6,
              a7,
              &v37);
      v20 = v40;
      v21 = v39 | *(_DWORD *)(a8 + 8);
      v30 = v21;
      v22 = v40;
      *(_DWORD *)(a8 + 8) = v21;
      if ( (v22 & 0xFFFFFFFB) == 2 )
      {
        v28 = v37;
        *(_DWORD *)(a8 + 12) = v20;
        *(_DWORD *)a8 = v28;
        *(_DWORD *)(a8 + 4) = v38;
        return (unsigned __int8)v19;
      }
      v23 = *(_DWORD *)a8;
      v12 = v37;
      if ( !v34 )
        break;
      if ( v23 )
        goto LABEL_10;
      if ( !v37 )
        goto LABEL_27;
      v10 = *(_DWORD *)(a8 + 12);
      if ( v21 <= 3 )
        goto LABEL_42;
LABEL_14:
      if ( !(v21 & 1) || !(*(_BYTE *)(a8 + 16) & 2) )
      {
        v11 = v10;
        if ( !v10 )
        {
          v11 = 1;
          v10 = 1;
        }
        if ( v20 )
        {
          v31 = v20;
          goto LABEL_20;
        }
LABEL_70:
        v27 = v11 ^ 1;
LABEL_71:
        if ( v27 > 3 )
          goto LABEL_72;
LABEL_51:
        v30 = *(_DWORD *)(a8 + 8);
        goto LABEL_52;
      }
LABEL_42:
      v11 = v10;
      v31 = v20;
      if ( v10 > 0 )
        goto LABEL_43;
      if ( v20 <= 3 || v20 & 1 && *(_BYTE *)(v29 + 8) & 2 )
      {
        if ( a2 < 0 )
        {
          if ( a2 != -2 )
          {
            v10 = (*(int (__thiscall **)(int, int, int, int, char *))(*(_DWORD *)a4 + 32))(a4, a2, v23, a6, a7);
            v11 = v10;
LABEL_43:
            if ( v20 <= 0 )
            {
              if ( v10 > 3 && (!(v10 & 1) || !(*(_BYTE *)(v29 + 8) & 2)) )
                goto LABEL_102;
              v12 = v37;
              if ( a2 >= 0 )
              {
                if ( a7 != (char *)(v37 + a2) )
                  goto LABEL_70;
                if ( (v10 ^ 6) > 3 )
                {
LABEL_98:
                  v13 = 2;
                  LOBYTE(v11) = 6;
                  v20 = 6;
LABEL_23:
                  *(_DWORD *)a8 = v12;
                  v34 = 0;
                  *(_DWORD *)(a8 + 4) = v38;
                  goto LABEL_24;
                }
                v31 = 6;
                goto LABEL_50;
              }
              if ( a2 == -2 )
              {
LABEL_102:
                v27 = v10 ^ 1;
                goto LABEL_71;
              }
              v24 = v11;
              v20 = (*(int (__thiscall **)(int, int, int, int, char *))(*(_DWORD *)a4 + 32))(a4, a2, v37, a6, a7);
              v11 = v24;
              v31 = v20;
              if ( (v20 ^ v24) > 3 )
                goto LABEL_21;
LABEL_50:
              if ( (v31 & v11) > 3 )
              {
                *(_DWORD *)a8 = 0;
                *(_DWORD *)(a8 + 12) = 2;
                return 1;
              }
              goto LABEL_51;
            }
LABEL_20:
            if ( (v20 ^ v11) > 3 )
              goto LABEL_21;
            goto LABEL_50;
          }
          if ( v20 <= 0 )
            goto LABEL_51;
        }
        else
        {
          if ( a7 == (char *)(a2 + v23) )
          {
            v11 = 6;
            v10 = 6;
            if ( v20 <= 0 )
            {
LABEL_72:
              v20 = v10;
              v13 = v11 & 2;
              goto LABEL_24;
            }
            goto LABEL_20;
          }
          if ( v20 <= 0 )
          {
            if ( a7 == (char *)(v37 + a2) )
              goto LABEL_98;
            v10 = 1;
            v11 = 1;
            goto LABEL_70;
          }
        }
        if ( (v20 ^ 1) > 3 )
        {
          v10 = 1;
LABEL_21:
          v12 = v37;
          if ( v20 > 3 )
          {
LABEL_22:
            LOBYTE(v11) = v20;
            v13 = v20 & 2;
            goto LABEL_23;
          }
          LOBYTE(v11) = v10;
          v20 = v10;
          v13 = v10 & 2;
LABEL_24:
          *(_DWORD *)(a8 + 12) = v20;
          if ( v13 || !(v11 & 1) )
            return 0;
          v30 = *(_DWORD *)(a8 + 8);
LABEL_27:
          if ( v30 == 4 )
            return (unsigned __int8)v34;
          continue;
        }
      }
      else if ( (v20 ^ 1) > 3 )
      {
        goto LABEL_22;
      }
LABEL_52:
      *(_DWORD *)a8 = 0;
      *(_DWORD *)(a8 + 12) = 1;
      v34 = 1;
      if ( v30 == 4 )
        return (unsigned __int8)v34;
    }
    if ( !v23 )
    {
      v26 = v38;
      *(_DWORD *)a8 = v37;
      *(_DWORD *)(a8 + 4) = v26;
      if ( v12 && v30 && !(*(_BYTE *)(v29 + 8) & 1) )
        return (unsigned __int8)v19;
      v34 = v19;
      goto LABEL_27;
    }
LABEL_10:
    if ( v23 == v37 )
    {
      *(_DWORD *)(a8 + 4) |= v38;
      goto LABEL_27;
    }
    if ( !v37 && !v19 )
      goto LABEL_27;
    v10 = *(_DWORD *)(a8 + 12);
    if ( v21 <= 3 )
      goto LABEL_42;
    goto LABEL_14;
  }
  *(_DWORD *)a8 = a5;
  *(_DWORD *)(a8 + 4) = a3;
  if ( a2 < 0 )
  {
    v34 = 0;
    if ( a2 == -2 )
      *(_DWORD *)(a8 + 12) = 1;
    return (unsigned __int8)v34;
  }
  *(_DWORD *)(a8 + 12) = 5 * (a7 == &a5[a2]) + 1;
  return 0;
}
