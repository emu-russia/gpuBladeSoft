void *__thiscall sub_6F920A70(void *this, char *a2, int a3, int a4)
{
  char *v4; // eax@1
  __int16 *v5; // eax@2
  __int16 v6; // ax@3
  unsigned int v7; // ebx@4
  int v8; // ebp@5
  unsigned int v9; // esi@7
  char *v10; // ecx@7
  int v11; // edi@8
  int v12; // edx@11
  int v13; // edi@11
  char *v14; // eax@12
  char *v15; // ecx@16
  signed int v16; // eax@21
  void (*v17)(void); // eax@22
  int v18; // eax@26
  int v19; // ecx@26
  __int16 v21; // ax@32
  __int16 *v22; // eax@34
  int (*v23)(void); // eax@36
  int (*v24)(void); // eax@37
  int (*v25)(void); // eax@43
  int (*v26)(void); // eax@45
  int v27; // [sp+0h] [bp-9Ch]@1
  void *v28; // [sp+1Ch] [bp-80h]@1
  int v29; // [sp+20h] [bp-7Ch]@10
  int v30; // [sp+24h] [bp-78h]@2
  __int16 v31; // [sp+2Ah] [bp-72h]@1
  int v32; // [sp+2Ch] [bp-70h]@15
  char *v33; // [sp+30h] [bp-6Ch]@31
  int *v34; // [sp+34h] [bp-68h]@1
  int v35; // [sp+38h] [bp-64h]@1
  char v36; // [sp+3Ch] [bp-60h]@1
  int v37; // [sp+40h] [bp-5Ch]@1
  int (__cdecl *v38)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-48h]@1
  int *v39; // [sp+58h] [bp-44h]@1
  char *v40; // [sp+5Ch] [bp-40h]@1
  int (__cdecl *v41)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, char, int, int, int); // [sp+60h] [bp-3Ch]@1
  int *v42; // [sp+64h] [bp-38h]@1
  char v43; // [sp+7Fh] [bp-1Dh]@1
  char v44; // [sp+80h] [bp-1Ch]@1

  v28 = this;
  v40 = &v44;
  v35 = a4;
  v31 = a4;
  v38 = sub_6F962A50;
  v39 = dword_6F96CBC8;
  v41 = sub_6F920EDA;
  v42 = &v27;
  v34 = (int *)&v36;
  sub_6F8A1A60((int *)&v36);
  v4 = (char *)v28;
  *((_DWORD *)v28 + 1) = 0;
  v37 = -1;
  sub_6F920460(&v43, v4, 1);
  if ( !v43 )
  {
LABEL_23:
    v8 = *((_DWORD *)v28 + 1);
    if ( a3 <= 0 )
      goto LABEL_27;
    goto LABEL_24;
  }
  v30 = *(_DWORD *)((char *)v28 + *(_DWORD *)(*(_DWORD *)v28 - 12) + 120);
  v5 = *(__int16 **)(v30 + 8);
  if ( *(_DWORD *)(v30 + 12) <= (unsigned int)v5 )
  {
    v24 = *(int (**)(void))(*(_DWORD *)v30 + 36);
    v37 = 4;
    v6 = v24();
  }
  else
  {
    v6 = *v5;
  }
  v7 = *((_DWORD *)v28 + 1);
LABEL_5:
  v8 = v7 + 1;
  if ( (signed int)(v7 + 1) < a3 )
  {
    while ( v6 != -1 )
    {
      v9 = *(_DWORD *)(v30 + 12);
      v10 = *(char **)(v30 + 8);
      if ( v6 == v31 )
        goto LABEL_47;
      v11 = (signed int)(v9 - (_DWORD)v10) >> 1;
      if ( (signed int)(a3 - v7 - 1) <= v11 )
        v11 = a3 - v7 - 1;
      v29 = v11;
      if ( v11 <= 1 )
      {
        v33 = a2 + 2;
        *(_WORD *)a2 = v6;
        *((_DWORD *)v28 + 1) = v8;
        if ( v9 <= (unsigned int)v10 )
        {
          v25 = *(int (**)(void))(*(_DWORD *)v30 + 40);
          v37 = 1;
          v21 = v25();
        }
        else
        {
          v21 = *(_WORD *)v10;
          *(_DWORD *)(v30 + 8) = v10 + 2;
        }
        if ( v21 != -1 )
        {
          v22 = *(__int16 **)(v30 + 8);
          if ( (unsigned int)v22 >= *(_DWORD *)(v30 + 12) )
          {
            v26 = *(int (**)(void))(*(_DWORD *)v30 + 36);
            v37 = 1;
            v6 = v26();
            v7 = *((_DWORD *)v28 + 1);
            a2 = v33;
          }
          else
          {
            v6 = *v22;
            v7 = *((_DWORD *)v28 + 1);
            a2 = v33;
          }
          goto LABEL_5;
        }
        v7 = *((_DWORD *)v28 + 1);
        a2 = v33;
        break;
      }
      v12 = v29;
      v13 = v29;
      if ( !v10 )
        goto LABEL_15;
      v14 = v10;
      while ( *(_WORD *)v14 != v31 )
      {
        v14 += 2;
        if ( !--v12 )
          goto LABEL_15;
      }
      v32 = v14 - v10;
      v29 = (v14 - v10) >> 1;
      v13 = (v14 - v10) >> 1;
      if ( v29 )
      {
LABEL_15:
        v32 = 2 * v13;
        memcpy(a2, v10, 2 * v13);
        v7 = *((_DWORD *)v28 + 1);
        v9 = *(_DWORD *)(v30 + 12);
        v10 = *(char **)(v30 + 8);
      }
      a2 += v32;
      v7 += v29;
      v15 = &v10[v32];
      *(_DWORD *)(v30 + 8) = v15;
      *((_DWORD *)v28 + 1) = v7;
      if ( (unsigned int)v15 >= v9 )
      {
        v23 = *(int (**)(void))(*(_DWORD *)v30 + 36);
        v37 = 6;
        v6 = v23();
        v7 = *((_DWORD *)v28 + 1);
        goto LABEL_5;
      }
      v6 = *(_WORD *)v15;
      v8 = v7 + 1;
      if ( (signed int)(v7 + 1) >= a3 )
        goto LABEL_18;
    }
    v16 = 2;
    if ( a3 > 0 )
      *(_WORD *)a2 = 0;
    goto LABEL_41;
  }
LABEL_18:
  if ( v6 == -1 )
  {
    if ( a3 > 0 )
    {
      *(_WORD *)a2 = 0;
      v16 = v7 < 1 ? 6 : 2;
      goto LABEL_26;
    }
    v16 = 2;
    goto LABEL_41;
  }
  if ( v6 != (_WORD)v35 )
  {
    if ( a3 > 0 )
    {
      *(_WORD *)a2 = 0;
      v16 = 4;
LABEL_26:
      v18 = *(_DWORD *)((char *)v28 + *(_DWORD *)(*(_DWORD *)v28 - 12) + 20) | v16;
      v19 = (int)v28 + *(_DWORD *)(*(_DWORD *)v28 - 12);
      v37 = -1;
      sub_6F958B40(v19, v18);
      goto LABEL_28;
    }
    v16 = 4;
LABEL_41:
    if ( !v7 )
      v16 |= 4u;
    goto LABEL_26;
  }
  v9 = *(_DWORD *)(v30 + 12);
  v10 = *(char **)(v30 + 8);
LABEL_47:
  *((_DWORD *)v28 + 1) = v8;
  if ( v9 <= (unsigned int)v10 )
  {
    v17 = *(void (**)(void))(*(_DWORD *)v30 + 40);
    v37 = 5;
    v17();
    goto LABEL_23;
  }
  *(_DWORD *)(v30 + 8) = v10 + 2;
  if ( a3 <= 0 )
  {
LABEL_27:
    if ( v8 )
      goto LABEL_28;
    goto LABEL_25;
  }
LABEL_24:
  *(_WORD *)a2 = 0;
  if ( !v8 )
  {
LABEL_25:
    v16 = 4;
    goto LABEL_26;
  }
LABEL_28:
  sub_6F8A1AD0(v34);
  return v28;
}
