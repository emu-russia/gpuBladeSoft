void *__thiscall sub_6F903F20(void *this, char *a2, int a3, int a4)
{
  char *v4; // eax@1
  _DWORD *v5; // eax@3
  signed int v6; // eax@4
  int v7; // eax@5
  int v8; // ecx@5
  _BYTE *v9; // eax@6
  int v10; // eax@7
  int v11; // edi@9
  int v12; // edx@9
  int v13; // esi@11
  _BYTE *v14; // ebx@11
  int v15; // ecx@12
  _BYTE *v16; // eax@15
  int v17; // edi@17
  _DWORD *v18; // esi@17
  unsigned int v20; // edi@26
  int v21; // ebx@27
  unsigned int v22; // edx@27
  unsigned int v23; // eax@27
  _BYTE *v24; // eax@28
  int (*v25)(void); // eax@31
  int (*v26)(void); // eax@32
  int (*v27)(void); // eax@33
  int (*v28)(void); // eax@41
  _BYTE *v29; // eax@42
  _DWORD *v30; // ebx@43
  unsigned int v31; // eax@43
  void (*v32)(void); // eax@48
  int v33; // [sp+0h] [bp-9Ch]@1
  int v34; // [sp+14h] [bp-88h]@1
  size_t v35; // [sp+18h] [bp-84h]@1
  void *v36; // [sp+1Ch] [bp-80h]@1
  _BYTE *v37; // [sp+20h] [bp-7Ch]@11
  int v38; // [sp+24h] [bp-78h]@6
  unsigned int v39; // [sp+28h] [bp-74h]@11
  int v40; // [sp+2Ch] [bp-70h]@6
  int v41; // [sp+30h] [bp-6Ch]@8
  char *v42; // [sp+34h] [bp-68h]@27
  int *v43; // [sp+38h] [bp-64h]@1
  char v44; // [sp+3Ch] [bp-60h]@1
  int v45; // [sp+40h] [bp-5Ch]@1
  int (__cdecl *v46)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-48h]@1
  int *v47; // [sp+58h] [bp-44h]@1
  char *v48; // [sp+5Ch] [bp-40h]@1
  int (__cdecl *v49)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, char, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int); // [sp+60h] [bp-3Ch]@1
  int *v50; // [sp+64h] [bp-38h]@1
  char v51; // [sp+7Fh] [bp-1Dh]@1
  char v52; // [sp+80h] [bp-1Ch]@1

  v36 = this;
  v34 = a4;
  LOBYTE(v35) = a4;
  v46 = sub_6F962A50;
  v47 = dword_6F96CB70;
  v48 = &v52;
  v49 = sub_6F9043C1;
  v50 = &v33;
  v43 = (int *)&v44;
  sub_6F8A1A60((int *)&v44);
  v4 = (char *)v36;
  *((_DWORD *)v36 + 1) = 0;
  v45 = -1;
  sub_6F903800(&v51, v4, 1);
  if ( v51 )
  {
    v40 = (unsigned __int8)v34;
    v38 = *(_DWORD *)((char *)v36 + *(_DWORD *)(*(_DWORD *)v36 - 12) + 120);
    v9 = *(_BYTE **)(v38 + 8);
    if ( *(_DWORD *)(v38 + 12) <= (unsigned int)v9 )
    {
      v26 = *(int (**)(void))(*(_DWORD *)v38 + 36);
      v45 = 4;
      v10 = v26();
    }
    else
    {
      v10 = *v9;
    }
    v34 = *((_DWORD *)v36 + 1);
    v41 = (char)v35;
LABEL_9:
    while ( 2 )
    {
      v11 = v34;
      v12 = v34 + 1;
      if ( v34 + 1 >= a3 )
      {
LABEL_19:
        if ( v10 != -1 )
        {
          if ( v40 == v10 )
          {
            v29 = *(_BYTE **)(v38 + 8);
            v39 = *(_DWORD *)(v38 + 12);
            v37 = v29;
LABEL_43:
            v30 = v36;
            v31 = (unsigned int)v37;
            *((_DWORD *)v36 + 1) = v12;
            if ( v39 > v31 )
            {
              *(_DWORD *)(v38 + 8) = v31 + 1;
              if ( a3 > 0 )
              {
                *a2 = 0;
                if ( v30[1] )
                  goto LABEL_25;
                goto LABEL_4;
              }
LABEL_24:
              if ( v12 )
                goto LABEL_25;
              goto LABEL_4;
            }
            v32 = *(void (**)(void))(*(_DWORD *)v38 + 40);
            v45 = 5;
            v32();
            if ( a3 > 0 )
            {
              *a2 = 0;
              if ( *((_DWORD *)v36 + 1) )
                goto LABEL_25;
              goto LABEL_4;
            }
LABEL_23:
            v12 = *((_DWORD *)v36 + 1);
            goto LABEL_24;
          }
          if ( a3 > 0 )
          {
            *a2 = 0;
            v6 = 4;
            goto LABEL_5;
          }
          v6 = 4;
LABEL_38:
          if ( !v34 )
            v6 |= 4u;
          goto LABEL_5;
        }
        if ( a3 > 0 )
        {
          *a2 = 0;
          v6 = *((_DWORD *)v36 + 1) < 1u ? 6 : 2;
          goto LABEL_5;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v10 == -1 )
          {
            v42 = a2;
            goto LABEL_34;
          }
          v13 = *(_DWORD *)(v38 + 12);
          v14 = *(_BYTE **)(v38 + 8);
          v39 = *(_DWORD *)(v38 + 12);
          v37 = v14;
          if ( v40 == v10 )
            goto LABEL_43;
          v15 = v13 - (_DWORD)v14;
          if ( a3 - v11 - 1 <= v13 - (signed int)v14 )
            v15 = a3 - v11 - 1;
          v35 = v15;
          if ( v15 <= 1 )
            break;
          v16 = memchr(v37, v41, v35);
          if ( !v16 || (v35 = v16 - v37, v16 != v37) )
          {
            memcpy(a2, v37, v35);
            v20 = *(_DWORD *)(v38 + 12);
            v16 = (_BYTE *)(*(_DWORD *)(v38 + 8) + v35);
            v34 = *((_DWORD *)v36 + 1);
            v39 = v20;
          }
          v34 += v35;
          v17 = v34;
          a2 += v35;
          v18 = v36;
          *(_DWORD *)(v38 + 8) = v16;
          v18[1] = v17;
          if ( v39 <= (unsigned int)v16 )
          {
            v25 = *(int (**)(void))(*(_DWORD *)v38 + 36);
            v45 = 6;
            v10 = v25();
            v34 = *((_DWORD *)v36 + 1);
            goto LABEL_9;
          }
          v11 = v34;
          v10 = *v16;
          v12 = v34 + 1;
          if ( v34 + 1 >= a3 )
            goto LABEL_19;
        }
        v21 = v38;
        *a2 = v10;
        v22 = *(_DWORD *)(v21 + 12);
        v42 = a2 + 1;
        ++*((_DWORD *)v36 + 1);
        v23 = *(_DWORD *)(v21 + 8);
        if ( v23 < v22 )
        {
          v24 = (_BYTE *)(v23 + 1);
          *(_DWORD *)(v21 + 8) = v24;
          goto LABEL_29;
        }
        v27 = *(int (**)(void))(*(_DWORD *)v38 + 40);
        v45 = 1;
        if ( v27() != -1 )
        {
          v24 = *(_BYTE **)(v38 + 8);
          v22 = *(_DWORD *)(v38 + 12);
LABEL_29:
          if ( (unsigned int)v24 >= v22 )
          {
            v28 = *(int (**)(void))(*(_DWORD *)v38 + 36);
            v45 = 1;
            v10 = v28();
            a2 = v42;
            v34 = *((_DWORD *)v36 + 1);
          }
          else
          {
            v10 = *v24;
            a2 = v42;
            v34 = *((_DWORD *)v36 + 1);
          }
          continue;
        }
LABEL_34:
        if ( a3 > 0 )
          *v42 = 0;
        v34 = *((_DWORD *)v36 + 1);
      }
      break;
    }
    v6 = 2;
    goto LABEL_38;
  }
  if ( a3 <= 0 )
    goto LABEL_23;
  v5 = v36;
  *a2 = 0;
  if ( !v5[1] )
  {
LABEL_4:
    v6 = 4;
LABEL_5:
    v7 = *(_DWORD *)((char *)v36 + *(_DWORD *)(*(_DWORD *)v36 - 12) + 20) | v6;
    v8 = (int)v36 + *(_DWORD *)(*(_DWORD *)v36 - 12);
    v45 = -1;
    sub_6F9581E0(v8, v7);
  }
LABEL_25:
  sub_6F8A1AD0(v43);
  return v36;
}
