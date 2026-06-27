unsigned int __usercall sub_6F96A2EF@<eax>(int a1@<eax>, int a2@<edx>)
{
  unsigned int v2; // ebp@1
  unsigned int result; // eax@1
  int v4; // edx@3
  int v5; // edx@6
  unsigned int v6; // ebx@8
  unsigned int v7; // edi@12
  unsigned int i; // ecx@14
  _WORD *j; // ebp@16
  int v10; // esi@25
  int v11; // edx@28
  unsigned int v12; // ebp@37
  unsigned int v13; // [sp+14h] [bp-38h]@12
  unsigned int *v14; // [sp+18h] [bp-34h]@1
  unsigned int v15; // [sp+1Ch] [bp-30h]@1
  signed int v16; // [sp+20h] [bp-2Ch]@4
  unsigned int v17; // [sp+24h] [bp-28h]@4
  int v18; // [sp+28h] [bp-24h]@1
  unsigned int v19; // [sp+2Ch] [bp-20h]@1

  v2 = *(_DWORD *)(a1 + 28);
  v18 = a2;
  v15 = v2 + 40 * *(_DWORD *)(a1 + 24);
  v14 = *(unsigned int **)(a1 + 40);
  v19 = (unsigned int)&v14[*(_DWORD *)(a1 + 36)];
  result = *(_DWORD *)(a1 + 28);
  if ( a2 )
  {
    while ( result < v15 )
    {
      v5 = *(_DWORD *)(result + 20);
      result += 40;
      *(_DWORD *)(result - 16) = v5;
      *(_DWORD *)(result - 12) = *(_DWORD *)(result - 32);
    }
    v16 = 8;
    v17 = v2;
  }
  else
  {
    while ( result < v15 )
    {
      v4 = *(_DWORD *)(result + 16);
      result += 40;
      *(_DWORD *)(result - 16) = v4;
      *(_DWORD *)(result - 12) = *(_DWORD *)(result - 36);
    }
    v16 = 4;
    v17 = v2;
  }
  while ( (unsigned int)v14 < v19 )
  {
    v7 = *v14;
    result = *(_DWORD *)(*v14 + 36);
    v6 = *v14;
    v13 = *(_DWORD *)(*v14 + 36);
    while ( v6 <= v13 )
    {
      result = *(_WORD *)v6;
      if ( result & v16 )
      {
        for ( i = v6; i < v13 && *(_WORD *)(i + 40) & (unsigned __int16)v16; i = (unsigned int)j )
        {
          j = (_WORD *)(i + 40);
LABEL_17:
          ;
        }
        result = i + 40;
        for ( j = (_WORD *)(i + 40); (unsigned int)j <= v13; j += 20 )
        {
          if ( *j & (unsigned __int16)v16 )
          {
            if ( result <= (unsigned int)(j - 20) )
              sub_6F96A21D(result, (unsigned int)(j - 20), i, (int)j);
            goto LABEL_17;
          }
        }
        v10 = i;
        if ( v6 == i )
        {
          result = *(_DWORD *)(v6 + 24) - *(_DWORD *)(v6 + 28);
          if ( *(_DWORD *)(v6 + 24) != *(_DWORD *)(v6 + 28) )
          {
            while ( v6 > v7 )
            {
              v11 = *(_DWORD *)(v7 + 28);
              v7 += 40;
              *(_DWORD *)(v7 - 16) = result + v11;
            }
            while ( 1 )
            {
              v6 += 40;
              if ( v13 < v6 )
                break;
              *(_DWORD *)(v6 + 24) = result + *(_DWORD *)(v6 + 28);
            }
          }
        }
        else
        {
          if ( i < v13 && v13 >= result )
            result = sub_6F96A21D(result, v13, i, v6);
          if ( v6 > v17 && v7 <= v6 - 40 )
            result = sub_6F96A21D(v7, v6 - 40, v10, v6);
        }
        break;
      }
      v6 += 40;
    }
    ++v14;
  }
  v12 = v17;
  if ( v18 )
  {
    while ( v12 < v15 )
    {
      result = *(_DWORD *)(v12 + 24);
      v12 += 40;
      *(_DWORD *)(v12 - 20) = result;
    }
  }
  else
  {
    while ( v12 < v15 )
    {
      result = *(_DWORD *)(v12 + 24);
      v12 += 40;
      *(_DWORD *)(v12 - 24) = result;
    }
  }
  return result;
}
