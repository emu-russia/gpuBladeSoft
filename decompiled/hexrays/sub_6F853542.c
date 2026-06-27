unsigned int __cdecl sub_6F853542(int a1, int a2)
{
  unsigned int result; // eax@1
  int v3; // [sp+0h] [bp-14h]@26
  int v4; // [sp+0h] [bp-14h]@28
  int v5; // [sp+4h] [bp-10h]@15
  int v6; // [sp+4h] [bp-10h]@17
  int v7; // [sp+4h] [bp-10h]@19
  int v8; // [sp+4h] [bp-10h]@21
  _BYTE *v9; // [sp+8h] [bp-Ch]@3
  char v10; // [sp+Ch] [bp-8h]@3

  result = 1 << *(_BYTE *)(a2 + 9);
  if ( *(_WORD *)(a1 + 328) < (signed int)result )
  {
    result = *(_WORD *)(a1 + 328);
    if ( (_WORD)result )
    {
      v10 = -*(_BYTE *)(a2 + 11) * *(_DWORD *)a2 & 7;
      v9 = (_BYTE *)(*(_DWORD *)(a1 + 292) + *(_DWORD *)(a2 + 4));
      result = *(_BYTE *)(a2 + 9);
      if ( result == 2 )
      {
        while ( 1 )
        {
          result = *(_DWORD *)(a1 + 292);
          if ( result >= (unsigned int)v9 )
            break;
          v5 = ((signed int)*v9 >> v10) & 3;
          if ( *(_DWORD *)(a1 + 332) < v5 )
            *(_DWORD *)(a1 + 332) = v5;
          v6 = ((signed int)*v9 >> v10 >> 2) & 3;
          if ( *(_DWORD *)(a1 + 332) < v6 )
            *(_DWORD *)(a1 + 332) = v6;
          v7 = ((signed int)*v9 >> v10 >> 4) & 3;
          if ( *(_DWORD *)(a1 + 332) < v7 )
            *(_DWORD *)(a1 + 332) = v7;
          v8 = ((signed int)*v9 >> v10 >> 6) & 3;
          if ( *(_DWORD *)(a1 + 332) < v8 )
            *(_DWORD *)(a1 + 332) = v8;
          v10 = 0;
          --v9;
        }
      }
      else if ( (signed int)result > 2 )
      {
        if ( result == 4 )
        {
          while ( 1 )
          {
            result = *(_DWORD *)(a1 + 292);
            if ( result >= (unsigned int)v9 )
              break;
            v3 = ((signed int)*v9 >> v10) & 0xF;
            if ( *(_DWORD *)(a1 + 332) < v3 )
              *(_DWORD *)(a1 + 332) = v3;
            v4 = ((signed int)*v9 >> v10 >> 4) & 0xF;
            if ( *(_DWORD *)(a1 + 332) < v4 )
              *(_DWORD *)(a1 + 332) = v4;
            v10 = 0;
            --v9;
          }
        }
        else if ( result == 8 )
        {
          while ( 1 )
          {
            result = *(_DWORD *)(a1 + 292);
            if ( result >= (unsigned int)v9 )
              break;
            if ( (signed int)*v9 > *(_DWORD *)(a1 + 332) )
              *(_DWORD *)(a1 + 332) = *v9;
            --v9;
          }
        }
      }
      else if ( result == 1 )
      {
        while ( 1 )
        {
          result = *(_DWORD *)(a1 + 292);
          if ( result >= (unsigned int)v9 )
            break;
          if ( (signed int)*v9 >> v10 )
            *(_DWORD *)(a1 + 332) = 1;
          v10 = 0;
          --v9;
        }
      }
    }
  }
  return result;
}
