signed int __cdecl sub_6F770120(int a1)
{
  signed int result; // eax@1
  signed int v2; // ecx@2
  signed int v3; // ebx@2
  signed int v4; // esi@7
  signed int v5; // edx@8

  result = 6;
  if ( a1 )
  {
    v2 = *(_WORD *)(a1 + 2);
    v3 = *(_WORD *)a1;
    result = 0;
    if ( __PAIR__(*(_WORD *)(a1 + 2), *(_WORD *)a1) )
    {
      if ( v2 > 0 && v3 > 0 )
      {
        v4 = -1;
        while ( 1 )
        {
          v5 = *(_WORD *)(*(_DWORD *)(a1 + 12) + 2 * result);
          if ( v5 <= v4 || v2 <= v5 )
            break;
          ++result;
          v4 = v5;
          if ( v3 <= result )
          {
            result = 0;
            if ( v5 != v2 - 1 )
              result = 6;
            return result;
          }
        }
      }
      result = 6;
    }
  }
  return result;
}
