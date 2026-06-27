int __cdecl sub_6F83726F(int a1)
{
  int result; // eax@1
  int v2; // [sp+1Ch] [bp-1Ch]@3
  int v3; // [sp+20h] [bp-18h]@3
  int v4; // [sp+24h] [bp-14h]@3
  int v5; // [sp+28h] [bp-10h]@3
  int v6; // [sp+2Ch] [bp-Ch]@17

  result = *(_BYTE *)(a1 + 609);
  if ( !(_BYTE)result )
  {
    result = *(_WORD *)(a1 + 806) & 2;
    if ( *(_WORD *)(a1 + 806) & 2 )
    {
      v4 = *(_DWORD *)(a1 + 772);
      v3 = *(_DWORD *)(a1 + 784);
      v2 = *(_DWORD *)(a1 + 796);
      v5 = v3 + v4 + v2;
      if ( v5 <= 0
        || v4 < 0
        || !sub_6F8380D8(&v4, v4, 0x8000, v5)
        || v4 < 0
        || v4 > 0x8000
        || v3 < 0
        || !sub_6F8380D8(&v3, v3, 0x8000, v5)
        || v3 < 0
        || v3 > 0x8000
        || v2 < 0
        || !sub_6F8380D8(&v2, v2, 0x8000, v5)
        || v2 < 0
        || v2 > 0x8000
        || v3 + v4 + v2 > 32769 )
      {
        sub_6F839044(a1, (int)"internal error handling cHRM->XYZ");
      }
      v6 = 0;
      if ( v3 + v4 + v2 <= 0x8000 )
      {
        if ( v3 + v4 + v2 <= 0x7FFF )
          v6 = 1;
      }
      else
      {
        v6 = -1;
      }
      if ( v6 )
      {
        if ( v3 < v4 || v3 < v2 )
        {
          if ( v4 < v3 || v4 < v2 )
            v2 += v6;
          else
            v4 += v6;
        }
        else
        {
          v3 += v6;
        }
      }
      if ( v3 + v4 + v2 != 0x8000 )
        sub_6F839044(a1, (int)"internal error handling cHRM coefficients");
      *(_WORD *)(a1 + 610) = v4;
      result = a1;
      *(_WORD *)(a1 + 612) = v3;
    }
  }
  return result;
}
