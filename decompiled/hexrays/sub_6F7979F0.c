int __usercall sub_6F7979F0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, int a6)
{
  int result; // eax@1
  int v7; // ebx@3
  signed int v8; // ebp@8
  int v9; // eax@14
  _DWORD *v10; // ebp@15
  int v11; // ecx@15
  _DWORD *v12; // ebp@24
  int v13; // ecx@24
  int v14; // esi@35
  int v15; // ebp@36
  int v16; // esi@47
  int v17; // ebp@48
  int v18; // eax@48
  int v19; // esi@54
  int v20; // ebp@61
  int v21; // [sp+0h] [bp-20h]@2
  int v22; // [sp+0h] [bp-20h]@55
  int v23; // [sp+4h] [bp-1Ch]@1
  int v24; // [sp+8h] [bp-18h]@1
  int v25; // [sp+Ch] [bp-14h]@14
  int v26; // [sp+Ch] [bp-14h]@23
  int v27; // [sp+Ch] [bp-14h]@35
  int v28; // [sp+Ch] [bp-14h]@47

  v24 = a1;
  v23 = -a6;
  result = a4;
  if ( !a4 )
    return result;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_2:
          result = *(_DWORD *)(a3 + 16);
          v21 = *(_DWORD *)(a3 + 16);
          if ( result & 0x10 )
            goto LABEL_19;
          result = *(_BYTE *)(a3 + 20);
          v7 = *(_DWORD *)(a3 + 28);
          if ( result != a6 )
            break;
          if ( a6 )
            goto LABEL_22;
          if ( !(v21 & 0x40) )
            goto LABEL_19;
          result = 256;
          v8 = 128;
          if ( !(v21 & 0x100) )
            goto LABEL_45;
LABEL_13:
          if ( !v24 )
            goto LABEL_19;
          v9 = 0;
          v25 = a3;
          while ( 1 )
          {
            v10 = *(_DWORD **)(a2 + 4 * v9);
            v11 = v7 - *v10;
            if ( a5 > v11 && a5 > -v11 )
              break;
            if ( ++v9 == v24 )
            {
              a3 = v25;
              result = *(_DWORD *)(v25 + 24);
              if ( result )
                goto LABEL_19;
LABEL_60:
              v19 = v24;
              result = 0;
              v22 = a3;
              goto LABEL_61;
            }
          }
          result = v21 | 0x210;
          *(_DWORD *)(v25 + 24) = v10;
          a3 = v25 + 40;
          *(_DWORD *)(v25 + 16) = v21 | 0x210;
          if ( !--a4 )
            return result;
        }
        if ( result != v23 )
          break;
        result = -a6;
        if ( !a6 )
          goto LABEL_7;
LABEL_41:
        result = v24;
        if ( !v24 )
          goto LABEL_19;
        v27 = a3;
        v14 = 0;
        while ( 1 )
        {
          v15 = *(_DWORD *)(a2 + 4 * v14);
          result = v7 - *(_DWORD *)v15 - *(_DWORD *)(v15 + 4);
          if ( a5 > result )
          {
            result = -result;
            if ( a5 > result )
              break;
          }
          if ( ++v14 == v24 )
            goto LABEL_28;
        }
        result = v21 | 0x410;
        *(_DWORD *)(a3 + 24) = v15;
        a3 += 40;
        *(_DWORD *)(v27 + 16) = v21 | 0x410;
        if ( !--a4 )
          return result;
      }
      result = *(_BYTE *)(a3 + 21);
      if ( a6 != result && v23 != result )
        break;
      if ( !*(_BYTE *)(a3 + 21) )
        break;
      if ( a6 == result )
      {
LABEL_22:
        if ( v24 )
        {
          result = 0;
          v26 = a3;
          do
          {
            v12 = *(_DWORD **)(a2 + 4 * result);
            v13 = v7 - *v12;
            if ( v13 < a5 && a5 > -v13 )
            {
              result = v21 | 0x210;
              *(_DWORD *)(v26 + 24) = v12;
              a3 = v26 + 40;
              *(_DWORD *)(v26 + 16) = v21 | 0x210;
              if ( --a4 )
                goto LABEL_2;
              return result;
            }
            ++result;
          }
          while ( result != v24 );
          a3 = v26;
LABEL_28:
          a3 += 40;
          if ( --a4 )
            goto LABEL_2;
          return result;
        }
        goto LABEL_19;
      }
      if ( v23 == result )
        goto LABEL_41;
      a3 += 40;
      if ( !--a4 )
        return result;
    }
LABEL_7:
    if ( !(v21 & 0x40) )
      goto LABEL_19;
    result = 256;
    v8 = 256;
    if ( a6 != 2 )
      v8 = 128;
    if ( a6 == 2 )
      result = 128;
    if ( result & v21 )
      goto LABEL_13;
LABEL_45:
    if ( !(v8 & v21) )
      break;
    result = v24;
    if ( v24 )
    {
      v28 = a3;
      v16 = 0;
      while ( 1 )
      {
        v17 = *(_DWORD *)(a2 + 4 * v16);
        v18 = v7 - *(_DWORD *)v17 - *(_DWORD *)(v17 + 4);
        if ( a5 > v18 && a5 > -v18 )
          break;
        if ( ++v16 == v24 )
        {
          result = *(_DWORD *)(a3 + 24);
          if ( !result )
            goto LABEL_60;
          goto LABEL_19;
        }
      }
      result = v21 | 0x410;
      *(_DWORD *)(a3 + 24) = v17;
      a3 += 40;
      *(_DWORD *)(v28 + 16) = v21 | 0x410;
      if ( --a4 )
        goto LABEL_2;
      return result;
    }
LABEL_19:
    a3 += 40;
    if ( !--a4 )
      return result;
  }
  if ( *(_DWORD *)(a3 + 24) )
    goto LABEL_19;
  v19 = v24;
  if ( !v24 )
    goto LABEL_19;
  result = 0;
  v22 = a3;
  do
  {
LABEL_61:
    v20 = *(_DWORD *)(a2 + 4 * result);
    if ( v7 >= *(_DWORD *)v20 && v7 <= *(_DWORD *)(v20 + 4) + *(_DWORD *)v20 )
    {
      a3 = v22;
      *(_DWORD *)(v22 + 24) = v20;
      goto LABEL_19;
    }
    ++result;
  }
  while ( result != v19 );
  a3 = v22 + 40;
  if ( --a4 )
    goto LABEL_2;
  return result;
}
