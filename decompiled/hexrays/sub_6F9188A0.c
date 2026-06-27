signed int __thiscall sub_6F9188A0(int this)
{
  int v1; // ebx@2
  unsigned int v2; // eax@3
  signed int v3; // esi@5
  int v4; // ecx@7
  int v5; // eax@9
  int v6; // esi@10
  int v7; // ecx@10
  const void *v8; // eax@11
  signed int v9; // edi@11
  int v10; // edx@11
  int v11; // ecx@13
  char *v12; // ebp@16
  int v13; // ecx@17
  unsigned int v14; // eax@17
  void *v15; // edx@18
  int v16; // esi@18
  char v17; // di@19
  int v18; // ebp@21
  char v19; // al@22
  int v20; // eax@26
  int v21; // eax@32
  bool v22; // zf@35
  int v23; // eax@36
  int v24; // ecx@36
  unsigned int v25; // edx@36
  int v27; // eax@39
  int v28; // eax@40
  int v29; // ecx@43
  unsigned int v30; // eax@43
  unsigned int v31; // esi@43
  int v32; // eax@56
  int v33; // ST48_4@60
  char *v34; // eax@60
  int v35; // ST48_4@62
  char *v36; // eax@66
  int v37; // ST48_4@67
  int v38; // ST48_4@72
  int v39; // ST48_4@75
  char *v40; // eax@75
  unsigned int v41; // [sp+44h] [bp-34h]@7
  void *v42; // [sp+58h] [bp-20h]@18

  if ( !(*(_BYTE *)(this + 44) & 8) )
    return -1;
  v1 = this;
  if ( !*(_BYTE *)(this + 70) )
  {
    v2 = *(_DWORD *)(this + 8);
    if ( !*(_BYTE *)(this + 84) )
      goto LABEL_4;
    goto LABEL_36;
  }
  if ( (unsigned __int16)(*(int (__stdcall **)(signed int))(*(_DWORD *)this + 52))(0xFFFF) != -1 )
  {
    v2 = *(_DWORD *)(v1 + 60);
    v22 = *(_BYTE *)(v1 + 84) == 0;
    *(_DWORD *)(v1 + 20) = 0;
    *(_DWORD *)(v1 + 16) = 0;
    *(_DWORD *)(v1 + 4) = v2;
    *(_DWORD *)(v1 + 8) = v2;
    *(_DWORD *)(v1 + 12) = v2;
    *(_DWORD *)(v1 + 24) = 0;
    *(_BYTE *)(v1 + 70) = 0;
    if ( v22 )
    {
LABEL_4:
      if ( v2 >= *(_DWORD *)(v1 + 12) )
        goto LABEL_5;
      return *(_WORD *)v2;
    }
LABEL_36:
    v22 = *(_DWORD *)(v1 + 4) == v2;
    v23 = *(_DWORD *)(v1 + 76);
    *(_BYTE *)(v1 + 84) = 0;
    v24 = *(_DWORD *)(v1 + 60);
    v2 = v23 + 2 * !v22;
    v25 = *(_DWORD *)(v1 + 80);
    *(_DWORD *)(v1 + 76) = v2;
    *(_DWORD *)(v1 + 4) = v24;
    *(_DWORD *)(v1 + 8) = v2;
    *(_DWORD *)(v1 + 12) = v25;
    if ( v2 >= v25 )
    {
LABEL_5:
      v3 = 2;
      if ( *(_DWORD *)(v1 + 64) >= 2u )
        v3 = *(_DWORD *)(v1 + 64);
      v4 = *(_DWORD *)(v1 + 88);
      v41 = v3 - 1;
      if ( !v4 )
        sub_6F95AA30();
      if ( (unsigned __int8)(*(int (**)(void))(*(_DWORD *)v4 + 24))() )
      {
        v27 = sub_6F90E520((FILE **)(v1 + 36), *(_DWORD *)(v1 + 4), v41);
        v18 = v27;
        if ( !v27 )
        {
LABEL_40:
          v28 = *(_DWORD *)(v1 + 60);
          *(_DWORD *)(v1 + 20) = 0;
          *(_DWORD *)(v1 + 16) = 0;
          *(_DWORD *)(v1 + 4) = v28;
          *(_DWORD *)(v1 + 8) = v28;
          *(_DWORD *)(v1 + 12) = v28;
          *(_DWORD *)(v1 + 24) = 0;
          *(_BYTE *)(v1 + 69) = 0;
          return -1;
        }
        if ( v27 <= 0 )
          goto LABEL_58;
LABEL_53:
        v2 = *(_DWORD *)(v1 + 60);
        v22 = (*(_BYTE *)(v1 + 44) & 8) == 0;
        *(_DWORD *)(v1 + 4) = v2;
        *(_DWORD *)(v1 + 8) = v2;
        if ( v22 )
          *(_DWORD *)(v1 + 12) = v2;
        else
          *(_DWORD *)(v1 + 12) = v2 + 2 * v18;
        *(_DWORD *)(v1 + 20) = 0;
        *(_DWORD *)(v1 + 16) = 0;
        *(_DWORD *)(v1 + 24) = 0;
        *(_BYTE *)(v1 + 69) = 1;
        return *(_WORD *)v2;
      }
      v5 = (*(int (**)(void))(**(_DWORD **)(v1 + 88) + 20))();
      if ( v5 <= 0 )
      {
        v32 = (*(int (**)(void))(**(_DWORD **)(v1 + 88) + 32))();
        v7 = v3 - 1;
        v6 = v3 + v32 - 2;
      }
      else
      {
        v6 = v41 * v5;
        v7 = v41 * v5;
      }
      v8 = *(const void **)(v1 + 100);
      v9 = *(_DWORD *)(v1 + 104) - (_DWORD)v8;
      v10 = v7 - v9;
      if ( v7 <= v9 )
        v10 = 0;
      v11 = *(_DWORD *)(v1 + 96);
      if ( *(_BYTE *)(v1 + 69) && *(_DWORD *)(v1 + 12) == *(_DWORD *)(v1 + 4) )
      {
        if ( *(const void **)(v1 + 104) == v8 )
        {
          if ( v6 <= v11 )
          {
            v12 = *(char **)(v1 + 92);
            goto LABEL_17;
          }
          v39 = v10;
          v40 = (char *)sub_6F961B40(v6);
          v10 = v39;
          v12 = v40;
LABEL_61:
          if ( *(_DWORD *)(v1 + 92) )
          {
            v35 = v10;
            j_j_free_1(*(void **)(v1 + 92));
            v10 = v35;
          }
          *(_DWORD *)(v1 + 92) = v12;
          *(_DWORD *)(v1 + 96) = v6;
LABEL_17:
          v13 = *(_DWORD *)(v1 + 52);
          v14 = (unsigned int)&v12[v9];
          *(_DWORD *)(v1 + 100) = v12;
          *(_DWORD *)(v1 + 104) = &v12[v9];
          *(_DWORD *)(v1 + 56) = v13;
          if ( v10 )
          {
            v16 = 0;
            goto LABEL_25;
          }
          v15 = *(void **)(v1 + 4);
          v16 = 0;
          v42 = *(void **)(v1 + 4);
          if ( v14 <= (unsigned int)v12 )
          {
LABEL_24:
            while ( 1 )
            {
              v14 = *(_DWORD *)(v1 + 104);
              v10 = 1;
              v9 = *(_DWORD *)(v1 + 104) - *(_DWORD *)(v1 + 92);
LABEL_25:
              if ( v10 + v9 > *(_DWORD *)(v1 + 96) )
                sub_6F95ACA0("basic_filebuf::underflow codecvt::max_length() is not valid");
              v20 = sub_6F90E520((FILE **)(v1 + 36), v14, v10);
              if ( v20 )
              {
                if ( v20 == -1 )
                  goto LABEL_58;
                v17 = 0;
              }
              else
              {
                v17 = 1;
              }
              v15 = *(void **)(v1 + 4);
              v12 = *(char **)(v1 + 100);
              v14 = *(_DWORD *)(v1 + 104) + v20;
              *(_DWORD *)(v1 + 104) = v14;
              v42 = v15;
              if ( v14 > (unsigned int)v12 )
                break;
              if ( v16 == 3 )
                goto LABEL_43;
              if ( v17 )
                goto LABEL_32;
            }
          }
          else
          {
            v17 = 0;
          }
          v16 = (*(int (__thiscall **)(_DWORD, int, void *, unsigned int, int, void *, int, int *))(**(_DWORD **)(v1 + 88)
                                                                                                  + 16))(
                  *(_DWORD *)(v1 + 88),
                  v1 + 52,
                  v12,
                  v14,
                  v1 + 100,
                  v15,
                  (int)v15 + 2 * v41,
                  (int *)&v42);
          if ( v16 != 3 )
          {
            v18 = ((signed int)v42 - *(_DWORD *)(v1 + 4)) >> 1;
            if ( v16 != 2 )
            {
              v19 = v17 | (v42 != *(void **)(v1 + 4));
LABEL_23:
              if ( !v19 )
                goto LABEL_24;
              if ( v18 > 0 )
                goto LABEL_53;
              if ( !v17 )
LABEL_58:
                sub_6F95ACA0("basic_filebuf::underflow error reading the file");
LABEL_32:
              v21 = *(_DWORD *)(v1 + 60);
              *(_DWORD *)(v1 + 20) = 0;
              *(_DWORD *)(v1 + 16) = 0;
              *(_DWORD *)(v1 + 4) = v21;
              *(_DWORD *)(v1 + 8) = v21;
              *(_DWORD *)(v1 + 12) = v21;
              *(_DWORD *)(v1 + 24) = 0;
              *(_BYTE *)(v1 + 69) = 0;
              if ( v16 == 1 )
                sub_6F95ACA0("basic_filebuf::underflow incomplete character in file");
              return -1;
            }
            if ( (signed int)v42 - *(_DWORD *)(v1 + 4) <= 0 )
            {
              if ( !v17 )
                sub_6F95ACA0("basic_filebuf::underflow invalid byte sequence in file");
              goto LABEL_40;
            }
            goto LABEL_53;
          }
          v14 = *(_DWORD *)(v1 + 104);
          v15 = *(void **)(v1 + 4);
LABEL_43:
          v29 = *(_DWORD *)(v1 + 92);
          v30 = v14 - v29;
          v18 = v30;
          v31 = v30;
          if ( v41 < v30 )
          {
            v31 = v41;
            v18 = v41;
          }
          else if ( !v30 )
          {
LABEL_45:
            *(_DWORD *)(v1 + 100) = v29;
            v16 = 3;
            v19 = v17 | (v18 != 0);
            goto LABEL_23;
          }
          memcpy(v15, *(const void **)(v1 + 92), 2 * v31);
          v29 = *(_DWORD *)(v1 + 92) + v31;
          goto LABEL_45;
        }
        if ( v6 <= v11 )
        {
          v12 = *(char **)(v1 + 92);
          v10 = 0;
LABEL_72:
          v38 = v10;
          memmove(v12, v8, v9);
          v12 = *(char **)(v1 + 92);
          v10 = v38;
          goto LABEL_17;
        }
        v36 = (char *)sub_6F961B40(v6);
        v10 = 0;
        v12 = v36;
      }
      else
      {
        if ( v6 <= v11 )
        {
          v12 = *(char **)(v1 + 92);
          if ( *(const void **)(v1 + 104) == v8 )
            goto LABEL_17;
          goto LABEL_72;
        }
        v33 = v10;
        v34 = (char *)sub_6F961B40(v6);
        v10 = v33;
        v12 = v34;
        if ( !v9 )
          goto LABEL_61;
      }
      v37 = v10;
      memcpy(v12, *(const void **)(v1 + 100), v9);
      v10 = v37;
      goto LABEL_61;
    }
    return *(_WORD *)v2;
  }
  return -1;
}
