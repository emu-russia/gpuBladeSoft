signed int __thiscall sub_6F917E50(void *this, _WORD *a2, int a3)
{
  _DWORD *v3; // ebx@1
  _WORD *v4; // ebp@1
  int v5; // esi@1
  int v6; // ecx@2
  _WORD *v7; // eax@2
  signed int v8; // edi@2
  bool v9; // zf@5
  int v10; // eax@5
  int v11; // edx@5
  int v12; // edx@5
  int v13; // eax@5
  int v14; // ecx@5
  signed int v15; // eax@6
  int v16; // ecx@9
  char v17; // ST1C_1@10
  char v18; // al@10
  int v20; // eax@17
  _BYTE *v21; // edx@19
  _BYTE *v22; // eax@19
  signed int v23; // ST1C_4@20
  int v24; // eax@24
  int v25; // eax@28

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( *((_BYTE *)this + 84) )
  {
    v6 = *((_DWORD *)this + 2);
    v7 = (_WORD *)v3[1];
    v8 = 0;
    if ( a3 > 0 && v7 == (_WORD *)v6 )
    {
      v5 = a3 - 1;
      v4 = a2 + 1;
      v8 = 1;
      *a2 = *v7;
      v6 = (int)(v7 + 1);
    }
    v9 = v6 == (_DWORD)v7;
    v10 = v3[19];
    v11 = v3[15];
    *((_BYTE *)v3 + 84) = 0;
    v3[1] = v11;
    v12 = v3[11];
    v13 = v10 + 2 * !v9;
    v14 = v3[20];
    v3[19] = v13;
    v3[2] = v13;
    v3[3] = v14;
  }
  else if ( *((_BYTE *)this + 70) )
  {
    if ( (unsigned __int16)(*(int (__stdcall **)(signed int))(*(_DWORD *)this + 52))(0xFFFF) == -1 )
      return 0;
    v20 = v3[15];
    v12 = v3[11];
    v3[5] = 0;
    v8 = 0;
    v3[4] = 0;
    v3[1] = v20;
    v3[2] = v20;
    v3[3] = v20;
    v3[6] = 0;
    *((_BYTE *)v3 + 70) = 0;
  }
  else
  {
    v12 = *((_DWORD *)this + 11);
    v8 = 0;
  }
  v15 = 2;
  if ( v3[16] >= 2u )
    v15 = v3[16];
  if ( v5 <= v15 - 1 )
    goto LABEL_33;
  v16 = v3[22];
  if ( !v16 )
    sub_6F95AA30();
  v17 = v12;
  v18 = (*(int (**)(void))(*(_DWORD *)v16 + 24))();
  if ( v17 & 8 && v18 )
  {
    v21 = (_BYTE *)v3[3];
    v22 = (_BYTE *)v3[2];
    if ( v22 != v21 )
    {
      v23 = v21 - v22;
      memcpy(v4, v22, v21 - v22);
      v3[2] += v23;
      v4 = (_WORD *)((char *)v4 + v23);
      v8 += v23 >> 1;
      v5 -= v23 >> 1;
    }
    while ( 1 )
    {
      v24 = sub_6F90E520((FILE **)v3 + 9, (int)v4, v5);
      if ( v24 == -1 )
        sub_6F95ACA0("basic_filebuf::xsgetn error reading the file");
      if ( !v24 )
        break;
      v8 += v24;
      v5 -= v24;
      if ( !v5 )
        goto LABEL_27;
      v4 += v24;
    }
    if ( !v5 )
    {
LABEL_27:
      *((_BYTE *)v3 + 69) = 1;
      return v8;
    }
    v25 = v3[15];
    v3[5] = 0;
    v3[4] = 0;
    v3[1] = v25;
    v3[2] = v25;
    v3[3] = v25;
    v3[6] = 0;
    *((_BYTE *)v3 + 69) = 0;
  }
  else
  {
LABEL_33:
    v8 += sub_6F92DBF0(v3, v4, v5);
  }
  return v8;
}
