unsigned int __cdecl sub_6F793F80(int a1, unsigned int a2, int a3, int *a4)
{
  unsigned int result; // eax@1
  char *v5; // ebx@2
  unsigned int v6; // esi@2
  int v7; // eax@2
  char v8; // al@3
  char *v9; // eax@6
  char v10; // dl@8
  char v11; // al@15
  int v12; // esi@18
  int v13; // ecx@18
  int v14; // edx@18
  signed int v15; // ecx@19
  char *v16; // eax@21
  char v17; // dl@33
  char *v18; // edx@48
  char v19; // al@48
  char v20; // dl@52
  char *v21; // [sp+8h] [bp-3Ch]@51
  unsigned int v22; // [sp+Ch] [bp-38h]@2
  signed int v23; // [sp+10h] [bp-34h]@48
  int v24; // [sp+18h] [bp-2Ch]@2
  int v25; // [sp+1Ch] [bp-28h]@2
  char *v26; // [sp+24h] [bp-20h]@14
  int v27; // [sp+28h] [bp-1Ch]@1
  int v28; // [sp+2Ch] [bp-18h]@2
  int v29; // [sp+30h] [bp-14h]@1

  *a4 = -1;
  result = sub_6F793CA0(a1, (unsigned int)&v27);
  if ( v29 != 3 )
    return result;
  v22 = a2;
  v24 = *(_DWORD *)a1;
  v25 = *(_DWORD *)(a1 + 8);
  v5 = (char *)(v27 + 1);
  *(_DWORD *)a1 = v27 + 1;
  v6 = v28 - 1;
  *(_DWORD *)(a1 + 8) = v28 - 1;
  v7 = 0;
  if ( (unsigned int)v5 >= v6 )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      v8 = *v5;
      if ( (unsigned __int8)(v8 - 12) > 1u && (unsigned __int8)(v8 - 9) > 1u )
      {
        if ( v8 & 0xDF )
          break;
      }
LABEL_11:
      if ( v6 <= (unsigned int)++v5 )
        goto LABEL_12;
    }
    if ( v8 == 37 )
    {
      v9 = v5 + 1;
      if ( v6 > (unsigned int)v5 )
      {
        do
        {
          v5 = v9;
          if ( v9 == (char *)v6 )
            break;
          v10 = *v9++;
          if ( v10 == 13 )
            break;
        }
        while ( v10 != 10 );
      }
      goto LABEL_11;
    }
    v26 = v5;
    *(_DWORD *)a1 = v5;
    if ( v6 <= (unsigned int)v5 )
      break;
    v11 = *v5;
    if ( *v5 != 91 )
    {
      if ( v11 == 123 )
      {
        if ( !sub_6F7923C0((unsigned int *)&v26, v6) )
        {
          v14 = (int)v26;
          v15 = 3;
          goto LABEL_20;
        }
      }
      else
      {
        if ( v11 != 40 )
        {
          v12 = 3 * (v11 == 47) + 1;
          sub_6F7939C0(a1);
          v13 = *(_DWORD *)(a1 + 12);
          v14 = *(_DWORD *)a1;
          v26 = *(char **)a1;
          if ( !v13 )
          {
            v15 = v12;
            goto LABEL_20;
          }
          v16 = (char *)v14;
          goto LABEL_43;
        }
        if ( !sub_6F790E00((unsigned int *)&v26, v6) )
        {
          v14 = (int)v26;
          v15 = 2;
          goto LABEL_20;
        }
      }
      v16 = v26;
      v14 = 0;
      v15 = 0;
      v5 = 0;
      goto LABEL_22;
    }
    v16 = v5 + 1;
    v26 = v5 + 1;
    *(_DWORD *)a1 = v5 + 1;
    if ( (unsigned int)(v5 + 1) >= v6 )
      goto LABEL_43;
    while ( 1 )
    {
      v17 = *v16;
      if ( (unsigned __int8)(*v16 - 12) > 1u && (unsigned __int8)(*v16 - 9) > 1u )
      {
        if ( v17 & 0xDF )
          break;
      }
LABEL_42:
      if ( v6 <= (unsigned int)++v16 )
        goto LABEL_43;
    }
    if ( v17 == 37 )
    {
      if ( v6 > (unsigned int)v16 )
      {
        while ( (char *)v6 != ++v16 )
        {
          if ( *v16 == 13 || *v16 == 10 )
            goto LABEL_42;
        }
        v16 = (char *)v6;
      }
      goto LABEL_42;
    }
    v26 = v16;
    *(_DWORD *)a1 = v16;
    if ( v6 <= (unsigned int)v16 || *(_DWORD *)(a1 + 12) )
      goto LABEL_43;
    v18 = v16;
    v23 = 1;
    v19 = *v16;
    if ( v19 == 91 )
      goto LABEL_65;
LABEL_49:
    if ( v19 != 93 || (--v23, v23) )
    {
      while ( 1 )
      {
        *(_DWORD *)a1 = v18;
        sub_6F7939C0(a1);
        v16 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) > *(_DWORD *)a1 )
        {
          v21 = *(char **)(a1 + 8);
          do
          {
            v20 = *v16;
            if ( (unsigned __int8)(*v16 - 9) > 1u && (unsigned __int8)(*v16 - 12) > 1u && v20 & 0xDF )
            {
              if ( v20 != 37 )
                break;
              if ( v21 > v16 )
              {
                while ( v21 != ++v16 )
                {
                  if ( *v16 == 13 || *v16 == 10 )
                    goto LABEL_61;
                }
                v16 = *(char **)(a1 + 8);
              }
            }
LABEL_61:
            ++v16;
          }
          while ( v21 > v16 );
        }
        *(_DWORD *)a1 = v16;
        v26 = v16;
        if ( v6 <= (unsigned int)v16 )
          break;
        v18 = v16;
        if ( *(_DWORD *)(a1 + 12) )
          break;
        v19 = *v16;
        if ( v19 != 91 )
          goto LABEL_49;
LABEL_65:
        ++v23;
      }
LABEL_43:
      v14 = 0;
      v15 = 0;
      v5 = 0;
      goto LABEL_22;
    }
    v14 = (int)(v18 + 1);
    v15 = 3;
    v26 = (char *)v14;
LABEL_20:
    if ( !v14 )
    {
      v16 = 0;
      goto LABEL_43;
    }
    v16 = (char *)v14;
LABEL_22:
    *(_DWORD *)a1 = v16;
    if ( !v15 )
      break;
    if ( a2 && a2 + 12 * a3 > v22 )
    {
      *(_DWORD *)v22 = v5;
      *(_DWORD *)(v22 + 4) = v14;
      *(_DWORD *)(v22 + 8) = v15;
    }
    v22 += 12;
    v5 = *(char **)a1;
    v6 = *(_DWORD *)(a1 + 8);
  }
  while ( *(_DWORD *)a1 < v6 );
LABEL_12:
  v7 = -1431655765 * ((signed int)(v22 - a2) >> 2);
LABEL_13:
  *a4 = v7;
  result = a1;
  *(_DWORD *)a1 = v24;
  *(_DWORD *)(a1 + 8) = v25;
  return result;
}
