signed int __cdecl sub_6F8350DD(int a1, int a2)
{
  signed int result; // eax@2
  int v3; // [sp+10h] [bp-18h]@5
  int v4; // [sp+10h] [bp-18h]@9
  signed int v5; // [sp+10h] [bp-18h]@13
  signed int v6; // [sp+14h] [bp-14h]@5
  int v7; // [sp+14h] [bp-14h]@9
  signed int v8; // [sp+18h] [bp-10h]@5
  int v9; // [sp+18h] [bp-10h]@9
  signed int v10; // [sp+18h] [bp-10h]@13
  signed int v11; // [sp+1Ch] [bp-Ch]@1
  signed int v12; // [sp+1Ch] [bp-Ch]@5
  signed int v13; // [sp+1Ch] [bp-Ch]@9

  v11 = *(_DWORD *)(a2 + 4) + *(_DWORD *)a2 + *(_DWORD *)(a2 + 8);
  if ( sub_6F8380D8((_DWORD *)a1, *(_DWORD *)a2, 100000, v11) )
  {
    if ( sub_6F8380D8((_DWORD *)(a1 + 4), *(_DWORD *)(a2 + 4), 100000, v11) )
    {
      v8 = v11;
      v6 = *(_DWORD *)a2;
      v3 = *(_DWORD *)(a2 + 4);
      v12 = *(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 20);
      if ( sub_6F8380D8((_DWORD *)(a1 + 8), *(_DWORD *)(a2 + 12), 100000, v12) )
      {
        if ( sub_6F8380D8((_DWORD *)(a1 + 12), *(_DWORD *)(a2 + 16), 100000, v12) )
        {
          v9 = v12 + v8;
          v7 = *(_DWORD *)(a2 + 12) + v6;
          v4 = *(_DWORD *)(a2 + 16) + v3;
          v13 = *(_DWORD *)(a2 + 28) + *(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 32);
          if ( sub_6F8380D8((_DWORD *)(a1 + 16), *(_DWORD *)(a2 + 24), 100000, v13) )
          {
            if ( sub_6F8380D8((_DWORD *)(a1 + 20), *(_DWORD *)(a2 + 28), 100000, v13) )
            {
              v10 = v13 + v9;
              v5 = *(_DWORD *)(a2 + 28) + v4;
              if ( sub_6F8380D8((_DWORD *)(a1 + 24), *(_DWORD *)(a2 + 24) + v7, 100000, v10) )
                result = sub_6F8380D8((_DWORD *)(a1 + 28), v5, 100000, v10) == 0;
              else
                result = 1;
            }
            else
            {
              result = 1;
            }
          }
          else
          {
            result = 1;
          }
        }
        else
        {
          result = 1;
        }
      }
      else
      {
        result = 1;
      }
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}
