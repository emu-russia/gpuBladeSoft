unsigned int __usercall sub_6F89F3B0@<eax>(unsigned int result@<eax>, int a2@<edx>, int *a3@<ecx>, int a4)
{
  int *v4; // ebx@2
  unsigned int v5; // esi@2
  int v6; // edx@5
  int v7; // edi@5
  int v8; // ecx@12
  int v9; // ebp@17
  int v10; // ecx@17
  int v11; // ecx@17
  signed int v12; // eax@17
  int v13; // edx@18
  int v14; // eax@19
  int v15; // ebp@21
  unsigned int v16; // eax@21
  const char *v17; // ebp@31
  char i; // bl@31
  signed int v19; // ecx@32
  int v20; // eax@36
  signed int v21; // eax@38
  char *v22; // ebx@38
  char j; // dl@38
  signed int v24; // ecx@39
  int v25; // eax@43
  char v26; // ST18_1@43
  char *v27; // ebx@44
  size_t v28; // eax@44
  signed int v29; // edx@44
  char *v30; // edi@45
  signed int v31; // ecx@46
  char v32; // al@48
  int v33; // edx@49
  char v34; // ST18_1@49
  const char *v35; // ebx@51
  char k; // al@51
  signed int v37; // ecx@52
  int v38; // edx@56
  char v39; // ST18_1@56
  int v40; // [sp+14h] [bp-48h]@1
  int *v41; // [sp+18h] [bp-44h]@31
  int v42; // [sp+1Ch] [bp-40h]@45
  char v43[53]; // [sp+27h] [bp-35h]@44

  v40 = a2;
  if ( a3 )
  {
    v4 = a3;
    v5 = result;
    if ( !*(_DWORD *)(result + 280) )
    {
      do
      {
        result = v4[2];
        if ( !result )
        {
          v8 = v4[1];
          result = *(_DWORD *)v8;
          if ( a4 )
            goto LABEL_5;
          if ( result != 76 )
          {
            if ( result <= 0x4C )
            {
              if ( result - 28 > 4 )
                goto LABEL_5;
            }
            else if ( result - 78 > 1 )
            {
LABEL_5:
              v6 = v4[3];
              v7 = *(_DWORD *)(v5 + 272);
              v4[2] = 1;
              *(_DWORD *)(v5 + 272) = v6;
              if ( result == 41 )
              {
                result = sub_6F89F080(v5, v40, (int *)(v8 + 12), *v4);
                *(_DWORD *)(v5 + 272) = v7;
                return result;
              }
              if ( result == 42 )
              {
                result = sub_6F89F770(v5, v40, (int *)(v8 + 8), (int *)*v4);
                *(_DWORD *)(v5 + 272) = v7;
                return result;
              }
              if ( result == 2 )
              {
                v9 = *(_DWORD *)(v5 + 276);
                v10 = *(_DWORD *)(v8 + 8);
                *(_DWORD *)(v5 + 276) = 0;
                sub_6F899DD0(v5, v40, v10);
                *(_DWORD *)(v5 + 276) = v9;
                v12 = *(_DWORD *)(v5 + 256);
                if ( v40 & 4 )
                {
                  v13 = v12 + 1;
                  if ( v12 == 255 )
                  {
                    v14 = *(_DWORD *)(v5 + 268);
                    *(_BYTE *)(v5 + 255) = 0;
                    (*(void (__fastcall **)(int, int))(v5 + 264))(v11, v13);
                    ++*(_DWORD *)(v5 + 296);
                    v13 = 1;
                    v12 = 0;
                  }
                  *(_DWORD *)(v5 + 256) = v13;
                  *(_BYTE *)(v5 + v12) = 46;
                  *(_BYTE *)(v5 + 260) = 46;
                }
                else
                {
                  v41 = v4;
                  v17 = "::";
                  for ( i = 58; ; i = *v17 )
                  {
                    if ( v12 == 255 )
                    {
                      v20 = *(_DWORD *)(v5 + 268);
                      *(_BYTE *)(v5 + 255) = 0;
                      (*(void (__cdecl **)(unsigned int, signed int, int))(v5 + 264))(v5, 255, v20);
                      ++*(_DWORD *)(v5 + 296);
                      v12 = 1;
                      v19 = 0;
                    }
                    else
                    {
                      v19 = v12++;
                    }
                    ++v17;
                    *(_DWORD *)(v5 + 256) = v12;
                    *(_BYTE *)(v5 + v19) = i;
                    *(_BYTE *)(v5 + 260) = i;
                    if ( v17 == "" )
                      break;
                  }
                  v4 = v41;
                }
                v15 = *(_DWORD *)(v4[1] + 12);
                v16 = *(_DWORD *)v15;
                if ( *(_DWORD *)v15 == 70 )
                {
                  v21 = *(_DWORD *)(v5 + 256);
                  v22 = "default arg#";
                  for ( j = 123; ; j = *v22++ )
                  {
                    if ( v21 == 255 )
                    {
                      v25 = *(_DWORD *)(v5 + 268);
                      *(_BYTE *)(v5 + 255) = 0;
                      v26 = j;
                      (*(void (__cdecl **)(unsigned int, signed int, int))(v5 + 264))(v5, 255, v25);
                      ++*(_DWORD *)(v5 + 296);
                      v21 = 1;
                      v24 = 0;
                      j = v26;
                    }
                    else
                    {
                      v24 = v21++;
                    }
                    *(_DWORD *)(v5 + 256) = v21;
                    *(_BYTE *)(v5 + v24) = j;
                    *(_BYTE *)(v5 + 260) = j;
                    if ( v22 == "" )
                      break;
                  }
                  v27 = v43;
                  sprintf(v43, "%d", *(_DWORD *)(v15 + 12) + 1);
                  v28 = strlen(v43);
                  v29 = *(_DWORD *)(v5 + 256);
                  if ( v28 )
                  {
                    v42 = v7;
                    v30 = &v43[v28];
                    do
                    {
                      v32 = *v27;
                      if ( v29 == 255 )
                      {
                        v33 = *(_DWORD *)(v5 + 268);
                        *(_BYTE *)(v5 + 255) = 0;
                        v34 = v32;
                        (*(void (__cdecl **)(unsigned int, signed int, int))(v5 + 264))(v5, 255, v33);
                        ++*(_DWORD *)(v5 + 296);
                        v29 = 1;
                        v31 = 0;
                        v32 = v34;
                      }
                      else
                      {
                        v31 = v29++;
                      }
                      ++v27;
                      *(_DWORD *)(v5 + 256) = v29;
                      *(_BYTE *)(v5 + v31) = v32;
                      *(_BYTE *)(v5 + 260) = v32;
                    }
                    while ( v30 != v27 );
                    v7 = v42;
                  }
                  v35 = "}::";
                  for ( k = 125; ; k = *v35 )
                  {
                    if ( v29 == 255 )
                    {
                      v38 = *(_DWORD *)(v5 + 268);
                      *(_BYTE *)(v5 + 255) = 0;
                      v39 = k;
                      (*(void (__cdecl **)(unsigned int, signed int, int))(v5 + 264))(v5, 255, v38);
                      ++*(_DWORD *)(v5 + 296);
                      v29 = 1;
                      v37 = 0;
                      k = v39;
                    }
                    else
                    {
                      v37 = v29++;
                    }
                    *(_DWORD *)(v5 + 256) = v29;
                    ++v35;
                    *(_BYTE *)(v5 + v37) = k;
                    *(_BYTE *)(v5 + 260) = k;
                    if ( "" == v35 )
                      break;
                  }
                  goto LABEL_30;
                }
                while ( 1 )
                {
                  if ( v16 != 76 )
                  {
                    if ( v16 > 0x4C )
                    {
                      if ( v16 - 78 > 1 )
                      {
LABEL_25:
                        result = sub_6F899DD0(v5, v40, v15);
                        *(_DWORD *)(v5 + 272) = v7;
                        return result;
                      }
                    }
                    else if ( v16 - 28 > 4 )
                    {
                      goto LABEL_25;
                    }
                  }
LABEL_30:
                  v15 = *(_DWORD *)(v15 + 8);
                  v16 = *(_DWORD *)v15;
                }
              }
              result = sub_6F89E760(v5, v40, v8);
              *(_DWORD *)(v5 + 272) = v7;
              goto LABEL_9;
            }
          }
        }
LABEL_9:
        v4 = (int *)*v4;
      }
      while ( v4 && !*(_DWORD *)(v5 + 280) );
    }
  }
  return result;
}
