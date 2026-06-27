int __usercall sub_6F7985C0@<eax>(int *a1@<eax>, int a2@<edx>)
{
  int v2; // eax@1
  int v3; // edx@1
  int v4; // eax@1
  unsigned int v5; // ebx@2
  int v6; // edx@2
  int v7; // ecx@2
  int v8; // edx@2
  _BYTE *v9; // ebp@2
  unsigned int v10; // ecx@3
  _BYTE *v11; // esi@7
  _BYTE *v12; // edi@7
  int result; // eax@15
  char *v14; // esi@17
  unsigned int v15; // edi@19
  int v16; // ebx@19
  char *v17; // ecx@19
  unsigned int v18; // edx@19
  char *v19; // ebp@23
  unsigned int v20; // edi@23
  unsigned int v21; // ebp@27
  unsigned int v22; // eax@27
  int v23; // esi@29
  int v24; // ecx@29
  int v25; // eax@29
  int v26; // eax@33
  int v27; // esi@33
  const void *v28; // eax@34
  size_t v29; // esi@34
  int v30; // edi@34
  int v31; // ebp@34
  void *v32; // ST00_4@34
  int v33; // ebx@34
  unsigned int v34; // ecx@39
  unsigned int v35; // edx@39
  signed int v36; // ebp@44
  bool v37; // zf@44
  int v38; // edi@46
  char v39; // al@47
  int v40; // [sp+24h] [bp-58h]@27
  unsigned int v41; // [sp+28h] [bp-54h]@5
  unsigned int v42; // [sp+2Ch] [bp-50h]@2
  int v43; // [sp+30h] [bp-4Ch]@3
  unsigned int v44; // [sp+34h] [bp-48h]@3
  int v45; // [sp+38h] [bp-44h]@1
  int v46; // [sp+3Ch] [bp-40h]@2
  int v47; // [sp+40h] [bp-3Ch]@2
  int *v48; // [sp+44h] [bp-38h]@1
  unsigned int v49; // [sp+48h] [bp-34h]@2
  int v50; // [sp+4Ch] [bp-30h]@1
  int v51; // [sp+5Ch] [bp-20h]@39

  v48 = a1;
  v50 = a2;
  v2 = *a1 - 1;
  v3 = v2;
  v45 = v2;
  v4 = 16 * v2;
  if ( v3 > 0 )
  {
    do
    {
      while ( 2 )
      {
        v5 = --v45;
        v49 = v45 + 1;
        v6 = v48[2];
        v7 = v6 + v4;
        v46 = v4 - 16;
        v8 = v4 - 16 + v6;
        v47 = v7;
        v9 = *(_BYTE **)(v7 + 8);
        v42 = *(_DWORD *)v7;
        while ( 1 )
        {
          v43 = v5;
          v10 = v42;
          v44 = *(_DWORD *)v8;
          if ( *(_DWORD *)v8 <= v42 )
            v10 = *(_DWORD *)v8;
          v41 = v10;
          if ( v10 <= 7 )
          {
            v11 = *(_BYTE **)(v8 + 8);
            v12 = v9;
          }
          else
          {
            if ( **(_BYTE **)(v8 + 8) & *v9 )
              break;
            v11 = *(_BYTE **)(v8 + 8);
            v12 = v9;
            while ( 1 )
            {
              v10 -= 8;
              ++v12;
              ++v11;
              if ( v10 <= 7 )
                break;
              if ( *v11 & *v12 )
                goto LABEL_17;
            }
            v41 = v10;
          }
          if ( v41 && ~(255 >> v41) & (unsigned __int8)(*v11 & *v12) )
            break;
          --v5;
          v8 -= 16;
          if ( v5 == -1 )
            goto LABEL_14;
        }
LABEL_17:
        v14 = v9;
        if ( v49 < v5 )
        {
          v17 = *(char **)(v8 + 8);
          v15 = v42;
          v16 = v8;
          v18 = v43;
          v42 = v44;
        }
        else
        {
          if ( v49 <= v5 )
            goto LABEL_14;
          v14 = *(char **)(v8 + 8);
          v15 = *(_DWORD *)v8;
          v16 = v47;
          v17 = v9;
          v47 = v8;
          v43 = v45 + 1;
          v18 = v45 + 1;
        }
        if ( *v48 <= v18 )
        {
LABEL_14:
          v4 -= 16;
          if ( v45 )
            continue;
          return 0;
        }
        break;
      }
      if ( v42 )
      {
        if ( v15 < v42 )
        {
          v51 = 0;
          v34 = (unsigned int)(*(_DWORD *)(v47 + 4) + 7) >> 3;
          v35 = (v42 + 7) >> 3;
          if ( v34 < v35 )
          {
            v36 = (v35 + 7) & 0xFFFFFFF8;
            v14 = sub_6F773B30(v50, 1, v34, v36, v14, &v51);
            result = v51;
            v37 = v51 == 0;
            *(_DWORD *)(v47 + 8) = v14;
            if ( !v37 )
              return result;
            *(_DWORD *)(v47 + 4) = 8 * v36;
            v35 = (v42 + 7) >> 3;
          }
          do
          {
            if ( v15 < *(_DWORD *)v47 )
            {
              v14[v15 >> 3] &= ~(128 >> (v15 & 7));
              v14 = *(char **)(v47 + 8);
            }
            ++v15;
          }
          while ( v15 != v42 );
          v19 = v14;
          v17 = *(char **)(v16 + 8);
          v20 = v35;
        }
        else
        {
          v19 = v14;
          v20 = (v42 + 7) >> 3;
        }
        if ( v20 )
        {
          if ( v20 <= 6 || v17 < v14 + 4 && v14 < v17 + 4 || ((unsigned __int8)v14 | (unsigned __int8)v17) & 3 )
          {
            v38 = (int)&v17[v20];
            do
            {
              v39 = *v17++;
              *v19 |= v39;
              ++v19;
            }
            while ( (char *)v38 != v17 );
          }
          else
          {
            v21 = ((v20 - 4) >> 2) + 1;
            v22 = 0;
            v40 = 4 * v21;
            do
            {
              *(_DWORD *)&v14[4 * v22] |= *(_DWORD *)&v17[4 * v22];
              ++v22;
            }
            while ( v22 < v21 );
            v23 = (int)&v14[v40];
            v24 = (int)&v17[v40];
            v25 = v20 - v40;
            if ( v40 != v20 )
            {
              *(_BYTE *)v23 |= *(_BYTE *)v24;
              if ( v25 != 1 )
              {
                *(_BYTE *)(v23 + 1) |= *(_BYTE *)(v24 + 1);
                if ( v25 != 2 )
                  *(_BYTE *)(v23 + 2) |= *(_BYTE *)(v24 + 2);
              }
            }
          }
        }
      }
      *(_DWORD *)v16 = 0;
      *(_DWORD *)(v16 + 12) = 0;
      v26 = *v48 - 1;
      v27 = v26 - v43;
      if ( v26 - v43 > 0 )
      {
        v28 = (const void *)(v16 + 16);
        v29 = 16 * v27;
        v30 = *(_DWORD *)(v16 + 4);
        v31 = *(_DWORD *)(v16 + 8);
        v32 = (void *)v16;
        v33 = v29 + v16;
        memmove(v32, v28, v29);
        *(_DWORD *)v33 = 0;
        *(_DWORD *)(v33 + 4) = v30;
        *(_DWORD *)(v33 + 8) = v31;
        *(_DWORD *)(v33 + 12) = 0;
        v26 = *v48 - 1;
      }
      *v48 = v26;
      v4 = v46;
    }
    while ( v45 );
  }
  return 0;
}
