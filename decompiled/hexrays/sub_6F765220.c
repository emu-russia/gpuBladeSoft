const char *__cdecl sub_6F765220(int a1, FILE *a2)
{
  const char *result; // eax@1
  int v3; // edx@3
  const char **v4; // esi@4
  unsigned int v5; // ebx@4
  int v6; // edi@4
  int v7; // ebp@6
  int v8; // ebx@19
  int v9; // esi@22
  const char *v10; // ebp@22
  const char *v11; // ecx@24
  const char *v12; // edx@26
  int v13; // ebp@31
  int v14; // edx@33
  int v15; // edi@33
  const char *v16; // ebx@33
  char *v17; // eax@34
  int v18; // esi@35
  int v19; // esi@49
  int v20; // ebx@63
  int v21; // ecx@63
  int v22; // [sp+18h] [bp-34h]@3
  signed int v23; // [sp+18h] [bp-34h]@33
  const char **v24; // [sp+1Ch] [bp-30h]@19
  signed int v25; // [sp+1Ch] [bp-30h]@31
  int v26; // [sp+24h] [bp-28h]@4

  result = (const char *)a1;
  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *(_DWORD *)(a1 + 4);
      v22 = *(_DWORD *)(a1 + 4);
      if ( v3 > 0 )
      {
        v4 = *(const char ***)(a1 + 12);
        v26 = 0;
        v5 = ((unsigned int)(4 * v3 - 4) >> 2) & 3;
        v6 = (int)&v4[v3];
        if ( *v4 )
          v26 = (unsigned int)strchr(*v4, 58) < 1;
        v7 = (int)(v4 + 1);
        if ( (const char **)v6 != v4 + 1 )
        {
          if ( !v5 )
            goto LABEL_89;
          if ( v5 != 1 )
          {
            if ( v5 != 2 )
            {
              if ( *(_DWORD *)v7 )
                v26 += (unsigned int)strchr(*(const char **)v7, 58) < 1;
              v7 = (int)(v4 + 2);
            }
            if ( *(_DWORD *)v7 )
              v26 += (unsigned int)strchr(*(const char **)v7, 58) < 1;
            v7 += 4;
          }
          if ( *(_DWORD *)v7 )
            v26 += (unsigned int)strchr(*(const char **)v7, 58) < 1;
          v7 += 4;
          if ( v6 != v7 )
          {
LABEL_89:
            v8 = v26;
            v24 = v4;
            do
            {
              if ( *(_DWORD *)v7 )
                v8 += (unsigned int)strchr(*(const char **)v7, 58) < 1;
              v9 = v7 + 4;
              v10 = *(const char **)(v7 + 4);
              if ( v10 )
                v8 += (unsigned int)strchr(v10, 58) < 1;
              v11 = *(const char **)(v9 + 4);
              if ( v11 )
                v8 += (unsigned int)strchr(v11, 58) < 1;
              v12 = *(const char **)(v9 + 8);
              if ( v12 )
                v8 += (unsigned int)strchr(v12, 58) < 1;
              v7 = v9 + 12;
            }
            while ( v6 != v9 + 12 );
            v4 = v24;
            v26 = v8;
          }
        }
        if ( v26 )
        {
          v13 = v22;
          v25 = 0;
          while ( 1 )
          {
            if ( v13 <= 0 )
              goto LABEL_61;
            v23 = 0;
            v14 = ((_BYTE)v13 - 1) & 3;
            v15 = *(_DWORD *)(a1 + 12);
            v16 = *(const char **)v15;
            if ( *(_DWORD *)v15 )
            {
              v17 = strchr(v16, 58);
              v14 = ((_BYTE)v13 - 1) & 3;
              if ( !v17 )
              {
                v23 = 1;
                if ( v25 < 1 )
                  goto LABEL_59;
              }
            }
            v18 = 1;
            if ( 1 != v13 )
            {
              if ( !v14 )
                break;
              if ( v14 != 1 )
              {
                if ( v14 != 2 )
                {
                  v16 = *(const char **)(v15 + 4);
                  if ( v16 )
                  {
                    if ( !strchr(v16, 58) && ++v23 > v25 )
                      goto LABEL_59;
                  }
                  v18 = 2;
                }
                v16 = *(const char **)(v15 + 4 * v18);
                if ( v16 )
                {
                  if ( !strchr(v16, 58) && ++v23 > v25 )
                    goto LABEL_59;
                }
                ++v18;
              }
              v16 = *(const char **)(v15 + 4 * v18);
              if ( v16 )
              {
                if ( !strchr(v16, 58) && ++v23 > v25 )
                  goto LABEL_59;
              }
              if ( ++v18 != v13 )
                break;
            }
LABEL_69:
            if ( v23 <= v25 )
              goto LABEL_61;
            v16 = *(const char **)(v15 + 4 * v18);
            if ( v16 )
              goto LABEL_59;
            if ( ++v25 == v26 )
              return (const char *)fputc(10, a2);
LABEL_62:
            v13 = *(_DWORD *)(a1 + 4);
          }
          while ( 1 )
          {
            v16 = *(const char **)(v15 + 4 * v18);
            if ( v16 )
            {
              if ( !strchr(v16, 58) && ++v23 > v25 )
                break;
            }
            v19 = v18 + 1;
            v16 = *(const char **)(v15 + 4 * v19);
            if ( v16 )
            {
              if ( !strchr(v16, 58) && ++v23 > v25 )
                break;
            }
            v16 = *(const char **)(v15 + 4 * v19 + 4);
            if ( v16 )
            {
              if ( !strchr(v16, 58) && ++v23 > v25 )
                break;
            }
            v16 = *(const char **)(v15 + 4 * v19 + 8);
            if ( v16 )
            {
              if ( !strchr(v16, 58) && ++v23 > v25 )
                break;
            }
            v18 = v19 + 3;
            if ( v18 == v13 )
              goto LABEL_69;
          }
LABEL_59:
          if ( sub_6F764A70(a1, v16, -1) != -1 )
            sub_6F764980(a1, v16, a2);
LABEL_61:
          if ( ++v25 == v26 )
            return (const char *)fputc(10, a2);
          goto LABEL_62;
        }
        v20 = 0;
        v21 = v22;
        while ( 1 )
        {
          result = v4[v20];
          if ( result )
          {
            result = (const char *)fprintf(a2, "%s = %s\n", result, *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v20));
            v21 = *(_DWORD *)(a1 + 4);
          }
          if ( ++v20 >= v21 )
            break;
          v4 = *(const char ***)(a1 + 12);
        }
      }
    }
  }
  return result;
}
