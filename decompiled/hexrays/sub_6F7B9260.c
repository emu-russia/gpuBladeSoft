int __cdecl sub_6F7B9260(int a1, int a2)
{
  int result; // eax@1
  signed int v3; // esi@2
  signed int v4; // eax@5
  unsigned int v5; // edx@5
  int v6; // ecx@6
  int v7; // edx@6
  int v8; // ecx@6
  int v9; // [sp+18h] [bp-24h]@1
  int v10; // [sp+1Ch] [bp-20h]@5
  int v11; // [sp+20h] [bp-1Ch]@5
  int v12; // [sp+24h] [bp-18h]@2
  int v13; // [sp+28h] [bp-14h]@5
  int v14; // [sp+2Ch] [bp-10h]@5

  result = (*(int (__cdecl **)(int, signed int, int *, signed int))(a2 + 52))(a2, 6, &v9, 3);
  if ( result > 5 && (result = v12 >> 31, v3 = ((v12 >> 31) ^ v12) - (v12 >> 31), ((v12 >> 31) ^ v12) != v12 >> 31) )
  {
    *(_WORD *)(a1 + 68) = sub_6F7C9760(1000, v3);
    if ( v3 == 0x10000 )
    {
      v5 = v12;
      v4 = v14;
    }
    else
    {
      v9 = sub_6F7C9760(v9, v3);
      v10 = sub_6F7C9760(v10, v3);
      v11 = sub_6F7C9760(v11, v3);
      v13 = sub_6F7C9760(v13, v3);
      v4 = sub_6F7C9760(v14, v3);
      v5 = ((v12 >> 31) & 0xFFFE0000) + 0x10000;
    }
    v6 = v9;
    *(_DWORD *)(a1 + 448) = v5;
    result = v4 >> 16;
    v7 = SHIWORD(v13);
    *(_DWORD *)(a1 + 456) = result;
    *(_DWORD *)(a1 + 436) = v6;
    v8 = v10;
    *(_DWORD *)(a1 + 452) = v7;
    *(_DWORD *)(a1 + 444) = v8;
    *(_DWORD *)(a1 + 440) = v11;
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 3;
  }
  return result;
}
