signed int __cdecl sub_6F835FEB(int a1, int a2, int a3, signed int a4)
{
  int v4; // eax@1
  signed int result; // eax@4
  char v6; // [sp+2Ch] [bp-4Ch]@1
  int v7; // [sp+4Ch] [bp-2Ch]@1
  int v8; // [sp+50h] [bp-28h]@1
  int v9; // [sp+54h] [bp-24h]@1
  int v10; // [sp+58h] [bp-20h]@1
  int v11; // [sp+5Ch] [bp-1Ch]@1
  int v12; // [sp+60h] [bp-18h]@1
  int v13; // [sp+64h] [bp-14h]@1
  int v14; // [sp+68h] [bp-10h]@1
  int v15; // [sp+6Ch] [bp-Ch]@1

  v7 = *(_DWORD *)a3;
  v8 = *(_DWORD *)(a3 + 4);
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_DWORD *)(a3 + 12);
  v11 = *(_DWORD *)(a3 + 16);
  v12 = *(_DWORD *)(a3 + 20);
  v13 = *(_DWORD *)(a3 + 24);
  v14 = *(_DWORD *)(a3 + 28);
  v15 = *(_DWORD *)(a3 + 32);
  v4 = sub_6F835D56((int)&v6, (int)&v7);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      *(_WORD *)(a2 + 74) |= 0x8000u;
      sub_6F839044(a1, (int)"internal error checking chromaticities");
    }
    *(_WORD *)(a2 + 74) |= 0x8000u;
    sub_6F839519(a1, "invalid end points");
    result = 0;
  }
  else
  {
    result = sub_6F835DE1(a1, a2, (int)&v6, (int)&v7, a4);
  }
  return result;
}
