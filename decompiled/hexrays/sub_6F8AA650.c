signed int __cdecl sub_6F8AA650(int a1)
{
  unsigned __int16 v1; // dx@1
  __int16 v2; // cx@2
  signed int result; // eax@2
  __int16 *j; // edx@4
  int v5; // ebx@10
  int v6; // esi@10
  int v7; // ecx@11
  int v8; // edx@11
  int v9; // ebx@14
  int v10; // ecx@14
  __int16 v11; // dx@17
  unsigned __int16 *v12; // ebx@25
  int v13; // ecx@25
  unsigned __int16 v14; // dx@29
  unsigned __int16 *v15; // ecx@34
  __int16 i; // ax@34
  __int16 v17; // bx@36

  v1 = *(_WORD *)(a1 + 4);
  if ( v1 )
  {
    result = 0;
    if ( v1 & 0xFF00 )
    {
      v15 = (unsigned __int16 *)(a1 + 4);
      for ( i = 0; ; i = v17 )
      {
        ++v15;
        v17 = v1 << 8;
        *(v15 - 1) = i | (v1 >> 8);
        if ( v15 == (unsigned __int16 *)(a1 + 18) )
          break;
        v1 = *v15;
      }
      v1 = *(_WORD *)(a1 + 4);
      result = -8;
    }
    while ( v1 )
    {
      v12 = (unsigned __int16 *)(a1 + 4);
      v13 = 0;
      while ( 1 )
      {
        if ( v1 & 1 )
          v13 |= 1u;
        v14 = v1 >> 1;
        if ( v13 & 2 )
          v14 |= 0x8000u;
        ++v12;
        v13 *= 2;
        *(v12 - 1) = v14;
        if ( (unsigned __int16 *)(a1 + 18) == v12 )
          break;
        v1 = *v12;
      }
      if ( --result == -81 )
        break;
      v1 = *(_WORD *)(a1 + 4);
    }
  }
  else
  {
    v2 = *(_WORD *)(a1 + 6);
    result = 0;
    if ( v2 >= 0 )
    {
      if ( v2 )
      {
LABEL_9:
        while ( !(v2 & 0xFF00) )
        {
          v5 = a1 + 16;
          v6 = 0;
          do
          {
            v7 = *(_WORD *)v5;
            v5 -= 2;
            v8 = v6 | (v7 << 8);
            HIWORD(v6) = HIWORD(v7);
            *(_WORD *)(v5 + 2) = v8;
            LOWORD(v6) = (unsigned __int16)v7 >> 8;
          }
          while ( a1 + 2 != v5 );
          v2 = *(_WORD *)(a1 + 6);
          result += 8;
        }
        while ( v2 >= 0 )
        {
          v9 = a1 + 16;
          v10 = 0;
          do
          {
            if ( *(_WORD *)v9 < 0 )
              v10 |= 1u;
            v11 = 2 * *(_WORD *)v9;
            if ( v10 & 2 )
              v11 |= 1u;
            v9 -= 2;
            v10 *= 2;
            *(_WORD *)(v9 + 2) = v11;
          }
          while ( a1 + 2 != v9 );
          if ( ++result > 96 )
            break;
          v2 = *(_WORD *)(a1 + 6);
        }
      }
      else
      {
        while ( 1 )
        {
          for ( j = (__int16 *)(a1 + 6); ; v2 = *j )
          {
            ++j;
            *(j - 2) = v2;
            if ( (__int16 *)(a1 + 18) == j )
              break;
          }
          result += 16;
          *(_WORD *)(a1 + 16) = 0;
          if ( result == 96 )
            break;
          v2 = *(_WORD *)(a1 + 6);
          if ( v2 )
            goto LABEL_9;
        }
      }
    }
  }
  return result;
}
