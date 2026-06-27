signed int __thiscall sub_6F915C00(_DWORD *this, _BYTE *a2, int a3)
{
  _DWORD *v3; // ebx@1
  _BYTE *v4; // esi@1
  int v5; // ebp@1
  _BYTE *v6; // eax@2
  signed int v7; // edi@2
  _BYTE *v8; // ecx@2
  bool v9; // zf@4
  int v10; // ecx@4
  int v11; // edx@4
  int v12; // eax@4
  int v13; // edx@4
  signed int v14; // eax@5
  int v15; // ecx@8
  char v16; // ST1C_1@9
  char v17; // al@9
  int v19; // eax@18
  const void *v20; // eax@20
  int v21; // eax@25
  size_t v22; // ST1C_4@21
  int v23; // eax@29

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( *((_BYTE *)this + 80) )
  {
    v6 = (_BYTE *)this[2];
    v7 = 0;
    v8 = (_BYTE *)this[1];
    if ( a3 <= 0 || v6 != v8 )
      goto LABEL_4;
    v5 = a3 - 1;
    *a2 = *v6;
    v6 = (_BYTE *)(v3[2] + 1);
    v9 = *((_BYTE *)v3 + 80) == 0;
    v3[2] = v6;
    if ( !v9 )
    {
      v4 = a2 + 1;
      v8 = (_BYTE *)v3[1];
      v7 = 1;
LABEL_4:
      v9 = v8 == v6;
      v10 = v3[19];
      v11 = v3[15];
      *((_BYTE *)v3 + 80) = 0;
      v12 = v3[18] + !v9;
      v3[3] = v10;
      v3[18] = v12;
      v3[2] = v12;
      v3[1] = v11;
      v13 = v3[11];
      goto LABEL_5;
    }
    v4 = a2 + 1;
    v13 = v3[11];
    v7 = 1;
  }
  else if ( *((_BYTE *)this + 70) )
  {
    if ( (*(int (__stdcall **)(signed int))(*this + 52))(-1) == -1 )
      return 0;
    v19 = v3[15];
    v13 = v3[11];
    v3[5] = 0;
    v7 = 0;
    v3[4] = 0;
    v3[1] = v19;
    v3[2] = v19;
    v3[3] = v19;
    v3[6] = 0;
    *((_BYTE *)v3 + 70) = 0;
  }
  else
  {
    v13 = this[11];
    v7 = 0;
  }
LABEL_5:
  v14 = 2;
  if ( v3[16] >= 2u )
    v14 = v3[16];
  if ( v5 <= v14 - 1 )
    goto LABEL_35;
  v15 = v3[21];
  if ( !v15 )
    sub_6F95AA30();
  v16 = v13;
  v17 = (*(int (**)(void))(*(_DWORD *)v15 + 24))();
  if ( v16 & 8 && v17 )
  {
    v20 = (const void *)v3[2];
    if ( (const void *)v3[3] != v20 )
    {
      v22 = v3[3] - (_DWORD)v20;
      memcpy(v4, v20, v22);
      v3[2] += v22;
      v4 += v22;
      v7 += v22;
      v5 -= v22;
    }
    while ( 1 )
    {
      v21 = sub_6F90E520((FILE **)v3 + 9, (int)v4, v5);
      if ( v21 == -1 )
        sub_6F95ACA0("basic_filebuf::xsgetn error reading the file");
      if ( !v21 )
        break;
      v7 += v21;
      v5 -= v21;
      if ( !v5 )
        goto LABEL_28;
      v4 += v21;
    }
    if ( !v5 )
    {
LABEL_28:
      *((_BYTE *)v3 + 69) = 1;
      return v7;
    }
    v23 = v3[15];
    v3[5] = 0;
    v3[4] = 0;
    v3[1] = v23;
    v3[2] = v23;
    v3[3] = v23;
    v3[6] = 0;
    *((_BYTE *)v3 + 69) = 0;
  }
  else
  {
LABEL_35:
    v7 += sub_6F92D240(v3, v4, v5);
  }
  return v7;
}
