int __cdecl sub_6F860F8C(int a1)
{
  int result; // eax@1
  int v2; // esi@3
  int v3; // edi@4
  int v4; // edx@6
  int v5; // ecx@11
  int v6; // eax@18
  int v7; // eax@26
  int v8; // eax@2
  char v9; // [sp+23h] [bp-25h]@4
  int v10; // [sp+24h] [bp-24h]@1
  signed int v11; // [sp+28h] [bp-20h]@11
  int v12; // [sp+2Ch] [bp-1Ch]@6
  int v13; // [sp+2Ch] [bp-1Ch]@11

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 112);
  v10 = result;
  *(_DWORD *)(a1 + 396) = result;
  *(_DWORD *)result = sub_6F86075C;
  *(_DWORD *)(result + 4) = sub_6F8607A8;
  *(_BYTE *)(result + 8) = 0;
  if ( *(_BYTE *)(a1 + 211) )
  {
    v8 = *(_DWORD *)a1;
    *(_DWORD *)(v8 + 20) = 26;
    result = (*(int (__cdecl **)(int))v8)(a1);
  }
  v2 = *(_DWORD *)(a1 + 84);
  if ( *(_DWORD *)(a1 + 76) > 0 )
  {
    v9 = 1;
    v3 = 0;
    while ( 1 )
    {
      v13 = *(_DWORD *)(v2 + 8) * *(_DWORD *)(v2 + 36) / *(_DWORD *)(a1 + 260);
      v5 = *(_DWORD *)(v2 + 12) * *(_DWORD *)(v2 + 40) / *(_DWORD *)(a1 + 264);
      result = *(_DWORD *)(a1 + 252);
      v11 = *(_DWORD *)(a1 + 256);
      *(_DWORD *)(v10 + 4 * v3 + 52) = v5;
      if ( result != v13 || v11 != v5 )
        break;
      if ( !*(_DWORD *)(a1 + 216) )
      {
        *(_DWORD *)(v10 + 4 * v3 + 12) = sub_6F860F28;
        goto LABEL_9;
      }
      *(_DWORD *)(v10 + 4 * v3 + 12) = sub_6F860D8C;
      *(_BYTE *)(v10 + 8) = 1;
      if ( *(_DWORD *)(a1 + 76) <= ++v3 )
        goto LABEL_15;
LABEL_10:
      v2 += 88;
    }
    if ( 2 * v13 != result )
      goto LABEL_30;
    if ( v11 == v5 )
    {
      *(_DWORD *)(v10 + 4 * v3 + 12) = sub_6F860954;
      v9 = 0;
      goto LABEL_9;
    }
    if ( 2 * v5 != v11 )
    {
LABEL_30:
      v4 = result % v13;
      v12 = result / v13;
      if ( v4 || (result = v11 / v5, v11 % v5) )
      {
        v6 = *(_DWORD *)a1;
        *(_DWORD *)(v6 + 20) = 39;
        result = (*(int (__cdecl **)(int))v6)(a1);
      }
      else
      {
        *(_DWORD *)(v10 + 4 * v3 + 12) = sub_6F860824;
        *(_BYTE *)(v10 + v3 + 92) = v12;
        *(_BYTE *)(v10 + v3 + 102) = result;
        v9 = 0;
      }
    }
    else
    {
      result = *(_DWORD *)(a1 + 216);
      if ( result )
      {
        result = v10;
        *(_DWORD *)(v10 + 4 * v3 + 12) = sub_6F860AAC;
        *(_BYTE *)(v10 + 8) = 1;
      }
      else
      {
        *(_DWORD *)(v10 + 4 * v3 + 12) = sub_6F8609F0;
      }
    }
LABEL_9:
    if ( *(_DWORD *)(a1 + 76) <= ++v3 )
      goto LABEL_15;
    goto LABEL_10;
  }
  v9 = 1;
LABEL_15:
  if ( *(_DWORD *)(a1 + 216) )
  {
    if ( !v9 )
    {
      v7 = *(_DWORD *)a1;
      *(_DWORD *)(v7 + 20) = 101;
      result = (*(int (__cdecl **)(int, _DWORD))(v7 + 4))(a1, 0);
    }
  }
  return result;
}
