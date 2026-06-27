signed int __usercall sub_6F792580@<eax>(int a1@<eax>, _DWORD *a2@<edx>)
{
  _DWORD *v2; // ebx@1
  int v3; // ebp@1
  int v4; // ecx@1
  signed int v5; // eax@2
  unsigned int v6; // esi@4
  _BYTE *v7; // eax@4
  int v8; // edi@5
  size_t v10; // edi@10
  void *v11; // eax@11
  int v12; // edx@11
  int v13; // edx@14
  _BYTE *v14; // eax@19
  unsigned int v15; // edx@19
  int v16; // esi@22
  int v17; // edx@30
  int v18; // esi@41
  bool v19; // al@46
  bool v20; // zf@46
  int (__cdecl *v21)(int, int, _DWORD); // eax@49
  int v22; // edi@52
  int v23; // eax@52
  const char *v24; // edi@62
  signed int v25; // ecx@62
  int v26; // [sp+1Ch] [bp-30h]@1
  const void *v27; // [sp+28h] [bp-24h]@8
  int v28; // [sp+2Ch] [bp-20h]@11

  v2 = a2;
  v3 = *a2;
  v4 = *(_DWORD *)(a1 + 4);
  v26 = a1;
  if ( *a2 )
  {
    if ( *(_DWORD *)(v4 + 12) > 0 )
      return 0;
    v14 = *(_BYTE **)v4;
    v15 = *(_DWORD *)(v4 + 8);
    while ( v15 > (unsigned int)v14 )
    {
      *(_DWORD *)v4 = ++v14;
      v16 = *(v14 - 1);
      if ( v16 != 32 && v16 != 9 )
      {
        if ( v16 == 13 || v16 == 10 )
        {
LABEL_26:
          *(_DWORD *)(v4 + 12) = 2;
          return 0;
        }
        if ( v16 == 59 )
        {
          *(_DWORD *)(v4 + 12) = 1;
          return 0;
        }
        if ( v16 == 26 )
          break;
        v18 = (int)(v14 - 1);
        while ( 1 )
        {
          if ( v15 <= (unsigned int)v14 )
          {
LABEL_43:
            *(_DWORD *)(v4 + 12) = 3;
            goto LABEL_44;
          }
          v22 = (int)(v14 + 1);
          *(_DWORD *)v4 = v14 + 1;
          v23 = *v14;
          if ( v23 == 32 || v23 == 9 )
            goto LABEL_44;
          if ( v23 == 13 || v23 == 10 )
          {
            *(_DWORD *)(v4 + 12) = 2;
            goto LABEL_44;
          }
          if ( v23 == 59 )
            break;
          if ( v23 == 26 )
            goto LABEL_43;
          v14 = (_BYTE *)v22;
        }
        *(_DWORD *)(v4 + 12) = 1;
LABEL_44:
        v27 = (const void *)v18;
        if ( v18 )
        {
          v10 = *(_DWORD *)v4 + ~v18;
          switch ( v3 )
          {
            case 0:
            case 1:
              goto LABEL_11;
            case 4:
              v19 = 0;
              v20 = v10 == 4;
              if ( v10 == 4 )
              {
                v24 = "true";
                v25 = 4;
                do
                {
                  if ( !v25 )
                    break;
                  v20 = *(_BYTE *)v18++ == *v24++;
                  --v25;
                }
                while ( v20 );
                v19 = v20;
              }
              *((_BYTE *)v2 + 4) = v19;
              break;
            case 3:
              v2[1] = sub_6F791EC0((unsigned int *)&v27, (_BYTE *)(v18 + v10));
              break;
            case 5:
              v21 = *(int (__cdecl **)(int, int, _DWORD))(v26 + 12);
              if ( v21 )
                v2[1] = v21(v18, *(_DWORD *)v4 + ~v18, *(_DWORD *)(v26 + 16));
              else
                v2[1] = 0;
              break;
            case 2:
              v2[1] = sub_6F792040((_BYTE **)&v27, (_BYTE *)(v18 + v10), 0);
              break;
            default:
              return 1;
          }
          return 1;
        }
        return 0;
      }
    }
LABEL_21:
    *(_DWORD *)(v4 + 12) = 3;
    return 0;
  }
  v5 = *(_DWORD *)(v4 + 12);
  if ( v5 <= 0 )
  {
    v7 = *(_BYTE **)v4;
    v6 = *(_DWORD *)(v4 + 8);
    while ( (unsigned int)v7 < v6 )
    {
      *(_DWORD *)v4 = ++v7;
      v17 = *(v7 - 1);
      if ( v17 != 32 && v17 != 9 )
      {
        if ( v17 == 13 || v17 == 10 )
          goto LABEL_26;
        if ( v17 == 59 )
        {
          *(_DWORD *)(v4 + 12) = 1;
          goto LABEL_5;
        }
        if ( v17 != 26 )
          goto LABEL_5;
        goto LABEL_21;
      }
    }
    goto LABEL_21;
  }
  if ( v5 > 1 )
    return 0;
  v6 = *(_DWORD *)(v4 + 8);
  v7 = *(_BYTE **)v4;
LABEL_5:
  v8 = (int)(v7 - 1);
  while ( 1 )
  {
    if ( v6 <= (unsigned int)v7 )
    {
LABEL_7:
      *(_DWORD *)(v4 + 12) = 3;
      goto LABEL_8;
    }
    *(_DWORD *)v4 = ++v7;
    v13 = *(v7 - 1);
    if ( v13 == 13 || v13 == 10 )
      break;
    if ( v13 == 26 )
      goto LABEL_7;
  }
  *(_DWORD *)(v4 + 12) = 2;
LABEL_8:
  v27 = (const void *)v8;
  if ( !v8 )
    return 0;
  v10 = *(_DWORD *)v4 + ~v8;
LABEL_11:
  v11 = (void *)sub_6F773AE0(*(_DWORD *)v26, v10 + 1, &v28);
  v12 = v28;
  v2[1] = v11;
  if ( !v12 )
  {
    memcpy(v11, v27, v10);
    *(_BYTE *)(v2[1] + v10) = 0;
  }
  return 1;
}
