int __thiscall sub_6F916650(int this)
{
  int v1; // ebx@2
  unsigned int v2; // eax@3
  int result; // eax@5
  bool v4; // zf@8
  unsigned int v5; // edx@9
  int v6; // ecx@9
  signed int v7; // esi@10
  int v8; // ecx@12
  int v9; // eax@14
  int v10; // esi@15
  int v11; // ecx@15
  const void *v12; // eax@16
  signed int v13; // edi@16
  int v14; // edx@16
  int v15; // ecx@18
  char *v16; // ebp@21
  int v17; // ecx@22
  unsigned int v18; // eax@22
  char *v19; // edx@23
  int v20; // esi@23
  char v21; // di@24
  int v22; // ebp@26
  char v23; // al@27
  int v24; // eax@31
  int v25; // eax@37
  int v26; // eax@39
  const void *v27; // ecx@41
  unsigned int v28; // eax@41
  size_t v29; // esi@41
  int v30; // eax@47
  int v31; // edx@51
  int v32; // eax@57
  int v33; // ST4C_4@60
  char *v34; // eax@60
  int v35; // ST4C_4@62
  int v36; // ST4C_4@68
  char *v37; // eax@71
  int v38; // ST4C_4@72
  int v39; // ST4C_4@76
  char *v40; // eax@76
  unsigned int v41; // [sp+48h] [bp-34h]@12
  char *v42; // [sp+5Ch] [bp-20h]@23

  if ( !(*(_BYTE *)(this + 44) & 8) )
    return -1;
  v1 = this;
  if ( *(_BYTE *)(this + 70) )
  {
    result = (*(int (__stdcall **)(signed int))(*(_DWORD *)this + 52))(-1);
    if ( result == -1 )
      return result;
    v2 = *(_DWORD *)(v1 + 60);
    v4 = *(_BYTE *)(v1 + 80) == 0;
    *(_DWORD *)(v1 + 20) = 0;
    *(_DWORD *)(v1 + 16) = 0;
    *(_DWORD *)(v1 + 4) = v2;
    *(_DWORD *)(v1 + 8) = v2;
    *(_DWORD *)(v1 + 12) = v2;
    *(_DWORD *)(v1 + 24) = 0;
    *(_BYTE *)(v1 + 70) = 0;
    if ( v4 )
      goto LABEL_4;
LABEL_9:
    v4 = *(_DWORD *)(v1 + 4) == v2;
    v5 = *(_DWORD *)(v1 + 76);
    *(_BYTE *)(v1 + 80) = 0;
    v6 = *(_DWORD *)(v1 + 60);
    v2 = *(_DWORD *)(v1 + 72) + !v4;
    *(_DWORD *)(v1 + 12) = v5;
    *(_DWORD *)(v1 + 72) = v2;
    *(_DWORD *)(v1 + 4) = v6;
    *(_DWORD *)(v1 + 8) = v2;
    if ( v2 < v5 )
      return *(_BYTE *)v2;
    goto LABEL_10;
  }
  v2 = *(_DWORD *)(this + 8);
  if ( *(_BYTE *)(this + 80) )
    goto LABEL_9;
LABEL_4:
  if ( v2 < *(_DWORD *)(v1 + 12) )
    return *(_BYTE *)v2;
LABEL_10:
  v7 = 2;
  if ( *(_DWORD *)(v1 + 64) >= 2u )
    v7 = *(_DWORD *)(v1 + 64);
  v8 = *(_DWORD *)(v1 + 84);
  v41 = v7 - 1;
  if ( !v8 )
    sub_6F95AA30();
  if ( !(unsigned __int8)(*(int (**)(void))(*(_DWORD *)v8 + 24))() )
  {
    v9 = (*(int (**)(void))(**(_DWORD **)(v1 + 84) + 20))();
    if ( v9 <= 0 )
    {
      v26 = (*(int (**)(void))(**(_DWORD **)(v1 + 84) + 32))();
      v11 = v7 - 1;
      v10 = v7 + v26 - 2;
    }
    else
    {
      v10 = v41 * v9;
      v11 = v41 * v9;
    }
    v12 = *(const void **)(v1 + 96);
    v13 = *(_DWORD *)(v1 + 100) - (_DWORD)v12;
    v14 = v11 - v13;
    if ( v11 <= v13 )
      v14 = 0;
    v15 = *(_DWORD *)(v1 + 92);
    if ( *(_BYTE *)(v1 + 69) && *(_DWORD *)(v1 + 12) == *(_DWORD *)(v1 + 4) )
    {
      if ( *(const void **)(v1 + 100) == v12 )
      {
        if ( v10 <= v15 )
        {
          v16 = *(char **)(v1 + 88);
          goto LABEL_22;
        }
        v39 = v14;
        v40 = (char *)sub_6F961B40(v10);
        v14 = v39;
        v16 = v40;
LABEL_61:
        if ( *(_DWORD *)(v1 + 88) )
        {
          v35 = v14;
          j_j_free_1(*(void **)(v1 + 88));
          v14 = v35;
        }
        *(_DWORD *)(v1 + 88) = v16;
        *(_DWORD *)(v1 + 92) = v10;
LABEL_22:
        v17 = *(_DWORD *)(v1 + 52);
        v18 = (unsigned int)&v16[v13];
        *(_DWORD *)(v1 + 96) = v16;
        *(_DWORD *)(v1 + 100) = &v16[v13];
        *(_DWORD *)(v1 + 56) = v17;
        if ( v14 )
        {
          v20 = 0;
          goto LABEL_30;
        }
        v19 = *(char **)(v1 + 4);
        v20 = 0;
        v42 = *(char **)(v1 + 4);
        if ( v18 <= (unsigned int)v16 )
        {
LABEL_29:
          while ( 1 )
          {
            v18 = *(_DWORD *)(v1 + 100);
            v14 = 1;
            v13 = *(_DWORD *)(v1 + 100) - *(_DWORD *)(v1 + 88);
LABEL_30:
            if ( v14 + v13 > *(_DWORD *)(v1 + 92) )
              sub_6F95ACA0("basic_filebuf::underflow codecvt::max_length() is not valid");
            v24 = sub_6F90E520((FILE **)(v1 + 36), v18, v14);
            if ( v24 )
            {
              if ( v24 == -1 )
                goto LABEL_49;
              v21 = 0;
            }
            else
            {
              v21 = 1;
            }
            v19 = *(char **)(v1 + 4);
            v16 = *(char **)(v1 + 96);
            v18 = *(_DWORD *)(v1 + 100) + v24;
            *(_DWORD *)(v1 + 100) = v18;
            v42 = v19;
            if ( v18 > (unsigned int)v16 )
              break;
            if ( v20 == 3 )
              goto LABEL_41;
            if ( v21 )
              goto LABEL_37;
          }
        }
        else
        {
          v21 = 0;
        }
        v20 = (*(int (__thiscall **)(_DWORD, int, void *, unsigned int, int, void *, int, int *))(**(_DWORD **)(v1 + 84)
                                                                                                + 16))(
                *(_DWORD *)(v1 + 84),
                v1 + 52,
                v16,
                v18,
                v1 + 96,
                v19,
                (int)&v19[v41],
                (int *)&v42);
        if ( v20 != 3 )
        {
          v22 = (int)&v42[-*(_DWORD *)(v1 + 4)];
          if ( v20 != 2 )
          {
            v23 = v21 | (v42 != *(char **)(v1 + 4));
            goto LABEL_28;
          }
          if ( (signed int)&v42[-*(_DWORD *)(v1 + 4)] <= 0 )
          {
            if ( !v21 )
              sub_6F95ACA0("basic_filebuf::underflow invalid byte sequence in file");
            goto LABEL_57;
          }
          goto LABEL_51;
        }
        v18 = *(_DWORD *)(v1 + 100);
        v19 = *(char **)(v1 + 4);
LABEL_41:
        v27 = *(const void **)(v1 + 88);
        v28 = v18 - (_DWORD)v27;
        v22 = v28;
        v29 = v28;
        if ( v41 < v28 )
        {
          v29 = v41;
          v22 = v41;
        }
        else if ( !v28 )
        {
LABEL_43:
          *(_DWORD *)(v1 + 96) = v27;
          v20 = 3;
          v23 = v21 | (v22 != 0);
LABEL_28:
          if ( !v23 )
            goto LABEL_29;
          if ( v22 > 0 )
            goto LABEL_51;
          if ( v21 )
          {
LABEL_37:
            v25 = *(_DWORD *)(v1 + 60);
            *(_DWORD *)(v1 + 20) = 0;
            *(_DWORD *)(v1 + 16) = 0;
            *(_DWORD *)(v1 + 4) = v25;
            *(_DWORD *)(v1 + 8) = v25;
            *(_DWORD *)(v1 + 12) = v25;
            *(_DWORD *)(v1 + 24) = 0;
            *(_BYTE *)(v1 + 69) = 0;
            if ( v20 == 1 )
              sub_6F95ACA0("basic_filebuf::underflow incomplete character in file");
            return -1;
          }
LABEL_49:
          sub_6F95ACA0("basic_filebuf::underflow error reading the file");
        }
        memcpy(v19, v27, v29);
        v27 = (const void *)(*(_DWORD *)(v1 + 88) + v29);
        goto LABEL_43;
      }
      if ( v10 <= v15 )
      {
        v16 = *(char **)(v1 + 88);
        v14 = 0;
LABEL_68:
        v36 = v14;
        memmove(v16, v12, v13);
        v16 = *(char **)(v1 + 88);
        v14 = v36;
        goto LABEL_22;
      }
      v37 = (char *)sub_6F961B40(v10);
      v14 = 0;
      v16 = v37;
    }
    else
    {
      if ( v10 <= v15 )
      {
        v16 = *(char **)(v1 + 88);
        if ( *(const void **)(v1 + 100) == v12 )
          goto LABEL_22;
        goto LABEL_68;
      }
      v33 = v14;
      v34 = (char *)sub_6F961B40(v10);
      v14 = v33;
      v16 = v34;
      if ( !v13 )
        goto LABEL_61;
    }
    v38 = v14;
    memcpy(v16, *(const void **)(v1 + 96), v13);
    v14 = v38;
    goto LABEL_61;
  }
  v30 = sub_6F90E520((FILE **)(v1 + 36), *(_DWORD *)(v1 + 4), v41);
  v22 = v30;
  if ( !v30 )
  {
LABEL_57:
    v32 = *(_DWORD *)(v1 + 60);
    *(_DWORD *)(v1 + 20) = 0;
    *(_DWORD *)(v1 + 16) = 0;
    *(_DWORD *)(v1 + 4) = v32;
    *(_DWORD *)(v1 + 8) = v32;
    *(_DWORD *)(v1 + 12) = v32;
    *(_DWORD *)(v1 + 24) = 0;
    *(_BYTE *)(v1 + 69) = 0;
    return -1;
  }
  if ( v30 <= 0 )
    goto LABEL_49;
LABEL_51:
  v31 = *(_DWORD *)(v1 + 60);
  v4 = (*(_BYTE *)(v1 + 44) & 8) == 0;
  *(_DWORD *)(v1 + 4) = v31;
  *(_DWORD *)(v1 + 8) = v31;
  if ( v4 )
    *(_DWORD *)(v1 + 12) = v31;
  else
    *(_DWORD *)(v1 + 12) = v31 + v22;
  *(_DWORD *)(v1 + 20) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 24) = 0;
  *(_BYTE *)(v1 + 69) = 1;
  return *(_BYTE *)v31;
}
