signed int __cdecl sub_6F7A0C30(int a1, int a2)
{
  int v2; // edi@1
  signed int result; // eax@1
  signed int v4; // ebp@6
  int v5; // edi@8
  int v6; // esi@8
  int v7; // [sp+2Ch] [bp-20h]@1

  v2 = *(_DWORD *)(a2 + 28);
  result = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a1 + 508))(a1, 1734439792, a2, 0);
  v7 = result;
  if ( !result )
  {
    result = sub_6F772380(a2, 4u);
    v7 = result;
    if ( !result )
    {
      *(_WORD *)(a1 + 540) = sub_6F7724C0(a2);
      *(_WORD *)(a1 + 542) = sub_6F7724C0(a2);
      sub_6F772460(a2);
      if ( *(_WORD *)(a1 + 540) <= 1u )
      {
        v4 = *(_WORD *)(a1 + 542);
        *(_DWORD *)(a1 + 544) = sub_6F773B30(v2, 4, 0, v4, 0, &v7);
        result = v7;
        if ( !v7 )
        {
          result = sub_6F772380(a2, 4 * v4);
          v7 = result;
          if ( !result )
          {
            v5 = 0;
            v6 = *(_DWORD *)(a1 + 544);
            if ( v4 )
            {
              do
              {
                ++v5;
                v6 += 4;
                *(_WORD *)(v6 - 4) = sub_6F7724C0(a2);
                *(_WORD *)(v6 - 2) = sub_6F7724C0(a2);
              }
              while ( v4 != v5 );
            }
            sub_6F772460(a2);
            result = v7;
          }
        }
      }
      else
      {
        *(_WORD *)(a1 + 542) = 0;
        result = 8;
      }
    }
  }
  return result;
}
