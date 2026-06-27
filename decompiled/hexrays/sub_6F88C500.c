int __usercall sub_6F88C500@<eax>(const wchar_t *a1@<eax>, int a2@<edx>, _BYTE *a3@<ecx>)
{
  const wchar_t *v3; // esi@1
  int v4; // edi@2
  _DWORD *v5; // eax@2
  int v6; // ebx@2
  _BYTE *v7; // ecx@3
  int v8; // eax@3
  unsigned int v9; // ebp@4
  int result; // eax@11
  int v11; // eax@13
  size_t v12; // eax@16
  char *v13; // eax@16
  int v14; // edx@18
  int v15; // eax@18
  int v16; // eax@23
  size_t v17; // eax@43
  char *v18; // eax@44
  _BYTE *v19; // ecx@44
  int v20; // eax@47
  int v21; // eax@49
  _BYTE *v22; // [sp+18h] [bp-24h]@2
  size_t v23; // [sp+18h] [bp-24h]@16
  size_t v24; // [sp+18h] [bp-24h]@44
  size_t v25; // [sp+1Ch] [bp-20h]@44

  v3 = a1;
  if ( !a1 )
    return 0;
  v4 = a2;
  v22 = a3;
  v5 = malloc(0x8Cu);
  v6 = (int)v5;
  if ( !v5 )
    return 0;
  v7 = v22;
  v5[6] = 0;
  v5[7] = 0x2000;
  v5[20] = 0;
  v5[3] = 0;
  v5[15] = -1;
  v5[16] = 0;
  v5[10] = 0;
  v8 = *v22;
  if ( !(_BYTE)v8 )
    goto LABEL_10;
  v9 = 0;
  do
  {
    while ( 2 )
    {
      if ( (unsigned __int8)(v8 - 48) <= 9u )
      {
        *(_DWORD *)(v6 + 60) = v8 - 48;
      }
      else
      {
        switch ( (_BYTE)v8 )
        {
          default:
            break;
          case 0x2B:
            goto LABEL_10;
          case 0x78:
            v8 = *++v7;
            v9 = 1;
            if ( !(_BYTE)v8 )
              goto LABEL_13;
            continue;
          case 0x61:
            *(_DWORD *)(v6 + 12) = 1;
            break;
          case 0x77:
            *(_DWORD *)(v6 + 12) = 31153;
            break;
          case 0x72:
            *(_DWORD *)(v6 + 12) = 7247;
            break;
          case 0x68:
            *(_DWORD *)(v6 + 64) = 2;
            break;
          case 0x66:
            *(_DWORD *)(v6 + 64) = 1;
            break;
          case 0x54:
            *(_DWORD *)(v6 + 40) = 1;
            break;
          case 0x52:
            *(_DWORD *)(v6 + 64) = 3;
            break;
          case 0x46:
            *(_DWORD *)(v6 + 64) = 4;
            break;
        }
      }
      break;
    }
    v8 = *++v7;
  }
  while ( (_BYTE)v8 );
LABEL_13:
  v11 = *(_DWORD *)(v6 + 12);
  if ( !v11 )
  {
LABEL_10:
    free((void *)v6);
    return 0;
  }
  if ( v11 == 7247 )
  {
    if ( *(_DWORD *)(v6 + 40) )
      goto LABEL_10;
    *(_DWORD *)(v6 + 40) = 1;
  }
  if ( v4 == -2 )
  {
    v17 = wcstombs(0, v3, 0);
    if ( v17 == -1 )
    {
      v19 = malloc(1u);
      *(_DWORD *)(v6 + 20) = v19;
      if ( !v19 )
        goto LABEL_10;
    }
    else
    {
      v25 = v17;
      v24 = v17 + 1;
      v18 = (char *)malloc(v17 + 1);
      v19 = v18;
      *(_DWORD *)(v6 + 20) = v18;
      if ( !v18 )
        goto LABEL_10;
      if ( v25 )
      {
        wcstombs(v18, v3, v24);
        goto LABEL_18;
      }
    }
    *v19 = 0;
    goto LABEL_18;
  }
  v12 = strlen((const char *)v3);
  v23 = v12 + 1;
  v13 = (char *)malloc(v12 + 1);
  *(_DWORD *)(v6 + 20) = v13;
  if ( !v13 )
    goto LABEL_10;
  sub_6F88C270(v13, v23, "%s", v3);
LABEL_18:
  v14 = *(_DWORD *)(v6 + 12);
  v15 = 0x8000;
  if ( v14 != 7247 )
  {
    LOWORD(v15) = 8;
    if ( v14 == 31153 )
      v15 = 512;
    v15 |= v9 < 1 ? 33025 : 34049;
  }
  if ( v4 >= 0 )
  {
    *(_DWORD *)(v6 + 16) = v4;
    v16 = v4;
    goto LABEL_24;
  }
  if ( v4 == -2 )
    v16 = wopen(v3, v15, 438);
  else
    v16 = open((int)v3, v15, 438);
  *(_DWORD *)(v6 + 16) = v16;
  if ( v16 == -1 )
  {
    free(*(void **)(v6 + 20));
    goto LABEL_10;
  }
  v14 = *(_DWORD *)(v6 + 12);
LABEL_24:
  if ( v14 == 1 )
  {
    *(_DWORD *)(v6 + 12) = 31153;
  }
  else if ( v14 == 7247 )
  {
    v20 = lseeki64(v16, 0, 0, 1);
    *(_DWORD *)(v6 + 48) = v20;
    if ( v20 == -1 )
      *(_DWORD *)(v6 + 48) = 0;
    v21 = *(_DWORD *)(v6 + 12);
    *(_DWORD *)v6 = 0;
    if ( v21 == 7247 )
    {
      *(_DWORD *)(v6 + 52) = 0;
      *(_DWORD *)(v6 + 56) = 0;
      *(_DWORD *)(v6 + 44) = 0;
    }
    goto LABEL_27;
  }
  *(_DWORD *)v6 = 0;
LABEL_27:
  *(_DWORD *)(v6 + 72) = 0;
  sub_6F88C430(v6, 0, 0);
  result = v6;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 88) = 0;
  return result;
}
