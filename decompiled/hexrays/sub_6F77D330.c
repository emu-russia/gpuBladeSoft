signed int __usercall sub_6F77D330@<eax>(int a1@<eax>, unsigned int a2@<edx>, int *a3@<ecx>, _DWORD *a4)
{
  int v4; // ebx@2
  unsigned int v5; // esi@2
  signed int result; // eax@2
  int *v7; // edi@3
  int v8; // eax@3
  unsigned int v9; // ebp@4
  unsigned int v10; // ecx@6
  unsigned int v11; // edx@6
  int v12; // edx@10
  unsigned int v13; // esi@10
  size_t v14; // ecx@23
  int v15; // ebp@24
  unsigned int v16; // edx@24
  int v17; // esi@25
  int v18; // eax@26
  int v19; // esi@26
  unsigned int v20; // esi@29
  int v21; // edx@36
  unsigned __int16 v22; // bp@37
  int v23; // [sp+14h] [bp-38h]@3
  unsigned int v24; // [sp+18h] [bp-34h]@7
  unsigned int v25; // [sp+18h] [bp-34h]@21
  int v26; // [sp+18h] [bp-34h]@29
  char v27; // [sp+1Fh] [bp-2Dh]@5
  __int16 v28; // [sp+2Ch] [bp-20h]@22
  unsigned __int8 v29; // [sp+2Eh] [bp-1Eh]@26
  unsigned __int8 v30; // [sp+2Fh] [bp-1Dh]@27

  if ( !a1 )
    return 6;
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 8);
  result = 6;
  if ( v5 > a2 )
  {
    v7 = a3;
    v23 = *(_DWORD *)v4;
    v8 = *(_DWORD *)(v4 + 24);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 4 * a2);
      if ( v9 )
      {
        while ( 1 )
        {
          v10 = *(_DWORD *)(v8 + 4 * ++a2);
          if ( v10 )
            break;
          if ( v5 <= a2 )
          {
            v27 = 1;
            result = 0;
            goto LABEL_6;
          }
        }
LABEL_15:
        v11 = *(_DWORD *)(v23 + 4) + 1;
        if ( v10 > v11 )
        {
          v27 = 1;
          v24 = *(_DWORD *)(v4 + 16);
          result = 0;
          goto LABEL_17;
        }
        v27 = 1;
        result = 0;
LABEL_7:
        v24 = *(_DWORD *)(v4 + 16);
        if ( v24 <= v11 - v10 )
        {
LABEL_8:
          if ( v10 > v9 && v27 )
          {
            v12 = *(_DWORD *)(v4 + 28);
            v13 = v10 - v9;
            *a4 = v10 - v9;
            if ( v12 )
            {
              *v7 = v12 + v9 - 1;
            }
            else
            {
              result = sub_6F771FF0(v23, v9 + *(_DWORD *)(v4 + 16) - 1);
              if ( !result )
                result = sub_6F772240(v23, v13, v7);
            }
          }
          else
          {
            *v7 = 0;
            *a4 = 0;
          }
          return result;
        }
LABEL_17:
        v10 = v11 - v24;
        goto LABEL_8;
      }
    }
    else
    {
      v25 = a2;
      result = sub_6F771FF0(v23, a2 * *(_BYTE *)(v4 + 12) + *(_DWORD *)(v4 + 4) + 3);
      if ( result )
        return result;
      result = sub_6F7720B0(*(_DWORD *)v4, &v28, *(_BYTE *)(v4 + 12));
      if ( result )
        return result;
      v14 = *(_BYTE *)(v4 + 12);
      if ( !*(_BYTE *)(v4 + 12) )
      {
        v27 = 0;
        v9 = 0;
        goto LABEL_6;
      }
      v15 = (unsigned __int8)v28;
      v16 = v25;
      if ( v14 != 1 )
      {
        v17 = ((unsigned __int8)v28 << 8) | HIBYTE(v28);
        v15 = ((unsigned __int8)v28 << 8) | HIBYTE(v28);
        if ( v14 != 2 )
        {
          v18 = v17 << 8;
          v19 = (v17 << 8) | v29;
          v15 = v18 | v29;
          if ( v14 != 3 )
            v15 = (v19 << 8) | v30;
        }
      }
      if ( v15 )
      {
        v26 = v15;
        v20 = v16;
        while ( 1 )
        {
          ++v20;
          result = sub_6F7720B0(*(_DWORD *)v4, &v28, v14);
          if ( !result )
          {
            v21 = *(_BYTE *)(v4 + 12);
            if ( *(_BYTE *)(v4 + 12) )
            {
              v10 = (unsigned __int8)v28;
              v22 = __ROL2__(v28, 8);
              if ( v21 != 1 )
              {
                if ( v21 == 2 )
                {
                  v10 = v22;
                }
                else
                {
                  v10 = (v22 << 8) | v29;
                  if ( v21 != 3 )
                    v10 = v30 | (v10 << 8);
                }
              }
              if ( v10 )
              {
                v9 = v26;
                goto LABEL_15;
              }
            }
          }
          if ( v20 >= *(_DWORD *)(v4 + 8) )
            break;
          v14 = *(_BYTE *)(v4 + 12);
        }
        v9 = v26;
        v27 = 1;
        goto LABEL_6;
      }
    }
    v27 = 0;
    result = 0;
    v9 = 0;
LABEL_6:
    v10 = 0;
    v11 = *(_DWORD *)(v23 + 4) + 1;
    goto LABEL_7;
  }
  return result;
}
