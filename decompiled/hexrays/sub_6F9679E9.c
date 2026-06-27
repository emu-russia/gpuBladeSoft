int __usercall sub_6F9679E9@<eax>(int a1@<eax>, unsigned __int8 *a2@<edx>, unsigned int a3@<ecx>)
{
  int v3; // ebp@1
  int v4; // eax@1
  unsigned __int8 *v5; // ebx@1
  unsigned int v6; // edx@3
  unsigned __int8 **v7; // eax@3
  int result; // eax@6
  int v9; // edx@21
  void *i; // esi@21
  int v11; // edi@22
  int v12; // edx@24
  unsigned int v13; // eax@24
  unsigned int v14; // eax@27
  char v15; // dl@30
  unsigned int v16; // edi@37
  int v17; // eax@39
  int v18; // edx@39
  int v19; // ecx@39
  char v20; // al@41
  int v21; // [sp+1Ch] [bp-30h]@1
  _WORD *v22; // [sp+20h] [bp-2Ch]@24
  int v23; // [sp+20h] [bp-2Ch]@41
  unsigned int v24; // [sp+24h] [bp-28h]@1
  char *v25; // [sp+2Ch] [bp-20h]@41

  v3 = a1;
  v4 = a1 + 16;
  v5 = a2;
  *(_DWORD *)(v3 + 404) = v4;
  *(_DWORD *)(v3 + 4) = a2;
  v24 = a3;
  v21 = v4;
  *(_DWORD *)(v3 + 8) = a3;
  *(_DWORD *)(v3 + 12) = a2;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= v24 )
      return 0;
    v6 = *v5;
    v7 = *(unsigned __int8 ***)(v3 + 404);
    if ( v6 <= 0x1A || v6 == 31 )
    {
      *v7 = v5;
      if ( v6 == 12 )
      {
        if ( v24 <= (unsigned int)(v5 + 1) )
          return 6;
        v6 = (v5++)[1];
        BYTE1(v6) |= 1u;
      }
      v9 = *(_DWORD *)(v3 + 408) | v6;
      for ( i = &unk_6FB56F60; ; i = (char *)i + 28 )
      {
        v11 = *(_DWORD *)i;
        if ( !*(_DWORD *)i )
          goto LABEL_51;
        if ( *((_DWORD *)i + 1) == v9 )
          break;
      }
      v12 = *(_DWORD *)(v3 + 412);
      v13 = ((signed int)v7 - v21) >> 2;
      v22 = (_WORD *)(v12 + *((_DWORD *)i + 2));
      if ( v13 || v11 == 6 )
      {
        switch ( v11 )
        {
          case 1:
          case 4:
          case 5:
            v14 = sub_6F77C910(v21);
            goto LABEL_30;
          case 2:
            v14 = sub_6F77C9E0(v21, 0);
            goto LABEL_30;
          case 3:
            v14 = sub_6F77C9E0(v21, 3);
LABEL_30:
            v15 = *((_BYTE *)i + 12);
            switch ( v15 )
            {
              case 2:
                *v22 = v14;
                break;
              case 4:
                *(_DWORD *)v22 = v14;
                break;
              case 1:
                *(_BYTE *)v22 = v14;
                break;
              default:
                *(_DWORD *)v22 = v14;
                break;
            }
            break;
          case 6:
            v16 = *((_DWORD *)i + 5);
            if ( v13 <= v16 )
              v16 = v13;
            *(_BYTE *)(v12 + *((_DWORD *)i + 6)) = v16;
            v17 = v21;
            v18 = 0;
            v19 = (int)v22;
            while ( v16 )
            {
              v25 = (char *)v19;
              v23 = v17 + 4;
              v18 += sub_6F77C910(v17);
              v20 = *((_BYTE *)i + 12);
              if ( v20 == 2 )
              {
                *(_WORD *)v25 = v18;
              }
              else if ( v20 == 4 || v20 != 1 )
              {
                *(_DWORD *)v25 = v18;
              }
              else
              {
                *v25 = v18;
              }
              --v16;
              v19 = (int)&v25[*((_BYTE *)i + 12)];
              v17 = v23;
            }
            break;
          default:
            result = (*((int (__cdecl **)(int))i + 4))(v3);
            if ( result )
              return result;
            break;
        }
LABEL_51:
        *(_DWORD *)(v3 + 404) = v21;
        goto LABEL_52;
      }
      return 6;
    }
    if ( (signed int)v7 - v21 > 383 )
      return 6;
    *(_DWORD *)(v3 + 404) = v7 + 1;
    *v7 = v5;
    if ( v6 == 30 )
      break;
    if ( v6 == 28 )
    {
      v5 += 2;
    }
    else if ( v6 == 29 )
    {
      v5 += 4;
    }
    else
    {
      v5 += -(v6 < 0xF7) + 1;
    }
LABEL_52:
    ++v5;
  }
  while ( ++v5 != (unsigned __int8 *)v24 )
  {
    if ( *v5 >> 4 == 15 || (*v5 & 0xF) == 15 )
      goto LABEL_52;
  }
  return 0;
}
