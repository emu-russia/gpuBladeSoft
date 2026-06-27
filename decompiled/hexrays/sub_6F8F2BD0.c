int __stdcall sub_6F8F2BD0(__int64 a1, int a2, int a3, int *a4, int a5, unsigned int a6, int a7, _DWORD *a8)
{
  unsigned int v8; // eax@1
  char v9; // ST04_1@1
  void *v10; // esp@1
  signed int v11; // eax@2
  unsigned int v12; // edi@2
  unsigned int v13; // esi@2
  int v14; // ecx@2
  char v15; // dl@3
  char v16; // bl@3
  bool v17; // bl@4
  _BYTE *v18; // eax@6
  unsigned int v19; // edx@10
  _DWORD *v20; // ecx@13
  int v21; // edi@14
  unsigned int v22; // eax@17
  int v23; // eax@21
  int v24; // eax@21
  int v25; // eax@25
  int v26; // eax@25
  int v28; // eax@36
  int v29; // ebx@39
  int v30; // edi@40
  char v31; // al@41
  int v32; // ecx@43
  int v33; // edx@49
  unsigned int v34; // eax@49
  int *v35; // ebx@49
  void *v36; // esp@49
  int v37; // esi@49
  unsigned int v38; // edi@49
  int v39; // eax@50
  char v40; // [sp+4h] [bp-48h]@1
  char v41; // [sp+17h] [bp-35h]@1
  unsigned int v42; // [sp+18h] [bp-34h]@2
  char v43; // [sp+1Fh] [bp-2Dh]@8
  int v44; // [sp+20h] [bp-2Ch]@10
  int *v45; // [sp+24h] [bp-28h]@1
  int *v46; // [sp+28h] [bp-24h]@1
  unsigned int v47; // [sp+2Ch] [bp-20h]@10
  int *v48; // [sp+30h] [bp-1Ch]@4

  v46 = (int *)sub_6F95DC10(a7 + 108);
  v8 = 16 * ((8 * a6 + 27) >> 4);
  sub_6F8A13B0(v8, v9);
  v10 = alloca(v8);
  v45 = (int *)((unsigned int)&v41 & 0xFFFFFFF0);
  if ( sub_6F8C2310(&a1, (int)&a2) )
  {
    v42 = 0;
    v11 = HIDWORD(a1);
    v12 = 0;
    v13 = 0;
    v14 = a1;
  }
  else
  {
    v29 = 0;
    v13 = 0;
    LOBYTE(v48) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
    v12 = 2 * a6;
    if ( 2 * a6 )
    {
      v47 = 2 * a6;
      v30 = a5;
      do
      {
        while ( 1 )
        {
          v32 = **(_BYTE **)(v30 + 4 * v29);
          if ( (_BYTE)v32 == (_BYTE)v48 )
            break;
          v31 = (*(int (__thiscall **)(int, int))(*v46 + 8))((int)v46, v32);
          if ( (_BYTE)v48 == v31 )
            break;
          if ( ++v29 == v47 )
            goto LABEL_45;
        }
        v45[v13++] = v29++;
      }
      while ( v29 != v47 );
LABEL_45:
      v14 = a1;
      if ( v13 )
      {
        sub_6F92D0F0((_DWORD *)a1);
        v33 = v13;
        HIDWORD(a1) = -1;
        v34 = 16 * ((4 * v13 + 27) >> 4);
        sub_6F8A13B0(v34, v40);
        v35 = v45;
        v36 = alloca(v34);
        v47 = v13;
        v37 = a5;
        v48 = &v45[v33];
        v42 = (unsigned int)&v41 & 0xFFFFFFF0;
        v38 = (unsigned int)&v41 & 0xFFFFFFF0;
        do
        {
          v39 = *v35;
          v38 += 4;
          ++v35;
          *(_DWORD *)(v38 - 4) = strlen(*(const char **)(v37 + 4 * v39));
        }
        while ( v35 != v48 );
        v13 = v47;
        v14 = a1;
        v11 = -1;
        v12 = 1;
      }
      else
      {
        v11 = HIDWORD(a1);
        v12 = 0;
        v42 = 0;
      }
    }
    else
    {
      v11 = HIDWORD(a1);
      v14 = a1;
      v13 = 0;
      v42 = 0;
    }
  }
  v15 = v11 == -1;
  v16 = v15 & (v14 != 0);
  if ( (unsigned __int8)v15 & (v14 != 0) )
    goto LABEL_20;
LABEL_4:
  v17 = a3 == -1;
  LOBYTE(v48) = v17 && a2 != 0;
  if ( v17 && a2 != 0 )
  {
    v17 = 0;
    if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
    {
      v25 = *(_DWORD *)a2;
      LOBYTE(v47) = v15;
      v26 = (*(int (**)(void))(v25 + 36))();
      v15 = v47;
      if ( v26 == -1 )
      {
        a2 = 0;
        v17 = (char)v48;
      }
    }
  }
  if ( v15 != v17 )
  {
    LOBYTE(v18) = BYTE4(a1);
    if ( HIDWORD(a1) == -1 && (_DWORD)a1 )
    {
      v18 = *(_BYTE **)(a1 + 8);
      if ( (unsigned int)v18 >= *(_DWORD *)(a1 + 12) )
      {
        v18 = (_BYTE *)(*(int (**)(void))(*(_DWORD *)a1 + 36))();
        if ( v18 == (_BYTE *)-1 )
        {
          LODWORD(a1) = 0;
          v43 = -1;
          goto LABEL_9;
        }
      }
      else
      {
        LOBYTE(v18) = *v18;
      }
    }
    v43 = (char)v18;
LABEL_9:
    if ( !v13 )
      goto LABEL_34;
    v19 = 0;
    v48 = (int *)v12;
    v44 = 0;
    v47 = v42;
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = (_DWORD *)(4 * v19 + v47);
        if ( *v20 > (unsigned int)v48 )
          break;
        ++v44;
        ++v19;
LABEL_12:
        if ( v19 >= v13 )
          goto LABEL_16;
      }
      v21 = v45[v19];
      v46 = &v45[v19];
      if ( *((_BYTE *)v48 + *(_DWORD *)(a5 + 4 * v21)) == v43 )
      {
        ++v19;
        goto LABEL_12;
      }
      *v46 = v45[--v13];
      *v20 = *(_DWORD *)(v47 + 4 * v13);
      if ( v19 >= v13 )
      {
LABEL_16:
        v12 = (unsigned int)v48;
        if ( v44 == v13 )
          break;
        v14 = a1;
        v22 = *(_DWORD *)(a1 + 8);
        if ( v22 >= *(_DWORD *)(a1 + 12) )
        {
          (*(void (**)(void))(*(_DWORD *)a1 + 40))();
          v14 = a1;
        }
        else
        {
          *(_DWORD *)(a1 + 8) = v22 + 1;
        }
        ++v12;
        HIDWORD(a1) = -1;
        v15 = 1;
        v16 = v14 != 0;
        if ( v14 )
        {
LABEL_20:
          v15 = 0;
          if ( *(_DWORD *)(v14 + 8) >= *(_DWORD *)(v14 + 12) )
          {
            v23 = *(_DWORD *)v14;
            LOBYTE(v48) = 0;
            v24 = (*(int (**)(void))(v23 + 36))();
            v15 = (char)v48;
            if ( v24 == -1 )
            {
              LODWORD(a1) = 0;
              v15 = v16;
            }
          }
        }
        goto LABEL_4;
      }
    }
  }
  if ( v13 == 1 )
  {
    if ( *(_DWORD *)v42 != v12 )
    {
LABEL_34:
      *a8 |= 4u;
      return a1;
    }
  }
  else if ( v13 != 2 || *(_DWORD *)v42 != v12 && *(_DWORD *)(v42 + 4) != v12 )
  {
    goto LABEL_34;
  }
  v28 = *v45;
  if ( *v45 >= a6 )
    v28 = *v45 - a6;
  *a4 = v28;
  return a1;
}
