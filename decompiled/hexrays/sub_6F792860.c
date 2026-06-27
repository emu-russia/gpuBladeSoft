int __usercall sub_6F792860@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx@1
  int *v4; // ebp@2
  int v5; // edi@3
  signed int v6; // eax@4
  unsigned int v7; // ecx@6
  _BYTE *v8; // eax@6
  int v9; // esi@7
  int v11; // edx@12
  _BYTE *v12; // eax@17
  unsigned int v13; // ecx@17
  int v14; // edx@21
  void *v15; // eax@22
  int v16; // edx@22
  int v17; // edx@26
  int v18; // edx@33
  int v19; // esi@45
  bool v20; // al@50
  bool v21; // zf@50
  int (__cdecl *v22)(int, int, _DWORD); // eax@53
  int v23; // edx@56
  int v24; // eax@56
  const char *v25; // edi@66
  signed int v26; // ecx@66
  int v27; // [sp+10h] [bp-3Ch]@2
  int v28; // [sp+14h] [bp-38h]@2
  int v29; // [sp+18h] [bp-34h]@2
  size_t v30; // [sp+1Ch] [bp-30h]@22
  const void *v31; // [sp+28h] [bp-24h]@9
  int v32; // [sp+2Ch] [bp-20h]@22

  v3 = *(_DWORD *)(a1 + 4);
  if ( (unsigned int)(a3 - 1) <= 4 )
  {
    v4 = (int *)(a2 + 4);
    v28 = a3;
    v29 = a1;
    v27 = 0;
    while ( 1 )
    {
      v5 = *(v4 - 1);
      if ( v5 )
        break;
      v6 = *(_DWORD *)(v3 + 12);
      if ( v6 <= 0 )
      {
        v8 = *(_BYTE **)v3;
        v7 = *(_DWORD *)(v3 + 8);
        while ( (unsigned int)v8 < v7 )
        {
          *(_DWORD *)v3 = ++v8;
          v18 = *(v8 - 1);
          if ( v18 != 32 && v18 != 9 )
          {
            if ( v18 == 13 || v18 == 10 )
              goto LABEL_30;
            if ( v18 == 59 )
            {
              *(_DWORD *)(v3 + 12) = 1;
              goto LABEL_7;
            }
            if ( v18 != 26 )
              goto LABEL_7;
            goto LABEL_19;
          }
        }
        goto LABEL_19;
      }
      if ( v6 > 1 )
        return v27;
      v7 = *(_DWORD *)(v3 + 8);
      v8 = *(_BYTE **)v3;
LABEL_7:
      v9 = (int)(v8 - 1);
      while ( 1 )
      {
        if ( v7 <= (unsigned int)v8 )
        {
LABEL_9:
          *(_DWORD *)(v3 + 12) = 3;
          v31 = (const void *)v9;
          if ( !v9 )
            return v27;
          goto LABEL_21;
        }
        *(_DWORD *)v3 = ++v8;
        v11 = *(v8 - 1);
        if ( v11 == 13 || v11 == 10 )
          break;
        if ( v11 == 26 )
          goto LABEL_9;
      }
      *(_DWORD *)(v3 + 12) = 2;
      v31 = (const void *)v9;
      if ( !v9 )
        return v27;
LABEL_21:
      v14 = *(_DWORD *)v3 + ~v9;
LABEL_22:
      v30 = v14;
      v15 = (void *)sub_6F773AE0(*(_DWORD *)v29, v14 + 1, &v32);
      v16 = v32;
      *v4 = (int)v15;
      if ( !v16 )
      {
        memcpy(v15, v31, v30);
        *(_BYTE *)(*v4 + v30) = 0;
      }
LABEL_24:
      ++v27;
      v4 += 2;
      if ( v28 == v27 )
        return v28;
    }
    if ( *(_DWORD *)(v3 + 12) <= 0 )
    {
      v12 = *(_BYTE **)v3;
      v13 = *(_DWORD *)(v3 + 8);
      while ( v13 > (unsigned int)v12 )
      {
        *(_DWORD *)v3 = ++v12;
        v17 = *(v12 - 1);
        if ( v17 != 32 && v17 != 9 )
        {
          if ( v17 == 13 || v17 == 10 )
          {
LABEL_30:
            *(_DWORD *)(v3 + 12) = 2;
            return v27;
          }
          if ( v17 == 59 )
          {
            *(_DWORD *)(v3 + 12) = 1;
            return v27;
          }
          if ( v17 == 26 )
            break;
          v19 = (int)(v12 - 1);
          while ( 1 )
          {
            if ( v13 <= (unsigned int)v12 )
            {
LABEL_47:
              *(_DWORD *)(v3 + 12) = 3;
              goto LABEL_48;
            }
            v23 = (int)(v12 + 1);
            *(_DWORD *)v3 = v12 + 1;
            v24 = *v12;
            if ( v24 == 32 || v24 == 9 )
              goto LABEL_48;
            if ( v24 == 13 || v24 == 10 )
            {
              *(_DWORD *)(v3 + 12) = 2;
              goto LABEL_48;
            }
            if ( v24 == 59 )
              break;
            if ( v24 == 26 )
              goto LABEL_47;
            v12 = (_BYTE *)v23;
          }
          *(_DWORD *)(v3 + 12) = 1;
LABEL_48:
          v31 = (const void *)v19;
          if ( v19 )
          {
            v14 = *(_DWORD *)v3 + ~v19;
            switch ( v5 )
            {
              case 0:
              case 1:
                goto LABEL_22;
              case 4:
                v20 = 0;
                v21 = v14 == 4;
                if ( v14 == 4 )
                {
                  v25 = "true";
                  v26 = 4;
                  do
                  {
                    if ( !v26 )
                      break;
                    v21 = *(_BYTE *)v19++ == *v25++;
                    --v26;
                  }
                  while ( v21 );
                  v20 = v21;
                }
                *(_BYTE *)v4 = v20;
                break;
              case 3:
                *v4 = sub_6F791EC0((unsigned int *)&v31, (_BYTE *)(v19 + v14));
                break;
              case 5:
                v22 = *(int (__cdecl **)(int, int, _DWORD))(v29 + 12);
                if ( v22 )
                  *v4 = v22(v19, *(_DWORD *)v3 + ~v19, *(_DWORD *)(v29 + 16));
                else
                  *v4 = 0;
                break;
              case 2:
                *v4 = sub_6F792040((_BYTE **)&v31, (_BYTE *)(v19 + v14), 0);
                break;
              default:
                goto LABEL_24;
            }
            goto LABEL_24;
          }
          return v27;
        }
      }
LABEL_19:
      *(_DWORD *)(v3 + 12) = 3;
    }
    return v27;
  }
  return 0;
}
