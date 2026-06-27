int __cdecl sub_6F8667F8(int a1)
{
  int result; // eax@1
  int v2; // ecx@1
  int v3; // esi@3
  int v4; // edi@4
  int v5; // ecx@8
  int v6; // edx@11
  int (__cdecl *v7)(int, signed int, int, int); // ST28_4@14
  int v8; // ST14_4@14
  int v9; // eax@14
  int v10; // eax@16
  int v11; // eax@2
  int v12; // ST14_4@2
  int v13; // [sp+18h] [bp-30h]@8
  int v14; // [sp+1Ch] [bp-2Ch]@8
  signed int v15; // [sp+20h] [bp-28h]@8
  int v16; // [sp+24h] [bp-24h]@4
  signed int v17; // [sp+28h] [bp-20h]@8
  int v18; // [sp+28h] [bp-20h]@11
  signed int v19; // [sp+2Ch] [bp-1Ch]@8

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 160);
  v2 = result;
  *(_DWORD *)(a1 + 432) = result;
  *(_DWORD *)result = sub_6F8664CC;
  *(_DWORD *)(result + 4) = sub_6F8664EC;
  *(_BYTE *)(result + 8) = 0;
  if ( *(_BYTE *)(a1 + 266) )
  {
    v11 = *(_DWORD *)a1;
    *(_DWORD *)(v11 + 20) = 26;
    v12 = v2;
    result = (*(int (__cdecl **)(int))v11)(a1);
    v2 = v12;
  }
  v3 = *(_DWORD *)(a1 + 196);
  if ( *(_DWORD *)(a1 + 36) > 0 )
  {
    v4 = 0;
    v16 = v2;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v3 + 8);
      v13 = *(_DWORD *)(v3 + 36);
      v19 = *(_DWORD *)(a1 + 280);
      v5 = *(_DWORD *)(v3 + 12) * *(_DWORD *)(v3 + 40) / *(_DWORD *)(a1 + 284);
      v17 = *(_DWORD *)(a1 + 272);
      v15 = *(_DWORD *)(a1 + 276);
      result = v16;
      *(_DWORD *)(v16 + 4 * v4 + 100) = v5;
      if ( !*(_BYTE *)(v3 + 52) )
      {
        *(_DWORD *)(v16 + 4 * v4 + 52) = sub_6F8665F4;
        goto LABEL_6;
      }
      result = v14 * v13 / v19;
      if ( result == v17 && v5 == v15 )
      {
        *(_DWORD *)(v16 + 4 * v4 + 52) = sub_6F8665E4;
LABEL_6:
        if ( *(_DWORD *)(a1 + 36) <= ++v4 )
          return result;
        goto LABEL_7;
      }
      if ( 2 * result == v17 )
      {
        if ( v5 == v15 )
        {
          *(_DWORD *)(v16 + 4 * v4 + 52) = sub_6F866604;
          goto LABEL_14;
        }
        if ( 2 * v5 == v15 )
        {
          *(_DWORD *)(v16 + 4 * v4 + 52) = sub_6F866754;
          goto LABEL_14;
        }
      }
      v6 = v17 % result;
      v18 = v17 / result;
      if ( v6 || v15 % v5 )
      {
        v10 = *(_DWORD *)a1;
        *(_DWORD *)(v10 + 20) = 39;
        (*(void (__cdecl **)(int))v10)(a1);
      }
      else
      {
        *(_DWORD *)(v16 + 4 * v4 + 52) = sub_6F86666C;
        *(_BYTE *)(v16 + v4 + 140) = v18;
        *(_BYTE *)(v16 + v4 + 150) = v15 / v5;
      }
LABEL_14:
      v7 = *(int (__cdecl **)(int, signed int, int, int))(*(_DWORD *)(a1 + 4) + 8);
      v8 = *(_DWORD *)(a1 + 276);
      v9 = sub_6F868CD8(*(_DWORD *)(a1 + 92), *(_DWORD *)(a1 + 272));
      result = v7(a1, 1, v9, v8);
      *(_DWORD *)(v16 + 4 * v4++ + 12) = result;
      if ( *(_DWORD *)(a1 + 36) <= v4 )
        return result;
LABEL_7:
      v3 += 88;
    }
  }
  return result;
}
